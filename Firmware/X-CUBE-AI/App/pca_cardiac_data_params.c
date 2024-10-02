/**
  ******************************************************************************
  * @file    pca_cardiac_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Wed Oct  2 14:38:18 2024
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "pca_cardiac_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_pca_cardiac_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_pca_cardiac_weights_array_u64[515] = {
  0x3df6dfb8be9dbfc2U, 0x3e921b163e5688aaU, 0xbdcb5feebde95fefU, 0xbee7f0ba3d903e9cU,
  0x3e1a02ddbde5f675U, 0x3e643285be9e8e0aU, 0x3dbdcb8d3e9add47U, 0xbebe0be63d43c358U,
  0x3c41e741bc0bbd83U, 0xbd46ba60beb638dcU, 0xbe5336fb3e64ade9U, 0x3e4f0191bdd749d5U,
  0x3e35632fb9e25b6cU, 0xbf30ffbf3eef905cU, 0x3db9c884bf194999U, 0xbe19b0d43e29060eU,
  0x3f180839bd5076e4U, 0x3eef43563e908c58U, 0xbe4c15e73e312efaU, 0x3c9520fabe401aa9U,
  0x3e457691bda3fc36U, 0x3e576fbdbd883b00U, 0xbc1de506bf088ba0U, 0x3ec2b06b3d89855eU,
  0xbeac1cf1be884ddaU, 0xbe9873fc3ecd4646U, 0x3d9ff6c9be25f89eU, 0x3e6bdf1bbe7e141fU,
  0xbead93193e71b140U, 0x3e9a021ebeb4d7d5U, 0x3e7b140a3e370bceU, 0xbec979a13ddea395U,
  0xbeb6009ebd626709U, 0xbe217e513d7751a9U, 0xbd9e8dd9be257694U, 0x3d043a0abc80f059U,
  0xbee37656be857e4dU, 0x3c95bd62bed23b5fU, 0xbe428ea9be602434U, 0x3e23d3553e22e3a8U,
  0xbe2629b1be19c542U, 0x3e0f7d96be845f68U, 0xbdb8e279be034af4U, 0xbf0f6309be60119dU,
  0xbef5e6e33daaa72fU, 0x3e79cf3cbdb71c0eU, 0xbe82cdcb3d2bf500U, 0x3da60bf83d3d4b7eU,
  0xbd18102c3d271d06U, 0xbcb6e91a3b94b7c7U, 0xbe59eff03df29a7eU, 0x3debfc9ebeeb1790U,
  0xbe731382be48136fU, 0xbd635e8fbdf80a7eU, 0x3ed27b7a3f80856fU, 0x3e4d02923ea38a02U,
  0xbe2240a0be22fddcU, 0x3c02a6473ed67161U, 0xbd7a39c6be9404d2U, 0xbe6890a33ee6b138U,
  0x3e8252653d432048U, 0xbe135b9ebd9a0cceU, 0x3df49d5bbf04b76dU, 0xbd890cd5be155a2cU,
  0xbdcccd07beb9a1ffU, 0x3caf0b1fbddfc8adU, 0x3ead1f1d3e296ef5U, 0xbd1ec8273dd3fdcdU,
  0xbeb5afd33e5f6ccaU, 0x3ef0dc793ce693e0U, 0xbe84d73b3ea24e6aU, 0x3e191e92bec75180U,
  0x3db517463ef39327U, 0x3cef5700be34c9d6U, 0xbec869333e6d41e5U, 0x3dba0817bea41d2bU,
  0x3e692f953d1c4a25U, 0x3e9675413e9fb3e0U, 0x3e5766f3bb06f92cU, 0xbe2137cb3e92c875U,
  0xbe3c0b8b3d224aa9U, 0x3ec0328cbe9606b9U, 0xbf07480dbd10ad41U, 0x3f2f7e87be1ed16cU,
  0x3e0b82e93c822625U, 0x3da70f903dfe3907U, 0x3dc0bb31be8a044bU, 0xbdd2453b3eb80b1dU,
  0x3f1198fe3ed17475U, 0x3ea4c1c9bda298b3U, 0xbe9eca1ebeb4bc29U, 0xbe236a03bdb2b38fU,
  0xbd1276633e6fba33U, 0x3e197258bdadae2fU, 0xbd3d5490be4e450bU, 0x3eabe772be0e27b2U,
  0xbc19ba1cbd19623bU, 0x3e29e3d6bee51e49U, 0x3e082593bee1abe7U, 0xbef4d0fbbd90899bU,
  0xbd1d7c6bbde943dbU, 0x3e2269443cd43cecU, 0xbc6c1bde3de26729U, 0x3cf742df3ef53352U,
  0x3e4147533a092dfeU, 0x3e93801fbdff22f6U, 0xbe5ac4e23e83c512U, 0x3e243517bebe0c2eU,
  0x3e0fd087be633b17U, 0xbf10a486bf2664d2U, 0xbdaaf471bd02fe28U, 0xbec3617e3e9bb619U,
  0x3e5f9a35be645817U, 0xbe793d753edfc1f7U, 0xbd1156b83e1b83d4U, 0x3e01658a3e2a5281U,
  0x3e0b14bd3e338324U, 0xbd42e30cbcd08665U, 0x3e888ee93eaba1f1U, 0x3e24844b3e995cecU,
  0x3dad748e3d2f5829U, 0xbe9942633e7a16f4U, 0xbf184c033e905fa0U, 0x3f0e731b3dad7a16U,
  0x3ea63620baae3b11U, 0x3e6346babb87a87eU, 0x3ea93e35bd09de93U, 0x3ebd2c1b3d91b656U,
  0x3ec042ea3f1f84e6U, 0x3ed19919beba4ab7U, 0xbdeea5fa3e2a1600U, 0xbe09d3eabf10c692U,
  0x3ec5ab533e1706edU, 0x3dc55236bdcdcdc7U, 0x3f2e1b883eb12e78U, 0x3ed8475fbe4f3c87U,
  0xbc902a39bdc78451U, 0x3e0028b6bee9473cU, 0xbd4443ee3e491c4cU, 0x3ed145143d3e55a2U,
  0xbde0a94d3cfeb845U, 0xbf068fbebea15a8bU, 0xbc2dd92c3ec74752U, 0xbea04093be35d05dU,
  0x3e8e68623e90e5e5U, 0xbe3c872cbe85f045U, 0x392035e63ea2d51dU, 0xbe9a07cabe73b1c5U,
  0xbc83d578bc85fdcdU, 0xbdbc739a3e8f34b7U, 0xbe3fb2eb3d353e7cU, 0xbf1760e5bd3a2c0aU,
  0x3cb9a4a63e360572U, 0x3ec8a8f7bcdcb6dfU, 0x3d89b298be0c7285U, 0xbe4d56eebe6f2e55U,
  0x3ea669dfbe9cef74U, 0x3e6c2a64bc952576U, 0xbed4ed54bf091b1bU, 0xbf156e043def3890U,
  0xbc397ec83e2f7e74U, 0xbe33bcecbd369a47U, 0x3ed98b453cc92e25U, 0x3f0ac495be89fb51U,
  0xbecb1d8b3ee00ca9U, 0x3e35941a3e2fe4ecU, 0x3efce12ebe5234aaU, 0xbec288edbd50e8d9U,
  0x3e9ca624be4c9126U, 0x3f1bcfe3be8bf945U, 0xbde56785bcc3391aU, 0x3c849bebbed99096U,
  0x3e9cfb4e3ec8058eU, 0xbf012395bec5201eU, 0xbe45fc153def26fbU, 0xbeb9338cbe1827d9U,
  0xbe3d2d873e104ec3U, 0xbdb5161f3dd23c9dU, 0xbe3f29413e9ffbd2U, 0x3e62a240beeb02b9U,
  0x3e0b65103dfd981cU, 0xbe75d7e23d980638U, 0xbe0c52fd3e08c6acU, 0x3cc70d9e3eb1d6deU,
  0xbec8aeaa3e04e524U, 0x3e670e0b3ea8fe1cU, 0xbe6760f3bd3e27acU, 0x3eac86413e957f73U,
  0x3e1d6db83e7d0e97U, 0xbf08d1513cbef384U, 0x3d09ace03c4a53f4U, 0xbb4695d63ee3f4acU,
  0x3d42e5ac3e2e9108U, 0xbf2275febe05211fU, 0x3e1593c53ed4db11U, 0x3e994544bbdc884bU,
  0x3e6353f43ee84560U, 0xbe09c5e2beece02bU, 0x3d512a43bc8a3768U, 0xbe9bb2403e094580U,
  0x3e97f6b03dfca32aU, 0xbedfe70ebe9a8913U, 0x3d3daff4bdfc2e0eU, 0xbe97ed2bbe1dad3bU,
  0xbe921d163ea0cc62U, 0x3e5c6309bde90c95U, 0xbe52f74c3eca5513U, 0xbe54fb743d966c2eU,
  0x3ee795d03f313c98U, 0xbe8196d03f075337U, 0x3d86bb34bdcfd9edU, 0x3bf97972bd3be50fU,
  0x3d943f78be553311U, 0x3e1b8564bea44f83U, 0xbf6e830cbee5cdfcU, 0xbe68a096be5aef52U,
  0xbe7e96cbbe78c688U, 0xbd33e6a83c0a81a2U, 0xbed30403be94c3a7U, 0xbddcbc29be62295bU,
  0xbe554e593d97d8b8U, 0x3e044b4dbeb4847cU, 0xbdb65889be7dd118U, 0xbe20352fbdc8df8eU,
  0x3e9d75c33ee880beU, 0x3d1a3809bd108c76U, 0xbeb7b1dbbc7401e9U, 0xbed8be3a3e9ab18dU,
  0x3d77a070be64d105U, 0x3e1e5de53ea68687U, 0x3e3084e43e8e8b14U, 0xbda4deda3e8f5c13U,
  0xbeff864ebe2701e6U, 0x3ebf784d3da0c566U, 0xbe34b9ddbdf88f91U, 0xbce907b2bdc29090U,
  0x3e675d23be8f0bddU, 0x3e1ba94b3d9b420fU, 0x3e76c2223ea9b919U, 0xbeaa06b13dd2c021U,
  0x3ea2e05b3c112550U, 0x3e5908633dc4c9caU, 0x3e99f4dcbe51416eU, 0x3dbdc5763e92904fU,
  0x3e9694f23d464d96U, 0x3e0e14f6bdec9f7cU, 0xbf181663beb3c728U, 0x3e547947be17f00bU,
  0xbeb0e0eb3ce1ccc2U, 0xbde8a9f83eb30e17U, 0x3e816e89be94d7a0U, 0x3d9b7939bdb06d89U,
  0x3db955943e955b3eU, 0x3f17ff34bece5c13U, 0xbf4afaeb3e8ca0e0U, 0xbe8d18df3ed11197U,
  0x3eaba246beb96688U, 0x3e087180bf1a7856U, 0xbf596b3f3ebdeab5U, 0xbbdf7917bee3e19bU,
  0xbea865e63e7d3a2cU, 0xbe00371c3c5e9ff8U, 0x3da7d90cbf06cc0fU, 0xbe4830f7bcbb3c0bU,
  0x3f16603bbcf1a20dU, 0xbe601f0d3dd58375U, 0x3cca40d33e98f8e7U, 0xbe09bb3e3e2ac714U,
  0xbd9126c83f1766baU, 0xbc99ceb33da1a5a6U, 0xbc4a2de63e115de9U, 0xbe895e943ef858e7U,
  0x3de846893dbfa80cU, 0x3f36766d3d736999U, 0xbefd72cb3d08d9f1U, 0xbe88ee8f3db1b000U,
  0xbe0bc2a9bee02b89U, 0xbd44dd0fbe6a4fc1U, 0xbf5be8f0bee59357U, 0x3ee1d8693effb070U,
  0x3d50fe9fbe69051aU, 0x3ddbf269bd77a1b5U, 0xbe859a77be11be1cU, 0xbdcce32ebe9fbc21U,
  0xbdfae18cbe76bba9U, 0x3da2a7ff3d5907afU, 0xbe591a61bed2b485U, 0xbe92f150be95d77cU,
  0xbcde0b073e12db8eU, 0x3ec52362bea1999cU, 0x3d743508be7ccef3U, 0x3ebab8c63ede250fU,
  0xbe854074be82afe7U, 0xbec45de53efd37a3U, 0x3ea8c77bbce7143cU, 0xbe74de2f3ea4a423U,
  0x3cc87659be9f2bcaU, 0x3ebf65783f0545ffU, 0xbe0500b33e988a6cU, 0x3da022443e0adbc4U,
  0xbdd0589f3e6c420aU, 0x3e50f6b9bf0109b5U, 0x3dfd310a3cd5c93cU, 0xbe534296bd28ba83U,
  0x3e38a9f83e19c84cU, 0x3e67e0593e4dab87U, 0xbf10f040be5b199cU, 0x3d8449da3e12dbcbU,
  0xbd0b6d54bd753a03U, 0x3d33796a3eb825a6U, 0x3e1d56663d29fe31U, 0xbe217ca73eae0095U,
  0xbe8bdacbbed22037U, 0x3e0f905cbdd1b317U, 0x3e7323073d99ea08U, 0x3dbd9152be0274a2U,
  0x3e440b91bcd1bf63U, 0xbe0943f0bc35e43fU, 0x3edbf2ea3ed81248U, 0xbdbf117ebef82791U,
  0xbe9312dfbe6b664fU, 0xbe2366203d6c8ce5U, 0xbc9b27173e40225dU, 0x3dadb7613e912319U,
  0x3e46c794be11790cU, 0x3e730d5f3e83ff4dU, 0x3dc92b0b3dcd1064U, 0xbd9b8a283e9baf71U,
  0x3eba85773e52d259U, 0x3e2b9b453e5a2c5fU, 0x3c5db8463e7fba52U, 0xbe605d383e107c94U,
  0xbea434153ed8cdbcU, 0x3c183b4c3e73b36cU, 0xbb8735d33ea316a9U, 0xbe2f04993f048b5dU,
  0xbe808e493e2d1cf4U, 0x3e805be03e531daeU, 0x3ea668573ed91e4fU, 0xbe4a6119bd839f0cU,
  0x3ed5e0533e1ce460U, 0xbc3f35733e4f68b7U, 0x3e88019bbd68a35bU, 0xbd256dd03ec8f1efU,
  0x3ea2e568bdca4c28U, 0xbd201820bcb9ced5U, 0x3ea61937be272a06U, 0xbd2376f53e98b745U,
  0xbd49efecbdb22663U, 0x3d4fbdb6bec29693U, 0x3e5c2b4ebd98cc83U, 0xbeb32b59be8e12d2U,
  0xbe702c62be8d3fd7U, 0xbebb165cbe9b1829U, 0x3b55026ebebe9858U, 0xbf30e00d3dc4c874U,
  0xbe9db1bd3e898ce9U, 0x3d2f45263e1a49deU, 0xbd9db94ebdfd70bdU, 0xbd1f592b3cf1ff6cU,
  0x3f1383013d629807U, 0xbdcf6b763e74c62eU, 0xbd29f2a8bc9ffe6eU, 0xbd9c218cbecc7dc7U,
  0xbe0a5f023e908c39U, 0xbe4c60d63db8085eU, 0x3ce8ad44be70060eU, 0xbe1c08923e6aeef0U,
  0xbdf4b5943eaff025U, 0xbe6837acbebd1c4aU, 0x3dd7ab1e3ec49a30U, 0xbeb1e214be9e6d88U,
  0x3efd737abc7334f1U, 0x3d7d78fc3ed66cc2U, 0xbc97f2723ddcb824U, 0x3ea426ad3e473d8aU,
  0xbe4b2aedbe6b6816U, 0xbf0d377cbe152292U, 0x3e6d43d8be908932U, 0xbdfa65523ef01af6U,
  0xbe9ba2953ced5bfaU, 0xbd969173be8ca117U, 0xbe0e2a24be9778baU, 0x3e3b7ca3bf0d5fdcU,
  0x3d5a1b47bdbea500U, 0x3e83d1473e99b083U, 0x3ea7dec83eeb83edU, 0x3c7100933ec91767U,
  0x3d8f11133c7ab70dU, 0xbe5486dabf57f777U, 0xbeafcbfe3ec02930U, 0x3ea0bab0be97dffcU,
  0xbec89f17bf1735bcU, 0x3ed04f00be888c0cU, 0x3da8cc6bbecb2071U, 0xbdf1d90e3ddaca6eU,
  0xbed3eeaf3e8d9b24U, 0x3dbbb926bf13474dU, 0xbefb7423bf3b9696U, 0x3e5e6b1ebf173fcfU,
  0xbe20b8e5befdd266U, 0x3c91a660bdc6648dU, 0xbe6158793dacbb67U, 0x3ea7f2c3bdbd6734U,
  0xbe2491193de38972U, 0xbec5b23e3e844c3eU, 0xbd796022be959e51U, 0x3d03adbe3d0f58e1U,
  0xbc871192bde95857U, 0x3ee4688e3ea0bd51U, 0x3ec089513dbd3a3cU, 0xbe89e10bbed896b3U,
  0xbeabe13ebe3b73aaU, 0x3d555571bf17c090U, 0xbe9d4210be0f5d4eU, 0xbf327f843e2d50c2U,
  0xbef08201be655a5dU, 0x3e64ca43be8d1540U, 0xbe836587bed8f5eaU, 0x3e9d58f03ecc2d42U,
  0x3e93479fbed40ab0U, 0x3db894dcbf0cd342U, 0x3ec62e093d544158U, 0xbe76951fbf27737cU,
  0xbc13a6943e7d626bU, 0xbcd1bb223dba5578U, 0xbf0450483eaa5cdfU, 0xbe98d96a3f0f9021U,
  0x3d8a137f3e651777U, 0x3e0f63f7be900b1dU, 0x3e96cdbd3f1d6602U, 0xbeeb1bf03ee00586U,
  0x3ea6747cbc593717U, 0x3ccf4377be9241e1U, 0xbe1e43fe3cae14adU, 0xbe03a1933e50960fU,
  0x3c9d85433d4388edU, 0xbe34039ebedfa4bbU, 0x3ec5ce4ebe05f549U, 0xbeaef921bd142c63U,
  0x3eb80cfbbe269eb0U, 0xbf1a336cbedfd5caU, 0xbe0ac7483e36d03aU, 0xbf029d05be16e199U,
  0x3ee74ddbbf1e53b4U, 0xbf2da77cbd3ba773U, 0x3ea1a1efbef5958eU, 0xb8b569a2be4755e0U,
  0x3e48fcd33de11427U, 0x3e87e4bebe39f9ceU, 0xbe474497bef2703cU, 0x3e4add9a3e09a666U,
  0xbed4c5d53e7b083cU, 0x3ebd05e3bd95fd86U, 0x3e5ef9f8beb0ffdfU, 0x3e1bfd4f3dd2a0f3U,
  0xbd97087cbe2719ebU, 0x3cd34176bd1de6aeU, 0xbeafe322bea40798U, 0xbeb2a9cfbeafe8bbU,
  0xbecfacaebef48a43U, 0xbe10d0923e31b43eU, 0x3ddf2ecd3e9e6a9fU, 0x3db4edf4bda02485U,
  0x3c8a50243eb82134U, 0xbdc595643ed188afU, 0x3d1beee53dceeffdU, 0x3da134b2bf036d4dU,
  0xbf1039643eac31c4U, 0x3ed323a4bf0179cdU, 0xbdef2f42bc79ff8fU, 0xbec18a96bea38570U,
  0x3e2cae5bbee1b6f4U, 0xbee2ab05be9b5136U, 0xbf15f5ddbf0eedaeU, 0x3eb569a8befe7f73U,
  0xbe8a01633e2406deU, 0x3eab13673dc9c107U, 0x3e7585503dad4895U, 0xbd19c20dbd6581f2U,
  0x3e90b13e3e4d1843U, 0x3e905de7bda696c1U, 0x3e610a273da39ec9U, 0x3dab7b14be7fe883U,
  0xbe62da54be23ec26U, 0xbe6d43ee3f0a56cdU, 0x3c4717dcbdd675fdU, 0x3d823672bd1424f5U,
  0x3c5d52063ec4ac5cU, 0x3d9b34acbed34ce5U, 0xbe1ffc3ebde2dd84U, 0x3ea10873bddd7d6dU,
  0x3ed8d296be9339baU, 0x3e9f4c7d3ef5c14cU, 0x3e3da235be1957b0U, 0xbe140da8be904016U,
  0x3eb141c13dea2eb2U, 0xbeb7be7abe88a436U, 0xbe79f7cabee5ada9U, 0x3ee917fa3e8b5c62U,
  0x3e936c6dbead98d8U, 0xbeb7c27dbe4a23d8U, 0xbe81d6a83e4774ceU, 0xbdd71ac4bea892e1U,
  0xbe8d91e83e287b4bU, 0x3d6197ebbdb69fe3U, 0xbebc702f3eed72b0U, 0x3f3d9402be20bbd3U,
  0xbdb94367be6c8067U, 0xbbc277f73eeaa1e8U, 0xbee7eeca3e8a2deaU, 0x3f04c8f63ed3de6dU,
  0x3c9403403e8641faU, 0xbe199c803e45d2cdU, 0xbeb76e1eU,
};


ai_handle g_pca_cardiac_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_pca_cardiac_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

