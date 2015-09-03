#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = 728;
int32_t t2 = 418041;
uint8_t x42 = 58U;
int32_t t7 = -131053;
static uint64_t x58 = 8617713279657503LLU;
volatile int8_t x70 = 1;
static int64_t x71 = INT64_MIN;
int64_t x74 = 132LL;
int32_t x76 = INT32_MIN;
uint64_t x80 = 463129996LLU;
static uint32_t x82 = UINT32_MAX;
static uint64_t x84 = 120225705993328LLU;
int8_t x85 = -1;
static int64_t x104 = -1LL;
uint64_t x105 = UINT64_MAX;
uint32_t x106 = UINT32_MAX;
volatile int32_t x108 = INT32_MIN;
static int16_t x123 = INT16_MIN;
static volatile int32_t t21 = -2;
volatile int32_t t23 = -573;
static int64_t x141 = 255447LL;
volatile int64_t x145 = INT64_MIN;
int8_t x151 = INT8_MAX;
int64_t x153 = INT64_MIN;
volatile int32_t t29 = -1;
int32_t t30 = -7;
uint16_t x162 = 2494U;
uint32_t x165 = 104233U;
volatile int32_t x178 = 418;
int16_t x180 = 0;
uint64_t x187 = 14438LLU;
int8_t x191 = -1;
static uint16_t x193 = 264U;
uint32_t x195 = UINT32_MAX;
uint64_t x202 = 518783911672079354LLU;
static int64_t x203 = INT64_MAX;
static int64_t x204 = 1422666566313580208LL;
int32_t t39 = -92;
int32_t x210 = INT32_MAX;
static volatile uint64_t x211 = 19806838634LLU;
static int32_t x212 = 79;
static volatile uint16_t x222 = 2U;
int32_t x223 = -1836657;
static int16_t x225 = -30;
int64_t x226 = -1LL;
volatile int32_t t43 = 178860368;
int32_t x241 = -1;
int32_t x245 = -1;
int8_t x247 = INT8_MAX;
uint32_t x248 = UINT32_MAX;
static volatile int32_t t46 = -16388630;
static int16_t x261 = INT16_MAX;
int32_t x263 = INT32_MIN;
int32_t t47 = -1518099;
int16_t x265 = 5743;
int64_t x266 = 229379840LL;
int32_t t48 = 278201582;
int32_t x269 = 1160101;
volatile int32_t t51 = 2;
int8_t x283 = INT8_MIN;
static int32_t x289 = INT32_MAX;
int8_t x296 = 0;
int16_t x309 = INT16_MIN;
int16_t x312 = 598;
int32_t t56 = 1;
volatile int32_t t57 = 178;
int64_t x320 = -1LL;
volatile int32_t t60 = 137;
volatile int16_t x339 = INT16_MIN;
int16_t x351 = -1;
volatile int32_t t62 = 2808742;
uint64_t x357 = 622700290135878258LLU;
int16_t x358 = INT16_MIN;
uint64_t x360 = UINT64_MAX;
int16_t x361 = 2119;
int8_t x368 = -1;
static int8_t x377 = INT8_MAX;
static volatile int32_t t67 = -385;
int32_t t69 = 41663816;
int64_t x397 = -1LL;
int32_t t71 = -1962021;
volatile uint64_t x422 = 209LLU;
int8_t x429 = INT8_MIN;
static int8_t x434 = INT8_MIN;
int8_t x435 = -1;
static volatile int8_t x452 = INT8_MIN;
volatile uint32_t x477 = 218U;
int8_t x486 = INT8_MAX;
int16_t x487 = 2834;
static volatile uint8_t x491 = 11U;
int32_t x492 = INT32_MIN;
int32_t x501 = INT32_MIN;
uint16_t x504 = 1336U;
int16_t x506 = -1;
int32_t x513 = -1;
int8_t x515 = -1;
volatile int32_t t89 = 10281;
int16_t x523 = -2543;
uint64_t x527 = UINT64_MAX;
int32_t t91 = -1139;
int16_t x529 = INT16_MAX;
int16_t x536 = 55;
static int32_t t93 = 25338;
int16_t x548 = -1;
volatile uint16_t x554 = UINT16_MAX;
int32_t x557 = -1;
uint8_t x565 = 3U;
static int32_t x566 = -1;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int16_t x3 = INT16_MIN;
	int32_t x4 = -1;
	volatile int32_t t0 = 248;

	t0 = (x1<=((x2*x3)-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = INT64_MIN;
	int64_t x10 = -224245LL;
	static int32_t x11 = INT32_MAX;
	static uint8_t x12 = 6U;
	volatile int32_t t1 = 50340;

	t1 = (x9<=((x10*x11)-x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x13 = INT8_MIN;
	uint16_t x14 = UINT16_MAX;
	static uint64_t x15 = UINT64_MAX;
	int64_t x16 = -7042612550LL;

	t2 = (x13<=((x14*x15)-x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x33 = 685;
	uint32_t x34 = UINT32_MAX;
	int16_t x35 = 1023;
	volatile uint8_t x36 = 2U;
	int32_t t3 = -22139;

	t3 = (x33<=((x34*x35)-x36));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x37 = 223;
	uint64_t x38 = 7923704765092372158LLU;
	int32_t x39 = INT32_MIN;
	int64_t x40 = -42LL;
	int32_t t4 = -1458765;

	t4 = (x37<=((x38*x39)-x40));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x41 = -1;
	uint64_t x43 = 29930269LLU;
	int64_t x44 = 87609650673705383LL;
	volatile int32_t t5 = 1793354;

	t5 = (x41<=((x42*x43)-x44));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x45 = 59;
	uint16_t x46 = 543U;
	volatile int32_t x47 = 10;
	int32_t x48 = -1;
	int32_t t6 = -121762477;

	t6 = (x45<=((x46*x47)-x48));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x49 = 458U;
	int64_t x50 = 4842295LL;
	int8_t x51 = INT8_MIN;
	static int64_t x52 = -1LL;

	t7 = (x49<=((x50*x51)-x52));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x53 = INT32_MAX;
	static int8_t x54 = 53;
	int8_t x55 = -1;
	static int8_t x56 = 29;
	int32_t t8 = -80660483;

	t8 = (x53<=((x54*x55)-x56));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x57 = 2U;
	uint16_t x59 = UINT16_MAX;
	volatile uint32_t x60 = 0U;
	int32_t t9 = 824;

	t9 = (x57<=((x58*x59)-x60));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x69 = INT8_MIN;
	uint64_t x72 = 15872LLU;
	int32_t t10 = -94617;

	t10 = (x69<=((x70*x71)-x72));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x73 = INT8_MIN;
	int32_t x75 = -33;
	int32_t t11 = 33937;

	t11 = (x73<=((x74*x75)-x76));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x77 = INT32_MAX;
	uint8_t x78 = 7U;
	static volatile int8_t x79 = INT8_MAX;
	volatile int32_t t12 = 210;

	t12 = (x77<=((x78*x79)-x80));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x81 = 0U;
	int32_t x83 = -141;
	volatile int32_t t13 = 1914711;

	t13 = (x81<=((x82*x83)-x84));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x86 = 13071LLU;
	int64_t x87 = INT64_MIN;
	uint16_t x88 = 63U;
	volatile int32_t t14 = 1610;

	t14 = (x85<=((x86*x87)-x88));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x93 = INT8_MAX;
	uint32_t x94 = 224006891U;
	volatile uint64_t x95 = 3781428LLU;
	static int32_t x96 = INT32_MAX;
	int32_t t15 = -62202109;

	t15 = (x93<=((x94*x95)-x96));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x97 = INT8_MIN;
	static int16_t x98 = INT16_MIN;
	uint8_t x99 = 0U;
	volatile int64_t x100 = -1642LL;
	volatile int32_t t16 = 60241568;

	t16 = (x97<=((x98*x99)-x100));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x101 = 587058062938LLU;
	int32_t x102 = -808669;
	static uint32_t x103 = UINT32_MAX;
	int32_t t17 = 116096;

	t17 = (x101<=((x102*x103)-x104));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x107 = INT32_MIN;
	int32_t t18 = -4;

	t18 = (x105<=((x106*x107)-x108));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x109 = INT32_MAX;
	int64_t x110 = 22671LL;
	uint8_t x111 = 8U;
	volatile uint64_t x112 = 2168506510340049LLU;
	static int32_t t19 = 81;

	t19 = (x109<=((x110*x111)-x112));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x113 = 860;
	volatile int8_t x114 = -1;
	int8_t x115 = INT8_MAX;
	uint64_t x116 = 1LLU;
	volatile int32_t t20 = -464734;

	t20 = (x113<=((x114*x115)-x116));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x121 = 421786011U;
	static uint64_t x122 = 4427637694949361707LLU;
	int64_t x124 = INT64_MIN;

	t21 = (x121<=((x122*x123)-x124));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x125 = INT32_MIN;
	uint64_t x126 = UINT64_MAX;
	int16_t x127 = INT16_MAX;
	int32_t x128 = 1803495;
	int32_t t22 = 10461907;

	t22 = (x125<=((x126*x127)-x128));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x129 = INT32_MAX;
	uint8_t x130 = 6U;
	static uint8_t x131 = 0U;
	volatile int64_t x132 = -1LL;

	t23 = (x129<=((x130*x131)-x132));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x133 = 49617U;
	volatile uint32_t x134 = 257868U;
	volatile uint64_t x135 = UINT64_MAX;
	volatile int8_t x136 = -6;
	volatile int32_t t24 = -1869;

	t24 = (x133<=((x134*x135)-x136));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x137 = 4683U;
	int64_t x138 = -1LL;
	int32_t x139 = INT32_MAX;
	static int64_t x140 = 76716LL;
	int32_t t25 = 875;

	t25 = (x137<=((x138*x139)-x140));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x142 = UINT8_MAX;
	int64_t x143 = -1666055LL;
	uint32_t x144 = UINT32_MAX;
	int32_t t26 = -2586;

	t26 = (x141<=((x142*x143)-x144));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x146 = 1890;
	static int8_t x147 = INT8_MIN;
	int8_t x148 = INT8_MIN;
	volatile int32_t t27 = -1;

	t27 = (x145<=((x146*x147)-x148));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x149 = 23U;
	volatile uint64_t x150 = 59LLU;
	int8_t x152 = 0;
	volatile int32_t t28 = 952;

	t28 = (x149<=((x150*x151)-x152));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x154 = INT16_MIN;
	volatile uint16_t x155 = 24129U;
	int16_t x156 = -1;

	t29 = (x153<=((x154*x155)-x156));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x157 = UINT32_MAX;
	int16_t x158 = INT16_MIN;
	int8_t x159 = INT8_MIN;
	int16_t x160 = 746;

	t30 = (x157<=((x158*x159)-x160));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x161 = UINT8_MAX;
	static volatile int32_t x163 = -1;
	int32_t x164 = INT32_MIN;
	static volatile int32_t t31 = -1271;

	t31 = (x161<=((x162*x163)-x164));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x166 = 10970LLU;
	int8_t x167 = 42;
	int32_t x168 = INT32_MIN;
	volatile int32_t t32 = -423112495;

	t32 = (x165<=((x166*x167)-x168));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x173 = INT16_MIN;
	int32_t x174 = 24;
	uint8_t x175 = UINT8_MAX;
	volatile int16_t x176 = -1;
	volatile int32_t t33 = 1936;

	t33 = (x173<=((x174*x175)-x176));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x177 = -434LL;
	int8_t x179 = 0;
	volatile int32_t t34 = 235003;

	t34 = (x177<=((x178*x179)-x180));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x185 = 1U;
	static int32_t x186 = -1;
	static uint64_t x188 = UINT64_MAX;
	static volatile int32_t t35 = -1;

	t35 = (x185<=((x186*x187)-x188));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x189 = 1673619LLU;
	volatile uint8_t x190 = 0U;
	int16_t x192 = 0;
	int32_t t36 = -508673903;

	t36 = (x189<=((x190*x191)-x192));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x194 = INT16_MIN;
	int64_t x196 = -1LL;
	volatile int32_t t37 = 0;

	t37 = (x193<=((x194*x195)-x196));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x197 = 6638354851LLU;
	volatile int32_t x198 = -1;
	static volatile int32_t x199 = 6385;
	static volatile int16_t x200 = 0;
	volatile int32_t t38 = 33797607;

	t38 = (x197<=((x198*x199)-x200));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x201 = INT8_MIN;

	t39 = (x201<=((x202*x203)-x204));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x209 = 8U;
	static volatile int32_t t40 = 1012543;

	t40 = (x209<=((x210*x211)-x212));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x221 = 6U;
	int32_t x224 = INT32_MIN;
	int32_t t41 = -17205035;

	t41 = (x221<=((x222*x223)-x224));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x227 = 26214LLU;
	int8_t x228 = INT8_MAX;
	static int32_t t42 = -706363;

	t42 = (x225<=((x226*x227)-x228));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x229 = 375U;
	volatile uint64_t x230 = UINT64_MAX;
	int16_t x231 = INT16_MAX;
	volatile uint32_t x232 = 300458207U;

	t43 = (x229<=((x230*x231)-x232));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x242 = 0U;
	volatile int32_t x243 = -1;
	int16_t x244 = -1;
	int32_t t44 = -74;

	t44 = (x241<=((x242*x243)-x244));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x246 = 7;
	int32_t t45 = 930548;

	t45 = (x245<=((x246*x247)-x248));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x253 = INT32_MIN;
	static uint64_t x254 = UINT64_MAX;
	uint64_t x255 = 212977376LLU;
	int8_t x256 = INT8_MIN;

	t46 = (x253<=((x254*x255)-x256));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x262 = 5281801729279531LLU;
	int32_t x264 = INT32_MAX;

	t47 = (x261<=((x262*x263)-x264));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x267 = INT32_MIN;
	volatile int32_t x268 = -1;

	t48 = (x265<=((x266*x267)-x268));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x270 = 3U;
	uint32_t x271 = UINT32_MAX;
	int64_t x272 = 881093597206LL;
	static int32_t t49 = 2852219;

	t49 = (x269<=((x270*x271)-x272));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x273 = 54U;
	uint64_t x274 = 1866264136LLU;
	int64_t x275 = INT64_MAX;
	int32_t x276 = INT32_MIN;
	volatile int32_t t50 = 0;

	t50 = (x273<=((x274*x275)-x276));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x277 = INT64_MIN;
	static volatile int16_t x278 = -1;
	volatile int8_t x279 = 1;
	volatile int8_t x280 = 25;

	t51 = (x277<=((x278*x279)-x280));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x281 = INT16_MIN;
	int16_t x282 = -1;
	volatile uint64_t x284 = 6173764568354137LLU;
	volatile int32_t t52 = 100319;

	t52 = (x281<=((x282*x283)-x284));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x290 = UINT16_MAX;
	volatile uint64_t x291 = 3187318614144173LLU;
	int16_t x292 = INT16_MAX;
	int32_t t53 = 416197121;

	t53 = (x289<=((x290*x291)-x292));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x293 = -1LL;
	uint32_t x294 = 6404U;
	volatile int64_t x295 = -1LL;
	int32_t t54 = -34235522;

	t54 = (x293<=((x294*x295)-x296));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x297 = INT16_MAX;
	uint16_t x298 = 2U;
	uint16_t x299 = 192U;
	volatile uint16_t x300 = 9U;
	volatile int32_t t55 = 18915427;

	t55 = (x297<=((x298*x299)-x300));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x310 = 8;
	int16_t x311 = INT16_MIN;

	t56 = (x309<=((x310*x311)-x312));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x313 = 5364;
	static volatile uint64_t x314 = 11425682453252LLU;
	int32_t x315 = INT32_MAX;
	int8_t x316 = 0;

	t57 = (x313<=((x314*x315)-x316));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x317 = -44;
	uint16_t x318 = 0U;
	volatile uint32_t x319 = 2325448U;
	volatile int32_t t58 = 32050896;

	t58 = (x317<=((x318*x319)-x320));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x321 = 218U;
	static int64_t x322 = -21LL;
	int8_t x323 = INT8_MAX;
	int32_t x324 = INT32_MIN;
	int32_t t59 = 2039354;

	t59 = (x321<=((x322*x323)-x324));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x329 = UINT8_MAX;
	int16_t x330 = -7;
	int8_t x331 = INT8_MIN;
	int16_t x332 = INT16_MIN;

	t60 = (x329<=((x330*x331)-x332));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x337 = 6U;
	static int8_t x338 = -1;
	uint8_t x340 = UINT8_MAX;
	volatile int32_t t61 = -1;

	t61 = (x337<=((x338*x339)-x340));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x349 = -35;
	int8_t x350 = INT8_MIN;
	int64_t x352 = INT64_MAX;

	t62 = (x349<=((x350*x351)-x352));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x359 = 898045705LLU;
	volatile int32_t t63 = -1;

	t63 = (x357<=((x358*x359)-x360));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x362 = INT8_MIN;
	int64_t x363 = -1LL;
	uint8_t x364 = 1U;
	int32_t t64 = 116;

	t64 = (x361<=((x362*x363)-x364));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x365 = -1LL;
	uint8_t x366 = 88U;
	static volatile uint32_t x367 = UINT32_MAX;
	volatile int32_t t65 = -162211;

	t65 = (x365<=((x366*x367)-x368));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x378 = -1975602058532LL;
	volatile uint32_t x379 = 285U;
	uint32_t x380 = 577729666U;
	volatile int32_t t66 = -183;

	t66 = (x377<=((x378*x379)-x380));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x385 = 3U;
	volatile int32_t x386 = INT32_MAX;
	int64_t x387 = -1LL;
	int8_t x388 = INT8_MIN;

	t67 = (x385<=((x386*x387)-x388));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x389 = UINT64_MAX;
	uint64_t x390 = UINT64_MAX;
	int8_t x391 = -1;
	uint8_t x392 = 3U;
	volatile int32_t t68 = 13900;

	t68 = (x389<=((x390*x391)-x392));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x393 = 3;
	int64_t x394 = -1LL;
	int16_t x395 = 0;
	int16_t x396 = -12;

	t69 = (x393<=((x394*x395)-x396));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x398 = 5U;
	uint32_t x399 = 3472U;
	uint32_t x400 = UINT32_MAX;
	static volatile int32_t t70 = 125;

	t70 = (x397<=((x398*x399)-x400));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x401 = INT32_MIN;
	volatile uint64_t x402 = 383LLU;
	volatile int32_t x403 = -312;
	int16_t x404 = INT16_MIN;

	t71 = (x401<=((x402*x403)-x404));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x413 = INT16_MIN;
	volatile int16_t x414 = -1;
	volatile int16_t x415 = INT16_MIN;
	int32_t x416 = -1;
	volatile int32_t t72 = 2131447;

	t72 = (x413<=((x414*x415)-x416));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x417 = INT16_MAX;
	int8_t x418 = -16;
	static uint32_t x419 = 1972183U;
	int64_t x420 = 109LL;
	int32_t t73 = 869;

	t73 = (x417<=((x418*x419)-x420));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x421 = 1U;
	int8_t x423 = -1;
	static uint16_t x424 = 30U;
	volatile int32_t t74 = -227578;

	t74 = (x421<=((x422*x423)-x424));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x425 = INT8_MIN;
	int32_t x426 = -1;
	uint32_t x427 = UINT32_MAX;
	uint16_t x428 = UINT16_MAX;
	int32_t t75 = -26446;

	t75 = (x425<=((x426*x427)-x428));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x430 = 0;
	uint64_t x431 = UINT64_MAX;
	int32_t x432 = INT32_MAX;
	volatile int32_t t76 = 30229039;

	t76 = (x429<=((x430*x431)-x432));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x433 = INT64_MIN;
	int8_t x436 = INT8_MAX;
	int32_t t77 = 10;

	t77 = (x433<=((x434*x435)-x436));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x437 = INT8_MIN;
	int32_t x438 = -1;
	int8_t x439 = INT8_MAX;
	int16_t x440 = -1;
	int32_t t78 = 2;

	t78 = (x437<=((x438*x439)-x440));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x449 = INT16_MIN;
	static int64_t x450 = -1301394138074951LL;
	volatile uint64_t x451 = 3175918398147444255LLU;
	volatile int32_t t79 = 11076005;

	t79 = (x449<=((x450*x451)-x452));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x465 = UINT64_MAX;
	static int16_t x466 = INT16_MIN;
	static int8_t x467 = INT8_MIN;
	uint64_t x468 = 404769172459LLU;
	volatile int32_t t80 = 15925;

	t80 = (x465<=((x466*x467)-x468));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x469 = 12U;
	uint16_t x470 = UINT16_MAX;
	static volatile uint8_t x471 = 53U;
	uint8_t x472 = UINT8_MAX;
	volatile int32_t t81 = -911;

	t81 = (x469<=((x470*x471)-x472));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x478 = 903U;
	int16_t x479 = -1;
	volatile uint64_t x480 = UINT64_MAX;
	volatile int32_t t82 = -3917;

	t82 = (x477<=((x478*x479)-x480));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x481 = -1;
	uint16_t x482 = UINT16_MAX;
	uint32_t x483 = UINT32_MAX;
	int8_t x484 = INT8_MIN;
	int32_t t83 = -6;

	t83 = (x481<=((x482*x483)-x484));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x485 = INT32_MIN;
	int64_t x488 = -4LL;
	static volatile int32_t t84 = 1;

	t84 = (x485<=((x486*x487)-x488));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x489 = -135LL;
	int32_t x490 = -810723;
	volatile int32_t t85 = 3;

	t85 = (x489<=((x490*x491)-x492));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x497 = INT64_MIN;
	int32_t x498 = -1;
	static volatile int16_t x499 = INT16_MIN;
	static volatile int64_t x500 = INT64_MAX;
	int32_t t86 = 3;

	t86 = (x497<=((x498*x499)-x500));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint16_t x502 = 1996U;
	int32_t x503 = -28;
	static int32_t t87 = 731236;

	t87 = (x501<=((x502*x503)-x504));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x505 = UINT32_MAX;
	int8_t x507 = 0;
	int16_t x508 = INT16_MIN;
	static int32_t t88 = -1022021;

	t88 = (x505<=((x506*x507)-x508));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x514 = INT8_MIN;
	int8_t x516 = INT8_MIN;

	t89 = (x513<=((x514*x515)-x516));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x521 = INT16_MIN;
	uint32_t x522 = 5312396U;
	int32_t x524 = 55028649;
	int32_t t90 = 12;

	t90 = (x521<=((x522*x523)-x524));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x525 = INT8_MIN;
	int32_t x526 = -1935446;
	static int64_t x528 = INT64_MIN;

	t91 = (x525<=((x526*x527)-x528));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x530 = INT16_MIN;
	int8_t x531 = -1;
	volatile int16_t x532 = 0;
	int32_t t92 = 5545;

	t92 = (x529<=((x530*x531)-x532));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x533 = INT64_MIN;
	static int16_t x534 = 12249;
	int8_t x535 = -1;

	t93 = (x533<=((x534*x535)-x536));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x541 = INT16_MAX;
	int8_t x542 = -1;
	int32_t x543 = -1;
	uint64_t x544 = UINT64_MAX;
	int32_t t94 = 248;

	t94 = (x541<=((x542*x543)-x544));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x545 = -51;
	volatile uint32_t x546 = 105987411U;
	int16_t x547 = -1;
	volatile int32_t t95 = -198660;

	t95 = (x545<=((x546*x547)-x548));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x549 = UINT16_MAX;
	uint32_t x550 = 255234U;
	static int8_t x551 = INT8_MIN;
	volatile int8_t x552 = -2;
	volatile int32_t t96 = 6403;

	t96 = (x549<=((x550*x551)-x552));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x553 = 22U;
	uint16_t x555 = 6U;
	volatile uint32_t x556 = 3924U;
	volatile int32_t t97 = 5284;

	t97 = (x553<=((x554*x555)-x556));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x558 = 5819U;
	int32_t x559 = -51;
	uint16_t x560 = 43U;
	int32_t t98 = 6033;

	t98 = (x557<=((x558*x559)-x560));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x567 = 3U;
	static int64_t x568 = -939143343LL;
	int32_t t99 = 827635;

	t99 = (x565<=((x566*x567)-x568));

	if (t99 != 1) { NG(); } else { ; }
	
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

