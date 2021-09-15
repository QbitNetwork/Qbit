// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2014-2018, The Monero Project
// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2019, 2ACoin Developers
// 
// Please see the included LICENSE file for more information.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {  
{       0, "be58c8366a1f8a4b352f69064b588494c7f4dbd07e19821d7861945b2f85a2dd"},
{    5000, "f4925e32a226889b515e82f904ab1d0f1d2bfe762b25f9d0ad827bdc08a2b422"},
{   10000, "fd56d9647b3012dd30a0d12705b68f3c52af195f0a5cd66f8e8aa5112b41e05c"},
{   15000, "09c6ff3a2130cd175a9cc2cd00485d484ec0ed647d2c79575f01e6b42335df4b"},
{   20000, "7fa0e1e9f2efe37b7f847ef77c8799381d3c73ae4703dc12b0590f071e4b7cc3"},
{   25000, "1658532624c18f326092c8014ad69c1d565045bd51d7f7d0ff0abc11bf036049"},
{   30000, "3ec3ce36f0134655c80b1c9e9977d03c85cf5675ea09f08e54a2245f2d6c4406"},
{   35000, "81610d559594a2a8d9b87b0ef051a06a6e40a0cd2d88fc312e1cd1733de0b3d2"},
{   40000, "b82f45521363c28c8dc5d1a0f89b757fde2abb67b02b98c24c65f4b14b839264"},
{   45000, "dfe435831de24aca7fd1b44fabbe424f04f1b6412b39204ef71245c700a938a0"},
{   50000, "0f0d57dd7cde882bd7beee55aeef3eb86d79005f474636fbacf8529cfc7c4dfb"},
{   55000, "7a04ff3aa5b75acb9357fc2622156ab8520859b96520e43769be75968c6b0e50"},
{   60000, "0cfd1499436a6b949cf7a1e5c2d2c653db932bb0348af63e35bead4f22f3de6e"},
{   65000, "a0e5f7160d7a5741da62669deea099c240993021afeb427fdd39fe0ee6528837"},
{   70000, "d8476e2e5ab742e1b0d9a6a30d9fcc28220a055489dcab9fd3b8e57f74e40988"},
{   75000, "f9e116fd0948a874406eb77f39e58957ae39d71a5dccf0962f6444264dcc9d33"},
{   80000, "3ca4969286e1aa8be7b9c6ad7c2e518e011bdc17a6ebacd78d1e8bb39bbf7579"},
{   85000, "8cec855eda8f09ca4cd17c51d1229353d64e37ed8dff13649ceb1946f29a9710"},
{   90000, "79b75442f1aa3341fb26ef341a60b359a09d878980185a666141796290c0f07f"},
{   95000, "5cc0d391a5c713cba3e0c59b866e1f21c9103842007d783fafae3b362fae283b"},
{  100000, "189d9f1aed0ace708198cc0c55c2798ca3ca735d75cbd521e34fe51fec83dc87"},
{  105000, "8ee7a6e15e809dfdf4198663129a1b0045ac9533f2f06990c841ac2552245160"},
{  110000, "8f5d4f18725b59baaf8cc5ffe2254d799e071a8397f0d58465e5c87cbfa222e4"},
{  115000, "632150629884932bf8e605cc4af7b6c946e8c19881b91462b09b6a90280e0a0b"},
{  120000, "4cc75976755e39c4d07f7ae589d6519f78aaa03d3a51cefb1913109e4fdf191b"},
{  125000, "20dee6838667205fd83325f5a4d4414b976271d0f26604cf813bb29c3efe3d72"},
{  130000, "a2c5daef1fc1e9af51d17242bb313f69fab9168df9da26664052251ad07191e8"},
{  135000, "564c4e96d57a68b5c37d55e650cdb98281cca9d93830d3330154e01708bdf19b"},
{  140000, "1706ae092dc4aa9f239d56b2da3d7b2d7b43678bfe39bc397d048da7a43c5d4a"},
{  145000, "f389bc8313959d961ae34d52472fb3935e02aba8ae89742b881ea68c363c0540"},
{  150000, "ac0621d0cd46a8781d6b73f8e5301a68cb85ad65a5b6fa007ae26d5a5e737c95"},
{  155000, "140f2b4a72539a1dd7930ad7dec9bdbf0508997012c5767a2b3cbcccef643043"},
{  160000, "64dd44e638ecb5c551217250eafaffa09954a9dd3fc7d2909ed6982f02d16e5f"},
{  165000, "81ed7d67abcc86e302a9c7d7f289660162330d1925f39459e719567683e70fe1"},
{  170000, "07568e1b2747ddd1a403c3f936adf121644e468b85498c8ac34902408f307f51"},
{  175000, "f4747fec610013bbe67e4e3bb06bedad1b8ee1e86189a63330309d12c523a106"},
{  180000, "66592151497a8d103b9e32ebf1f4f390496e7525a20c44331994df4dc8a3d56b"},
{  185000, "027d96d4bebedfd413f07645eecf9b163c3fac71262496e829c05cb5d52439d0"},
{  190000, "13fdded80f99b3f1f70bfe120348fa923cd1b81baf2fab595f5ad82af58ea3b6"},
{  195000, "8954e615af112889d622ec3516670f6f862482d0d9e757040df4bbe771063ce0"},
{  200000, "b7ae0128ad23ec3d7880b6d41b7ab51a00cefa4cb84e68a94941dbd2e1b19d61"},
{  205000, "187df654c6bdf824e1002a19d2d858454ab4abc7d444677e186b9ecf883fc269"},
{  210000, "2978d7f79fbf9318082810f789f8c46f966e2647253c6d7206d73a11273fca16"},
{  215000, "221e2e160e842ae01056bf82104fc1685b47044d1a21348170793d6abf5e6902"},
{  220000, "05a8fe603dab53278d787ebc7cadef30ded5b17e3a9b13dda78d6ee7212d2543"},
{  225000, "130b88386742f74e6b042b35910afced9c9cb2970ba0dbe5033eddbb1f64f590"},
{  230000, "cb04f89c948a68a66641dab0be375b4285a17101f2b6d7ba12a1164d9df6a405"},
{  235000, "541f937266d63be88cb0ec66e2ec76e9d4d03443faef92060b9577bd9bcef027"},
{  240000, "6b37cbdac5bd82501659897b32dce6e8b3397a5d604fe1a0fbe38212cc8aed01"},
{  245000, "787ae550759e23b1c56ed3106d48a75f19cf1f2aa11ea6b87bc2d10f3a7676ab"},
{  250000, "e964115f0ed32724de9051450e68fab1f1c163a3ca21edef838498b5820f7520"},
{  255000, "80f80d2a87f37143a6531bbfdc353dc14b76f312a7dd3fa360eb8f6008a1faf8"},
{  260000, "e63863aad8753a32316fb7a6f39b0799107fb5264b1861c0727f27f3e289b99b"},
{  265000, "4bf812d948bea27c93e7a1112b181a39c04d04d69dc9a018a26b8ccfb22a4501"},
{  270000, "f837e1b7bb05e879324bd6a07184d2e493cc1ec609bca124dc7ef327f90bd6d9"},
{  275000, "0ee1d65f7463cee6f092a13102eabfb74dfc0b1e2d7f3091c53160f508fc6c47"},
{  280000, "cf55fd7c576c3c29629429cfb5dd7d497d4cb36139af07906b18f4bc088d7d02"},
{  285000, "ac1085f73d90707cf6fa86998f0ed3a9c23c18072424b2ad64fbb458f42311eb"},
{  290000, "bfb5f2ed85dce62df6fce16b0960226aaf46fc00d3a1acce4a56df090f45c3db"},
{  295000, "0805673b41b7e91696845d9d37c8c03ee38027c33b23297b7fcf65d17f8ea00d"},
{  300000, "8cda92305418b0d7e44c8d6f788f63bb379c6088d20970a92e8cb59119b5d176"},
{  305000, "eafa6f8f6f4afd3e90ec4b50df61ff5e8dd3c67fbb46d1f3ce499b0711cc584b"},
{  310000, "38df0c44b1932d6ce2f07740e65511819f953f26f6502a8cc385150f560a26e4"},
{  315000, "d5ef49396180f21681dbe6264009c5b028e04ca388addb632e0bdf2f54e847d1"},
{  320000, "1250b579af0da211ab2af0d8a3b5d78ca9d295e068ce55e5c6b1a7901e2f3e96"},
{  325000, "e216c93a3682efd06f2706ac59938b20ce06f65fb7a59e2dff11ad0c1cb6c073"},
{  330000, "61723117f9086f650ee9fae147ac4c89564f5688319264c6615ee3e83d54d664"},
{  335000, "3b34cc285a72baa1cbccbec5214d556aed4c9083a008d3897e89fe2660e72451"},
{  340000, "fd50d81b7ea3c399cfe13eae9a5e965953b586319df5048d46de1a77396da9e9"},
{  345000, "febd67beadf81969dd78ef0aea0b478a65779b7a55f57ebeeaaec2550d66df31"},
{  350000, "27a422fce365f5e0cdd659c65f5e74295ace64d54cb88c6219e9e4bea2ee4c1e"},
{  355000, "bab7482155c88188a75cee2b9e9cdffb94e030c163a895df63b334d1f0de9721"},
{  360000, "78012fe3b75122dc80358c8fb63402e8420980b19fe4fd937b9ebbc0bf48ba82"},
{  365000, "677f335e453929d3ee97e07436de72dc50b54565492b7cdc07d41ca3a92c239f"},
{  370000, "83fdfe02e6b91b3cbb17bcd58a80cbe34a4fed7fd606d7c4acfa96d08b65fc9a"},
{  375000, "66a1952af412993cdc4ed0686bdbd860d12ab6e21a66b70d5f60cf74f404e19f"},
{  380000, "8530320aafcee16b6a34b3971b435605a7a67e169144de31f3edc445a18489ec"},
{  385000, "2862edd27883ca27eed5980814104835538f86e42cb0c11f0733730ade15e571"},
{  390000, "5d2b3b86d536198fbfc9950a40caad8378ab66a0975cbba1ea0fe145cd785fa3"},
{  395000, "e72233a44787535bb8877ad17edb5c347423b2fa74eab80e3bece4d65336ee77"},
{  400000, "676af92991f8dd6875983e7520764b78a74d1993770ef22d14e0c5af7a0129c7"},
{  405000, "7a4eee26de414c5178e2db52e5996bc1f5a9b6caefa7c12814191567aa6132ac"},
{  410000, "36e11e122faf34f892b3f5a3fed6080f1f7c02c987b8d10eb2ddd8afccd178d4"},
{  415000, "5fdcbdc69c446bb1c370d5d80b9a7ce3cf69d23677bba427f817f2da3b3db8b2"},
{  420000, "285db3ad77e83399f82f1796d6d101666396e1896dc2e098c3d4d80fde416ed4"},
{  425000, "49d0f80717740179cf89424978e3bf304251bf6609abcfc8d8ad0591ded21d53"},
{  430000, "5167f6515c675dc481836723f8b0a7de577a99fc2c4ab9bff061ee6ca3fab82b"},
{  435000, "c35833367a89e38c8abd6a7352ab51555a95edf5545669406c4e891d96c4fdf3"},
{  440000, "aab9c9eed12ba3aed2e47bd23636b40ad5f2410b8190a71efa664834685fbeea"},
{  445000, "d5ebd480674d7b3727a87a1a14a0167a2cdd3bcd5219bd79d8ddc61080fcc504"},
{  450000, "f0fa60e40876897fa2e98456f206c6a25af77ed06c7dbf7786dd611dc176bf13"},
{  455000, "b84f346a07052bc39a71f6aa7480f19a54d94ebc7099b943ac359924079817e1"},
{  460000, "4dbeeb5fe64ecc0b70e0cb4f3f36a47dda16ec6e58374d67452323b490976610"},
{  465000, "4823fe171171eb424c0914327d1e8426a884ca7515c028f5c292585c572868de"},
{  470000, "14f6f48d971876bda2e56b24eeeafafc7aef322d104085496cb945d3bd8f8c9f"},
{  475000, "17ec4a9083817c324aba6fe970f9b0cc6769530e3c3d6f2e3d8a0aebfe52e1f3"},
{  480000, "7ccb4bbe2e0ea57990405b98661f9bcb389c1279ed2752bb353b53cd592454a3"},
{  485000, "c79e3745fc4242dd6252166b018cc596e6c09361e1fe3f3e80322a997fdf8925"},
{  490000, "525900f246b6a3afefd2328b4d48adfeadc2c7bd4a54016781c44dd8d14d8ced"},
{  495000, "c5cdfe5ea0d03eccd8af0fa1f866c32f86edb9a5ae5500d60e30b12091ad6185"},
{  500000, "0540334651659647086432c702ef6741351b580ae50d726cad1961602adb6f1b"},
{  505000, "1ff0dc5de13ba66327c0068204e4480c2b9b4b02ed9b7f03bf0493d4fcf9730c"},
{  510000, "63f267db9de45eeb9c861be6f410eaef2010766ac4bbe305a0b5b040bb614326"},
{  515000, "97c80074010b8bab8b6b6ab699fc1bce7be6724a27943c15eaa47a928d42311d"},
{  520000, "27a64fbde1bc52d30a41bc8f1e22440ec31c92ba14189bf4e0e603618755a385"},
{  525000, "4b3065061159d6f0ce18b5244f84867a2694809af43666169a559902b2f50ad5"},
{  530000, "cba0fd06a7c84ca06e900291f88768d132515c722ed13c00ad71355589e7e974"},
{  535000, "4bbc532a56ae80e527cffcc723a24622b9ada07703d8104d08c4e90d37e1973f"},
{  540000, "137340464da60fdf5aac17b1fced67200a644639e6a0026a4e0c2b9e80e28690"},
{  545000, "48e238521ecdb7337dca14c730896ade04fabd0c04fdeb8f05b2cdedcb24c8c8"},
{  550000, "6b6c0422b63ba23a926fb70a2d7140918edf25866e0eba32d2c6e636ca9b4a10"},
{  555000, "45b9998a24a91c805dc296fa2ac7a39eac3322a32f4ebef4adb7fc731ebb6dff"},
{  560000, "2d3987e7b492e8b674ca4f5bc2af78b4d24f3d59517a5bbd4cc8609c19775b0e"},
{  565000, "5d9ffb5736ee3e5d31ce84b6cf62357ebbafc0e4e9faa6bdbc107c03e97726f9"},
{  570000, "91cc5b3f9910a88310ccfbd37c95fef98b4d6e26966fa837c0e56891a846831d"},
{  575000, "0e0f9d58b0494080ef1cd38e551e5e338662773a7e2f8606efded82040e21378"},
{  580000, "1fc99aa06b5789d9eef38c5497089a3dcd63490ab3c0eea11b63d3a135f11006"},
{  585000, "0fff4900e5c829dfe7e846d6369609154300c5a2cdb23982fc71fddd4b511ac8"},
{  590000, "44ec39e9f1daffa498fde0c866894dfa13eb94b94a1dbbe1288346f1b2460901"},
{  595000, "16a93d4e0e5eaf1bce72bbf8aaa66917d117a87c6064fc3f44bd63cd9180c495"},
{  600000, "b2003c90f449a19b6d0f75d09d632edd856aed3acc5996bbf056ad2d27afd1a8"},
{  605000, "eee42c5c97a3473ce0b78b5df6efa8375e19ce40653ac87bc5f41bf98d371d50"},
{  610000, "dd1e89c752fd836015da1c8f34ad342e8e213a5945d1ba18cd1eff9f6dae5c7d"},
{  615000, "3a040c672b23613c581ee4d1b9039b38c8877fd48a9419190e0533e5cb52b62f"},
{  620000, "b83299ab1196459264c7f19be5c88710324aaaf97548f99f9344e7c5a287e21e"},
{  625000, "215a9d0cbbbbab12de5a22fe3b54219c0e15681173b8c90ceb7c0b1a5e0837de"},
{  630000, "de108b72fdd538037d8cf94a55c039cdf2240cebdfc0e76e764f44c3d5d065b3"},
{  635000, "fccf63f6773801a2bbe3571d8d97a1fca597682c02888c81dcafce54d264abe2"},
{  640000, "a05a9e0ec1bdcd0a1aea097302d3da1b0b82847351838d8b88f2b42a850edbd7"},
{  645000, "8f2441ded2afb686556849095782c7c711b557c57b49ae7c3f66a96444fcaae4"},
{  650000, "1b18c553b498a6d25ab446784ddad715c8d862844d66549284c09e1f472334e1"},
{  655000, "d2d938e1a4b1141c96c90d0eceb831387c7e19873f0dfa80eec7dd3a0e33674f"},
{  660000, "a918a2905228d69ffb8aff37d154a6d6480601b25cc312f2697b62454f3408ff"},
{  665000, "ee16f6f80ce3722a53cad67e6332be2e5361047183dc6f0af2100982e576d300"},
{  670000, "82a9047322fae985470734718d0e46cee1257cfb13d88056fda2fb92d3aff07e"},
{  675000, "5df97c9e0698f5d67514ed4284d54c8596ede13b66df126df3276e6c88c70dee"},
{  680000, "4896ce668954c37de5a2fc176227c4281a055f33c8d13958d316d857ac5cfa5b"},
{  685000, "a70be4dbe66a3517e287f9ef34bcd779485fe8b44878cd2523f97c6e7d14c39c"},
{  690000, "8859a820d1123b203a4420a4f6e5c7bcb1084ebe47ec7ba890b4aa4a9a423b77"},
{  695000, "7b6f3725d8516bb61a3da5572e432ce1e58d5004456c3537a0d9c99df0a0aa53"},
{  700000, "88e6beaed70bd56ed9deeebe7de7fc20fb5ed98fe38d26eb4fde04b8d1a778a1"},
{  705000, "1994f636ea088b1bbb3e7f1c57e26004bb6d2ed266d8e2b8c5a2070b07e86f7d"},
{  710000, "5576183941533dc7d28e5b38489ec1e41a83d6e59eb7f321914d1bcf034a4222"},
{  715000, "df271dbfb5e160d1ef5d10318cb59c1238e45736ec0483c0b6822db54b65909a"},
{  720000, "c3675209754b478c1c8d86f62cd1614431c39f9371abf19ba0a8781ba875286f"},
{  725000, "ff75ae47da9545be109ae9184d55ba1a0eeea7085810c3cfbd419ab7f30b0178"},
{  730000, "cd12b5dd6cd94b6d8497f94007fb28f6dc3ca8042faaf9d9fbb50974dac6eac8"},
{  735000, "388c0e62867144c6ad11cb4705a6d3818d31c60de25834cab80d2c18f3d022f3"},
{  740000, "ce3d26d4d6c9504afb87255219aa9d60daabbbaa15fa92e5e1ccd5016f64f7f9"},
{  745000, "d49b65a77c639078463e8844e9508b9ec04d0e5ce28aff4ddfbb0e5962340186"},
{  750000, "d7d041c28ffeb2ece4129e6ecd89027516273d44e52f333682cc2ea0ad1d0fb5"},
{  755000, "ec4e6da637ea6946e97d58d9977c29730166e5c14e40f7887f7067520c6a2568"},
{  760000, "21eeb4e79d450e8b0b16a5cd01ab274827b3f7e1b13beb4e74306353b9fc41bb"},
{  765000, "6347cdb75b47ebcad295be7820af987516e3f4bcf367953439bbfca46397437e"},
{  770000, "c2dc1c82f9b3d1b66385acfc574e2cb21ed01944eeb5e06e627d1416b073d892"},
{  775000, "9988f20556756fabf7c9f7c192ef9799eedec89e249cf40af260486a2ebdec03"},
{  780000, "61ff5e33118295bc2064638bc552d0173b19596fed47ab33fe8da1adf295564c"},
{  785000, "cc2f2057abbef589fbbd9a76d0d7b162c5f03b46fea10269c0a485943759f5f0"},
{  790000, "e4b8960f79a17f82a528b37290afc3fa5e740c5d944f3c2b11fae11c9608a3e4"},
{  795000, "40382661af531618a1608702de107f17d2a7d5331c7e0388a87c5bc4c91c881d"},
{  800000, "7523c8e313c543282a1ac11ddf003e0342cc3f2311fd3c08fd540ccb28249381"},
{  805000, "a41d3018636f0aceb75727a61fa59b32a623638a37e062c37c20f82f698336cd"},
{  810000, "71f2cba5b4a2d6b5efdfa27e96786aa6ad23521ed2954262bbb9a70935aae28b"},
{  815000, "219b3305410babd24a6db376572063d58dfa7fd75f01be1a65410696ededa47b"},
{  820000, "e184c4b07f46da4ac381ec31a146bce06e957dd9748f61f968eedfbb514aeb6d"},
{  825000, "7fa6c65da79a86cc847d21440d6f8cafb2d1fc5b05aa622e7f462e957609014a"},
{  830000, "4f0887fbde2b188d6ca2c1c495947b2b93bf0ec65c4cb17e9274438980199ec6"},
{  835000, "11754a2ae5fdba2b7a31d75b5904d6a9f3c1aa55c925d269b48a049caeb613c1"},
{  840000, "ebbbf4b8a05f3510dcc58cb36ffb3cd7ec6f09dd010f8055d6c208c0cf04bfd1"},
{  845000, "a277e6e55f048f68978ea8fefb41544d73db872cc596c90acc3f9f706d7565de"},
{  850000, "5f56b1484a5b9567e48db60720a11b8e062201a09002747514904a202475456d"},
{  855000, "83f5e6d9535142607940a6dbdb65a0785d5f819fdbc6115ffae168d6053d8c64"},
{  860000, "0bb45aa9c3c4da8abc6b79584ac8e4ef6d688e0f0cb3ba97383dcdc1fdb871fa"},
{  865000, "7e2ddf7449a263911d9fe79ca686d30ce648a81cff02dda78e76bb1d0259fce3"},
{  870000, "2d4ce74777799cc1f306690320b35ed72609c75fa47fdbd16bf6231748187a13"},
{  875000, "64a303b509e349ddd82d8fe2e2f6982bd76a127dc9519a1e0925281fa636a50f"},
{  880000, "a035afb087698fd7540c3ded850c04fba8e48f9f26dce6c551630f1a85af9bd1"},
{  885000, "f08592ae1bde6c9eec27a0101b7ac95d271311b0b780de7fb7dd9eec3c1ddda5"},
{  890000, "c11d2b33d3ae62428146369bcf764e6f7ba856bfce75731dda8e5e3c18d140e7"},
{  895000, "69263003f942e5bede8dcaae9a41d1cb6be147248541fb27a806685bb3e0e3dc"},
{  900000, "546b42f11012bf5e53b6571a9b3b13043039360e3cc6abda6291ad6a68c31c5e"},
{  905000, "db77ba4afa6d5c84a348de72b88c3b2f55d8a88166af34ae70493eff380b0143"},
{  910000, "0df6bbabb2ac05771c780bb9e3743c0a354e234e3452213f36d85e03e6e25097"},
{  915000, "2dd72e11dcd3faa4785730dc338638728e9aff4fe500ad73217a68534ee354c6"},
{  920000, "4ab3b274a00abf4467834321eab84b6687f009eae1fe78d176f31a25a86f0c0b"},
{  925000, "f11803ddcfc195cae3e1b5199d64028c8f45e35651bd317f292a43136f1300b8"},
{  930000, "edb9ad4315348d9f6d4fb26cafef8d85ff42c44ed4aad3a1ae5dd0eabc14987c"},
{  935000, "d7dccca9b91542612dfeb37129b28792e6631623907139e8e8adc76ec12bf2b7"},
{  940000, "0a05cbb36b122c54f08b2ee4dd257c9af68808940bbf3ffa5d1659e71bc070e9"},
{  945000, "4e884e106159dc880303c238fde1310b97576dfe46ec4db41e5b4a10439d84f8"},
{  950000, "0285054f1bc685511390305fc1aaf49d06f104d230cc30aa4d39fd0fd4bee5de"},
{  955000, "9b45459a9b6bcee66199ca388948fd0fa871e672f4e4f0107d7dba23c5098def"},
{  960000, "17faec3d008e271bb7658f5ff598bbfd8998591252d1fe27148d98017486da81"},
{  965000, "062f98aea0ca9adfc665b2c84d27d6ded7b77680f60feda09e8b737ba5fb6944"},
{  970000, "6bf0c7bf260b4dd67f70bb1aefa73fcbebd5d7b462b6fcfc00f1cdd5f54da5b2"},
{  975000, "ee00bfc27a1f228160f10b2a4a0e6597f78e8c80a31f6dc9dbe9b1608fcb98ac"},
{  980000, "77736d60664cfa6665b42a0d8545c8304783d2e6f15f989f31101d21a9388496"},
{  985000, "824f956ad78ebc8b60ae8e3a2cbef3ffa1b30e2f1e3ee0f78cad4af5101cd4f7"},
{  990000, "c9d70c4a769db981a70cd6b68c86a2bd6e5bd8147994576a90a4abb98be3804e"},
{  995000, "ff3aac4ed48ef240725cbf0e5eb060d07ae8b82f1ca047c9c191bd8e4a534120"},
{ 1000000, "a2345ce150a18c40c1e34718c7da47952d1d57ee1ada8a55ffd77fd35f6b8f6e"},
{ 1005000, "95811c16a09e76937845d1bc6a5c9778b93ec4323fc92b3592f15df20bf8c3f1"},
{ 1010000, "4851b643e408b01bcf76d24453302e5c60a20739737bbe2a3700947e192afde4"},
{ 1015000, "f33544014f3285f86c0de365e0f75554851686478af1194fcfb1dd55a035c151"},
{ 1020000, "3b4f2cab5ae1342b59a505ecb2b126949d8f7a8c2ba67691b0faca743c11e093"},
{ 1025000, "a2330d71f007a676bc420c0bb9932e09d3943a266b86897665e427f9e27a5d81"},
{ 1030000, "1d32a25b74a00520d8cd78868e70afe0b3bf7a03281f0e348477c24e35ff01ca"},
{ 1035000, "0ff1b2470711a2436015d42f24e707579880f699e6653f6e8da8a0fe2a5a8615"},
{ 1040000, "1a19a008e0321318d71ca132843eb0e8fa1d59a3976a6fbadd8ca1ca49b97460"},
{ 1045000, "3b30106f11b1cd08fbc473d23df04049c0b622584e0f014d13454de878d9611c"},
{ 1050000, "89e2c741a36b4e89ceae35061f56cbe97197c2b86f9ac26244aa4fb17cc56b4a"},
{ 1055000, "5967a0d6451f52075810a4f2402f7ba62ded11a278d107e1cbe3250fd8428831"},
{ 1060000, "90e782bb96589850678b65250a359ccb758aa596d70d8f65344e24e78ce7d9ff"},
{ 1065000, "97349e48f56e2b4e5ae8275b18fc5b477e0cad047c6c7f4edbdbd8eeb1ae8c9a"},
{ 1070000, "fdedea8cdc8a7cf341e5c573bb01ea41dc617a934c7bd15b0a5bd8d637dab9a1"},
{ 1075000, "9078da4109c084e140e4ef3a4f5afb6bbe7dead85aee89bae5e64df14bfae239"},
{ 1080000, "a73124f7e579dba70de6ad7f6d458ad07f06d100b0df5c7ccff91b00b17c4ba9"}
};
}
