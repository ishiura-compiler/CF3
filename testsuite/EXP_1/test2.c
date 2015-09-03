#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t t0 = 34LLU;
volatile uint32_t x6 = 265859467U;
uint32_t t1 = 14039U;
static uint64_t x25 = 773591390737025LLU;
int64_t x26 = INT64_MIN;
int32_t x27 = -1;
uint32_t x34 = 8U;
int64_t x36 = INT64_MAX;
int8_t x42 = -1;
volatile int32_t x44 = INT32_MAX;
int64_t x51 = -1LL;
int64_t x52 = 675378607LL;
volatile int64_t t7 = 4684520753047LL;
volatile int16_t x53 = INT16_MIN;
static int16_t x65 = INT16_MIN;
volatile uint8_t x67 = 32U;
static int64_t x68 = -272967266537500758LL;
int32_t x72 = INT32_MAX;
uint64_t x95 = 179015912185591428LLU;
int64_t x100 = -6432565909251LL;
uint32_t x118 = 153162393U;
volatile uint64_t t17 = 3LLU;
int16_t x127 = INT16_MIN;
volatile int8_t x139 = INT8_MIN;
int16_t x144 = 1;
volatile uint32_t t22 = 513199U;
static uint8_t x155 = 7U;
volatile uint32_t t23 = 24U;
static int64_t x167 = -235254591994305374LL;
static uint64_t x180 = UINT64_MAX;
volatile uint32_t t31 = 287U;
int64_t x217 = INT64_MIN;
uint64_t t32 = 1100LLU;
int8_t x226 = 0;
volatile uint64_t t35 = 30LLU;
uint64_t x239 = 3538104549958007LLU;
static uint64_t t36 = 331613134619784LLU;
static int8_t x246 = -1;
uint32_t x250 = UINT32_MAX;
int16_t x265 = INT16_MIN;
static uint64_t x267 = 123428961LLU;
uint64_t x269 = 9326LLU;
uint64_t x270 = 1535701456LLU;
uint8_t x274 = 0U;
int64_t x279 = INT64_MIN;
static int16_t x288 = INT16_MIN;
volatile int64_t x291 = INT64_MIN;
int32_t x294 = INT32_MIN;
static int64_t t49 = 77557211894096LL;
uint16_t x299 = UINT16_MAX;
uint64_t t51 = 1LLU;
int16_t x323 = 1;
volatile int32_t t54 = 575965875;
int16_t x330 = -5;
int32_t x338 = INT32_MAX;
int8_t x339 = INT8_MIN;
volatile uint32_t t57 = 7728U;
uint64_t x343 = 5936475LLU;
int8_t x344 = INT8_MAX;
uint16_t x352 = UINT16_MAX;
static int64_t t60 = 1LL;
volatile int32_t x365 = INT32_MIN;
uint64_t x368 = UINT64_MAX;
static volatile uint64_t t61 = 161752249697470LLU;
static int16_t x370 = -1;
static uint32_t x373 = 492413182U;
uint32_t t63 = 6912U;
int16_t x380 = INT16_MAX;
uint8_t x387 = 2U;
volatile int64_t t68 = 94LL;
int16_t x403 = INT16_MIN;
int32_t x406 = -1;
static int64_t t71 = 435299359554724093LL;
uint32_t t74 = 1899524U;
int16_t x449 = -7931;
static uint64_t x451 = 55556229262654LLU;
volatile int8_t x454 = 0;
int8_t x455 = 0;
static volatile int8_t x457 = INT8_MIN;
static int16_t x458 = INT16_MIN;
static int64_t x461 = -41441207LL;
int32_t x470 = 52;
volatile int8_t x481 = INT8_MIN;
int16_t x485 = INT16_MIN;
int8_t x486 = INT8_MIN;
static volatile int32_t x487 = 289944067;
volatile int32_t x501 = INT32_MAX;
volatile uint64_t t88 = 967LLU;
volatile int32_t t90 = -182068723;
int64_t t91 = 3808LL;
static uint16_t x517 = 157U;
volatile int8_t x521 = INT8_MIN;
uint16_t x525 = 3739U;
static int32_t x529 = 3;
int64_t x531 = -1LL;
static volatile int64_t x535 = INT64_MIN;
volatile int64_t t96 = 694935609611489452LL;
static volatile uint64_t t97 = 952906086LLU;
int8_t x544 = INT8_MAX;
int64_t x549 = -1256284LL;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	static int8_t x2 = -6;
	uint64_t x3 = UINT64_MAX;
	uint8_t x4 = UINT8_MAX;

	t0 = (((x1+x2)+x3)-x4);

	if (t0 != 18446744073709551226LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 11U;
	volatile uint16_t x7 = UINT16_MAX;
	int32_t x8 = INT32_MIN;

	t1 = (((x5+x6)+x7)-x8);

	if (t1 != 2413408661U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x21 = INT8_MAX;
	int16_t x22 = INT16_MAX;
	static int64_t x23 = 11LL;
	int32_t x24 = INT32_MIN;
	static int64_t t2 = 6766001279084407LL;

	t2 = (((x21+x22)+x23)-x24);

	if (t2 != 2147516553LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x28 = 5436762391640190LLU;
	volatile uint64_t t3 = 2459189173772LLU;

	t3 = (((x25+x26)+x27)-x28);

	if (t3 != 9218708865853872642LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x29 = 567907990U;
	int8_t x30 = -1;
	int8_t x31 = INT8_MAX;
	uint16_t x32 = 8928U;
	uint32_t t4 = 83632U;

	t4 = (((x29+x30)+x31)-x32);

	if (t4 != 567899188U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x33 = 4201149844309714185LLU;
	int64_t x35 = INT64_MIN;
	uint64_t t5 = 10079295903118LLU;

	t5 = (((x33+x34)+x35)-x36);

	if (t5 != 4201149844309714194LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x41 = 1126035098U;
	int16_t x43 = INT16_MIN;
	static uint32_t t6 = 38U;

	t6 = (((x41+x42)+x43)-x44);

	if (t6 != 3273485978U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x49 = -1;
	static int32_t x50 = 33266;

	t7 = (((x49+x50)+x51)-x52);

	if (t7 != -675345343LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x54 = 7;
	uint8_t x55 = 0U;
	volatile uint8_t x56 = 0U;
	int32_t t8 = 0;

	t8 = (((x53+x54)+x55)-x56);

	if (t8 != -32761) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x57 = 61U;
	uint16_t x58 = 1821U;
	volatile int32_t x59 = INT32_MAX;
	uint32_t x60 = UINT32_MAX;
	uint32_t t9 = 25U;

	t9 = (((x57+x58)+x59)-x60);

	if (t9 != 2147485530U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x66 = -2;
	int64_t t10 = -32789556366LL;

	t10 = (((x65+x66)+x67)-x68);

	if (t10 != 272967266537468020LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x69 = -1;
	uint64_t x70 = 14857162141LLU;
	volatile int64_t x71 = INT64_MIN;
	uint64_t t11 = 6904005808523249LLU;

	t11 = (((x69+x70)+x71)-x72);

	if (t11 != 9223372049564454301LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x81 = 3LL;
	volatile int8_t x82 = 0;
	int16_t x83 = INT16_MAX;
	static uint16_t x84 = 45U;
	volatile int64_t t12 = 572664881124LL;

	t12 = (((x81+x82)+x83)-x84);

	if (t12 != 32725LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x93 = UINT32_MAX;
	static volatile int16_t x94 = INT16_MAX;
	int32_t x96 = -1;
	volatile uint64_t t13 = 29401427625649LLU;

	t13 = (((x93+x94)+x95)-x96);

	if (t13 != 179015912185624195LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x97 = INT64_MIN;
	uint16_t x98 = 13U;
	volatile uint64_t x99 = 5949843077259LLU;
	uint64_t t14 = 8609802594301079190LLU;

	t14 = (((x97+x98)+x99)-x100);

	if (t14 != 9223384419263762331LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x101 = INT64_MAX;
	static int32_t x102 = -93006;
	volatile uint32_t x103 = 349U;
	int16_t x104 = INT16_MIN;
	int64_t t15 = 3LL;

	t15 = (((x101+x102)+x103)-x104);

	if (t15 != 9223372036854715918LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x109 = UINT64_MAX;
	volatile int16_t x110 = INT16_MAX;
	static uint16_t x111 = 14262U;
	int32_t x112 = -2;
	volatile uint64_t t16 = 5829LLU;

	t16 = (((x109+x110)+x111)-x112);

	if (t16 != 47030LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x117 = UINT32_MAX;
	uint64_t x119 = 247058LLU;
	uint16_t x120 = 6U;

	t17 = (((x117+x118)+x119)-x120);

	if (t17 != 153409444LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x125 = 13130U;
	uint32_t x126 = UINT32_MAX;
	uint64_t x128 = UINT64_MAX;
	volatile uint64_t t18 = 131631563839078LLU;

	t18 = (((x125+x126)+x127)-x128);

	if (t18 != 4294947658LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x133 = UINT64_MAX;
	int8_t x134 = INT8_MIN;
	int64_t x135 = -197374403LL;
	uint8_t x136 = 57U;
	volatile uint64_t t19 = 227583901LLU;

	t19 = (((x133+x134)+x135)-x136);

	if (t19 != 18446744073512177027LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x137 = -1;
	static volatile uint64_t x138 = 985229182LLU;
	int32_t x140 = 137156;
	uint64_t t20 = 4383077991256LLU;

	t20 = (((x137+x138)+x139)-x140);

	if (t20 != 985091897LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x141 = UINT64_MAX;
	int64_t x142 = INT64_MIN;
	int16_t x143 = 12;
	volatile uint64_t t21 = 4171197476456991492LLU;

	t21 = (((x141+x142)+x143)-x144);

	if (t21 != 9223372036854775818LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x149 = UINT8_MAX;
	uint8_t x150 = 53U;
	static volatile uint16_t x151 = UINT16_MAX;
	uint32_t x152 = 475U;

	t22 = (((x149+x150)+x151)-x152);

	if (t22 != 65368U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x153 = UINT32_MAX;
	volatile uint32_t x154 = 32U;
	int32_t x156 = -9;

	t23 = (((x153+x154)+x155)-x156);

	if (t23 != 47U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x157 = INT8_MAX;
	int16_t x158 = -1;
	int16_t x159 = INT16_MIN;
	static volatile int32_t x160 = INT32_MIN;
	static volatile int32_t t24 = -12526;

	t24 = (((x157+x158)+x159)-x160);

	if (t24 != 2147451006) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x161 = -1;
	int32_t x162 = -246771497;
	uint8_t x163 = 93U;
	uint8_t x164 = UINT8_MAX;
	int32_t t25 = -401938312;

	t25 = (((x161+x162)+x163)-x164);

	if (t25 != -246771660) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x165 = -1;
	volatile int16_t x166 = INT16_MAX;
	int16_t x168 = INT16_MAX;
	volatile int64_t t26 = 28943LL;

	t26 = (((x165+x166)+x167)-x168);

	if (t26 != -235254591994305375LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x169 = UINT16_MAX;
	volatile uint64_t x170 = 44LLU;
	volatile int8_t x171 = 3;
	static volatile int32_t x172 = INT32_MIN;
	static volatile uint64_t t27 = 831946704LLU;

	t27 = (((x169+x170)+x171)-x172);

	if (t27 != 2147549230LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x177 = INT16_MAX;
	volatile int8_t x178 = INT8_MIN;
	int16_t x179 = -1;
	uint64_t t28 = 6872054580LLU;

	t28 = (((x177+x178)+x179)-x180);

	if (t28 != 32639LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x181 = 54377156184LLU;
	int64_t x182 = INT64_MAX;
	int64_t x183 = 7LL;
	static uint8_t x184 = 25U;
	static volatile uint64_t t29 = 872695LLU;

	t29 = (((x181+x182)+x183)-x184);

	if (t29 != 9223372091231931973LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x201 = 51402;
	volatile uint8_t x202 = 0U;
	volatile int8_t x203 = INT8_MIN;
	int16_t x204 = 0;
	volatile int32_t t30 = -2317097;

	t30 = (((x201+x202)+x203)-x204);

	if (t30 != 51274) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x205 = 102U;
	int16_t x206 = INT16_MIN;
	uint8_t x207 = 1U;
	uint32_t x208 = 361177U;

	t31 = (((x205+x206)+x207)-x208);

	if (t31 != 4294573454U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x218 = UINT64_MAX;
	uint16_t x219 = 57U;
	static volatile int32_t x220 = INT32_MIN;

	t32 = (((x217+x218)+x219)-x220);

	if (t32 != 9223372039002259512LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x221 = 0U;
	static int16_t x222 = INT16_MIN;
	uint64_t x223 = UINT64_MAX;
	int16_t x224 = 24;
	static uint64_t t33 = 966916662316664261LLU;

	t33 = (((x221+x222)+x223)-x224);

	if (t33 != 18446744073709518823LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x225 = INT32_MAX;
	uint64_t x227 = 331LLU;
	uint8_t x228 = 46U;
	uint64_t t34 = 2499205LLU;

	t34 = (((x225+x226)+x227)-x228);

	if (t34 != 2147483932LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x229 = UINT8_MAX;
	volatile int8_t x230 = -1;
	uint64_t x231 = 449248082918103327LLU;
	static uint16_t x232 = UINT16_MAX;

	t35 = (((x229+x230)+x231)-x232);

	if (t35 != 449248082918038046LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x237 = UINT8_MAX;
	uint8_t x238 = UINT8_MAX;
	uint16_t x240 = 168U;

	t36 = (((x237+x238)+x239)-x240);

	if (t36 != 3538104549958349LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x241 = UINT64_MAX;
	uint8_t x242 = UINT8_MAX;
	static int8_t x243 = -1;
	static int32_t x244 = INT32_MIN;
	volatile uint64_t t37 = 4545419615016LLU;

	t37 = (((x241+x242)+x243)-x244);

	if (t37 != 2147483901LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x245 = 223U;
	int8_t x247 = -2;
	uint32_t x248 = UINT32_MAX;
	uint32_t t38 = 6180813U;

	t38 = (((x245+x246)+x247)-x248);

	if (t38 != 221U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x249 = 371669378189LLU;
	static int16_t x251 = INT16_MAX;
	int64_t x252 = 260723108LL;
	volatile uint64_t t39 = 738144219879109LLU;

	t39 = (((x249+x250)+x251)-x252);

	if (t39 != 375703655143LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint32_t x253 = 78U;
	uint16_t x254 = UINT16_MAX;
	int32_t x255 = INT32_MAX;
	static uint32_t x256 = 500217U;
	uint32_t t40 = 2U;

	t40 = (((x253+x254)+x255)-x256);

	if (t40 != 2147049043U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x257 = INT32_MIN;
	uint64_t x258 = 211313LLU;
	int16_t x259 = -203;
	uint16_t x260 = 133U;
	volatile uint64_t t41 = 14003478176005LLU;

	t41 = (((x257+x258)+x259)-x260);

	if (t41 != 18446744071562278945LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x261 = 14158866LL;
	int32_t x262 = -18418;
	static volatile int64_t x263 = INT64_MIN;
	uint16_t x264 = 55U;
	int64_t t42 = -1385LL;

	t42 = (((x261+x262)+x263)-x264);

	if (t42 != -9223372036840635415LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x266 = 32U;
	uint64_t x268 = 24LLU;
	static uint64_t t43 = 1LLU;

	t43 = (((x265+x266)+x267)-x268);

	if (t43 != 123396201LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x271 = INT32_MIN;
	static int8_t x272 = 3;
	volatile uint64_t t44 = 6378173309816LLU;

	t44 = (((x269+x270)+x271)-x272);

	if (t44 != 18446744073097778747LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x273 = 307LLU;
	int64_t x275 = -1940121763808LL;
	int64_t x276 = -55811281533581LL;
	uint64_t t45 = 33166992410806828LLU;

	t45 = (((x273+x274)+x275)-x276);

	if (t45 != 53871159770080LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x277 = UINT8_MAX;
	int8_t x278 = INT8_MIN;
	volatile uint8_t x280 = 119U;
	volatile int64_t t46 = -12LL;

	t46 = (((x277+x278)+x279)-x280);

	if (t46 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x285 = INT64_MAX;
	static int64_t x286 = INT64_MIN;
	static int32_t x287 = 42241;
	volatile int64_t t47 = -31LL;

	t47 = (((x285+x286)+x287)-x288);

	if (t47 != 75008LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x289 = 363U;
	uint8_t x290 = 8U;
	int32_t x292 = -873;
	static int64_t t48 = 100037469678325LL;

	t48 = (((x289+x290)+x291)-x292);

	if (t48 != -9223372036854774564LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x293 = 1LL;
	int64_t x295 = INT64_MAX;
	int16_t x296 = INT16_MIN;

	t49 = (((x293+x294)+x295)-x296);

	if (t49 != 9223372034707324928LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x297 = INT64_MIN;
	int32_t x298 = 3796257;
	uint16_t x300 = UINT16_MAX;
	volatile int64_t t50 = 3116LL;

	t50 = (((x297+x298)+x299)-x300);

	if (t50 != -9223372036850979551LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x309 = UINT8_MAX;
	static int16_t x310 = INT16_MIN;
	int64_t x311 = 1730421975372349139LL;
	volatile uint64_t x312 = UINT64_MAX;

	t51 = (((x309+x310)+x311)-x312);

	if (t51 != 1730421975372316627LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x313 = -1LL;
	uint32_t x314 = 1813348U;
	volatile int16_t x315 = INT16_MIN;
	volatile int32_t x316 = INT32_MIN;
	volatile int64_t t52 = -785561537424LL;

	t52 = (((x313+x314)+x315)-x316);

	if (t52 != 2149264227LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x317 = 1538LL;
	int64_t x318 = -7212719850807LL;
	int8_t x319 = 42;
	int8_t x320 = INT8_MIN;
	static volatile int64_t t53 = -23669LL;

	t53 = (((x317+x318)+x319)-x320);

	if (t53 != -7212719849099LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x321 = 0U;
	uint8_t x322 = UINT8_MAX;
	volatile int8_t x324 = INT8_MIN;

	t54 = (((x321+x322)+x323)-x324);

	if (t54 != 384) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x325 = INT16_MIN;
	static uint32_t x326 = UINT32_MAX;
	int16_t x327 = INT16_MIN;
	int64_t x328 = -9161463LL;
	volatile int64_t t55 = -3546066729998163187LL;

	t55 = (((x325+x326)+x327)-x328);

	if (t55 != 4304063222LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x329 = INT32_MAX;
	uint32_t x331 = 6609U;
	volatile int64_t x332 = -1LL;
	int64_t t56 = 98838661383LL;

	t56 = (((x329+x330)+x331)-x332);

	if (t56 != 2147490252LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x337 = -1;
	uint32_t x340 = 1953U;

	t57 = (((x337+x338)+x339)-x340);

	if (t57 != 2147481565U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x341 = INT8_MIN;
	uint8_t x342 = 3U;
	static uint64_t t58 = 0LLU;

	t58 = (((x341+x342)+x343)-x344);

	if (t58 != 5936223LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x349 = -3;
	uint32_t x350 = 63280622U;
	static int32_t x351 = INT32_MAX;
	uint32_t t59 = 16992572U;

	t59 = (((x349+x350)+x351)-x352);

	if (t59 != 2210698731U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x357 = INT32_MAX;
	int64_t x358 = -1LL;
	static int16_t x359 = INT16_MIN;
	static int16_t x360 = -1;

	t60 = (((x357+x358)+x359)-x360);

	if (t60 != 2147450879LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x366 = INT64_MAX;
	volatile int32_t x367 = INT32_MIN;

	t61 = (((x365+x366)+x367)-x368);

	if (t61 != 9223372032559808512LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x369 = 6829;
	static volatile int8_t x371 = INT8_MIN;
	static int8_t x372 = INT8_MAX;
	volatile int32_t t62 = 0;

	t62 = (((x369+x370)+x371)-x372);

	if (t62 != 6573) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x374 = 41U;
	static int32_t x375 = INT32_MIN;
	uint32_t x376 = 306U;

	t63 = (((x373+x374)+x375)-x376);

	if (t63 != 2639896565U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x377 = UINT16_MAX;
	uint16_t x378 = UINT16_MAX;
	static uint8_t x379 = 29U;
	int32_t t64 = -469927983;

	t64 = (((x377+x378)+x379)-x380);

	if (t64 != 98332) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x381 = 45852803LLU;
	uint64_t x382 = 1LLU;
	static uint16_t x383 = 130U;
	int16_t x384 = INT16_MAX;
	uint64_t t65 = 439833043LLU;

	t65 = (((x381+x382)+x383)-x384);

	if (t65 != 45820167LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x385 = INT8_MIN;
	int16_t x386 = INT16_MIN;
	uint64_t x388 = 18986813870LLU;
	uint64_t t66 = 131627148LLU;

	t66 = (((x385+x386)+x387)-x388);

	if (t66 != 18446744054722704852LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x389 = 86U;
	static int16_t x390 = INT16_MIN;
	uint64_t x391 = 6LLU;
	int8_t x392 = INT8_MAX;
	volatile uint64_t t67 = 9158LLU;

	t67 = (((x389+x390)+x391)-x392);

	if (t67 != 18446744073709518813LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x393 = UINT8_MAX;
	volatile int16_t x394 = -1;
	int64_t x395 = INT64_MIN;
	static int8_t x396 = INT8_MAX;

	t68 = (((x393+x394)+x395)-x396);

	if (t68 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x397 = INT64_MAX;
	int32_t x398 = -1765907;
	int32_t x399 = -1;
	int16_t x400 = INT16_MIN;
	volatile int64_t t69 = 78857974295374475LL;

	t69 = (((x397+x398)+x399)-x400);

	if (t69 != 9223372036853042667LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x401 = UINT8_MAX;
	int8_t x402 = -1;
	int16_t x404 = INT16_MIN;
	int32_t t70 = -7116845;

	t70 = (((x401+x402)+x403)-x404);

	if (t70 != 254) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x405 = -1LL;
	volatile int16_t x407 = -165;
	static volatile int16_t x408 = -4376;

	t71 = (((x405+x406)+x407)-x408);

	if (t71 != 4209LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x409 = -1LL;
	uint64_t x410 = 20226551720546LLU;
	int32_t x411 = 29457;
	uint16_t x412 = 32285U;
	uint64_t t72 = 5057206793236LLU;

	t72 = (((x409+x410)+x411)-x412);

	if (t72 != 20226551717717LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x421 = 58086439U;
	int16_t x422 = 1;
	volatile int32_t x423 = -1;
	int32_t x424 = -1;
	static volatile uint32_t t73 = 15U;

	t73 = (((x421+x422)+x423)-x424);

	if (t73 != 58086440U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x425 = INT32_MAX;
	static uint32_t x426 = UINT32_MAX;
	int32_t x427 = -1;
	uint32_t x428 = 77365649U;

	t74 = (((x425+x426)+x427)-x428);

	if (t74 != 2070117996U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x433 = 933U;
	volatile int16_t x434 = -1;
	int64_t x435 = -10LL;
	static volatile int16_t x436 = INT16_MIN;
	int64_t t75 = -6319034992634LL;

	t75 = (((x433+x434)+x435)-x436);

	if (t75 != 33690LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x441 = UINT32_MAX;
	int32_t x442 = -1;
	int16_t x443 = -1;
	int8_t x444 = INT8_MIN;
	static uint32_t t76 = 218328U;

	t76 = (((x441+x442)+x443)-x444);

	if (t76 != 125U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x445 = INT8_MAX;
	int8_t x446 = INT8_MIN;
	int64_t x447 = 51374182LL;
	int32_t x448 = INT32_MIN;
	static volatile int64_t t77 = -332LL;

	t77 = (((x445+x446)+x447)-x448);

	if (t77 != 2198857829LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x450 = 56941560LLU;
	volatile uint16_t x452 = UINT16_MAX;
	static volatile uint64_t t78 = 3101285LLU;

	t78 = (((x449+x450)+x451)-x452);

	if (t78 != 55556286130748LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x453 = 5U;
	int64_t x456 = -1LL;
	int64_t t79 = -3LL;

	t79 = (((x453+x454)+x455)-x456);

	if (t79 != 6LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x459 = 104U;
	int64_t x460 = INT64_MIN;
	static volatile int64_t t80 = -1877994315830242LL;

	t80 = (((x457+x458)+x459)-x460);

	if (t80 != 9223372036854743016LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x462 = UINT64_MAX;
	volatile int16_t x463 = INT16_MIN;
	volatile int16_t x464 = -1;
	static volatile uint64_t t81 = 4LLU;

	t81 = (((x461+x462)+x463)-x464);

	if (t81 != 18446744073668077641LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x469 = UINT16_MAX;
	uint64_t x471 = UINT64_MAX;
	int16_t x472 = -1;
	uint64_t t82 = 2697587LLU;

	t82 = (((x469+x470)+x471)-x472);

	if (t82 != 65587LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x482 = -1;
	int8_t x483 = INT8_MAX;
	static uint8_t x484 = 0U;
	volatile int32_t t83 = 1;

	t83 = (((x481+x482)+x483)-x484);

	if (t83 != -2) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x488 = -1;
	volatile int32_t t84 = 292;

	t84 = (((x485+x486)+x487)-x488);

	if (t84 != 289911172) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x489 = INT8_MAX;
	int16_t x490 = 354;
	volatile int32_t x491 = -1;
	uint64_t x492 = 66059430879LLU;
	uint64_t t85 = 6222149279LLU;

	t85 = (((x489+x490)+x491)-x492);

	if (t85 != 18446744007650121217LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x493 = -1;
	int32_t x494 = -1;
	static int8_t x495 = -1;
	volatile int32_t x496 = INT32_MIN;
	static volatile int32_t t86 = 0;

	t86 = (((x493+x494)+x495)-x496);

	if (t86 != 2147483645) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x497 = INT16_MIN;
	int16_t x498 = INT16_MAX;
	static volatile uint64_t x499 = 11LLU;
	static int8_t x500 = -16;
	uint64_t t87 = 77752248344076353LLU;

	t87 = (((x497+x498)+x499)-x500);

	if (t87 != 26LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x502 = INT32_MIN;
	uint64_t x503 = 89183LLU;
	volatile uint64_t x504 = UINT64_MAX;

	t88 = (((x501+x502)+x503)-x504);

	if (t88 != 89183LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x505 = 0;
	int16_t x506 = -1;
	volatile int8_t x507 = -11;
	volatile int32_t x508 = INT32_MIN;
	volatile int32_t t89 = 33217;

	t89 = (((x505+x506)+x507)-x508);

	if (t89 != 2147483636) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x509 = 65U;
	int8_t x510 = INT8_MIN;
	volatile int16_t x511 = INT16_MAX;
	int8_t x512 = -1;

	t90 = (((x509+x510)+x511)-x512);

	if (t90 != 32705) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x513 = INT64_MIN;
	volatile uint16_t x514 = 87U;
	uint8_t x515 = 3U;
	volatile uint8_t x516 = 1U;

	t91 = (((x513+x514)+x515)-x516);

	if (t91 != -9223372036854775719LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x518 = INT8_MIN;
	uint8_t x519 = 1U;
	static int64_t x520 = -1LL;
	int64_t t92 = 21662681399831LL;

	t92 = (((x517+x518)+x519)-x520);

	if (t92 != 31LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x522 = INT8_MIN;
	int16_t x523 = INT16_MAX;
	uint64_t x524 = UINT64_MAX;
	static volatile uint64_t t93 = 51913658072261725LLU;

	t93 = (((x521+x522)+x523)-x524);

	if (t93 != 32512LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x526 = 377545952LLU;
	static int8_t x527 = INT8_MIN;
	volatile int64_t x528 = 8144LL;
	volatile uint64_t t94 = 7947768LLU;

	t94 = (((x525+x526)+x527)-x528);

	if (t94 != 377541419LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x530 = 48U;
	static uint32_t x532 = 5994106U;
	volatile int64_t t95 = 1638151422867234LL;

	t95 = (((x529+x530)+x531)-x532);

	if (t95 != -5994056LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x533 = -1;
	uint32_t x534 = UINT32_MAX;
	static int64_t x536 = -1LL;

	t96 = (((x533+x534)+x535)-x536);

	if (t96 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x537 = INT16_MIN;
	int32_t x538 = INT32_MAX;
	uint64_t x539 = 81486646LLU;
	int8_t x540 = -1;

	t97 = (((x537+x538)+x539)-x540);

	if (t97 != 2228937526LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x541 = -1;
	static uint32_t x542 = 211U;
	int32_t x543 = 0;
	uint32_t t98 = 1784572157U;

	t98 = (((x541+x542)+x543)-x544);

	if (t98 != 83U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x550 = INT16_MIN;
	volatile uint8_t x551 = 0U;
	uint16_t x552 = 926U;
	int64_t t99 = 2752436248LL;

	t99 = (((x549+x550)+x551)-x552);

	if (t99 != -1289978LL) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

