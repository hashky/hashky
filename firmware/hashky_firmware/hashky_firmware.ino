
#include "sha256_lite.h" //sha lib for checksum
#include <avr/pgmspace.h>
#include <SHA204SWI.h>
#include <SHA204Definitions.h>

SHA204SWI sha204;

const char string_0[] PROGMEM ="abandon";
const char string_1[] PROGMEM ="ability";
const char string_2[] PROGMEM ="able";
const char string_3[] PROGMEM ="about";
const char string_4[] PROGMEM ="above";
const char string_5[] PROGMEM ="absent";
const char string_6[] PROGMEM ="absorb";
const char string_7[] PROGMEM ="abstract";
const char string_8[] PROGMEM ="absurd";
const char string_9[] PROGMEM ="abuse";
const char string_10[] PROGMEM ="access";
const char string_11[] PROGMEM ="accident";
const char string_12[] PROGMEM ="account";
const char string_13[] PROGMEM ="accuse";
const char string_14[] PROGMEM ="achieve";
const char string_15[] PROGMEM ="acid";
const char string_16[] PROGMEM ="acoustic";
const char string_17[] PROGMEM ="acquire";
const char string_18[] PROGMEM ="across";
const char string_19[] PROGMEM ="act";
const char string_20[] PROGMEM ="action";
const char string_21[] PROGMEM ="actor";
const char string_22[] PROGMEM ="actress";
const char string_23[] PROGMEM ="actual";
const char string_24[] PROGMEM ="adapt";
const char string_25[] PROGMEM ="add";
const char string_26[] PROGMEM ="addict";
const char string_27[] PROGMEM ="address";
const char string_28[] PROGMEM ="adjust";
const char string_29[] PROGMEM ="admit";
const char string_30[] PROGMEM ="adult";
const char string_31[] PROGMEM ="advance";
const char string_32[] PROGMEM ="advice";
const char string_33[] PROGMEM ="aerobic";
const char string_34[] PROGMEM ="affair";
const char string_35[] PROGMEM ="afford";
const char string_36[] PROGMEM ="afraid";
const char string_37[] PROGMEM ="again";
const char string_38[] PROGMEM ="age";
const char string_39[] PROGMEM ="agent";
const char string_40[] PROGMEM ="agree";
const char string_41[] PROGMEM ="ahead";
const char string_42[] PROGMEM ="aim";
const char string_43[] PROGMEM ="air";
const char string_44[] PROGMEM ="airport";
const char string_45[] PROGMEM ="aisle";
const char string_46[] PROGMEM ="alarm";
const char string_47[] PROGMEM ="album";
const char string_48[] PROGMEM ="alcohol";
const char string_49[] PROGMEM ="alert";
const char string_50[] PROGMEM ="alien";
const char string_51[] PROGMEM ="all";
const char string_52[] PROGMEM ="alley";
const char string_53[] PROGMEM ="allow";
const char string_54[] PROGMEM ="almost";
const char string_55[] PROGMEM ="alone";
const char string_56[] PROGMEM ="alpha";
const char string_57[] PROGMEM ="already";
const char string_58[] PROGMEM ="also";
const char string_59[] PROGMEM ="alter";
const char string_60[] PROGMEM ="always";
const char string_61[] PROGMEM ="amateur";
const char string_62[] PROGMEM ="amazing";
const char string_63[] PROGMEM ="among";
const char string_64[] PROGMEM ="amount";
const char string_65[] PROGMEM ="amused";
const char string_66[] PROGMEM ="analyst";
const char string_67[] PROGMEM ="anchor";
const char string_68[] PROGMEM ="ancient";
const char string_69[] PROGMEM ="anger";
const char string_70[] PROGMEM ="angle";
const char string_71[] PROGMEM ="angry";
const char string_72[] PROGMEM ="animal";
const char string_73[] PROGMEM ="ankle";
const char string_74[] PROGMEM ="announce";
const char string_75[] PROGMEM ="annual";
const char string_76[] PROGMEM ="another";
const char string_77[] PROGMEM ="answer";
const char string_78[] PROGMEM ="antenna";
const char string_79[] PROGMEM ="antique";
const char string_80[] PROGMEM ="anxiety";
const char string_81[] PROGMEM ="any";
const char string_82[] PROGMEM ="apart";
const char string_83[] PROGMEM ="apology";
const char string_84[] PROGMEM ="appear";
const char string_85[] PROGMEM ="apple";
const char string_86[] PROGMEM ="approve";
const char string_87[] PROGMEM ="april";
const char string_88[] PROGMEM ="arch";
const char string_89[] PROGMEM ="arctic";
const char string_90[] PROGMEM ="area";
const char string_91[] PROGMEM ="arena";
const char string_92[] PROGMEM ="argue";
const char string_93[] PROGMEM ="arm";
const char string_94[] PROGMEM ="armed";
const char string_95[] PROGMEM ="armor";
const char string_96[] PROGMEM ="army";
const char string_97[] PROGMEM ="around";
const char string_98[] PROGMEM ="arrange";
const char string_99[] PROGMEM ="arrest";
const char string_100[] PROGMEM ="arrive";
const char string_101[] PROGMEM ="arrow";
const char string_102[] PROGMEM ="art";
const char string_103[] PROGMEM ="artefact";
const char string_104[] PROGMEM ="artist";
const char string_105[] PROGMEM ="artwork";
const char string_106[] PROGMEM ="ask";
const char string_107[] PROGMEM ="aspect";
const char string_108[] PROGMEM ="assault";
const char string_109[] PROGMEM ="asset";
const char string_110[] PROGMEM ="assist";
const char string_111[] PROGMEM ="assume";
const char string_112[] PROGMEM ="asthma";
const char string_113[] PROGMEM ="athlete";
const char string_114[] PROGMEM ="atom";
const char string_115[] PROGMEM ="attack";
const char string_116[] PROGMEM ="attend";
const char string_117[] PROGMEM ="attitude";
const char string_118[] PROGMEM ="attract";
const char string_119[] PROGMEM ="auction";
const char string_120[] PROGMEM ="audit";
const char string_121[] PROGMEM ="august";
const char string_122[] PROGMEM ="aunt";
const char string_123[] PROGMEM ="author";
const char string_124[] PROGMEM ="auto";
const char string_125[] PROGMEM ="autumn";
const char string_126[] PROGMEM ="average";
const char string_127[] PROGMEM ="avocado";
const char string_128[] PROGMEM ="avoid";
const char string_129[] PROGMEM ="awake";
const char string_130[] PROGMEM ="aware";
const char string_131[] PROGMEM ="away";
const char string_132[] PROGMEM ="awesome";
const char string_133[] PROGMEM ="awful";
const char string_134[] PROGMEM ="awkward";
const char string_135[] PROGMEM ="axis";
const char string_136[] PROGMEM ="baby";
const char string_137[] PROGMEM ="bachelor";
const char string_138[] PROGMEM ="bacon";
const char string_139[] PROGMEM ="badge";
const char string_140[] PROGMEM ="bag";
const char string_141[] PROGMEM ="balance";
const char string_142[] PROGMEM ="balcony";
const char string_143[] PROGMEM ="ball";
const char string_144[] PROGMEM ="bamboo";
const char string_145[] PROGMEM ="banana";
const char string_146[] PROGMEM ="banner";
const char string_147[] PROGMEM ="bar";
const char string_148[] PROGMEM ="barely";
const char string_149[] PROGMEM ="bargain";
const char string_150[] PROGMEM ="barrel";
const char string_151[] PROGMEM ="base";
const char string_152[] PROGMEM ="basic";
const char string_153[] PROGMEM ="basket";
const char string_154[] PROGMEM ="battle";
const char string_155[] PROGMEM ="beach";
const char string_156[] PROGMEM ="bean";
const char string_157[] PROGMEM ="beauty";
const char string_158[] PROGMEM ="because";
const char string_159[] PROGMEM ="become";
const char string_160[] PROGMEM ="beef";
const char string_161[] PROGMEM ="before";
const char string_162[] PROGMEM ="begin";
const char string_163[] PROGMEM ="behave";
const char string_164[] PROGMEM ="behind";
const char string_165[] PROGMEM ="believe";
const char string_166[] PROGMEM ="below";
const char string_167[] PROGMEM ="belt";
const char string_168[] PROGMEM ="bench";
const char string_169[] PROGMEM ="benefit";
const char string_170[] PROGMEM ="best";
const char string_171[] PROGMEM ="betray";
const char string_172[] PROGMEM ="better";
const char string_173[] PROGMEM ="between";
const char string_174[] PROGMEM ="beyond";
const char string_175[] PROGMEM ="bicycle";
const char string_176[] PROGMEM ="bid";
const char string_177[] PROGMEM ="bike";
const char string_178[] PROGMEM ="bind";
const char string_179[] PROGMEM ="biology";
const char string_180[] PROGMEM ="bird";
const char string_181[] PROGMEM ="birth";
const char string_182[] PROGMEM ="bitter";
const char string_183[] PROGMEM ="black";
const char string_184[] PROGMEM ="blade";
const char string_185[] PROGMEM ="blame";
const char string_186[] PROGMEM ="blanket";
const char string_187[] PROGMEM ="blast";
const char string_188[] PROGMEM ="bleak";
const char string_189[] PROGMEM ="bless";
const char string_190[] PROGMEM ="blind";
const char string_191[] PROGMEM ="blood";
const char string_192[] PROGMEM ="blossom";
const char string_193[] PROGMEM ="blouse";
const char string_194[] PROGMEM ="blue";
const char string_195[] PROGMEM ="blur";
const char string_196[] PROGMEM ="blush";
const char string_197[] PROGMEM ="board";
const char string_198[] PROGMEM ="boat";
const char string_199[] PROGMEM ="body";
const char string_200[] PROGMEM ="boil";
const char string_201[] PROGMEM ="bomb";
const char string_202[] PROGMEM ="bone";
const char string_203[] PROGMEM ="bonus";
const char string_204[] PROGMEM ="book";
const char string_205[] PROGMEM ="boost";
const char string_206[] PROGMEM ="border";
const char string_207[] PROGMEM ="boring";
const char string_208[] PROGMEM ="borrow";
const char string_209[] PROGMEM ="boss";
const char string_210[] PROGMEM ="bottom";
const char string_211[] PROGMEM ="bounce";
const char string_212[] PROGMEM ="box";
const char string_213[] PROGMEM ="boy";
const char string_214[] PROGMEM ="bracket";
const char string_215[] PROGMEM ="brain";
const char string_216[] PROGMEM ="brand";
const char string_217[] PROGMEM ="brass";
const char string_218[] PROGMEM ="brave";
const char string_219[] PROGMEM ="bread";
const char string_220[] PROGMEM ="breeze";
const char string_221[] PROGMEM ="brick";
const char string_222[] PROGMEM ="bridge";
const char string_223[] PROGMEM ="brief";
const char string_224[] PROGMEM ="bright";
const char string_225[] PROGMEM ="bring";
const char string_226[] PROGMEM ="brisk";
const char string_227[] PROGMEM ="broccoli";
const char string_228[] PROGMEM ="broken";
const char string_229[] PROGMEM ="bronze";
const char string_230[] PROGMEM ="broom";
const char string_231[] PROGMEM ="brother";
const char string_232[] PROGMEM ="brown";
const char string_233[] PROGMEM ="brush";
const char string_234[] PROGMEM ="bubble";
const char string_235[] PROGMEM ="buddy";
const char string_236[] PROGMEM ="budget";
const char string_237[] PROGMEM ="buffalo";
const char string_238[] PROGMEM ="build";
const char string_239[] PROGMEM ="bulb";
const char string_240[] PROGMEM ="bulk";
const char string_241[] PROGMEM ="bullet";
const char string_242[] PROGMEM ="bundle";
const char string_243[] PROGMEM ="bunker";
const char string_244[] PROGMEM ="burden";
const char string_245[] PROGMEM ="burger";
const char string_246[] PROGMEM ="burst";
const char string_247[] PROGMEM ="bus";
const char string_248[] PROGMEM ="business";
const char string_249[] PROGMEM ="busy";
const char string_250[] PROGMEM ="butter";
const char string_251[] PROGMEM ="buyer";
const char string_252[] PROGMEM ="buzz";
const char string_253[] PROGMEM ="cabbage";
const char string_254[] PROGMEM ="cabin";
const char string_255[] PROGMEM ="cable";
const char string_256[] PROGMEM ="cactus";
const char string_257[] PROGMEM ="cage";
const char string_258[] PROGMEM ="cake";
const char string_259[] PROGMEM ="call";
const char string_260[] PROGMEM ="calm";
const char string_261[] PROGMEM ="camera";
const char string_262[] PROGMEM ="camp";
const char string_263[] PROGMEM ="can";
const char string_264[] PROGMEM ="canal";
const char string_265[] PROGMEM ="cancel";
const char string_266[] PROGMEM ="candy";
const char string_267[] PROGMEM ="cannon";
const char string_268[] PROGMEM ="canoe";
const char string_269[] PROGMEM ="canvas";
const char string_270[] PROGMEM ="canyon";
const char string_271[] PROGMEM ="capable";
const char string_272[] PROGMEM ="capital";
const char string_273[] PROGMEM ="captain";
const char string_274[] PROGMEM ="car";
const char string_275[] PROGMEM ="carbon";
const char string_276[] PROGMEM ="card";
const char string_277[] PROGMEM ="cargo";
const char string_278[] PROGMEM ="carpet";
const char string_279[] PROGMEM ="carry";
const char string_280[] PROGMEM ="cart";
const char string_281[] PROGMEM ="case";
const char string_282[] PROGMEM ="cash";
const char string_283[] PROGMEM ="casino";
const char string_284[] PROGMEM ="castle";
const char string_285[] PROGMEM ="casual";
const char string_286[] PROGMEM ="cat";
const char string_287[] PROGMEM ="catalog";
const char string_288[] PROGMEM ="catch";
const char string_289[] PROGMEM ="category";
const char string_290[] PROGMEM ="cattle";
const char string_291[] PROGMEM ="caught";
const char string_292[] PROGMEM ="cause";
const char string_293[] PROGMEM ="caution";
const char string_294[] PROGMEM ="cave";
const char string_295[] PROGMEM ="ceiling";
const char string_296[] PROGMEM ="celery";
const char string_297[] PROGMEM ="cement";
const char string_298[] PROGMEM ="census";
const char string_299[] PROGMEM ="century";
const char string_300[] PROGMEM ="cereal";
const char string_301[] PROGMEM ="certain";
const char string_302[] PROGMEM ="chair";
const char string_303[] PROGMEM ="chalk";
const char string_304[] PROGMEM ="champion";
const char string_305[] PROGMEM ="change";
const char string_306[] PROGMEM ="chaos";
const char string_307[] PROGMEM ="chapter";
const char string_308[] PROGMEM ="charge";
const char string_309[] PROGMEM ="chase";
const char string_310[] PROGMEM ="chat";
const char string_311[] PROGMEM ="cheap";
const char string_312[] PROGMEM ="check";
const char string_313[] PROGMEM ="cheese";
const char string_314[] PROGMEM ="chef";
const char string_315[] PROGMEM ="cherry";
const char string_316[] PROGMEM ="chest";
const char string_317[] PROGMEM ="chicken";
const char string_318[] PROGMEM ="chief";
const char string_319[] PROGMEM ="child";
const char string_320[] PROGMEM ="chimney";
const char string_321[] PROGMEM ="choice";
const char string_322[] PROGMEM ="choose";
const char string_323[] PROGMEM ="chronic";
const char string_324[] PROGMEM ="chuckle";
const char string_325[] PROGMEM ="chunk";
const char string_326[] PROGMEM ="churn";
const char string_327[] PROGMEM ="cigar";
const char string_328[] PROGMEM ="cinnamon";
const char string_329[] PROGMEM ="circle";
const char string_330[] PROGMEM ="citizen";
const char string_331[] PROGMEM ="city";
const char string_332[] PROGMEM ="civil";
const char string_333[] PROGMEM ="claim";
const char string_334[] PROGMEM ="clap";
const char string_335[] PROGMEM ="clarify";
const char string_336[] PROGMEM ="claw";
const char string_337[] PROGMEM ="clay";
const char string_338[] PROGMEM ="clean";
const char string_339[] PROGMEM ="clerk";
const char string_340[] PROGMEM ="clever";
const char string_341[] PROGMEM ="click";
const char string_342[] PROGMEM ="client";
const char string_343[] PROGMEM ="cliff";
const char string_344[] PROGMEM ="climb";
const char string_345[] PROGMEM ="clinic";
const char string_346[] PROGMEM ="clip";
const char string_347[] PROGMEM ="clock";
const char string_348[] PROGMEM ="clog";
const char string_349[] PROGMEM ="close";
const char string_350[] PROGMEM ="cloth";
const char string_351[] PROGMEM ="cloud";
const char string_352[] PROGMEM ="clown";
const char string_353[] PROGMEM ="club";
const char string_354[] PROGMEM ="clump";
const char string_355[] PROGMEM ="cluster";
const char string_356[] PROGMEM ="clutch";
const char string_357[] PROGMEM ="coach";
const char string_358[] PROGMEM ="coast";
const char string_359[] PROGMEM ="coconut";
const char string_360[] PROGMEM ="code";
const char string_361[] PROGMEM ="coffee";
const char string_362[] PROGMEM ="coil";
const char string_363[] PROGMEM ="coin";
const char string_364[] PROGMEM ="collect";
const char string_365[] PROGMEM ="color";
const char string_366[] PROGMEM ="column";
const char string_367[] PROGMEM ="combine";
const char string_368[] PROGMEM ="come";
const char string_369[] PROGMEM ="comfort";
const char string_370[] PROGMEM ="comic";
const char string_371[] PROGMEM ="common";
const char string_372[] PROGMEM ="company";
const char string_373[] PROGMEM ="concert";
const char string_374[] PROGMEM ="conduct";
const char string_375[] PROGMEM ="confirm";
const char string_376[] PROGMEM ="congress";
const char string_377[] PROGMEM ="connect";
const char string_378[] PROGMEM ="consider";
const char string_379[] PROGMEM ="control";
const char string_380[] PROGMEM ="convince";
const char string_381[] PROGMEM ="cook";
const char string_382[] PROGMEM ="cool";
const char string_383[] PROGMEM ="copper";
const char string_384[] PROGMEM ="copy";
const char string_385[] PROGMEM ="coral";
const char string_386[] PROGMEM ="core";
const char string_387[] PROGMEM ="corn";
const char string_388[] PROGMEM ="correct";
const char string_389[] PROGMEM ="cost";
const char string_390[] PROGMEM ="cotton";
const char string_391[] PROGMEM ="couch";
const char string_392[] PROGMEM ="country";
const char string_393[] PROGMEM ="couple";
const char string_394[] PROGMEM ="course";
const char string_395[] PROGMEM ="cousin";
const char string_396[] PROGMEM ="cover";
const char string_397[] PROGMEM ="coyote";
const char string_398[] PROGMEM ="crack";
const char string_399[] PROGMEM ="cradle";
const char string_400[] PROGMEM ="craft";
const char string_401[] PROGMEM ="cram";
const char string_402[] PROGMEM ="crane";
const char string_403[] PROGMEM ="crash";
const char string_404[] PROGMEM ="crater";
const char string_405[] PROGMEM ="crawl";
const char string_406[] PROGMEM ="crazy";
const char string_407[] PROGMEM ="cream";
const char string_408[] PROGMEM ="credit";
const char string_409[] PROGMEM ="creek";
const char string_410[] PROGMEM ="crew";
const char string_411[] PROGMEM ="cricket";
const char string_412[] PROGMEM ="crime";
const char string_413[] PROGMEM ="crisp";
const char string_414[] PROGMEM ="critic";
const char string_415[] PROGMEM ="crop";
const char string_416[] PROGMEM ="cross";
const char string_417[] PROGMEM ="crouch";
const char string_418[] PROGMEM ="crowd";
const char string_419[] PROGMEM ="crucial";
const char string_420[] PROGMEM ="cruel";
const char string_421[] PROGMEM ="cruise";
const char string_422[] PROGMEM ="crumble";
const char string_423[] PROGMEM ="crunch";
const char string_424[] PROGMEM ="crush";
const char string_425[] PROGMEM ="cry";
const char string_426[] PROGMEM ="crystal";
const char string_427[] PROGMEM ="cube";
const char string_428[] PROGMEM ="culture";
const char string_429[] PROGMEM ="cup";
const char string_430[] PROGMEM ="cupboard";
const char string_431[] PROGMEM ="curious";
const char string_432[] PROGMEM ="current";
const char string_433[] PROGMEM ="curtain";
const char string_434[] PROGMEM ="curve";
const char string_435[] PROGMEM ="cushion";
const char string_436[] PROGMEM ="custom";
const char string_437[] PROGMEM ="cute";
const char string_438[] PROGMEM ="cycle";
const char string_439[] PROGMEM ="dad";
const char string_440[] PROGMEM ="damage";
const char string_441[] PROGMEM ="damp";
const char string_442[] PROGMEM ="dance";
const char string_443[] PROGMEM ="danger";
const char string_444[] PROGMEM ="daring";
const char string_445[] PROGMEM ="dash";
const char string_446[] PROGMEM ="daughter";
const char string_447[] PROGMEM ="dawn";
const char string_448[] PROGMEM ="day";
const char string_449[] PROGMEM ="deal";
const char string_450[] PROGMEM ="debate";
const char string_451[] PROGMEM ="debris";
const char string_452[] PROGMEM ="decade";
const char string_453[] PROGMEM ="december";
const char string_454[] PROGMEM ="decide";
const char string_455[] PROGMEM ="decline";
const char string_456[] PROGMEM ="decorate";
const char string_457[] PROGMEM ="decrease";
const char string_458[] PROGMEM ="deer";
const char string_459[] PROGMEM ="defense";
const char string_460[] PROGMEM ="define";
const char string_461[] PROGMEM ="defy";
const char string_462[] PROGMEM ="degree";
const char string_463[] PROGMEM ="delay";
const char string_464[] PROGMEM ="deliver";
const char string_465[] PROGMEM ="demand";
const char string_466[] PROGMEM ="demise";
const char string_467[] PROGMEM ="denial";
const char string_468[] PROGMEM ="dentist";
const char string_469[] PROGMEM ="deny";
const char string_470[] PROGMEM ="depart";
const char string_471[] PROGMEM ="depend";
const char string_472[] PROGMEM ="deposit";
const char string_473[] PROGMEM ="depth";
const char string_474[] PROGMEM ="deputy";
const char string_475[] PROGMEM ="derive";
const char string_476[] PROGMEM ="describe";
const char string_477[] PROGMEM ="desert";
const char string_478[] PROGMEM ="design";
const char string_479[] PROGMEM ="desk";
const char string_480[] PROGMEM ="despair";
const char string_481[] PROGMEM ="destroy";
const char string_482[] PROGMEM ="detail";
const char string_483[] PROGMEM ="detect";
const char string_484[] PROGMEM ="develop";
const char string_485[] PROGMEM ="device";
const char string_486[] PROGMEM ="devote";
const char string_487[] PROGMEM ="diagram";
const char string_488[] PROGMEM ="dial";
const char string_489[] PROGMEM ="diamond";
const char string_490[] PROGMEM ="diary";
const char string_491[] PROGMEM ="dice";
const char string_492[] PROGMEM ="diesel";
const char string_493[] PROGMEM ="diet";
const char string_494[] PROGMEM ="differ";
const char string_495[] PROGMEM ="digital";
const char string_496[] PROGMEM ="dignity";
const char string_497[] PROGMEM ="dilemma";
const char string_498[] PROGMEM ="dinner";
const char string_499[] PROGMEM ="dinosaur";
const char string_500[] PROGMEM ="direct";
const char string_501[] PROGMEM ="dirt";
const char string_502[] PROGMEM ="disagree";
const char string_503[] PROGMEM ="discover";
const char string_504[] PROGMEM ="disease";
const char string_505[] PROGMEM ="dish";
const char string_506[] PROGMEM ="dismiss";
const char string_507[] PROGMEM ="disorder";
const char string_508[] PROGMEM ="display";
const char string_509[] PROGMEM ="distance";
const char string_510[] PROGMEM ="divert";
const char string_511[] PROGMEM ="divide";
const char string_512[] PROGMEM ="divorce";
const char string_513[] PROGMEM ="dizzy";
const char string_514[] PROGMEM ="doctor";
const char string_515[] PROGMEM ="document";
const char string_516[] PROGMEM ="dog";
const char string_517[] PROGMEM ="doll";
const char string_518[] PROGMEM ="dolphin";
const char string_519[] PROGMEM ="domain";
const char string_520[] PROGMEM ="donate";
const char string_521[] PROGMEM ="donkey";
const char string_522[] PROGMEM ="donor";
const char string_523[] PROGMEM ="door";
const char string_524[] PROGMEM ="dose";
const char string_525[] PROGMEM ="double";
const char string_526[] PROGMEM ="dove";
const char string_527[] PROGMEM ="draft";
const char string_528[] PROGMEM ="dragon";
const char string_529[] PROGMEM ="drama";
const char string_530[] PROGMEM ="drastic";
const char string_531[] PROGMEM ="draw";
const char string_532[] PROGMEM ="dream";
const char string_533[] PROGMEM ="dress";
const char string_534[] PROGMEM ="drift";
const char string_535[] PROGMEM ="drill";
const char string_536[] PROGMEM ="drink";
const char string_537[] PROGMEM ="drip";
const char string_538[] PROGMEM ="drive";
const char string_539[] PROGMEM ="drop";
const char string_540[] PROGMEM ="drum";
const char string_541[] PROGMEM ="dry";
const char string_542[] PROGMEM ="duck";
const char string_543[] PROGMEM ="dumb";
const char string_544[] PROGMEM ="dune";
const char string_545[] PROGMEM ="during";
const char string_546[] PROGMEM ="dust";
const char string_547[] PROGMEM ="dutch";
const char string_548[] PROGMEM ="duty";
const char string_549[] PROGMEM ="dwarf";
const char string_550[] PROGMEM ="dynamic";
const char string_551[] PROGMEM ="eager";
const char string_552[] PROGMEM ="eagle";
const char string_553[] PROGMEM ="early";
const char string_554[] PROGMEM ="earn";
const char string_555[] PROGMEM ="earth";
const char string_556[] PROGMEM ="easily";
const char string_557[] PROGMEM ="east";
const char string_558[] PROGMEM ="easy";
const char string_559[] PROGMEM ="echo";
const char string_560[] PROGMEM ="ecology";
const char string_561[] PROGMEM ="economy";
const char string_562[] PROGMEM ="edge";
const char string_563[] PROGMEM ="edit";
const char string_564[] PROGMEM ="educate";
const char string_565[] PROGMEM ="effort";
const char string_566[] PROGMEM ="egg";
const char string_567[] PROGMEM ="eight";
const char string_568[] PROGMEM ="either";
const char string_569[] PROGMEM ="elbow";
const char string_570[] PROGMEM ="elder";
const char string_571[] PROGMEM ="electric";
const char string_572[] PROGMEM ="elegant";
const char string_573[] PROGMEM ="element";
const char string_574[] PROGMEM ="elephant";
const char string_575[] PROGMEM ="elevator";
const char string_576[] PROGMEM ="elite";
const char string_577[] PROGMEM ="else";
const char string_578[] PROGMEM ="embark";
const char string_579[] PROGMEM ="embody";
const char string_580[] PROGMEM ="embrace";
const char string_581[] PROGMEM ="emerge";
const char string_582[] PROGMEM ="emotion";
const char string_583[] PROGMEM ="employ";
const char string_584[] PROGMEM ="empower";
const char string_585[] PROGMEM ="empty";
const char string_586[] PROGMEM ="enable";
const char string_587[] PROGMEM ="enact";
const char string_588[] PROGMEM ="end";
const char string_589[] PROGMEM ="endless";
const char string_590[] PROGMEM ="endorse";
const char string_591[] PROGMEM ="enemy";
const char string_592[] PROGMEM ="energy";
const char string_593[] PROGMEM ="enforce";
const char string_594[] PROGMEM ="engage";
const char string_595[] PROGMEM ="engine";
const char string_596[] PROGMEM ="enhance";
const char string_597[] PROGMEM ="enjoy";
const char string_598[] PROGMEM ="enlist";
const char string_599[] PROGMEM ="enough";
const char string_600[] PROGMEM ="enrich";
const char string_601[] PROGMEM ="enroll";
const char string_602[] PROGMEM ="ensure";
const char string_603[] PROGMEM ="enter";
const char string_604[] PROGMEM ="entire";
const char string_605[] PROGMEM ="entry";
const char string_606[] PROGMEM ="envelope";
const char string_607[] PROGMEM ="episode";
const char string_608[] PROGMEM ="equal";
const char string_609[] PROGMEM ="equip";
const char string_610[] PROGMEM ="era";
const char string_611[] PROGMEM ="erase";
const char string_612[] PROGMEM ="erode";
const char string_613[] PROGMEM ="erosion";
const char string_614[] PROGMEM ="error";
const char string_615[] PROGMEM ="erupt";
const char string_616[] PROGMEM ="escape";
const char string_617[] PROGMEM ="essay";
const char string_618[] PROGMEM ="essence";
const char string_619[] PROGMEM ="estate";
const char string_620[] PROGMEM ="eternal";
const char string_621[] PROGMEM ="ethics";
const char string_622[] PROGMEM ="evidence";
const char string_623[] PROGMEM ="evil";
const char string_624[] PROGMEM ="evoke";
const char string_625[] PROGMEM ="evolve";
const char string_626[] PROGMEM ="exact";
const char string_627[] PROGMEM ="example";
const char string_628[] PROGMEM ="excess";
const char string_629[] PROGMEM ="exchange";
const char string_630[] PROGMEM ="excite";
const char string_631[] PROGMEM ="exclude";
const char string_632[] PROGMEM ="excuse";
const char string_633[] PROGMEM ="execute";
const char string_634[] PROGMEM ="exercise";
const char string_635[] PROGMEM ="exhaust";
const char string_636[] PROGMEM ="exhibit";
const char string_637[] PROGMEM ="exile";
const char string_638[] PROGMEM ="exist";
const char string_639[] PROGMEM ="exit";
const char string_640[] PROGMEM ="exotic";
const char string_641[] PROGMEM ="expand";
const char string_642[] PROGMEM ="expect";
const char string_643[] PROGMEM ="expire";
const char string_644[] PROGMEM ="explain";
const char string_645[] PROGMEM ="expose";
const char string_646[] PROGMEM ="express";
const char string_647[] PROGMEM ="extend";
const char string_648[] PROGMEM ="extra";
const char string_649[] PROGMEM ="eye";
const char string_650[] PROGMEM ="eyebrow";
const char string_651[] PROGMEM ="fabric";
const char string_652[] PROGMEM ="face";
const char string_653[] PROGMEM ="faculty";
const char string_654[] PROGMEM ="fade";
const char string_655[] PROGMEM ="faint";
const char string_656[] PROGMEM ="faith";
const char string_657[] PROGMEM ="fall";
const char string_658[] PROGMEM ="false";
const char string_659[] PROGMEM ="fame";
const char string_660[] PROGMEM ="family";
const char string_661[] PROGMEM ="famous";
const char string_662[] PROGMEM ="fan";
const char string_663[] PROGMEM ="fancy";
const char string_664[] PROGMEM ="fantasy";
const char string_665[] PROGMEM ="farm";
const char string_666[] PROGMEM ="fashion";
const char string_667[] PROGMEM ="fat";
const char string_668[] PROGMEM ="fatal";
const char string_669[] PROGMEM ="father";
const char string_670[] PROGMEM ="fatigue";
const char string_671[] PROGMEM ="fault";
const char string_672[] PROGMEM ="favorite";
const char string_673[] PROGMEM ="feature";
const char string_674[] PROGMEM ="february";
const char string_675[] PROGMEM ="federal";
const char string_676[] PROGMEM ="fee";
const char string_677[] PROGMEM ="feed";
const char string_678[] PROGMEM ="feel";
const char string_679[] PROGMEM ="female";
const char string_680[] PROGMEM ="fence";
const char string_681[] PROGMEM ="festival";
const char string_682[] PROGMEM ="fetch";
const char string_683[] PROGMEM ="fever";
const char string_684[] PROGMEM ="few";
const char string_685[] PROGMEM ="fiber";
const char string_686[] PROGMEM ="fiction";
const char string_687[] PROGMEM ="field";
const char string_688[] PROGMEM ="figure";
const char string_689[] PROGMEM ="file";
const char string_690[] PROGMEM ="film";
const char string_691[] PROGMEM ="filter";
const char string_692[] PROGMEM ="final";
const char string_693[] PROGMEM ="find";
const char string_694[] PROGMEM ="fine";
const char string_695[] PROGMEM ="finger";
const char string_696[] PROGMEM ="finish";
const char string_697[] PROGMEM ="fire";
const char string_698[] PROGMEM ="firm";
const char string_699[] PROGMEM ="first";
const char string_700[] PROGMEM ="fiscal";
const char string_701[] PROGMEM ="fish";
const char string_702[] PROGMEM ="fit";
const char string_703[] PROGMEM ="fitness";
const char string_704[] PROGMEM ="fix";
const char string_705[] PROGMEM ="flag";
const char string_706[] PROGMEM ="flame";
const char string_707[] PROGMEM ="flash";
const char string_708[] PROGMEM ="flat";
const char string_709[] PROGMEM ="flavor";
const char string_710[] PROGMEM ="flee";
const char string_711[] PROGMEM ="flight";
const char string_712[] PROGMEM ="flip";
const char string_713[] PROGMEM ="float";
const char string_714[] PROGMEM ="flock";
const char string_715[] PROGMEM ="floor";
const char string_716[] PROGMEM ="flower";
const char string_717[] PROGMEM ="fluid";
const char string_718[] PROGMEM ="flush";
const char string_719[] PROGMEM ="fly";
const char string_720[] PROGMEM ="foam";
const char string_721[] PROGMEM ="focus";
const char string_722[] PROGMEM ="fog";
const char string_723[] PROGMEM ="foil";
const char string_724[] PROGMEM ="fold";
const char string_725[] PROGMEM ="follow";
const char string_726[] PROGMEM ="food";
const char string_727[] PROGMEM ="foot";
const char string_728[] PROGMEM ="force";
const char string_729[] PROGMEM ="forest";
const char string_730[] PROGMEM ="forget";
const char string_731[] PROGMEM ="fork";
const char string_732[] PROGMEM ="fortune";
const char string_733[] PROGMEM ="forum";
const char string_734[] PROGMEM ="forward";
const char string_735[] PROGMEM ="fossil";
const char string_736[] PROGMEM ="foster";
const char string_737[] PROGMEM ="found";
const char string_738[] PROGMEM ="fox";
const char string_739[] PROGMEM ="fragile";
const char string_740[] PROGMEM ="frame";
const char string_741[] PROGMEM ="frequent";
const char string_742[] PROGMEM ="fresh";
const char string_743[] PROGMEM ="friend";
const char string_744[] PROGMEM ="fringe";
const char string_745[] PROGMEM ="frog";
const char string_746[] PROGMEM ="front";
const char string_747[] PROGMEM ="frost";
const char string_748[] PROGMEM ="frown";
const char string_749[] PROGMEM ="frozen";
const char string_750[] PROGMEM ="fruit";
const char string_751[] PROGMEM ="fuel";
const char string_752[] PROGMEM ="fun";
const char string_753[] PROGMEM ="funny";
const char string_754[] PROGMEM ="furnace";
const char string_755[] PROGMEM ="fury";
const char string_756[] PROGMEM ="future";
const char string_757[] PROGMEM ="gadget";
const char string_758[] PROGMEM ="gain";
const char string_759[] PROGMEM ="galaxy";
const char string_760[] PROGMEM ="gallery";
const char string_761[] PROGMEM ="game";
const char string_762[] PROGMEM ="gap";
const char string_763[] PROGMEM ="garage";
const char string_764[] PROGMEM ="garbage";
const char string_765[] PROGMEM ="garden";
const char string_766[] PROGMEM ="garlic";
const char string_767[] PROGMEM ="garment";
const char string_768[] PROGMEM ="gas";
const char string_769[] PROGMEM ="gasp";
const char string_770[] PROGMEM ="gate";
const char string_771[] PROGMEM ="gather";
const char string_772[] PROGMEM ="gauge";
const char string_773[] PROGMEM ="gaze";
const char string_774[] PROGMEM ="general";
const char string_775[] PROGMEM ="genius";
const char string_776[] PROGMEM ="genre";
const char string_777[] PROGMEM ="gentle";
const char string_778[] PROGMEM ="genuine";
const char string_779[] PROGMEM ="gesture";
const char string_780[] PROGMEM ="ghost";
const char string_781[] PROGMEM ="giant";
const char string_782[] PROGMEM ="gift";
const char string_783[] PROGMEM ="giggle";
const char string_784[] PROGMEM ="ginger";
const char string_785[] PROGMEM ="giraffe";
const char string_786[] PROGMEM ="girl";
const char string_787[] PROGMEM ="give";
const char string_788[] PROGMEM ="glad";
const char string_789[] PROGMEM ="glance";
const char string_790[] PROGMEM ="glare";
const char string_791[] PROGMEM ="glass";
const char string_792[] PROGMEM ="glide";
const char string_793[] PROGMEM ="glimpse";
const char string_794[] PROGMEM ="globe";
const char string_795[] PROGMEM ="gloom";
const char string_796[] PROGMEM ="glory";
const char string_797[] PROGMEM ="glove";
const char string_798[] PROGMEM ="glow";
const char string_799[] PROGMEM ="glue";
const char string_800[] PROGMEM ="goat";
const char string_801[] PROGMEM ="goddess";
const char string_802[] PROGMEM ="gold";
const char string_803[] PROGMEM ="good";
const char string_804[] PROGMEM ="goose";
const char string_805[] PROGMEM ="gorilla";
const char string_806[] PROGMEM ="gospel";
const char string_807[] PROGMEM ="gossip";
const char string_808[] PROGMEM ="govern";
const char string_809[] PROGMEM ="gown";
const char string_810[] PROGMEM ="grab";
const char string_811[] PROGMEM ="grace";
const char string_812[] PROGMEM ="grain";
const char string_813[] PROGMEM ="grant";
const char string_814[] PROGMEM ="grape";
const char string_815[] PROGMEM ="grass";
const char string_816[] PROGMEM ="gravity";
const char string_817[] PROGMEM ="great";
const char string_818[] PROGMEM ="green";
const char string_819[] PROGMEM ="grid";
const char string_820[] PROGMEM ="grief";
const char string_821[] PROGMEM ="grit";
const char string_822[] PROGMEM ="grocery";
const char string_823[] PROGMEM ="group";
const char string_824[] PROGMEM ="grow";
const char string_825[] PROGMEM ="grunt";
const char string_826[] PROGMEM ="guard";
const char string_827[] PROGMEM ="guess";
const char string_828[] PROGMEM ="guide";
const char string_829[] PROGMEM ="guilt";
const char string_830[] PROGMEM ="guitar";
const char string_831[] PROGMEM ="gun";
const char string_832[] PROGMEM ="gym";
const char string_833[] PROGMEM ="habit";
const char string_834[] PROGMEM ="hair";
const char string_835[] PROGMEM ="half";
const char string_836[] PROGMEM ="hammer";
const char string_837[] PROGMEM ="hamster";
const char string_838[] PROGMEM ="hand";
const char string_839[] PROGMEM ="happy";
const char string_840[] PROGMEM ="harbor";
const char string_841[] PROGMEM ="hard";
const char string_842[] PROGMEM ="harsh";
const char string_843[] PROGMEM ="harvest";
const char string_844[] PROGMEM ="hat";
const char string_845[] PROGMEM ="have";
const char string_846[] PROGMEM ="hawk";
const char string_847[] PROGMEM ="hazard";
const char string_848[] PROGMEM ="head";
const char string_849[] PROGMEM ="health";
const char string_850[] PROGMEM ="heart";
const char string_851[] PROGMEM ="heavy";
const char string_852[] PROGMEM ="hedgehog";
const char string_853[] PROGMEM ="height";
const char string_854[] PROGMEM ="hello";
const char string_855[] PROGMEM ="helmet";
const char string_856[] PROGMEM ="help";
const char string_857[] PROGMEM ="hen";
const char string_858[] PROGMEM ="hero";
const char string_859[] PROGMEM ="hidden";
const char string_860[] PROGMEM ="high";
const char string_861[] PROGMEM ="hill";
const char string_862[] PROGMEM ="hint";
const char string_863[] PROGMEM ="hip";
const char string_864[] PROGMEM ="hire";
const char string_865[] PROGMEM ="history";
const char string_866[] PROGMEM ="hobby";
const char string_867[] PROGMEM ="hockey";
const char string_868[] PROGMEM ="hold";
const char string_869[] PROGMEM ="hole";
const char string_870[] PROGMEM ="holiday";
const char string_871[] PROGMEM ="hollow";
const char string_872[] PROGMEM ="home";
const char string_873[] PROGMEM ="honey";
const char string_874[] PROGMEM ="hood";
const char string_875[] PROGMEM ="hope";
const char string_876[] PROGMEM ="horn";
const char string_877[] PROGMEM ="horror";
const char string_878[] PROGMEM ="horse";
const char string_879[] PROGMEM ="hospital";
const char string_880[] PROGMEM ="host";
const char string_881[] PROGMEM ="hotel";
const char string_882[] PROGMEM ="hour";
const char string_883[] PROGMEM ="hover";
const char string_884[] PROGMEM ="hub";
const char string_885[] PROGMEM ="huge";
const char string_886[] PROGMEM ="human";
const char string_887[] PROGMEM ="humble";
const char string_888[] PROGMEM ="humor";
const char string_889[] PROGMEM ="hundred";
const char string_890[] PROGMEM ="hungry";
const char string_891[] PROGMEM ="hunt";
const char string_892[] PROGMEM ="hurdle";
const char string_893[] PROGMEM ="hurry";
const char string_894[] PROGMEM ="hurt";
const char string_895[] PROGMEM ="husband";
const char string_896[] PROGMEM ="hybrid";
const char string_897[] PROGMEM ="ice";
const char string_898[] PROGMEM ="icon";
const char string_899[] PROGMEM ="idea";
const char string_900[] PROGMEM ="identify";
const char string_901[] PROGMEM ="idle";
const char string_902[] PROGMEM ="ignore";
const char string_903[] PROGMEM ="ill";
const char string_904[] PROGMEM ="illegal";
const char string_905[] PROGMEM ="illness";
const char string_906[] PROGMEM ="image";
const char string_907[] PROGMEM ="imitate";
const char string_908[] PROGMEM ="immense";
const char string_909[] PROGMEM ="immune";
const char string_910[] PROGMEM ="impact";
const char string_911[] PROGMEM ="impose";
const char string_912[] PROGMEM ="improve";
const char string_913[] PROGMEM ="impulse";
const char string_914[] PROGMEM ="inch";
const char string_915[] PROGMEM ="include";
const char string_916[] PROGMEM ="income";
const char string_917[] PROGMEM ="increase";
const char string_918[] PROGMEM ="index";
const char string_919[] PROGMEM ="indicate";
const char string_920[] PROGMEM ="indoor";
const char string_921[] PROGMEM ="industry";
const char string_922[] PROGMEM ="infant";
const char string_923[] PROGMEM ="inflict";
const char string_924[] PROGMEM ="inform";
const char string_925[] PROGMEM ="inhale";
const char string_926[] PROGMEM ="inherit";
const char string_927[] PROGMEM ="initial";
const char string_928[] PROGMEM ="inject";
const char string_929[] PROGMEM ="injury";
const char string_930[] PROGMEM ="inmate";
const char string_931[] PROGMEM ="inner";
const char string_932[] PROGMEM ="innocent";
const char string_933[] PROGMEM ="input";
const char string_934[] PROGMEM ="inquiry";
const char string_935[] PROGMEM ="insane";
const char string_936[] PROGMEM ="insect";
const char string_937[] PROGMEM ="inside";
const char string_938[] PROGMEM ="inspire";
const char string_939[] PROGMEM ="install";
const char string_940[] PROGMEM ="intact";
const char string_941[] PROGMEM ="interest";
const char string_942[] PROGMEM ="into";
const char string_943[] PROGMEM ="invest";
const char string_944[] PROGMEM ="invite";
const char string_945[] PROGMEM ="involve";
const char string_946[] PROGMEM ="iron";
const char string_947[] PROGMEM ="island";
const char string_948[] PROGMEM ="isolate";
const char string_949[] PROGMEM ="issue";
const char string_950[] PROGMEM ="item";
const char string_951[] PROGMEM ="ivory";
const char string_952[] PROGMEM ="jacket";
const char string_953[] PROGMEM ="jaguar";
const char string_954[] PROGMEM ="jar";
const char string_955[] PROGMEM ="jazz";
const char string_956[] PROGMEM ="jealous";
const char string_957[] PROGMEM ="jeans";
const char string_958[] PROGMEM ="jelly";
const char string_959[] PROGMEM ="jewel";
const char string_960[] PROGMEM ="job";
const char string_961[] PROGMEM ="join";
const char string_962[] PROGMEM ="joke";
const char string_963[] PROGMEM ="journey";
const char string_964[] PROGMEM ="joy";
const char string_965[] PROGMEM ="judge";
const char string_966[] PROGMEM ="juice";
const char string_967[] PROGMEM ="jump";
const char string_968[] PROGMEM ="jungle";
const char string_969[] PROGMEM ="junior";
const char string_970[] PROGMEM ="junk";
const char string_971[] PROGMEM ="just";
const char string_972[] PROGMEM ="kangaroo";
const char string_973[] PROGMEM ="keen";
const char string_974[] PROGMEM ="keep";
const char string_975[] PROGMEM ="ketchup";
const char string_976[] PROGMEM ="key";
const char string_977[] PROGMEM ="kick";
const char string_978[] PROGMEM ="kid";
const char string_979[] PROGMEM ="kidney";
const char string_980[] PROGMEM ="kind";
const char string_981[] PROGMEM ="kingdom";
const char string_982[] PROGMEM ="kiss";
const char string_983[] PROGMEM ="kit";
const char string_984[] PROGMEM ="kitchen";
const char string_985[] PROGMEM ="kite";
const char string_986[] PROGMEM ="kitten";
const char string_987[] PROGMEM ="kiwi";
const char string_988[] PROGMEM ="knee";
const char string_989[] PROGMEM ="knife";
const char string_990[] PROGMEM ="knock";
const char string_991[] PROGMEM ="know";
const char string_992[] PROGMEM ="lab";
const char string_993[] PROGMEM ="label";
const char string_994[] PROGMEM ="labor";
const char string_995[] PROGMEM ="ladder";
const char string_996[] PROGMEM ="lady";
const char string_997[] PROGMEM ="lake";
const char string_998[] PROGMEM ="lamp";
const char string_999[] PROGMEM ="language";
const char string_1000[] PROGMEM ="laptop";
const char string_1001[] PROGMEM ="large";
const char string_1002[] PROGMEM ="later";
const char string_1003[] PROGMEM ="latin";
const char string_1004[] PROGMEM ="laugh";
const char string_1005[] PROGMEM ="laundry";
const char string_1006[] PROGMEM ="lava";
const char string_1007[] PROGMEM ="law";
const char string_1008[] PROGMEM ="lawn";
const char string_1009[] PROGMEM ="lawsuit";
const char string_1010[] PROGMEM ="layer";
const char string_1011[] PROGMEM ="lazy";
const char string_1012[] PROGMEM ="leader";
const char string_1013[] PROGMEM ="leaf";
const char string_1014[] PROGMEM ="learn";
const char string_1015[] PROGMEM ="leave";
const char string_1016[] PROGMEM ="lecture";
const char string_1017[] PROGMEM ="left";
const char string_1018[] PROGMEM ="leg";
const char string_1019[] PROGMEM ="legal";
const char string_1020[] PROGMEM ="legend";
const char string_1021[] PROGMEM ="leisure";
const char string_1022[] PROGMEM ="lemon";
const char string_1023[] PROGMEM ="lend";
const char string_1024[] PROGMEM ="length";
const char string_1025[] PROGMEM ="lens";
const char string_1026[] PROGMEM ="leopard";
const char string_1027[] PROGMEM ="lesson";
const char string_1028[] PROGMEM ="letter";
const char string_1029[] PROGMEM ="level";
const char string_1030[] PROGMEM ="liar";
const char string_1031[] PROGMEM ="liberty";
const char string_1032[] PROGMEM ="library";
const char string_1033[] PROGMEM ="license";
const char string_1034[] PROGMEM ="life";
const char string_1035[] PROGMEM ="lift";
const char string_1036[] PROGMEM ="light";
const char string_1037[] PROGMEM ="like";
const char string_1038[] PROGMEM ="limb";
const char string_1039[] PROGMEM ="limit";
const char string_1040[] PROGMEM ="link";
const char string_1041[] PROGMEM ="lion";
const char string_1042[] PROGMEM ="liquid";
const char string_1043[] PROGMEM ="list";
const char string_1044[] PROGMEM ="little";
const char string_1045[] PROGMEM ="live";
const char string_1046[] PROGMEM ="lizard";
const char string_1047[] PROGMEM ="load";
const char string_1048[] PROGMEM ="loan";
const char string_1049[] PROGMEM ="lobster";
const char string_1050[] PROGMEM ="local";
const char string_1051[] PROGMEM ="lock";
const char string_1052[] PROGMEM ="logic";
const char string_1053[] PROGMEM ="lonely";
const char string_1054[] PROGMEM ="long";
const char string_1055[] PROGMEM ="loop";
const char string_1056[] PROGMEM ="lottery";
const char string_1057[] PROGMEM ="loud";
const char string_1058[] PROGMEM ="lounge";
const char string_1059[] PROGMEM ="love";
const char string_1060[] PROGMEM ="loyal";
const char string_1061[] PROGMEM ="lucky";
const char string_1062[] PROGMEM ="luggage";
const char string_1063[] PROGMEM ="lumber";
const char string_1064[] PROGMEM ="lunar";
const char string_1065[] PROGMEM ="lunch";
const char string_1066[] PROGMEM ="luxury";
const char string_1067[] PROGMEM ="lyrics";
const char string_1068[] PROGMEM ="machine";
const char string_1069[] PROGMEM ="mad";
const char string_1070[] PROGMEM ="magic";
const char string_1071[] PROGMEM ="magnet";
const char string_1072[] PROGMEM ="maid";
const char string_1073[] PROGMEM ="mail";
const char string_1074[] PROGMEM ="main";
const char string_1075[] PROGMEM ="major";
const char string_1076[] PROGMEM ="make";
const char string_1077[] PROGMEM ="mammal";
const char string_1078[] PROGMEM ="man";
const char string_1079[] PROGMEM ="manage";
const char string_1080[] PROGMEM ="mandate";
const char string_1081[] PROGMEM ="mango";
const char string_1082[] PROGMEM ="mansion";
const char string_1083[] PROGMEM ="manual";
const char string_1084[] PROGMEM ="maple";
const char string_1085[] PROGMEM ="marble";
const char string_1086[] PROGMEM ="march";
const char string_1087[] PROGMEM ="margin";
const char string_1088[] PROGMEM ="marine";
const char string_1089[] PROGMEM ="market";
const char string_1090[] PROGMEM ="marriage";
const char string_1091[] PROGMEM ="mask";
const char string_1092[] PROGMEM ="mass";
const char string_1093[] PROGMEM ="master";
const char string_1094[] PROGMEM ="match";
const char string_1095[] PROGMEM ="material";
const char string_1096[] PROGMEM ="math";
const char string_1097[] PROGMEM ="matrix";
const char string_1098[] PROGMEM ="matter";
const char string_1099[] PROGMEM ="maximum";
const char string_1100[] PROGMEM ="maze";
const char string_1101[] PROGMEM ="meadow";
const char string_1102[] PROGMEM ="mean";
const char string_1103[] PROGMEM ="measure";
const char string_1104[] PROGMEM ="meat";
const char string_1105[] PROGMEM ="mechanic";
const char string_1106[] PROGMEM ="medal";
const char string_1107[] PROGMEM ="media";
const char string_1108[] PROGMEM ="melody";
const char string_1109[] PROGMEM ="melt";
const char string_1110[] PROGMEM ="member";
const char string_1111[] PROGMEM ="memory";
const char string_1112[] PROGMEM ="mention";
const char string_1113[] PROGMEM ="menu";
const char string_1114[] PROGMEM ="mercy";
const char string_1115[] PROGMEM ="merge";
const char string_1116[] PROGMEM ="merit";
const char string_1117[] PROGMEM ="merry";
const char string_1118[] PROGMEM ="mesh";
const char string_1119[] PROGMEM ="message";
const char string_1120[] PROGMEM ="metal";
const char string_1121[] PROGMEM ="method";
const char string_1122[] PROGMEM ="middle";
const char string_1123[] PROGMEM ="midnight";
const char string_1124[] PROGMEM ="milk";
const char string_1125[] PROGMEM ="million";
const char string_1126[] PROGMEM ="mimic";
const char string_1127[] PROGMEM ="mind";
const char string_1128[] PROGMEM ="minimum";
const char string_1129[] PROGMEM ="minor";
const char string_1130[] PROGMEM ="minute";
const char string_1131[] PROGMEM ="miracle";
const char string_1132[] PROGMEM ="mirror";
const char string_1133[] PROGMEM ="misery";
const char string_1134[] PROGMEM ="miss";
const char string_1135[] PROGMEM ="mistake";
const char string_1136[] PROGMEM ="mix";
const char string_1137[] PROGMEM ="mixed";
const char string_1138[] PROGMEM ="mixture";
const char string_1139[] PROGMEM ="mobile";
const char string_1140[] PROGMEM ="model";
const char string_1141[] PROGMEM ="modify";
const char string_1142[] PROGMEM ="mom";
const char string_1143[] PROGMEM ="moment";
const char string_1144[] PROGMEM ="monitor";
const char string_1145[] PROGMEM ="monkey";
const char string_1146[] PROGMEM ="monster";
const char string_1147[] PROGMEM ="month";
const char string_1148[] PROGMEM ="moon";
const char string_1149[] PROGMEM ="moral";
const char string_1150[] PROGMEM ="more";
const char string_1151[] PROGMEM ="morning";
const char string_1152[] PROGMEM ="mosquito";
const char string_1153[] PROGMEM ="mother";
const char string_1154[] PROGMEM ="motion";
const char string_1155[] PROGMEM ="motor";
const char string_1156[] PROGMEM ="mountain";
const char string_1157[] PROGMEM ="mouse";
const char string_1158[] PROGMEM ="move";
const char string_1159[] PROGMEM ="movie";
const char string_1160[] PROGMEM ="much";
const char string_1161[] PROGMEM ="muffin";
const char string_1162[] PROGMEM ="mule";
const char string_1163[] PROGMEM ="multiply";
const char string_1164[] PROGMEM ="muscle";
const char string_1165[] PROGMEM ="museum";
const char string_1166[] PROGMEM ="mushroom";
const char string_1167[] PROGMEM ="music";
const char string_1168[] PROGMEM ="must";
const char string_1169[] PROGMEM ="mutual";
const char string_1170[] PROGMEM ="myself";
const char string_1171[] PROGMEM ="mystery";
const char string_1172[] PROGMEM ="myth";
const char string_1173[] PROGMEM ="naive";
const char string_1174[] PROGMEM ="name";
const char string_1175[] PROGMEM ="napkin";
const char string_1176[] PROGMEM ="narrow";
const char string_1177[] PROGMEM ="nasty";
const char string_1178[] PROGMEM ="nation";
const char string_1179[] PROGMEM ="nature";
const char string_1180[] PROGMEM ="near";
const char string_1181[] PROGMEM ="neck";
const char string_1182[] PROGMEM ="need";
const char string_1183[] PROGMEM ="negative";
const char string_1184[] PROGMEM ="neglect";
const char string_1185[] PROGMEM ="neither";
const char string_1186[] PROGMEM ="nephew";
const char string_1187[] PROGMEM ="nerve";
const char string_1188[] PROGMEM ="nest";
const char string_1189[] PROGMEM ="net";
const char string_1190[] PROGMEM ="network";
const char string_1191[] PROGMEM ="neutral";
const char string_1192[] PROGMEM ="never";
const char string_1193[] PROGMEM ="news";
const char string_1194[] PROGMEM ="next";
const char string_1195[] PROGMEM ="nice";
const char string_1196[] PROGMEM ="night";
const char string_1197[] PROGMEM ="noble";
const char string_1198[] PROGMEM ="noise";
const char string_1199[] PROGMEM ="nominee";
const char string_1200[] PROGMEM ="noodle";
const char string_1201[] PROGMEM ="normal";
const char string_1202[] PROGMEM ="north";
const char string_1203[] PROGMEM ="nose";
const char string_1204[] PROGMEM ="notable";
const char string_1205[] PROGMEM ="note";
const char string_1206[] PROGMEM ="nothing";
const char string_1207[] PROGMEM ="notice";
const char string_1208[] PROGMEM ="novel";
const char string_1209[] PROGMEM ="now";
const char string_1210[] PROGMEM ="nuclear";
const char string_1211[] PROGMEM ="number";
const char string_1212[] PROGMEM ="nurse";
const char string_1213[] PROGMEM ="nut";
const char string_1214[] PROGMEM ="oak";
const char string_1215[] PROGMEM ="obey";
const char string_1216[] PROGMEM ="object";
const char string_1217[] PROGMEM ="oblige";
const char string_1218[] PROGMEM ="obscure";
const char string_1219[] PROGMEM ="observe";
const char string_1220[] PROGMEM ="obtain";
const char string_1221[] PROGMEM ="obvious";
const char string_1222[] PROGMEM ="occur";
const char string_1223[] PROGMEM ="ocean";
const char string_1224[] PROGMEM ="october";
const char string_1225[] PROGMEM ="odor";
const char string_1226[] PROGMEM ="off";
const char string_1227[] PROGMEM ="offer";
const char string_1228[] PROGMEM ="office";
const char string_1229[] PROGMEM ="often";
const char string_1230[] PROGMEM ="oil";
const char string_1231[] PROGMEM ="okay";
const char string_1232[] PROGMEM ="old";
const char string_1233[] PROGMEM ="olive";
const char string_1234[] PROGMEM ="olympic";
const char string_1235[] PROGMEM ="omit";
const char string_1236[] PROGMEM ="once";
const char string_1237[] PROGMEM ="one";
const char string_1238[] PROGMEM ="onion";
const char string_1239[] PROGMEM ="online";
const char string_1240[] PROGMEM ="only";
const char string_1241[] PROGMEM ="open";
const char string_1242[] PROGMEM ="opera";
const char string_1243[] PROGMEM ="opinion";
const char string_1244[] PROGMEM ="oppose";
const char string_1245[] PROGMEM ="option";
const char string_1246[] PROGMEM ="orange";
const char string_1247[] PROGMEM ="orbit";
const char string_1248[] PROGMEM ="orchard";
const char string_1249[] PROGMEM ="order";
const char string_1250[] PROGMEM ="ordinary";
const char string_1251[] PROGMEM ="organ";
const char string_1252[] PROGMEM ="orient";
const char string_1253[] PROGMEM ="original";
const char string_1254[] PROGMEM ="orphan";
const char string_1255[] PROGMEM ="ostrich";
const char string_1256[] PROGMEM ="other";
const char string_1257[] PROGMEM ="outdoor";
const char string_1258[] PROGMEM ="outer";
const char string_1259[] PROGMEM ="output";
const char string_1260[] PROGMEM ="outside";
const char string_1261[] PROGMEM ="oval";
const char string_1262[] PROGMEM ="oven";
const char string_1263[] PROGMEM ="over";
const char string_1264[] PROGMEM ="own";
const char string_1265[] PROGMEM ="owner";
const char string_1266[] PROGMEM ="oxygen";
const char string_1267[] PROGMEM ="oyster";
const char string_1268[] PROGMEM ="ozone";
const char string_1269[] PROGMEM ="pact";
const char string_1270[] PROGMEM ="paddle";
const char string_1271[] PROGMEM ="page";
const char string_1272[] PROGMEM ="pair";
const char string_1273[] PROGMEM ="palace";
const char string_1274[] PROGMEM ="palm";
const char string_1275[] PROGMEM ="panda";
const char string_1276[] PROGMEM ="panel";
const char string_1277[] PROGMEM ="panic";
const char string_1278[] PROGMEM ="panther";
const char string_1279[] PROGMEM ="paper";
const char string_1280[] PROGMEM ="parade";
const char string_1281[] PROGMEM ="parent";
const char string_1282[] PROGMEM ="park";
const char string_1283[] PROGMEM ="parrot";
const char string_1284[] PROGMEM ="party";
const char string_1285[] PROGMEM ="pass";
const char string_1286[] PROGMEM ="patch";
const char string_1287[] PROGMEM ="path";
const char string_1288[] PROGMEM ="patient";
const char string_1289[] PROGMEM ="patrol";
const char string_1290[] PROGMEM ="pattern";
const char string_1291[] PROGMEM ="pause";
const char string_1292[] PROGMEM ="pave";
const char string_1293[] PROGMEM ="payment";
const char string_1294[] PROGMEM ="peace";
const char string_1295[] PROGMEM ="peanut";
const char string_1296[] PROGMEM ="pear";
const char string_1297[] PROGMEM ="peasant";
const char string_1298[] PROGMEM ="pelican";
const char string_1299[] PROGMEM ="pen";
const char string_1300[] PROGMEM ="penalty";
const char string_1301[] PROGMEM ="pencil";
const char string_1302[] PROGMEM ="people";
const char string_1303[] PROGMEM ="pepper";
const char string_1304[] PROGMEM ="perfect";
const char string_1305[] PROGMEM ="permit";
const char string_1306[] PROGMEM ="person";
const char string_1307[] PROGMEM ="pet";
const char string_1308[] PROGMEM ="phone";
const char string_1309[] PROGMEM ="photo";
const char string_1310[] PROGMEM ="phrase";
const char string_1311[] PROGMEM ="physical";
const char string_1312[] PROGMEM ="piano";
const char string_1313[] PROGMEM ="picnic";
const char string_1314[] PROGMEM ="picture";
const char string_1315[] PROGMEM ="piece";
const char string_1316[] PROGMEM ="pig";
const char string_1317[] PROGMEM ="pigeon";
const char string_1318[] PROGMEM ="pill";
const char string_1319[] PROGMEM ="pilot";
const char string_1320[] PROGMEM ="pink";
const char string_1321[] PROGMEM ="pioneer";
const char string_1322[] PROGMEM ="pipe";
const char string_1323[] PROGMEM ="pistol";
const char string_1324[] PROGMEM ="pitch";
const char string_1325[] PROGMEM ="pizza";
const char string_1326[] PROGMEM ="place";
const char string_1327[] PROGMEM ="planet";
const char string_1328[] PROGMEM ="plastic";
const char string_1329[] PROGMEM ="plate";
const char string_1330[] PROGMEM ="play";
const char string_1331[] PROGMEM ="please";
const char string_1332[] PROGMEM ="pledge";
const char string_1333[] PROGMEM ="pluck";
const char string_1334[] PROGMEM ="plug";
const char string_1335[] PROGMEM ="plunge";
const char string_1336[] PROGMEM ="poem";
const char string_1337[] PROGMEM ="poet";
const char string_1338[] PROGMEM ="point";
const char string_1339[] PROGMEM ="polar";
const char string_1340[] PROGMEM ="pole";
const char string_1341[] PROGMEM ="police";
const char string_1342[] PROGMEM ="pond";
const char string_1343[] PROGMEM ="pony";
const char string_1344[] PROGMEM ="pool";
const char string_1345[] PROGMEM ="popular";
const char string_1346[] PROGMEM ="portion";
const char string_1347[] PROGMEM ="position";
const char string_1348[] PROGMEM ="possible";
const char string_1349[] PROGMEM ="post";
const char string_1350[] PROGMEM ="potato";
const char string_1351[] PROGMEM ="pottery";
const char string_1352[] PROGMEM ="poverty";
const char string_1353[] PROGMEM ="powder";
const char string_1354[] PROGMEM ="power";
const char string_1355[] PROGMEM ="practice";
const char string_1356[] PROGMEM ="praise";
const char string_1357[] PROGMEM ="predict";
const char string_1358[] PROGMEM ="prefer";
const char string_1359[] PROGMEM ="prepare";
const char string_1360[] PROGMEM ="present";
const char string_1361[] PROGMEM ="pretty";
const char string_1362[] PROGMEM ="prevent";
const char string_1363[] PROGMEM ="price";
const char string_1364[] PROGMEM ="pride";
const char string_1365[] PROGMEM ="primary";
const char string_1366[] PROGMEM ="print";
const char string_1367[] PROGMEM ="priority";
const char string_1368[] PROGMEM ="prison";
const char string_1369[] PROGMEM ="private";
const char string_1370[] PROGMEM ="prize";
const char string_1371[] PROGMEM ="problem";
const char string_1372[] PROGMEM ="process";
const char string_1373[] PROGMEM ="produce";
const char string_1374[] PROGMEM ="profit";
const char string_1375[] PROGMEM ="program";
const char string_1376[] PROGMEM ="project";
const char string_1377[] PROGMEM ="promote";
const char string_1378[] PROGMEM ="proof";
const char string_1379[] PROGMEM ="property";
const char string_1380[] PROGMEM ="prosper";
const char string_1381[] PROGMEM ="protect";
const char string_1382[] PROGMEM ="proud";
const char string_1383[] PROGMEM ="provide";
const char string_1384[] PROGMEM ="public";
const char string_1385[] PROGMEM ="pudding";
const char string_1386[] PROGMEM ="pull";
const char string_1387[] PROGMEM ="pulp";
const char string_1388[] PROGMEM ="pulse";
const char string_1389[] PROGMEM ="pumpkin";
const char string_1390[] PROGMEM ="punch";
const char string_1391[] PROGMEM ="pupil";
const char string_1392[] PROGMEM ="puppy";
const char string_1393[] PROGMEM ="purchase";
const char string_1394[] PROGMEM ="purity";
const char string_1395[] PROGMEM ="purpose";
const char string_1396[] PROGMEM ="purse";
const char string_1397[] PROGMEM ="push";
const char string_1398[] PROGMEM ="put";
const char string_1399[] PROGMEM ="puzzle";
const char string_1400[] PROGMEM ="pyramid";
const char string_1401[] PROGMEM ="quality";
const char string_1402[] PROGMEM ="quantum";
const char string_1403[] PROGMEM ="quarter";
const char string_1404[] PROGMEM ="question";
const char string_1405[] PROGMEM ="quick";
const char string_1406[] PROGMEM ="quit";
const char string_1407[] PROGMEM ="quiz";
const char string_1408[] PROGMEM ="quote";
const char string_1409[] PROGMEM ="rabbit";
const char string_1410[] PROGMEM ="raccoon";
const char string_1411[] PROGMEM ="race";
const char string_1412[] PROGMEM ="rack";
const char string_1413[] PROGMEM ="radar";
const char string_1414[] PROGMEM ="radio";
const char string_1415[] PROGMEM ="rail";
const char string_1416[] PROGMEM ="rain";
const char string_1417[] PROGMEM ="raise";
const char string_1418[] PROGMEM ="rally";
const char string_1419[] PROGMEM ="ramp";
const char string_1420[] PROGMEM ="ranch";
const char string_1421[] PROGMEM ="random";
const char string_1422[] PROGMEM ="range";
const char string_1423[] PROGMEM ="rapid";
const char string_1424[] PROGMEM ="rare";
const char string_1425[] PROGMEM ="rate";
const char string_1426[] PROGMEM ="rather";
const char string_1427[] PROGMEM ="raven";
const char string_1428[] PROGMEM ="raw";
const char string_1429[] PROGMEM ="razor";
const char string_1430[] PROGMEM ="ready";
const char string_1431[] PROGMEM ="real";
const char string_1432[] PROGMEM ="reason";
const char string_1433[] PROGMEM ="rebel";
const char string_1434[] PROGMEM ="rebuild";
const char string_1435[] PROGMEM ="recall";
const char string_1436[] PROGMEM ="receive";
const char string_1437[] PROGMEM ="recipe";
const char string_1438[] PROGMEM ="record";
const char string_1439[] PROGMEM ="recycle";
const char string_1440[] PROGMEM ="reduce";
const char string_1441[] PROGMEM ="reflect";
const char string_1442[] PROGMEM ="reform";
const char string_1443[] PROGMEM ="refuse";
const char string_1444[] PROGMEM ="region";
const char string_1445[] PROGMEM ="regret";
const char string_1446[] PROGMEM ="regular";
const char string_1447[] PROGMEM ="reject";
const char string_1448[] PROGMEM ="relax";
const char string_1449[] PROGMEM ="release";
const char string_1450[] PROGMEM ="relief";
const char string_1451[] PROGMEM ="rely";
const char string_1452[] PROGMEM ="remain";
const char string_1453[] PROGMEM ="remember";
const char string_1454[] PROGMEM ="remind";
const char string_1455[] PROGMEM ="remove";
const char string_1456[] PROGMEM ="render";
const char string_1457[] PROGMEM ="renew";
const char string_1458[] PROGMEM ="rent";
const char string_1459[] PROGMEM ="reopen";
const char string_1460[] PROGMEM ="repair";
const char string_1461[] PROGMEM ="repeat";
const char string_1462[] PROGMEM ="replace";
const char string_1463[] PROGMEM ="report";
const char string_1464[] PROGMEM ="require";
const char string_1465[] PROGMEM ="rescue";
const char string_1466[] PROGMEM ="resemble";
const char string_1467[] PROGMEM ="resist";
const char string_1468[] PROGMEM ="resource";
const char string_1469[] PROGMEM ="response";
const char string_1470[] PROGMEM ="result";
const char string_1471[] PROGMEM ="retire";
const char string_1472[] PROGMEM ="retreat";
const char string_1473[] PROGMEM ="return";
const char string_1474[] PROGMEM ="reunion";
const char string_1475[] PROGMEM ="reveal";
const char string_1476[] PROGMEM ="review";
const char string_1477[] PROGMEM ="reward";
const char string_1478[] PROGMEM ="rhythm";
const char string_1479[] PROGMEM ="rib";
const char string_1480[] PROGMEM ="ribbon";
const char string_1481[] PROGMEM ="rice";
const char string_1482[] PROGMEM ="rich";
const char string_1483[] PROGMEM ="ride";
const char string_1484[] PROGMEM ="ridge";
const char string_1485[] PROGMEM ="rifle";
const char string_1486[] PROGMEM ="right";
const char string_1487[] PROGMEM ="rigid";
const char string_1488[] PROGMEM ="ring";
const char string_1489[] PROGMEM ="riot";
const char string_1490[] PROGMEM ="ripple";
const char string_1491[] PROGMEM ="risk";
const char string_1492[] PROGMEM ="ritual";
const char string_1493[] PROGMEM ="rival";
const char string_1494[] PROGMEM ="river";
const char string_1495[] PROGMEM ="road";
const char string_1496[] PROGMEM ="roast";
const char string_1497[] PROGMEM ="robot";
const char string_1498[] PROGMEM ="robust";
const char string_1499[] PROGMEM ="rocket";
const char string_1500[] PROGMEM ="romance";
const char string_1501[] PROGMEM ="roof";
const char string_1502[] PROGMEM ="rookie";
const char string_1503[] PROGMEM ="room";
const char string_1504[] PROGMEM ="rose";
const char string_1505[] PROGMEM ="rotate";
const char string_1506[] PROGMEM ="rough";
const char string_1507[] PROGMEM ="round";
const char string_1508[] PROGMEM ="route";
const char string_1509[] PROGMEM ="royal";
const char string_1510[] PROGMEM ="rubber";
const char string_1511[] PROGMEM ="rude";
const char string_1512[] PROGMEM ="rug";
const char string_1513[] PROGMEM ="rule";
const char string_1514[] PROGMEM ="run";
const char string_1515[] PROGMEM ="runway";
const char string_1516[] PROGMEM ="rural";
const char string_1517[] PROGMEM ="sad";
const char string_1518[] PROGMEM ="saddle";
const char string_1519[] PROGMEM ="sadness";
const char string_1520[] PROGMEM ="safe";
const char string_1521[] PROGMEM ="sail";
const char string_1522[] PROGMEM ="salad";
const char string_1523[] PROGMEM ="salmon";
const char string_1524[] PROGMEM ="salon";
const char string_1525[] PROGMEM ="salt";
const char string_1526[] PROGMEM ="salute";
const char string_1527[] PROGMEM ="same";
const char string_1528[] PROGMEM ="sample";
const char string_1529[] PROGMEM ="sand";
const char string_1530[] PROGMEM ="satisfy";
const char string_1531[] PROGMEM ="satoshi";
const char string_1532[] PROGMEM ="sauce";
const char string_1533[] PROGMEM ="sausage";
const char string_1534[] PROGMEM ="save";
const char string_1535[] PROGMEM ="say";
const char string_1536[] PROGMEM ="scale";
const char string_1537[] PROGMEM ="scan";
const char string_1538[] PROGMEM ="scare";
const char string_1539[] PROGMEM ="scatter";
const char string_1540[] PROGMEM ="scene";
const char string_1541[] PROGMEM ="scheme";
const char string_1542[] PROGMEM ="school";
const char string_1543[] PROGMEM ="science";
const char string_1544[] PROGMEM ="scissors";
const char string_1545[] PROGMEM ="scorpion";
const char string_1546[] PROGMEM ="scout";
const char string_1547[] PROGMEM ="scrap";
const char string_1548[] PROGMEM ="screen";
const char string_1549[] PROGMEM ="script";
const char string_1550[] PROGMEM ="scrub";
const char string_1551[] PROGMEM ="sea";
const char string_1552[] PROGMEM ="search";
const char string_1553[] PROGMEM ="season";
const char string_1554[] PROGMEM ="seat";
const char string_1555[] PROGMEM ="second";
const char string_1556[] PROGMEM ="secret";
const char string_1557[] PROGMEM ="section";
const char string_1558[] PROGMEM ="security";
const char string_1559[] PROGMEM ="seed";
const char string_1560[] PROGMEM ="seek";
const char string_1561[] PROGMEM ="segment";
const char string_1562[] PROGMEM ="select";
const char string_1563[] PROGMEM ="sell";
const char string_1564[] PROGMEM ="seminar";
const char string_1565[] PROGMEM ="senior";
const char string_1566[] PROGMEM ="sense";
const char string_1567[] PROGMEM ="sentence";
const char string_1568[] PROGMEM ="series";
const char string_1569[] PROGMEM ="service";
const char string_1570[] PROGMEM ="session";
const char string_1571[] PROGMEM ="settle";
const char string_1572[] PROGMEM ="setup";
const char string_1573[] PROGMEM ="seven";
const char string_1574[] PROGMEM ="shadow";
const char string_1575[] PROGMEM ="shaft";
const char string_1576[] PROGMEM ="shallow";
const char string_1577[] PROGMEM ="share";
const char string_1578[] PROGMEM ="shed";
const char string_1579[] PROGMEM ="shell";
const char string_1580[] PROGMEM ="sheriff";
const char string_1581[] PROGMEM ="shield";
const char string_1582[] PROGMEM ="shift";
const char string_1583[] PROGMEM ="shine";
const char string_1584[] PROGMEM ="ship";
const char string_1585[] PROGMEM ="shiver";
const char string_1586[] PROGMEM ="shock";
const char string_1587[] PROGMEM ="shoe";
const char string_1588[] PROGMEM ="shoot";
const char string_1589[] PROGMEM ="shop";
const char string_1590[] PROGMEM ="short";
const char string_1591[] PROGMEM ="shoulder";
const char string_1592[] PROGMEM ="shove";
const char string_1593[] PROGMEM ="shrimp";
const char string_1594[] PROGMEM ="shrug";
const char string_1595[] PROGMEM ="shuffle";
const char string_1596[] PROGMEM ="shy";
const char string_1597[] PROGMEM ="sibling";
const char string_1598[] PROGMEM ="sick";
const char string_1599[] PROGMEM ="side";
const char string_1600[] PROGMEM ="siege";
const char string_1601[] PROGMEM ="sight";
const char string_1602[] PROGMEM ="sign";
const char string_1603[] PROGMEM ="silent";
const char string_1604[] PROGMEM ="silk";
const char string_1605[] PROGMEM ="silly";
const char string_1606[] PROGMEM ="silver";
const char string_1607[] PROGMEM ="similar";
const char string_1608[] PROGMEM ="simple";
const char string_1609[] PROGMEM ="since";
const char string_1610[] PROGMEM ="sing";
const char string_1611[] PROGMEM ="siren";
const char string_1612[] PROGMEM ="sister";
const char string_1613[] PROGMEM ="situate";
const char string_1614[] PROGMEM ="six";
const char string_1615[] PROGMEM ="size";
const char string_1616[] PROGMEM ="skate";
const char string_1617[] PROGMEM ="sketch";
const char string_1618[] PROGMEM ="ski";
const char string_1619[] PROGMEM ="skill";
const char string_1620[] PROGMEM ="skin";
const char string_1621[] PROGMEM ="skirt";
const char string_1622[] PROGMEM ="skull";
const char string_1623[] PROGMEM ="slab";
const char string_1624[] PROGMEM ="slam";
const char string_1625[] PROGMEM ="sleep";
const char string_1626[] PROGMEM ="slender";
const char string_1627[] PROGMEM ="slice";
const char string_1628[] PROGMEM ="slide";
const char string_1629[] PROGMEM ="slight";
const char string_1630[] PROGMEM ="slim";
const char string_1631[] PROGMEM ="slogan";
const char string_1632[] PROGMEM ="slot";
const char string_1633[] PROGMEM ="slow";
const char string_1634[] PROGMEM ="slush";
const char string_1635[] PROGMEM ="small";
const char string_1636[] PROGMEM ="smart";
const char string_1637[] PROGMEM ="smile";
const char string_1638[] PROGMEM ="smoke";
const char string_1639[] PROGMEM ="smooth";
const char string_1640[] PROGMEM ="snack";
const char string_1641[] PROGMEM ="snake";
const char string_1642[] PROGMEM ="snap";
const char string_1643[] PROGMEM ="sniff";
const char string_1644[] PROGMEM ="snow";
const char string_1645[] PROGMEM ="soap";
const char string_1646[] PROGMEM ="soccer";
const char string_1647[] PROGMEM ="social";
const char string_1648[] PROGMEM ="sock";
const char string_1649[] PROGMEM ="soda";
const char string_1650[] PROGMEM ="soft";
const char string_1651[] PROGMEM ="solar";
const char string_1652[] PROGMEM ="soldier";
const char string_1653[] PROGMEM ="solid";
const char string_1654[] PROGMEM ="solution";
const char string_1655[] PROGMEM ="solve";
const char string_1656[] PROGMEM ="someone";
const char string_1657[] PROGMEM ="song";
const char string_1658[] PROGMEM ="soon";
const char string_1659[] PROGMEM ="sorry";
const char string_1660[] PROGMEM ="sort";
const char string_1661[] PROGMEM ="soul";
const char string_1662[] PROGMEM ="sound";
const char string_1663[] PROGMEM ="soup";
const char string_1664[] PROGMEM ="source";
const char string_1665[] PROGMEM ="south";
const char string_1666[] PROGMEM ="space";
const char string_1667[] PROGMEM ="spare";
const char string_1668[] PROGMEM ="spatial";
const char string_1669[] PROGMEM ="spawn";
const char string_1670[] PROGMEM ="speak";
const char string_1671[] PROGMEM ="special";
const char string_1672[] PROGMEM ="speed";
const char string_1673[] PROGMEM ="spell";
const char string_1674[] PROGMEM ="spend";
const char string_1675[] PROGMEM ="sphere";
const char string_1676[] PROGMEM ="spice";
const char string_1677[] PROGMEM ="spider";
const char string_1678[] PROGMEM ="spike";
const char string_1679[] PROGMEM ="spin";
const char string_1680[] PROGMEM ="spirit";
const char string_1681[] PROGMEM ="split";
const char string_1682[] PROGMEM ="spoil";
const char string_1683[] PROGMEM ="sponsor";
const char string_1684[] PROGMEM ="spoon";
const char string_1685[] PROGMEM ="sport";
const char string_1686[] PROGMEM ="spot";
const char string_1687[] PROGMEM ="spray";
const char string_1688[] PROGMEM ="spread";
const char string_1689[] PROGMEM ="spring";
const char string_1690[] PROGMEM ="spy";
const char string_1691[] PROGMEM ="square";
const char string_1692[] PROGMEM ="squeeze";
const char string_1693[] PROGMEM ="squirrel";
const char string_1694[] PROGMEM ="stable";
const char string_1695[] PROGMEM ="stadium";
const char string_1696[] PROGMEM ="staff";
const char string_1697[] PROGMEM ="stage";
const char string_1698[] PROGMEM ="stairs";
const char string_1699[] PROGMEM ="stamp";
const char string_1700[] PROGMEM ="stand";
const char string_1701[] PROGMEM ="start";
const char string_1702[] PROGMEM ="state";
const char string_1703[] PROGMEM ="stay";
const char string_1704[] PROGMEM ="steak";
const char string_1705[] PROGMEM ="steel";
const char string_1706[] PROGMEM ="stem";
const char string_1707[] PROGMEM ="step";
const char string_1708[] PROGMEM ="stereo";
const char string_1709[] PROGMEM ="stick";
const char string_1710[] PROGMEM ="still";
const char string_1711[] PROGMEM ="sting";
const char string_1712[] PROGMEM ="stock";
const char string_1713[] PROGMEM ="stomach";
const char string_1714[] PROGMEM ="stone";
const char string_1715[] PROGMEM ="stool";
const char string_1716[] PROGMEM ="story";
const char string_1717[] PROGMEM ="stove";
const char string_1718[] PROGMEM ="strategy";
const char string_1719[] PROGMEM ="street";
const char string_1720[] PROGMEM ="strike";
const char string_1721[] PROGMEM ="strong";
const char string_1722[] PROGMEM ="struggle";
const char string_1723[] PROGMEM ="student";
const char string_1724[] PROGMEM ="stuff";
const char string_1725[] PROGMEM ="stumble";
const char string_1726[] PROGMEM ="style";
const char string_1727[] PROGMEM ="subject";
const char string_1728[] PROGMEM ="submit";
const char string_1729[] PROGMEM ="subway";
const char string_1730[] PROGMEM ="success";
const char string_1731[] PROGMEM ="such";
const char string_1732[] PROGMEM ="sudden";
const char string_1733[] PROGMEM ="suffer";
const char string_1734[] PROGMEM ="sugar";
const char string_1735[] PROGMEM ="suggest";
const char string_1736[] PROGMEM ="suit";
const char string_1737[] PROGMEM ="summer";
const char string_1738[] PROGMEM ="sun";
const char string_1739[] PROGMEM ="sunny";
const char string_1740[] PROGMEM ="sunset";
const char string_1741[] PROGMEM ="super";
const char string_1742[] PROGMEM ="supply";
const char string_1743[] PROGMEM ="supreme";
const char string_1744[] PROGMEM ="sure";
const char string_1745[] PROGMEM ="surface";
const char string_1746[] PROGMEM ="surge";
const char string_1747[] PROGMEM ="surprise";
const char string_1748[] PROGMEM ="surround";
const char string_1749[] PROGMEM ="survey";
const char string_1750[] PROGMEM ="suspect";
const char string_1751[] PROGMEM ="sustain";
const char string_1752[] PROGMEM ="swallow";
const char string_1753[] PROGMEM ="swamp";
const char string_1754[] PROGMEM ="swap";
const char string_1755[] PROGMEM ="swarm";
const char string_1756[] PROGMEM ="swear";
const char string_1757[] PROGMEM ="sweet";
const char string_1758[] PROGMEM ="swift";
const char string_1759[] PROGMEM ="swim";
const char string_1760[] PROGMEM ="swing";
const char string_1761[] PROGMEM ="switch";
const char string_1762[] PROGMEM ="sword";
const char string_1763[] PROGMEM ="symbol";
const char string_1764[] PROGMEM ="symptom";
const char string_1765[] PROGMEM ="syrup";
const char string_1766[] PROGMEM ="system";
const char string_1767[] PROGMEM ="table";
const char string_1768[] PROGMEM ="tackle";
const char string_1769[] PROGMEM ="tag";
const char string_1770[] PROGMEM ="tail";
const char string_1771[] PROGMEM ="talent";
const char string_1772[] PROGMEM ="talk";
const char string_1773[] PROGMEM ="tank";
const char string_1774[] PROGMEM ="tape";
const char string_1775[] PROGMEM ="target";
const char string_1776[] PROGMEM ="task";
const char string_1777[] PROGMEM ="taste";
const char string_1778[] PROGMEM ="tattoo";
const char string_1779[] PROGMEM ="taxi";
const char string_1780[] PROGMEM ="teach";
const char string_1781[] PROGMEM ="team";
const char string_1782[] PROGMEM ="tell";
const char string_1783[] PROGMEM ="ten";
const char string_1784[] PROGMEM ="tenant";
const char string_1785[] PROGMEM ="tennis";
const char string_1786[] PROGMEM ="tent";
const char string_1787[] PROGMEM ="term";
const char string_1788[] PROGMEM ="test";
const char string_1789[] PROGMEM ="text";
const char string_1790[] PROGMEM ="thank";
const char string_1791[] PROGMEM ="that";
const char string_1792[] PROGMEM ="theme";
const char string_1793[] PROGMEM ="then";
const char string_1794[] PROGMEM ="theory";
const char string_1795[] PROGMEM ="there";
const char string_1796[] PROGMEM ="they";
const char string_1797[] PROGMEM ="thing";
const char string_1798[] PROGMEM ="this";
const char string_1799[] PROGMEM ="thought";
const char string_1800[] PROGMEM ="three";
const char string_1801[] PROGMEM ="thrive";
const char string_1802[] PROGMEM ="throw";
const char string_1803[] PROGMEM ="thumb";
const char string_1804[] PROGMEM ="thunder";
const char string_1805[] PROGMEM ="ticket";
const char string_1806[] PROGMEM ="tide";
const char string_1807[] PROGMEM ="tiger";
const char string_1808[] PROGMEM ="tilt";
const char string_1809[] PROGMEM ="timber";
const char string_1810[] PROGMEM ="time";
const char string_1811[] PROGMEM ="tiny";
const char string_1812[] PROGMEM ="tip";
const char string_1813[] PROGMEM ="tired";
const char string_1814[] PROGMEM ="tissue";
const char string_1815[] PROGMEM ="title";
const char string_1816[] PROGMEM ="toast";
const char string_1817[] PROGMEM ="tobacco";
const char string_1818[] PROGMEM ="today";
const char string_1819[] PROGMEM ="toddler";
const char string_1820[] PROGMEM ="toe";
const char string_1821[] PROGMEM ="together";
const char string_1822[] PROGMEM ="toilet";
const char string_1823[] PROGMEM ="token";
const char string_1824[] PROGMEM ="tomato";
const char string_1825[] PROGMEM ="tomorrow";
const char string_1826[] PROGMEM ="tone";
const char string_1827[] PROGMEM ="tongue";
const char string_1828[] PROGMEM ="tonight";
const char string_1829[] PROGMEM ="tool";
const char string_1830[] PROGMEM ="tooth";
const char string_1831[] PROGMEM ="top";
const char string_1832[] PROGMEM ="topic";
const char string_1833[] PROGMEM ="topple";
const char string_1834[] PROGMEM ="torch";
const char string_1835[] PROGMEM ="tornado";
const char string_1836[] PROGMEM ="tortoise";
const char string_1837[] PROGMEM ="toss";
const char string_1838[] PROGMEM ="total";
const char string_1839[] PROGMEM ="tourist";
const char string_1840[] PROGMEM ="toward";
const char string_1841[] PROGMEM ="tower";
const char string_1842[] PROGMEM ="town";
const char string_1843[] PROGMEM ="toy";
const char string_1844[] PROGMEM ="track";
const char string_1845[] PROGMEM ="trade";
const char string_1846[] PROGMEM ="traffic";
const char string_1847[] PROGMEM ="tragic";
const char string_1848[] PROGMEM ="train";
const char string_1849[] PROGMEM ="transfer";
const char string_1850[] PROGMEM ="trap";
const char string_1851[] PROGMEM ="trash";
const char string_1852[] PROGMEM ="travel";
const char string_1853[] PROGMEM ="tray";
const char string_1854[] PROGMEM ="treat";
const char string_1855[] PROGMEM ="tree";
const char string_1856[] PROGMEM ="trend";
const char string_1857[] PROGMEM ="trial";
const char string_1858[] PROGMEM ="tribe";
const char string_1859[] PROGMEM ="trick";
const char string_1860[] PROGMEM ="trigger";
const char string_1861[] PROGMEM ="trim";
const char string_1862[] PROGMEM ="trip";
const char string_1863[] PROGMEM ="trophy";
const char string_1864[] PROGMEM ="trouble";
const char string_1865[] PROGMEM ="truck";
const char string_1866[] PROGMEM ="true";
const char string_1867[] PROGMEM ="truly";
const char string_1868[] PROGMEM ="trumpet";
const char string_1869[] PROGMEM ="trust";
const char string_1870[] PROGMEM ="truth";
const char string_1871[] PROGMEM ="try";
const char string_1872[] PROGMEM ="tube";
const char string_1873[] PROGMEM ="tuition";
const char string_1874[] PROGMEM ="tumble";
const char string_1875[] PROGMEM ="tuna";
const char string_1876[] PROGMEM ="tunnel";
const char string_1877[] PROGMEM ="turkey";
const char string_1878[] PROGMEM ="turn";
const char string_1879[] PROGMEM ="turtle";
const char string_1880[] PROGMEM ="twelve";
const char string_1881[] PROGMEM ="twenty";
const char string_1882[] PROGMEM ="twice";
const char string_1883[] PROGMEM ="twin";
const char string_1884[] PROGMEM ="twist";
const char string_1885[] PROGMEM ="two";
const char string_1886[] PROGMEM ="type";
const char string_1887[] PROGMEM ="typical";
const char string_1888[] PROGMEM ="ugly";
const char string_1889[] PROGMEM ="umbrella";
const char string_1890[] PROGMEM ="unable";
const char string_1891[] PROGMEM ="unaware";
const char string_1892[] PROGMEM ="uncle";
const char string_1893[] PROGMEM ="uncover";
const char string_1894[] PROGMEM ="under";
const char string_1895[] PROGMEM ="undo";
const char string_1896[] PROGMEM ="unfair";
const char string_1897[] PROGMEM ="unfold";
const char string_1898[] PROGMEM ="unhappy";
const char string_1899[] PROGMEM ="uniform";
const char string_1900[] PROGMEM ="unique";
const char string_1901[] PROGMEM ="unit";
const char string_1902[] PROGMEM ="universe";
const char string_1903[] PROGMEM ="unknown";
const char string_1904[] PROGMEM ="unlock";
const char string_1905[] PROGMEM ="until";
const char string_1906[] PROGMEM ="unusual";
const char string_1907[] PROGMEM ="unveil";
const char string_1908[] PROGMEM ="update";
const char string_1909[] PROGMEM ="upgrade";
const char string_1910[] PROGMEM ="uphold";
const char string_1911[] PROGMEM ="upon";
const char string_1912[] PROGMEM ="upper";
const char string_1913[] PROGMEM ="upset";
const char string_1914[] PROGMEM ="urban";
const char string_1915[] PROGMEM ="urge";
const char string_1916[] PROGMEM ="usage";
const char string_1917[] PROGMEM ="use";
const char string_1918[] PROGMEM ="used";
const char string_1919[] PROGMEM ="useful";
const char string_1920[] PROGMEM ="useless";
const char string_1921[] PROGMEM ="usual";
const char string_1922[] PROGMEM ="utility";
const char string_1923[] PROGMEM ="vacant";
const char string_1924[] PROGMEM ="vacuum";
const char string_1925[] PROGMEM ="vague";
const char string_1926[] PROGMEM ="valid";
const char string_1927[] PROGMEM ="valley";
const char string_1928[] PROGMEM ="valve";
const char string_1929[] PROGMEM ="van";
const char string_1930[] PROGMEM ="vanish";
const char string_1931[] PROGMEM ="vapor";
const char string_1932[] PROGMEM ="various";
const char string_1933[] PROGMEM ="vast";
const char string_1934[] PROGMEM ="vault";
const char string_1935[] PROGMEM ="vehicle";
const char string_1936[] PROGMEM ="velvet";
const char string_1937[] PROGMEM ="vendor";
const char string_1938[] PROGMEM ="venture";
const char string_1939[] PROGMEM ="venue";
const char string_1940[] PROGMEM ="verb";
const char string_1941[] PROGMEM ="verify";
const char string_1942[] PROGMEM ="version";
const char string_1943[] PROGMEM ="very";
const char string_1944[] PROGMEM ="vessel";
const char string_1945[] PROGMEM ="veteran";
const char string_1946[] PROGMEM ="viable";
const char string_1947[] PROGMEM ="vibrant";
const char string_1948[] PROGMEM ="vicious";
const char string_1949[] PROGMEM ="victory";
const char string_1950[] PROGMEM ="video";
const char string_1951[] PROGMEM ="view";
const char string_1952[] PROGMEM ="village";
const char string_1953[] PROGMEM ="vintage";
const char string_1954[] PROGMEM ="violin";
const char string_1955[] PROGMEM ="virtual";
const char string_1956[] PROGMEM ="virus";
const char string_1957[] PROGMEM ="visa";
const char string_1958[] PROGMEM ="visit";
const char string_1959[] PROGMEM ="visual";
const char string_1960[] PROGMEM ="vital";
const char string_1961[] PROGMEM ="vivid";
const char string_1962[] PROGMEM ="vocal";
const char string_1963[] PROGMEM ="voice";
const char string_1964[] PROGMEM ="void";
const char string_1965[] PROGMEM ="volcano";
const char string_1966[] PROGMEM ="volume";
const char string_1967[] PROGMEM ="vote";
const char string_1968[] PROGMEM ="voyage";
const char string_1969[] PROGMEM ="wage";
const char string_1970[] PROGMEM ="wagon";
const char string_1971[] PROGMEM ="wait";
const char string_1972[] PROGMEM ="walk";
const char string_1973[] PROGMEM ="wall";
const char string_1974[] PROGMEM ="walnut";
const char string_1975[] PROGMEM ="want";
const char string_1976[] PROGMEM ="warfare";
const char string_1977[] PROGMEM ="warm";
const char string_1978[] PROGMEM ="warrior";
const char string_1979[] PROGMEM ="wash";
const char string_1980[] PROGMEM ="wasp";
const char string_1981[] PROGMEM ="waste";
const char string_1982[] PROGMEM ="water";
const char string_1983[] PROGMEM ="wave";
const char string_1984[] PROGMEM ="way";
const char string_1985[] PROGMEM ="wealth";
const char string_1986[] PROGMEM ="weapon";
const char string_1987[] PROGMEM ="wear";
const char string_1988[] PROGMEM ="weasel";
const char string_1989[] PROGMEM ="weather";
const char string_1990[] PROGMEM ="web";
const char string_1991[] PROGMEM ="wedding";
const char string_1992[] PROGMEM ="weekend";
const char string_1993[] PROGMEM ="weird";
const char string_1994[] PROGMEM ="welcome";
const char string_1995[] PROGMEM ="west";
const char string_1996[] PROGMEM ="wet";
const char string_1997[] PROGMEM ="whale";
const char string_1998[] PROGMEM ="what";
const char string_1999[] PROGMEM ="wheat";
const char string_2000[] PROGMEM ="wheel";
const char string_2001[] PROGMEM ="when";
const char string_2002[] PROGMEM ="where";
const char string_2003[] PROGMEM ="whip";
const char string_2004[] PROGMEM ="whisper";
const char string_2005[] PROGMEM ="wide";
const char string_2006[] PROGMEM ="width";
const char string_2007[] PROGMEM ="wife";
const char string_2008[] PROGMEM ="wild";
const char string_2009[] PROGMEM ="will";
const char string_2010[] PROGMEM ="win";
const char string_2011[] PROGMEM ="window";
const char string_2012[] PROGMEM ="wine";
const char string_2013[] PROGMEM ="wing";
const char string_2014[] PROGMEM ="wink";
const char string_2015[] PROGMEM ="winner";
const char string_2016[] PROGMEM ="winter";
const char string_2017[] PROGMEM ="wire";
const char string_2018[] PROGMEM ="wisdom";
const char string_2019[] PROGMEM ="wise";
const char string_2020[] PROGMEM ="wish";
const char string_2021[] PROGMEM ="witness";
const char string_2022[] PROGMEM ="wolf";
const char string_2023[] PROGMEM ="woman";
const char string_2024[] PROGMEM ="wonder";
const char string_2025[] PROGMEM ="wood";
const char string_2026[] PROGMEM ="wool";
const char string_2027[] PROGMEM ="word";
const char string_2028[] PROGMEM ="work";
const char string_2029[] PROGMEM ="world";
const char string_2030[] PROGMEM ="worry";
const char string_2031[] PROGMEM ="worth";
const char string_2032[] PROGMEM ="wrap";
const char string_2033[] PROGMEM ="wreck";
const char string_2034[] PROGMEM ="wrestle";
const char string_2035[] PROGMEM ="wrist";
const char string_2036[] PROGMEM ="write";
const char string_2037[] PROGMEM ="wrong";
const char string_2038[] PROGMEM ="yard";
const char string_2039[] PROGMEM ="year";
const char string_2040[] PROGMEM ="yellow";
const char string_2041[] PROGMEM ="you";
const char string_2042[] PROGMEM ="young";
const char string_2043[] PROGMEM ="youth";
const char string_2044[] PROGMEM ="zebra";
const char string_2045[] PROGMEM ="zero";
const char string_2046[] PROGMEM ="zone";
const char string_2047[] PROGMEM ="zoo";
const char* const string_table[] PROGMEM = {string_0,string_1,
string_2,string_3,string_4,string_5,string_6,string_7,string_8,string_9,
string_10,string_11,string_12,string_13,string_14,string_15,string_16,string_17,
string_18,string_19,string_20,string_21,string_22,string_23,string_24,string_25,
string_26,string_27,string_28,string_29,string_30,string_31,string_32,string_33,
string_34,string_35,string_36,string_37,string_38,string_39,string_40,string_41,
string_42,string_43,string_44,string_45,string_46,string_47,string_48,string_49,
string_50,string_51,string_52,string_53,string_54,string_55,string_56,string_57,
string_58,string_59,string_60,string_61,string_62,string_63,string_64,string_65,
string_66,string_67,string_68,string_69,string_70,string_71,string_72,string_73,
string_74,string_75,string_76,string_77,string_78,string_79,string_80,string_81,
string_82,string_83,string_84,string_85,string_86,string_87,string_88,string_89,
string_90,string_91,string_92,string_93,string_94,string_95,string_96,string_97,
string_98,string_99,string_100,string_101,string_102,string_103,string_104,string_105,
string_106,string_107,string_108,string_109,string_110,string_111,string_112,string_113,
string_114,string_115,string_116,string_117,string_118,string_119,string_120,string_121,
string_122,string_123,string_124,string_125,string_126,string_127,string_128,string_129,
string_130,string_131,string_132,string_133,string_134,string_135,string_136,string_137,
string_138,string_139,string_140,string_141,string_142,string_143,string_144,string_145,
string_146,string_147,string_148,string_149,string_150,string_151,string_152,string_153,
string_154,string_155,string_156,string_157,string_158,string_159,string_160,string_161,
string_162,string_163,string_164,string_165,string_166,string_167,string_168,string_169,
string_170,string_171,string_172,string_173,string_174,string_175,string_176,string_177,
string_178,string_179,string_180,string_181,string_182,string_183,string_184,string_185,
string_186,string_187,string_188,string_189,string_190,string_191,string_192,string_193,
string_194,string_195,string_196,string_197,string_198,string_199,string_200,string_201,
string_202,string_203,string_204,string_205,string_206,string_207,string_208,string_209,
string_210,string_211,string_212,string_213,string_214,string_215,string_216,string_217,
string_218,string_219,string_220,string_221,string_222,string_223,string_224,string_225,
string_226,string_227,string_228,string_229,string_230,string_231,string_232,string_233,
string_234,string_235,string_236,string_237,string_238,string_239,string_240,string_241,
string_242,string_243,string_244,string_245,string_246,string_247,string_248,string_249,
string_250,string_251,string_252,string_253,string_254,string_255,string_256,string_257,
string_258,string_259,string_260,string_261,string_262,string_263,string_264,string_265,
string_266,string_267,string_268,string_269,string_270,string_271,string_272,string_273,
string_274,string_275,string_276,string_277,string_278,string_279,string_280,string_281,
string_282,string_283,string_284,string_285,string_286,string_287,string_288,string_289,
string_290,string_291,string_292,string_293,string_294,string_295,string_296,string_297,
string_298,string_299,string_300,string_301,string_302,string_303,string_304,string_305,
string_306,string_307,string_308,string_309,string_310,string_311,string_312,string_313,
string_314,string_315,string_316,string_317,string_318,string_319,string_320,string_321,
string_322,string_323,string_324,string_325,string_326,string_327,string_328,string_329,
string_330,string_331,string_332,string_333,string_334,string_335,string_336,string_337,
string_338,string_339,string_340,string_341,string_342,string_343,string_344,string_345,
string_346,string_347,string_348,string_349,string_350,string_351,string_352,string_353,
string_354,string_355,string_356,string_357,string_358,string_359,string_360,string_361,
string_362,string_363,string_364,string_365,string_366,string_367,string_368,string_369,
string_370,string_371,string_372,string_373,string_374,string_375,string_376,string_377,
string_378,string_379,string_380,string_381,string_382,string_383,string_384,string_385,
string_386,string_387,string_388,string_389,string_390,string_391,string_392,string_393,
string_394,string_395,string_396,string_397,string_398,string_399,string_400,string_401,
string_402,string_403,string_404,string_405,string_406,string_407,string_408,string_409,
string_410,string_411,string_412,string_413,string_414,string_415,string_416,string_417,
string_418,string_419,string_420,string_421,string_422,string_423,string_424,string_425,
string_426,string_427,string_428,string_429,string_430,string_431,string_432,string_433,
string_434,string_435,string_436,string_437,string_438,string_439,string_440,string_441,
string_442,string_443,string_444,string_445,string_446,string_447,string_448,string_449,
string_450,string_451,string_452,string_453,string_454,string_455,string_456,string_457,
string_458,string_459,string_460,string_461,string_462,string_463,string_464,string_465,
string_466,string_467,string_468,string_469,string_470,string_471,string_472,string_473,
string_474,string_475,string_476,string_477,string_478,string_479,string_480,string_481,
string_482,string_483,string_484,string_485,string_486,string_487,string_488,string_489,
string_490,string_491,string_492,string_493,string_494,string_495,string_496,string_497,
string_498,string_499,string_500,string_501,string_502,string_503,string_504,string_505,
string_506,string_507,string_508,string_509,string_510,string_511,string_512,string_513,
string_514,string_515,string_516,string_517,string_518,string_519,string_520,string_521,
string_522,string_523,string_524,string_525,string_526,string_527,string_528,string_529,
string_530,string_531,string_532,string_533,string_534,string_535,string_536,string_537,
string_538,string_539,string_540,string_541,string_542,string_543,string_544,string_545,
string_546,string_547,string_548,string_549,string_550,string_551,string_552,string_553,
string_554,string_555,string_556,string_557,string_558,string_559,string_560,string_561,
string_562,string_563,string_564,string_565,string_566,string_567,string_568,string_569,
string_570,string_571,string_572,string_573,string_574,string_575,string_576,string_577,
string_578,string_579,string_580,string_581,string_582,string_583,string_584,string_585,
string_586,string_587,string_588,string_589,string_590,string_591,string_592,string_593,
string_594,string_595,string_596,string_597,string_598,string_599,string_600,string_601,
string_602,string_603,string_604,string_605,string_606,string_607,string_608,string_609,
string_610,string_611,string_612,string_613,string_614,string_615,string_616,string_617,
string_618,string_619,string_620,string_621,string_622,string_623,string_624,string_625,
string_626,string_627,string_628,string_629,string_630,string_631,string_632,string_633,
string_634,string_635,string_636,string_637,string_638,string_639,string_640,string_641,
string_642,string_643,string_644,string_645,string_646,string_647,string_648,string_649,
string_650,string_651,string_652,string_653,string_654,string_655,string_656,string_657,
string_658,string_659,string_660,string_661,string_662,string_663,string_664,string_665,
string_666,string_667,string_668,string_669,string_670,string_671,string_672,string_673,
string_674,string_675,string_676,string_677,string_678,string_679,string_680,string_681,
string_682,string_683,string_684,string_685,string_686,string_687,string_688,string_689,
string_690,string_691,string_692,string_693,string_694,string_695,string_696,string_697,
string_698,string_699,string_700,string_701,string_702,string_703,string_704,string_705,
string_706,string_707,string_708,string_709,string_710,string_711,string_712,string_713,
string_714,string_715,string_716,string_717,string_718,string_719,string_720,string_721,
string_722,string_723,string_724,string_725,string_726,string_727,string_728,string_729,
string_730,string_731,string_732,string_733,string_734,string_735,string_736,string_737,
string_738,string_739,string_740,string_741,string_742,string_743,string_744,string_745,
string_746,string_747,string_748,string_749,string_750,string_751,string_752,string_753,
string_754,string_755,string_756,string_757,string_758,string_759,string_760,string_761,
string_762,string_763,string_764,string_765,string_766,string_767,string_768,string_769,
string_770,string_771,string_772,string_773,string_774,string_775,string_776,string_777,
string_778,string_779,string_780,string_781,string_782,string_783,string_784,string_785,
string_786,string_787,string_788,string_789,string_790,string_791,string_792,string_793,
string_794,string_795,string_796,string_797,string_798,string_799,string_800,string_801,
string_802,string_803,string_804,string_805,string_806,string_807,string_808,string_809,
string_810,string_811,string_812,string_813,string_814,string_815,string_816,string_817,
string_818,string_819,string_820,string_821,string_822,string_823,string_824,string_825,
string_826,string_827,string_828,string_829,string_830,string_831,string_832,string_833,
string_834,string_835,string_836,string_837,string_838,string_839,string_840,string_841,
string_842,string_843,string_844,string_845,string_846,string_847,string_848,string_849,
string_850,string_851,string_852,string_853,string_854,string_855,string_856,string_857,
string_858,string_859,string_860,string_861,string_862,string_863,string_864,string_865,
string_866,string_867,string_868,string_869,string_870,string_871,string_872,string_873,
string_874,string_875,string_876,string_877,string_878,string_879,string_880,string_881,
string_882,string_883,string_884,string_885,string_886,string_887,string_888,string_889,
string_890,string_891,string_892,string_893,string_894,string_895,string_896,string_897,
string_898,string_899,string_900,string_901,string_902,string_903,string_904,string_905,
string_906,string_907,string_908,string_909,string_910,string_911,string_912,string_913,
string_914,string_915,string_916,string_917,string_918,string_919,string_920,string_921,
string_922,string_923,string_924,string_925,string_926,string_927,string_928,string_929,
string_930,string_931,string_932,string_933,string_934,string_935,string_936,string_937,
string_938,string_939,string_940,string_941,string_942,string_943,string_944,string_945,
string_946,string_947,string_948,string_949,string_950,string_951,string_952,string_953,
string_954,string_955,string_956,string_957,string_958,string_959,string_960,string_961,
string_962,string_963,string_964,string_965,string_966,string_967,string_968,string_969,
string_970,string_971,string_972,string_973,string_974,string_975,string_976,string_977,
string_978,string_979,string_980,string_981,string_982,string_983,string_984,string_985,
string_986,string_987,string_988,string_989,string_990,string_991,string_992,string_993,
string_994,string_995,string_996,string_997,string_998,string_999,string_1000,string_1001,
string_1002,string_1003,string_1004,string_1005,string_1006,string_1007,string_1008,string_1009,
string_1010,string_1011,string_1012,string_1013,string_1014,string_1015,string_1016,string_1017,
string_1018,string_1019,string_1020,string_1021,string_1022,string_1023,string_1024,string_1025,
string_1026,string_1027,string_1028,string_1029,string_1030,string_1031,string_1032,string_1033,
string_1034,string_1035,string_1036,string_1037,string_1038,string_1039,string_1040,string_1041,
string_1042,string_1043,string_1044,string_1045,string_1046,string_1047,string_1048,string_1049,
string_1050,string_1051,string_1052,string_1053,string_1054,string_1055,string_1056,string_1057,
string_1058,string_1059,string_1060,string_1061,string_1062,string_1063,string_1064,string_1065,
string_1066,string_1067,string_1068,string_1069,string_1070,string_1071,string_1072,string_1073,
string_1074,string_1075,string_1076,string_1077,string_1078,string_1079,string_1080,string_1081,
string_1082,string_1083,string_1084,string_1085,string_1086,string_1087,string_1088,string_1089,
string_1090,string_1091,string_1092,string_1093,string_1094,string_1095,string_1096,string_1097,
string_1098,string_1099,string_1100,string_1101,string_1102,string_1103,string_1104,string_1105,
string_1106,string_1107,string_1108,string_1109,string_1110,string_1111,string_1112,string_1113,
string_1114,string_1115,string_1116,string_1117,string_1118,string_1119,string_1120,string_1121,
string_1122,string_1123,string_1124,string_1125,string_1126,string_1127,string_1128,string_1129,
string_1130,string_1131,string_1132,string_1133,string_1134,string_1135,string_1136,string_1137,
string_1138,string_1139,string_1140,string_1141,string_1142,string_1143,string_1144,string_1145,
string_1146,string_1147,string_1148,string_1149,string_1150,string_1151,string_1152,string_1153,
string_1154,string_1155,string_1156,string_1157,string_1158,string_1159,string_1160,string_1161,
string_1162,string_1163,string_1164,string_1165,string_1166,string_1167,string_1168,string_1169,
string_1170,string_1171,string_1172,string_1173,string_1174,string_1175,string_1176,string_1177,
string_1178,string_1179,string_1180,string_1181,string_1182,string_1183,string_1184,string_1185,
string_1186,string_1187,string_1188,string_1189,string_1190,string_1191,string_1192,string_1193,
string_1194,string_1195,string_1196,string_1197,string_1198,string_1199,string_1200,string_1201,
string_1202,string_1203,string_1204,string_1205,string_1206,string_1207,string_1208,string_1209,
string_1210,string_1211,string_1212,string_1213,string_1214,string_1215,string_1216,string_1217,
string_1218,string_1219,string_1220,string_1221,string_1222,string_1223,string_1224,string_1225,
string_1226,string_1227,string_1228,string_1229,string_1230,string_1231,string_1232,string_1233,
string_1234,string_1235,string_1236,string_1237,string_1238,string_1239,string_1240,string_1241,
string_1242,string_1243,string_1244,string_1245,string_1246,string_1247,string_1248,string_1249,
string_1250,string_1251,string_1252,string_1253,string_1254,string_1255,string_1256,string_1257,
string_1258,string_1259,string_1260,string_1261,string_1262,string_1263,string_1264,string_1265,
string_1266,string_1267,string_1268,string_1269,string_1270,string_1271,string_1272,string_1273,
string_1274,string_1275,string_1276,string_1277,string_1278,string_1279,string_1280,string_1281,
string_1282,string_1283,string_1284,string_1285,string_1286,string_1287,string_1288,string_1289,
string_1290,string_1291,string_1292,string_1293,string_1294,string_1295,string_1296,string_1297,
string_1298,string_1299,string_1300,string_1301,string_1302,string_1303,string_1304,string_1305,
string_1306,string_1307,string_1308,string_1309,string_1310,string_1311,string_1312,string_1313,
string_1314,string_1315,string_1316,string_1317,string_1318,string_1319,string_1320,string_1321,
string_1322,string_1323,string_1324,string_1325,string_1326,string_1327,string_1328,string_1329,
string_1330,string_1331,string_1332,string_1333,string_1334,string_1335,string_1336,string_1337,
string_1338,string_1339,string_1340,string_1341,string_1342,string_1343,string_1344,string_1345,
string_1346,string_1347,string_1348,string_1349,string_1350,string_1351,string_1352,string_1353,
string_1354,string_1355,string_1356,string_1357,string_1358,string_1359,string_1360,string_1361,
string_1362,string_1363,string_1364,string_1365,string_1366,string_1367,string_1368,string_1369,
string_1370,string_1371,string_1372,string_1373,string_1374,string_1375,string_1376,string_1377,
string_1378,string_1379,string_1380,string_1381,string_1382,string_1383,string_1384,string_1385,
string_1386,string_1387,string_1388,string_1389,string_1390,string_1391,string_1392,string_1393,
string_1394,string_1395,string_1396,string_1397,string_1398,string_1399,string_1400,string_1401,
string_1402,string_1403,string_1404,string_1405,string_1406,string_1407,string_1408,string_1409,
string_1410,string_1411,string_1412,string_1413,string_1414,string_1415,string_1416,string_1417,
string_1418,string_1419,string_1420,string_1421,string_1422,string_1423,string_1424,string_1425,
string_1426,string_1427,string_1428,string_1429,string_1430,string_1431,string_1432,string_1433,
string_1434,string_1435,string_1436,string_1437,string_1438,string_1439,string_1440,string_1441,
string_1442,string_1443,string_1444,string_1445,string_1446,string_1447,string_1448,string_1449,
string_1450,string_1451,string_1452,string_1453,string_1454,string_1455,string_1456,string_1457,
string_1458,string_1459,string_1460,string_1461,string_1462,string_1463,string_1464,string_1465,
string_1466,string_1467,string_1468,string_1469,string_1470,string_1471,string_1472,string_1473,
string_1474,string_1475,string_1476,string_1477,string_1478,string_1479,string_1480,string_1481,
string_1482,string_1483,string_1484,string_1485,string_1486,string_1487,string_1488,string_1489,
string_1490,string_1491,string_1492,string_1493,string_1494,string_1495,string_1496,string_1497,
string_1498,string_1499,string_1500,string_1501,string_1502,string_1503,string_1504,string_1505,
string_1506,string_1507,string_1508,string_1509,string_1510,string_1511,string_1512,string_1513,
string_1514,string_1515,string_1516,string_1517,string_1518,string_1519,string_1520,string_1521,
string_1522,string_1523,string_1524,string_1525,string_1526,string_1527,string_1528,string_1529,
string_1530,string_1531,string_1532,string_1533,string_1534,string_1535,string_1536,string_1537,
string_1538,string_1539,string_1540,string_1541,string_1542,string_1543,string_1544,string_1545,
string_1546,string_1547,string_1548,string_1549,string_1550,string_1551,string_1552,string_1553,
string_1554,string_1555,string_1556,string_1557,string_1558,string_1559,string_1560,string_1561,
string_1562,string_1563,string_1564,string_1565,string_1566,string_1567,string_1568,string_1569,
string_1570,string_1571,string_1572,string_1573,string_1574,string_1575,string_1576,string_1577,
string_1578,string_1579,string_1580,string_1581,string_1582,string_1583,string_1584,string_1585,
string_1586,string_1587,string_1588,string_1589,string_1590,string_1591,string_1592,string_1593,
string_1594,string_1595,string_1596,string_1597,string_1598,string_1599,string_1600,string_1601,
string_1602,string_1603,string_1604,string_1605,string_1606,string_1607,string_1608,string_1609,
string_1610,string_1611,string_1612,string_1613,string_1614,string_1615,string_1616,string_1617,
string_1618,string_1619,string_1620,string_1621,string_1622,string_1623,string_1624,string_1625,
string_1626,string_1627,string_1628,string_1629,string_1630,string_1631,string_1632,string_1633,
string_1634,string_1635,string_1636,string_1637,string_1638,string_1639,string_1640,string_1641,
string_1642,string_1643,string_1644,string_1645,string_1646,string_1647,string_1648,string_1649,
string_1650,string_1651,string_1652,string_1653,string_1654,string_1655,string_1656,string_1657,
string_1658,string_1659,string_1660,string_1661,string_1662,string_1663,string_1664,string_1665,
string_1666,string_1667,string_1668,string_1669,string_1670,string_1671,string_1672,string_1673,
string_1674,string_1675,string_1676,string_1677,string_1678,string_1679,string_1680,string_1681,
string_1682,string_1683,string_1684,string_1685,string_1686,string_1687,string_1688,string_1689,
string_1690,string_1691,string_1692,string_1693,string_1694,string_1695,string_1696,string_1697,
string_1698,string_1699,string_1700,string_1701,string_1702,string_1703,string_1704,string_1705,
string_1706,string_1707,string_1708,string_1709,string_1710,string_1711,string_1712,string_1713,
string_1714,string_1715,string_1716,string_1717,string_1718,string_1719,string_1720,string_1721,
string_1722,string_1723,string_1724,string_1725,string_1726,string_1727,string_1728,string_1729,
string_1730,string_1731,string_1732,string_1733,string_1734,string_1735,string_1736,string_1737,
string_1738,string_1739,string_1740,string_1741,string_1742,string_1743,string_1744,string_1745,
string_1746,string_1747,string_1748,string_1749,string_1750,string_1751,string_1752,string_1753,
string_1754,string_1755,string_1756,string_1757,string_1758,string_1759,string_1760,string_1761,
string_1762,string_1763,string_1764,string_1765,string_1766,string_1767,string_1768,string_1769,
string_1770,string_1771,string_1772,string_1773,string_1774,string_1775,string_1776,string_1777,
string_1778,string_1779,string_1780,string_1781,string_1782,string_1783,string_1784,string_1785,
string_1786,string_1787,string_1788,string_1789,string_1790,string_1791,string_1792,string_1793,
string_1794,string_1795,string_1796,string_1797,string_1798,string_1799,string_1800,string_1801,
string_1802,string_1803,string_1804,string_1805,string_1806,string_1807,string_1808,string_1809,
string_1810,string_1811,string_1812,string_1813,string_1814,string_1815,string_1816,string_1817,
string_1818,string_1819,string_1820,string_1821,string_1822,string_1823,string_1824,string_1825,
string_1826,string_1827,string_1828,string_1829,string_1830,string_1831,string_1832,string_1833,
string_1834,string_1835,string_1836,string_1837,string_1838,string_1839,string_1840,string_1841,
string_1842,string_1843,string_1844,string_1845,string_1846,string_1847,string_1848,string_1849,
string_1850,string_1851,string_1852,string_1853,string_1854,string_1855,string_1856,string_1857,
string_1858,string_1859,string_1860,string_1861,string_1862,string_1863,string_1864,string_1865,
string_1866,string_1867,string_1868,string_1869,string_1870,string_1871,string_1872,string_1873,
string_1874,string_1875,string_1876,string_1877,string_1878,string_1879,string_1880,string_1881,
string_1882,string_1883,string_1884,string_1885,string_1886,string_1887,string_1888,string_1889,
string_1890,string_1891,string_1892,string_1893,string_1894,string_1895,string_1896,string_1897,
string_1898,string_1899,string_1900,string_1901,string_1902,string_1903,string_1904,string_1905,
string_1906,string_1907,string_1908,string_1909,string_1910,string_1911,string_1912,string_1913,
string_1914,string_1915,string_1916,string_1917,string_1918,string_1919,string_1920,string_1921,
string_1922,string_1923,string_1924,string_1925,string_1926,string_1927,string_1928,string_1929,
string_1930,string_1931,string_1932,string_1933,string_1934,string_1935,string_1936,string_1937,
string_1938,string_1939,string_1940,string_1941,string_1942,string_1943,string_1944,string_1945,
string_1946,string_1947,string_1948,string_1949,string_1950,string_1951,string_1952,string_1953,
string_1954,string_1955,string_1956,string_1957,string_1958,string_1959,string_1960,string_1961,
string_1962,string_1963,string_1964,string_1965,string_1966,string_1967,string_1968,string_1969,
string_1970,string_1971,string_1972,string_1973,string_1974,string_1975,string_1976,string_1977,
string_1978,string_1979,string_1980,string_1981,string_1982,string_1983,string_1984,string_1985,
string_1986,string_1987,string_1988,string_1989,string_1990,string_1991,string_1992,string_1993,
string_1994,string_1995,string_1996,string_1997,string_1998,string_1999,string_2000,string_2001,
string_2002,string_2003,string_2004,string_2005,string_2006,string_2007,string_2008,string_2009,
string_2010,string_2011,string_2012,string_2013,string_2014,string_2015,string_2016,string_2017,
string_2018,string_2019,string_2020,string_2021,string_2022,string_2023,string_2024,string_2025,
string_2026,string_2027,string_2028,string_2029,string_2030,string_2031,string_2032,string_2033,
string_2034,string_2035,string_2036,string_2037,string_2038,string_2039,string_2040,string_2041,
string_2042,string_2043,string_2044,string_2045,string_2046,string_2047}; 

char buffer[30];

const int EnterPin = 11;

const int bPin1 = 10;
const int bPin2 = A2;
const int bPin3 = A0;
const int bPin4 = A1;
 int led = 13;
int delaytime = 15;
 
    const uint8_t chal[MAC_CHALLENGE_SIZE] = {
    0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
    0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF,
    0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
    0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF
  };
  
  uint8_t challenge[MAC_CHALLENGE_SIZE];
 uint8_t command[MAC_COUNT_LONG];
 uint8_t response[MAC_RSP_SIZE];
 
int previousButtonState1 = HIGH;   
int previousButtonState2 = HIGH;   
int previousButtonState3 = HIGH;   
int previousButtonState4 = HIGH;
int previousButtonState5 = HIGH;  
int firstpin = 0; //flag to keep track of first pin

void setup() {
  pinMode(bPin1, INPUT_PULLUP);
  pinMode(bPin2, INPUT_PULLUP);
  pinMode(bPin3, INPUT_PULLUP);
  pinMode(bPin4, INPUT_PULLUP);
  pinMode(EnterPin, INPUT_PULLUP);
  memcpy(challenge, chal,MAC_CHALLENGE_SIZE );
pinMode(led, OUTPUT);  
  
  Keyboard.begin();
}

void loop() {
  
  
 int buttonState1 = digitalRead(bPin1);
  if ((buttonState1 == LOW) && (previousButtonState1 != buttonState1)) {
    rollhash(0x0);
    previousButtonState1 = LOW;
    blinkk();
    first(1);
  }else{
  previousButtonState1 = HIGH;
  delay(delaytime);
  }
  
    int buttonState2 = digitalRead(bPin2);
  if ((buttonState2 == LOW) && (previousButtonState2 != buttonState2)) {
        rollhash(0x1);
    previousButtonState2 = LOW;
    blinkk();
    first(2);
  }else{
  previousButtonState2 = HIGH;
  delay(delaytime);
  }
  
    int buttonState3 = digitalRead(bPin3);
  if ((buttonState3 == LOW) && (previousButtonState3 != buttonState3)) {
    rollhash(0x2);
    previousButtonState3 = LOW;
    blinkk();
    first(3);
  }else{
  previousButtonState3 = HIGH;
  delay(delaytime);
  }
  
      int buttonState4 = digitalRead(bPin4);
  if ((buttonState4 == LOW) && (previousButtonState4 != buttonState4)) {
    rollhash(0x3);
    previousButtonState4 = LOW;
    blinkk();
    first(4);
  }else{
  previousButtonState4 = HIGH;
  delay(delaytime);
  }
  
  
  int buttonState5 = digitalRead(EnterPin);
  if ((buttonState5 == LOW) && (previousButtonState5 != buttonState5)) {
  rollhash(0x4);
  if (firstpin==1){
   mkiota();
  }else if(firstpin==2){
   mkpass();

  }else{
    mkbip39();
    
  }
  firstpin=0;
    memcpy(challenge, chal,MAC_CHALLENGE_SIZE );
      previousButtonState5 = LOW;
  }else{
  previousButtonState5 = HIGH;

  delay(delaytime);
  
  }


if ((buttonState1==LOW) && (buttonState2==LOW) && (buttonState3==LOW) && (buttonState4==LOW)){
    digitalWrite(led, HIGH);  
  delay(2000);              
  digitalWrite(led, LOW);   
  initkeys();
  blinkk();
  
}


}

void first(int k){
  if (firstpin==0){
    firstpin=k;
  }
}

void rollhash(uint8_t k){
  uint8_t ret_code = sha204.mac(&command[0], &response[0], 0, k, (uint8_t *) challenge);
  updatechal(response);
}


void mkpass(){
   rollhash(0x14);
 for (int j=0;j<15;j++){
   char out = (char) (challenge[j]%(123-48)+48);
   if ( (((int)out)==96) | ( (((int)out)>=58) & (((int)out)<=62) ) ){
     Keyboard.print( (char) 36);
   }else{
          Keyboard.print( out);
   }
 } 
  Keyboard.print("\n");
}


void mkiota(){
  for (int j=0;j<4;j++){
    rollhash(0x9+0x1*j);
       for (int i=2;i<MAC_CHALLENGE_SIZE-10;i++){
        int k = challenge[i]%27;
    
         Keyboard.print(getiota( k));

 }
  }
  Keyboard.print(getiota(challenge[MAC_CHALLENGE_SIZE-9]%27));
  Keyboard.print("\n");
}

char getiota(int k){
         char out;
          
        if (k==26){
          out = (char) 57;
        }else{
       out = (char) (k+65);
        }
        return out;
}

uint8_t shasum(uint8_t* dat){//[MAC_CHALLENGE_SIZE]){
  Sha256.init();
for (int d=0; d<MAC_CHALLENGE_SIZE;d++){
Sha256.print(  (char) dat[d]);
 }
//printarray(dat);
  uint8_t* b = Sha256.result();
  return b[0];
}


uint16_t catbytes(uint8_t b1, uint8_t b2, int k, int n){
  return ((b1^(b1>>k<<k))<<(11-k)) | (b2>>(8-n) << (11-k-n));
  //cat first last k bits to first n bits from the bytes respectively
}

void mkbip39(){
  rollhash(0x8);
 
  uint8_t data[MAC_CHALLENGE_SIZE+1];
 memcpy(data,challenge,MAC_CHALLENGE_SIZE );
  uint8_t sum = shasum(challenge) ;
  data[MAC_CHALLENGE_SIZE] = sum;
  
  
  
  uint16_t bip[24] ;
int kk=0;
for (int j=0;j<24;j++){
  bip[kk] = 0;
 int addy1 =  (11*j)/8;
 int addy1b = (11*j) % 8;
 int  addy2 = (11*(j+1))/8;
 int  addy2b = (11*(j+1))%8 - 1;
 if(addy2b==-1){
    addy2 = addy2 - 1;
    addy2b=7;
 }
 int dist = addy2 - addy1;
 if (dist == 1){
   bip[kk] = catbytes(data[addy1],data[addy2],8-addy1b,addy2b+1);
 }else if (dist==2){ //handle case where 3 bytes go to one 11bit long
     uint16_t bob = catbytes(data[addy1],data[addy2-1],8-addy1b,8);
     bip[kk] = bob | (data[addy2]>>(8-(addy2b+1))); //cat bob long to first addyb+1 bits of last byte
   }
 kk++;
}




for (int dd=0;dd<24;dd=dd+1){
if (dd==23){
    Keyboard.print(strcat(getbip(bip[dd]),"\n" ));
   }else{
   Keyboard.print(strcat(getbip(bip[dd])," ") );
   }
   delay(30);
}


}


void blinkk(){
  digitalWrite(led, HIGH);  
  delay(50);              
  digitalWrite(led, LOW);    
  delay(50);
  digitalWrite(led, HIGH);
  delay(50);
  digitalWrite(led, LOW);
  delay(50);              
}


void updatechal( uint8_t resp[MAC_RSP_SIZE]){
  for (int i=1;i<MAC_RSP_SIZE - 2;i++){
  challenge[i-1] = resp[i];
}//dont use the first few bytes because they are deterministic, a header. 
}



char* getbip(int j){
 strcpy_P(buffer, (char*)pgm_read_word(&(string_table[j])));
 return buffer;
  
}

byte derivekey(uint8_t n)
{
  uint8_t command[MAC_COUNT_LONG];
  uint8_t response[SHA204_RSP_SIZE_MAX];
  
    uint8_t ncommand[MAC_COUNT_LONG];
  
  uint8_t data[20];
  
  for (int j=0;j<20;j++){
   data[j] = j; 
  }
  
  uint8_t nresponse[SHA204_RSP_SIZE_MAX];
  
  uint8_t ret_non = sha204.nonce(&ncommand[0], &nresponse[0], 0, (uint8_t *) data);
  
  uint8_t ret_code = sha204.derive_key(&command[0], &response[0], 0, n, 0);

}

byte initkeys(){
  for (int j=0; j <= 15; j++){
          uint8_t slot = 0x01*j;
          derivekey(slot);
  }
  
}
