# cardIAc - Développement des réseaux de neurones

Dans ce répertoire, vous pourrez retrouver les programmes d'entraînement et les sauvegardes des réseaux de neurones qui seront implémentés dans la carte STM32.

L'objectif du projet étant d'implémenter un modèle d'intelligence artificielle (IA) détectant des anomalies cardiaques dans une carte STM32 basse consommation, nous avions besoin d'un jeu de données (dataset). Les anomalies cardiaques étant difficilement descriptibles par un algorithme classique, une approche par IA est pertinente, car nous cherchons à détecter des motifs (patterns).

Notre dataset, basé sur l'article ***"[A lightweight convolutional neural network hardware implementation for wearable heart rate anomaly detection](./dataset_publications/ECGClassification1.pdf)"*** de Minghong Gu, Yuejun Zhang, Yongzhong Wen, Guangpeng Ai, Huihong Zhang, Pengjun Wang et Guoqing Wang, est donc composé de **5000** signaux à **1 dimension** labellisés. Ces derniers sont des électrocardiogrammes classés selon les **5** pathologies suivantes :

<div align="center">

**"A"** : contraction prématurée de l'oreillette  
*971 échantillons dans le dataset*

**"L"** : fluctuation du bloc de branche gauche  
*995 échantillons dans le dataset*

**"N"** : normal (sans pathologie)  
*1038 échantillons dans le dataset*

**"R"** : fluctuation du bloc de branche droit  
*1029 échantillons dans le dataset*

**"V"** : contraction ventriculaire prématurée  
*967 échantillons dans le dataset*

</div>

Nous avons donc un dataset presque équilibré, ce qui favorise un bon apprentissage de notre modèle en évitant au maximum les biais d'entraînement.

Pour disposer d'un ensemble de données d'entraînement et un autre de validation, nous avons séparé notre dataset. En effet, afin de visualiser l'overfitting (ou le surapprentissage), nous conservons **4000** échantillons pour l'apprentissage et **1000** échantillons pour valider l'apprentissage.

Dans nos recherches, nous avons développé deux modèles distincts de réseaux neuronaux profonds (Deep Neural Networks ou DNN) : un modèle *MLP* (Multi-Layer Perceptron) et un modèle *CNN* (Convolutional Neural Network).

## Modèle MLP :

Le modèle MLP est le type le plus générique de DNN que l'on peut trouver.

Le nôtre est très simple en raison de la faible taille des échantillons en entrée du modèle (un tableau 1D de 183 données temporelles). Il possède deux couches cachées de 64 neurones utilisant *ReLU* comme fonction d'activation.

Cela nous donne un modèle affichant une précision de **96,40 %** sur le set de validation. Nous obtenons donc un modèle possédant **16133** paramètres entraînables. Cette donnée est fondamentale pour l'implémentation sur STM32, car cette dernière possède des ressources mémoire et une vitesse d'exécution limitées par rapport à une application "sur desktop".

## Modèle CNN :

Le modèle CNN ajoute des couches convolutives par rapport à un modèle MLP, permettant d'extraire des motifs dans un signal. Il est donc particulièrement adapté à notre cas d'application.

Notre modèle est identique à celui décrit dans l'article de recherche d'où provient notre dataset ([cliquez ici](./dataset_publications/ECGClassification1.pdf)), à l'exception d'une couche dense cachée de 32 neurones ajoutée après les couches de convolutions.

Cela nous permet d'obtenir un modèle atteignant une précision de **94,80 %** sur le set de validation, ce qui est inférieur au modèle MLP. Cependant, ce dernier est bien plus léger : de **16133 paramètres**, nous passons à **2033 paramètres**. Bien que dans notre cas, notre modèle soit très léger et notre carte surdimensionnée, cette légèreté est très pertinente ainsi que pour la portabilité sur des microcontrôleurs moins puissants (et donc moins chers). C'est donc ce modèle que nous porterons sur la carte STM32 dans une logique d'optimisation.

## Ressources

Toutes les données et sources du projet se retrouve dans le 
dossier "[/notebooks/data](./notebooks/data/)". Nous pouvons y joindre le cours de Machine Learning de M. Pierre Alain Moellic.

Les exports des modèles sont quant à eux trouvables dans le dossier "[/notebooks/models](./notebooks/models/)". 
