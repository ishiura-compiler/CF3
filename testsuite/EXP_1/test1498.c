#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = UINT8_MAX;
static uint64_t x2 = UINT64_MAX;
int64_t x3 = -447820435LL;
volatile uint64_t x7 = 15773063LLU;
uint64_t x8 = 940481LLU;
int16_t x15 = -1;
static uint16_t x28 = 20U;
uint16_t x34 = 4047U;
int16_t x49 = 7097;
int16_t x52 = INT16_MIN;
int8_t x56 = -14;
int64_t x71 = -1LL;
uint32_t x77 = 37728581U;
uint16_t x80 = 14058U;
int16_t x81 = -1;
int16_t x82 = INT16_MIN;
int32_t x90 = INT32_MIN;
static uint16_t x91 = 3746U;
static volatile uint32_t x92 = 487125168U;
int8_t x94 = INT8_MAX;
int8_t x95 = INT8_MAX;
uint16_t x97 = UINT16_MAX;
static uint64_t x100 = 59938868LLU;
uint64_t x104 = 23LLU;
int16_t x111 = 11267;
volatile int32_t t18 = 25;
uint8_t x113 = 88U;
int64_t x114 = INT64_MIN;
int8_t x128 = 1;
int64_t x130 = -25369841882LL;
volatile int16_t x135 = 2013;
uint32_t x138 = 5U;
int32_t x139 = -1;
int16_t x142 = INT16_MIN;
volatile int32_t t24 = -241488560;
uint64_t x147 = UINT64_MAX;
volatile int32_t x149 = INT32_MIN;
int32_t x153 = -130309;
int64_t x162 = -29837685941LL;
uint64_t x165 = 3073262833666167LLU;
int64_t x168 = -13733116774540412LL;
volatile int64_t t29 = 50123376301LL;
int16_t x184 = 3;
static uint64_t x189 = 4LLU;
uint64_t x201 = UINT64_MAX;
static int8_t x202 = INT8_MAX;
int64_t x203 = 1105028878462LL;
int8_t x204 = -1;
int8_t x205 = INT8_MIN;
uint8_t x208 = UINT8_MAX;
static uint32_t t37 = 82968625U;
int8_t x221 = INT8_MIN;
volatile int64_t x222 = 8822644044022LL;
volatile uint32_t x224 = UINT32_MAX;
int32_t x225 = -2;
static uint16_t x252 = 105U;
int16_t x253 = INT16_MIN;
static uint64_t x258 = UINT64_MAX;
int8_t x275 = 3;
volatile int8_t x278 = INT8_MIN;
int8_t x282 = -1;
volatile int32_t t50 = -1;
uint64_t x292 = 16124LLU;
volatile int32_t t52 = 534600381;
uint8_t x300 = 54U;
uint32_t x310 = UINT32_MAX;
uint64_t x314 = 7117487903504359LLU;
uint16_t x324 = 24040U;
static volatile int32_t t58 = 45;
static uint32_t x337 = 31717031U;
int64_t x353 = 67204278048LL;
static volatile int8_t x355 = 0;
static uint32_t x363 = UINT32_MAX;
static int32_t x366 = INT32_MIN;
uint32_t x368 = UINT32_MAX;
static volatile uint32_t t65 = 69998947U;
int16_t x369 = -1;
uint16_t x372 = UINT16_MAX;
int32_t t66 = 416088;
static uint8_t x380 = 10U;
uint32_t x386 = UINT32_MAX;
uint32_t x387 = 96U;
int8_t x389 = INT8_MIN;
uint32_t x393 = 1688U;
int16_t x394 = INT16_MIN;
static volatile int16_t x396 = INT16_MIN;
int16_t x397 = INT16_MIN;
volatile int64_t x399 = -3804559LL;
volatile int16_t x406 = INT16_MIN;
int64_t x408 = -1LL;
uint32_t x409 = UINT32_MAX;
volatile uint16_t x419 = UINT16_MAX;
uint64_t x434 = 494043387LLU;
uint32_t x438 = 12675U;
volatile int8_t x453 = -1;
volatile uint16_t x454 = 7U;
static int16_t x459 = 0;
int8_t x461 = INT8_MIN;
uint16_t x471 = 635U;
static volatile int32_t t89 = -40339;
uint16_t x477 = 1U;
uint8_t x480 = UINT8_MAX;
volatile int64_t t93 = INT64_MIN;
volatile int16_t x500 = INT16_MIN;
int8_t x512 = -1;
int32_t t97 = -204323525;
static volatile uint16_t x515 = 7U;
static volatile int8_t x517 = -1;
volatile int64_t x519 = -1LL;
int16_t x520 = 10;


void f0(void) {
	int32_t x4 = -1005;
	int64_t t0 = -1564089LL;

	t0 = (((x1<x2)|x3)*x4);

	if (t0 != 450059537175LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 835310192046263785LL;
	static int64_t x6 = INT64_MIN;
	volatile uint64_t t1 = 129420LLU;

	t1 = (((x5<x6)|x7)*x8);

	if (t1 != 14834266063303LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = UINT32_MAX;
	uint64_t x14 = 15413588621LLU;
	int8_t x16 = INT8_MIN;
	static volatile int32_t t2 = -82;

	t2 = (((x13<x14)|x15)*x16);

	if (t2 != 128) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x25 = UINT32_MAX;
	volatile uint32_t x26 = 512626U;
	uint8_t x27 = 127U;
	volatile int32_t t3 = 28;

	t3 = (((x25<x26)|x27)*x28);

	if (t3 != 2540) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x33 = 7U;
	int32_t x35 = -13;
	uint8_t x36 = 118U;
	static volatile int32_t t4 = -3006;

	t4 = (((x33<x34)|x35)*x36);

	if (t4 != -1534) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x37 = 2;
	static int64_t x38 = -1LL;
	uint32_t x39 = 529U;
	int16_t x40 = INT16_MIN;
	static volatile uint32_t t5 = 272013806U;

	t5 = (((x37<x38)|x39)*x40);

	if (t5 != 4277633024U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x41 = INT8_MIN;
	uint16_t x42 = 9U;
	static int32_t x43 = -1;
	static volatile uint32_t x44 = 29U;
	static volatile uint32_t t6 = 57U;

	t6 = (((x41<x42)|x43)*x44);

	if (t6 != 4294967267U) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x50 = 63;
	static uint8_t x51 = UINT8_MAX;
	volatile int32_t t7 = 7918;

	t7 = (((x49<x50)|x51)*x52);

	if (t7 != -8355840) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x53 = -1;
	int64_t x54 = -1LL;
	static uint32_t x55 = UINT32_MAX;
	uint32_t t8 = 119U;

	t8 = (((x53<x54)|x55)*x56);

	if (t8 != 14U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x65 = -2670783407LL;
	static volatile int64_t x66 = -1LL;
	int64_t x67 = INT64_MIN;
	static int64_t x68 = -1LL;
	int64_t t9 = INT64_MAX;

	t9 = (((x65<x66)|x67)*x68);

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x69 = 7356U;
	volatile uint8_t x70 = UINT8_MAX;
	static int32_t x72 = INT32_MIN;
	int64_t t10 = -11464871246946LL;

	t10 = (((x69<x70)|x71)*x72);

	if (t10 != 2147483648LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x73 = -1;
	static volatile uint16_t x74 = 30215U;
	static uint16_t x75 = 17684U;
	uint64_t x76 = 31786138830459LLU;
	static volatile uint64_t t11 = 33925130674126LLU;

	t11 = (((x73<x74)|x75)*x76);

	if (t11 != 562137865216667415LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x78 = 0;
	int32_t x79 = -36;
	volatile int32_t t12 = 5631;

	t12 = (((x77<x78)|x79)*x80);

	if (t12 != -506088) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x83 = 548599217838924LLU;
	volatile int32_t x84 = INT32_MIN;
	volatile uint64_t t13 = 364LLU;

	t13 = (((x81<x82)|x83)*x84);

	if (t13 != 11907396855035592704LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x89 = 3239LLU;
	volatile uint32_t t14 = 24U;

	t14 = (((x89<x90)|x91)*x92);

	if (t14 != 4191870992U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x93 = 7U;
	static uint16_t x96 = 4U;
	int32_t t15 = -1;

	t15 = (((x93<x94)|x95)*x96);

	if (t15 != 508) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x98 = INT32_MIN;
	volatile uint8_t x99 = 6U;
	uint64_t t16 = 9552LLU;

	t16 = (((x97<x98)|x99)*x100);

	if (t16 != 359633208LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x101 = UINT32_MAX;
	uint64_t x102 = UINT64_MAX;
	uint8_t x103 = 1U;
	volatile uint64_t t17 = 1486633LLU;

	t17 = (((x101<x102)|x103)*x104);

	if (t17 != 23LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x109 = -10;
	int64_t x110 = -1029955613279167LL;
	static uint16_t x112 = 5486U;

	t18 = (((x109<x110)|x111)*x112);

	if (t18 != 61810762) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x115 = INT16_MIN;
	volatile int16_t x116 = INT16_MIN;
	volatile int32_t t19 = -3;

	t19 = (((x113<x114)|x115)*x116);

	if (t19 != 1073741824) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x125 = UINT64_MAX;
	int8_t x126 = -1;
	uint8_t x127 = 1U;
	int32_t t20 = -661244424;

	t20 = (((x125<x126)|x127)*x128);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x129 = -1;
	volatile uint64_t x131 = UINT64_MAX;
	volatile int16_t x132 = -3629;
	uint64_t t21 = 918LLU;

	t21 = (((x129<x130)|x131)*x132);

	if (t21 != 3629LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x133 = 76352622U;
	int8_t x134 = 1;
	static volatile int8_t x136 = 0;
	int32_t t22 = -184;

	t22 = (((x133<x134)|x135)*x136);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x137 = 756;
	static int32_t x140 = -6;
	int32_t t23 = -932;

	t23 = (((x137<x138)|x139)*x140);

	if (t23 != 6) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x141 = INT16_MAX;
	static volatile uint8_t x143 = 0U;
	static int8_t x144 = INT8_MIN;

	t24 = (((x141<x142)|x143)*x144);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x145 = 9;
	int64_t x146 = INT64_MAX;
	int16_t x148 = 35;
	uint64_t t25 = 788159244744747LLU;

	t25 = (((x145<x146)|x147)*x148);

	if (t25 != 18446744073709551581LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x150 = -1LL;
	int8_t x151 = INT8_MIN;
	static int16_t x152 = INT16_MIN;
	int32_t t26 = 3;

	t26 = (((x149<x150)|x151)*x152);

	if (t26 != 4161536) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x154 = 14;
	int32_t x155 = 4689;
	int32_t x156 = 1874;
	volatile int32_t t27 = -85175;

	t27 = (((x153<x154)|x155)*x156);

	if (t27 != 8787186) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x161 = -1LL;
	uint8_t x163 = 1U;
	static volatile uint32_t x164 = UINT32_MAX;
	uint32_t t28 = UINT32_MAX;

	t28 = (((x161<x162)|x163)*x164);

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x166 = 1U;
	int64_t x167 = -1LL;

	t29 = (((x165<x166)|x167)*x168);

	if (t29 != 13733116774540412LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x173 = INT8_MIN;
	volatile uint8_t x174 = 14U;
	int32_t x175 = 321341;
	int8_t x176 = INT8_MIN;
	int32_t t30 = -25;

	t30 = (((x173<x174)|x175)*x176);

	if (t30 != -41131648) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x177 = 275;
	uint64_t x178 = 528648291469676169LLU;
	uint16_t x179 = 14U;
	uint64_t x180 = UINT64_MAX;
	volatile uint64_t t31 = 103101567059744LLU;

	t31 = (((x177<x178)|x179)*x180);

	if (t31 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x181 = INT8_MIN;
	int64_t x182 = INT64_MIN;
	int8_t x183 = INT8_MIN;
	volatile int32_t t32 = 7;

	t32 = (((x181<x182)|x183)*x184);

	if (t32 != -384) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x185 = -325958368517892LL;
	static uint64_t x186 = 3101714246703LLU;
	volatile uint64_t x187 = 14484107709141213LLU;
	static uint16_t x188 = UINT16_MAX;
	uint64_t t33 = 5292LLU;

	t33 = (((x185<x186)|x187)*x188);

	if (t33 != 8432050959382261539LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x190 = 0U;
	uint64_t x191 = 41LLU;
	uint64_t x192 = 285LLU;
	volatile uint64_t t34 = 1892362750837462475LLU;

	t34 = (((x189<x190)|x191)*x192);

	if (t34 != 11685LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x193 = 9628;
	int64_t x194 = INT64_MIN;
	int64_t x195 = -1LL;
	uint16_t x196 = UINT16_MAX;
	int64_t t35 = 3802926LL;

	t35 = (((x193<x194)|x195)*x196);

	if (t35 != -65535LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t t36 = 41LL;

	t36 = (((x201<x202)|x203)*x204);

	if (t36 != -1105028878462LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x206 = INT32_MAX;
	static volatile uint32_t x207 = 0U;

	t37 = (((x205<x206)|x207)*x208);

	if (t37 != 255U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x209 = UINT16_MAX;
	static uint64_t x210 = UINT64_MAX;
	int8_t x211 = -1;
	static int32_t x212 = -1;
	int32_t t38 = 848212564;

	t38 = (((x209<x210)|x211)*x212);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x213 = INT8_MIN;
	int16_t x214 = -1;
	int8_t x215 = 1;
	volatile int16_t x216 = INT16_MAX;
	volatile int32_t t39 = 2459;

	t39 = (((x213<x214)|x215)*x216);

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x223 = -1677702;
	uint32_t t40 = 338U;

	t40 = (((x221<x222)|x223)*x224);

	if (t40 != 1677701U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x226 = -1721412199260LL;
	static volatile uint64_t x227 = 1062567237LLU;
	uint64_t x228 = 22970881326050LLU;
	uint64_t t41 = 5050517948LLU;

	t41 = (((x225<x226)|x227)*x228);

	if (t41 != 3063492558107835882LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x237 = 311960371424957LLU;
	int64_t x238 = -1LL;
	static volatile uint16_t x239 = 222U;
	int32_t x240 = -3;
	volatile int32_t t42 = 38891156;

	t42 = (((x237<x238)|x239)*x240);

	if (t42 != -669) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x245 = INT8_MIN;
	uint16_t x246 = UINT16_MAX;
	uint64_t x247 = 52355745917LLU;
	static int8_t x248 = -1;
	volatile uint64_t t43 = 16315517551583LLU;

	t43 = (((x245<x246)|x247)*x248);

	if (t43 != 18446744021353805699LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x249 = UINT16_MAX;
	int64_t x250 = 51205539LL;
	uint64_t x251 = 1386053LLU;
	volatile uint64_t t44 = 783LLU;

	t44 = (((x249<x250)|x251)*x252);

	if (t44 != 145535565LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x254 = 6;
	int16_t x255 = INT16_MIN;
	uint8_t x256 = UINT8_MAX;
	static volatile int32_t t45 = 4796;

	t45 = (((x253<x254)|x255)*x256);

	if (t45 != -8355585) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x257 = -1;
	volatile uint32_t x259 = 388398514U;
	static uint8_t x260 = 1U;
	volatile uint32_t t46 = 46183444U;

	t46 = (((x257<x258)|x259)*x260);

	if (t46 != 388398514U) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x269 = -373178;
	int32_t x270 = -10172;
	int16_t x271 = 13516;
	uint64_t x272 = 11271318295LLU;
	volatile uint64_t t47 = 490LLU;

	t47 = (((x269<x270)|x271)*x272);

	if (t47 != 152354409393515LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x273 = 0U;
	int32_t x274 = INT32_MIN;
	int16_t x276 = INT16_MIN;
	int32_t t48 = -189101;

	t48 = (((x273<x274)|x275)*x276);

	if (t48 != -98304) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x277 = 60471445U;
	int8_t x279 = INT8_MAX;
	uint16_t x280 = 25U;
	static int32_t t49 = 1955;

	t49 = (((x277<x278)|x279)*x280);

	if (t49 != 3175) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x281 = 6769731LLU;
	uint8_t x283 = 19U;
	int32_t x284 = 618;

	t50 = (((x281<x282)|x283)*x284);

	if (t50 != 11742) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x289 = -170189LL;
	int8_t x290 = INT8_MIN;
	volatile int64_t x291 = 84575502LL;
	volatile uint64_t t51 = 31598240325211LLU;

	t51 = (((x289<x290)|x291)*x292);

	if (t51 != 1363695410372LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x293 = 1642132152924LLU;
	int32_t x294 = INT32_MIN;
	int8_t x295 = INT8_MIN;
	int32_t x296 = -380;

	t52 = (((x293<x294)|x295)*x296);

	if (t52 != 48260) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x297 = UINT16_MAX;
	int32_t x298 = -1;
	int64_t x299 = -1LL;
	int64_t t53 = -354139299672482LL;

	t53 = (((x297<x298)|x299)*x300);

	if (t53 != -54LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x305 = -41;
	static volatile uint8_t x306 = 0U;
	volatile int8_t x307 = 1;
	int16_t x308 = INT16_MIN;
	int32_t t54 = 82432;

	t54 = (((x305<x306)|x307)*x308);

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x309 = UINT32_MAX;
	uint16_t x311 = 2U;
	int16_t x312 = 1;
	static int32_t t55 = -302372;

	t55 = (((x309<x310)|x311)*x312);

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x313 = 0U;
	int16_t x315 = INT16_MAX;
	int16_t x316 = INT16_MIN;
	int32_t t56 = -5643338;

	t56 = (((x313<x314)|x315)*x316);

	if (t56 != -1073709056) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x321 = -1;
	uint8_t x322 = UINT8_MAX;
	static int32_t x323 = -1;
	volatile int32_t t57 = 645197;

	t57 = (((x321<x322)|x323)*x324);

	if (t57 != -24040) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x325 = 647090LLU;
	uint8_t x326 = 1U;
	uint16_t x327 = 2U;
	int32_t x328 = -440192665;

	t58 = (((x325<x326)|x327)*x328);

	if (t58 != -880385330) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x329 = INT32_MIN;
	uint32_t x330 = 1023893U;
	uint64_t x331 = 58241438775622LLU;
	int64_t x332 = INT64_MAX;
	uint64_t t59 = 173308377695358LLU;

	t59 = (((x329<x330)|x331)*x332);

	if (t59 != 18446685832270775994LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x333 = -1;
	static int32_t x334 = INT32_MIN;
	int32_t x335 = -20;
	int16_t x336 = 0;
	volatile int32_t t60 = -558255194;

	t60 = (((x333<x334)|x335)*x336);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x338 = -5476;
	static int16_t x339 = -1;
	int8_t x340 = INT8_MIN;
	static volatile int32_t t61 = -3;

	t61 = (((x337<x338)|x339)*x340);

	if (t61 != 128) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x354 = INT32_MAX;
	int8_t x356 = INT8_MAX;
	volatile int32_t t62 = -2514;

	t62 = (((x353<x354)|x355)*x356);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x357 = -31;
	int16_t x358 = 0;
	uint16_t x359 = UINT16_MAX;
	static int8_t x360 = -1;
	int32_t t63 = 54347379;

	t63 = (((x357<x358)|x359)*x360);

	if (t63 != -65535) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x361 = INT64_MIN;
	uint16_t x362 = UINT16_MAX;
	uint32_t x364 = UINT32_MAX;
	volatile uint32_t t64 = 141984U;

	t64 = (((x361<x362)|x363)*x364);

	if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x365 = UINT32_MAX;
	static int16_t x367 = INT16_MIN;

	t65 = (((x365<x366)|x367)*x368);

	if (t65 != 32768U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x370 = INT16_MIN;
	uint8_t x371 = 1U;

	t66 = (((x369<x370)|x371)*x372);

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x373 = INT64_MAX;
	int32_t x374 = -1;
	int8_t x375 = INT8_MAX;
	static uint16_t x376 = 19784U;
	volatile int32_t t67 = 16;

	t67 = (((x373<x374)|x375)*x376);

	if (t67 != 2512568) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x377 = INT64_MIN;
	uint32_t x378 = 3889916U;
	volatile int16_t x379 = INT16_MAX;
	static int32_t t68 = -14;

	t68 = (((x377<x378)|x379)*x380);

	if (t68 != 327670) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x381 = INT8_MIN;
	int8_t x382 = 3;
	int32_t x383 = INT32_MIN;
	static int64_t x384 = 8LL;
	int64_t t69 = 6005196635LL;

	t69 = (((x381<x382)|x383)*x384);

	if (t69 != -17179869176LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x385 = 40U;
	int8_t x388 = INT8_MIN;
	volatile uint32_t t70 = 56419U;

	t70 = (((x385<x386)|x387)*x388);

	if (t70 != 4294954880U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x390 = INT32_MIN;
	uint16_t x391 = UINT16_MAX;
	int16_t x392 = -31;
	int32_t t71 = 378;

	t71 = (((x389<x390)|x391)*x392);

	if (t71 != -2031585) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x395 = 20032;
	int32_t t72 = 5389619;

	t72 = (((x393<x394)|x395)*x396);

	if (t72 != -656441344) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x398 = 18666158536LLU;
	int16_t x400 = INT16_MIN;
	int64_t t73 = 3790LL;

	t73 = (((x397<x398)|x399)*x400);

	if (t73 != 124667789312LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x405 = UINT8_MAX;
	uint8_t x407 = UINT8_MAX;
	int64_t t74 = 181279035971LL;

	t74 = (((x405<x406)|x407)*x408);

	if (t74 != -255LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x410 = 10002106LLU;
	int16_t x411 = 0;
	int8_t x412 = 0;
	volatile int32_t t75 = 34337;

	t75 = (((x409<x410)|x411)*x412);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x413 = INT8_MIN;
	volatile int32_t x414 = 31776;
	uint64_t x415 = UINT64_MAX;
	volatile int8_t x416 = -18;
	volatile uint64_t t76 = 26863442885866LLU;

	t76 = (((x413<x414)|x415)*x416);

	if (t76 != 18LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x417 = INT8_MAX;
	int16_t x418 = 3;
	uint64_t x420 = 89946626LLU;
	uint64_t t77 = 1LLU;

	t77 = (((x417<x418)|x419)*x420);

	if (t77 != 5894652134910LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x421 = UINT16_MAX;
	static int16_t x422 = -1;
	volatile int16_t x423 = INT16_MAX;
	volatile uint64_t x424 = 59LLU;
	uint64_t t78 = 1390LLU;

	t78 = (((x421<x422)|x423)*x424);

	if (t78 != 1933253LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x425 = UINT32_MAX;
	volatile int8_t x426 = -3;
	volatile int16_t x427 = -207;
	volatile int16_t x428 = -310;
	int32_t t79 = 2;

	t79 = (((x425<x426)|x427)*x428);

	if (t79 != 64170) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x429 = INT16_MIN;
	int64_t x430 = 94LL;
	int32_t x431 = -853;
	int64_t x432 = -219991538370453LL;
	volatile int64_t t80 = -388438309LL;

	t80 = (((x429<x430)|x431)*x432);

	if (t80 != 187652782229996409LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x433 = -1;
	uint8_t x435 = UINT8_MAX;
	static uint8_t x436 = UINT8_MAX;
	int32_t t81 = 3;

	t81 = (((x433<x434)|x435)*x436);

	if (t81 != 65025) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x437 = INT8_MIN;
	uint8_t x439 = 1U;
	int32_t x440 = 4265369;
	static int32_t t82 = 230;

	t82 = (((x437<x438)|x439)*x440);

	if (t82 != 4265369) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x441 = UINT8_MAX;
	int8_t x442 = 0;
	static uint8_t x443 = 0U;
	int32_t x444 = INT32_MIN;
	int32_t t83 = 2558560;

	t83 = (((x441<x442)|x443)*x444);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x445 = 14265386;
	uint32_t x446 = 51467U;
	static volatile int64_t x447 = 0LL;
	int32_t x448 = 351995;
	int64_t t84 = 11LL;

	t84 = (((x445<x446)|x447)*x448);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x455 = 3U;
	volatile int64_t x456 = -26912408935LL;
	static volatile int64_t t85 = 776LL;

	t85 = (((x453<x454)|x455)*x456);

	if (t85 != -80737226805LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x457 = INT16_MIN;
	uint16_t x458 = UINT16_MAX;
	uint16_t x460 = 6295U;
	int32_t t86 = 165430147;

	t86 = (((x457<x458)|x459)*x460);

	if (t86 != 6295) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x462 = 42;
	uint16_t x463 = 159U;
	volatile uint16_t x464 = UINT16_MAX;
	volatile int32_t t87 = -239908613;

	t87 = (((x461<x462)|x463)*x464);

	if (t87 != 10420065) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x465 = INT16_MAX;
	int64_t x466 = INT64_MAX;
	volatile uint16_t x467 = 1495U;
	int64_t x468 = -408LL;
	int64_t t88 = 33396546296041LL;

	t88 = (((x465<x466)|x467)*x468);

	if (t88 != -609960LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x469 = -1LL;
	int64_t x470 = -34447007815712435LL;
	int8_t x472 = INT8_MIN;

	t89 = (((x469<x470)|x471)*x472);

	if (t89 != -81280) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x473 = INT16_MIN;
	static volatile int16_t x474 = INT16_MAX;
	int16_t x475 = INT16_MIN;
	int16_t x476 = -44;
	volatile int32_t t90 = 11112;

	t90 = (((x473<x474)|x475)*x476);

	if (t90 != 1441748) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x478 = 3455LLU;
	int16_t x479 = INT16_MIN;
	volatile int32_t t91 = 2168432;

	t91 = (((x477<x478)|x479)*x480);

	if (t91 != -8355585) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x481 = INT32_MIN;
	uint32_t x482 = 26267U;
	int16_t x483 = -1;
	static uint16_t x484 = 3U;
	volatile int32_t t92 = 271122;

	t92 = (((x481<x482)|x483)*x484);

	if (t92 != -3) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x493 = INT32_MAX;
	volatile uint8_t x494 = 58U;
	static int64_t x495 = INT64_MIN;
	int64_t x496 = 1LL;

	t93 = (((x493<x494)|x495)*x496);

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x497 = INT16_MAX;
	static volatile int32_t x498 = INT32_MIN;
	volatile uint64_t x499 = 514419734155609333LLU;
	volatile uint64_t t94 = 204474794LLU;

	t94 = (((x497<x498)|x499)*x500);

	if (t94 != 3818234559523553280LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x501 = INT8_MIN;
	static int16_t x502 = INT16_MIN;
	uint64_t x503 = UINT64_MAX;
	volatile int8_t x504 = 14;
	volatile uint64_t t95 = 101836372LLU;

	t95 = (((x501<x502)|x503)*x504);

	if (t95 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x505 = -15;
	int8_t x506 = 1;
	int8_t x507 = -1;
	int64_t x508 = -1LL;
	static int64_t t96 = 107575254819LL;

	t96 = (((x505<x506)|x507)*x508);

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x509 = INT32_MAX;
	static volatile uint16_t x510 = 1U;
	int8_t x511 = 41;

	t97 = (((x509<x510)|x511)*x512);

	if (t97 != -41) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x513 = 278;
	uint32_t x514 = 424721549U;
	int16_t x516 = INT16_MIN;
	volatile int32_t t98 = 1;

	t98 = (((x513<x514)|x515)*x516);

	if (t98 != -229376) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x518 = 0;
	static int64_t t99 = -60296LL;

	t99 = (((x517<x518)|x519)*x520);

	if (t99 != -10LL) { NG(); } else { ; }
	
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

