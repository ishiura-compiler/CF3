#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MIN;
int16_t x2 = INT16_MIN;
int16_t x20 = -1;
static volatile int64_t x26 = INT64_MAX;
volatile int64_t t5 = -413626543LL;
int32_t x39 = INT32_MIN;
uint8_t x41 = 0U;
int16_t x43 = INT16_MAX;
uint32_t x53 = 6482639U;
volatile uint64_t t14 = 58003096351053LLU;
static int16_t x76 = -8;
volatile int16_t x78 = -1;
volatile int64_t t18 = 13435703030LL;
volatile int64_t t21 = -1864611677LL;
int64_t x133 = INT64_MAX;
uint8_t x134 = 0U;
int8_t x141 = INT8_MIN;
int32_t x147 = -1;
int16_t x152 = 19;
uint64_t t29 = 242144LLU;
uint64_t x169 = UINT64_MAX;
static volatile uint16_t x178 = 11222U;
int16_t x183 = INT16_MAX;
static int32_t x184 = INT32_MIN;
volatile uint64_t x190 = 5LLU;
int8_t x191 = INT8_MIN;
volatile uint64_t t35 = 1295LLU;
int16_t x198 = -2;
int8_t x203 = INT8_MAX;
static volatile int64_t x204 = -1504758276199612LL;
int64_t x211 = INT64_MAX;
static volatile uint64_t x214 = 19LLU;
volatile int8_t x228 = 14;
static uint8_t x237 = UINT8_MAX;
int32_t x242 = 0;
volatile uint64_t t47 = 277619LLU;
uint32_t x245 = UINT32_MAX;
volatile int32_t x258 = -1;
volatile int64_t x263 = -504298715433LL;
static volatile int32_t t52 = 5388;
static volatile int8_t x279 = INT8_MAX;
static volatile int8_t x280 = 1;
int8_t x281 = 36;
uint64_t x285 = 103LLU;
int32_t x288 = INT32_MAX;
uint32_t t56 = 1938447327U;
uint16_t x297 = 122U;
int16_t x300 = 12;
uint32_t x303 = 1139U;
int64_t t60 = -386899LL;
int16_t x311 = INT16_MIN;
int16_t x315 = INT16_MIN;
int64_t x317 = -121LL;
static volatile int64_t t63 = 15854108982550LL;
uint16_t x325 = 39U;
int16_t x339 = 2652;
int16_t x340 = INT16_MIN;
uint8_t x342 = UINT8_MAX;
uint32_t x348 = UINT32_MAX;
volatile uint8_t x349 = UINT8_MAX;
volatile int8_t x351 = -1;
int32_t x352 = -32223394;
static uint8_t x354 = 1U;
uint8_t x356 = 60U;
int64_t x369 = INT64_MIN;
int64_t x370 = 1679617031186982969LL;
int64_t t73 = 2120793301LL;
int16_t x382 = INT16_MAX;
int16_t x394 = 5286;
int16_t x402 = 0;
static volatile int16_t x404 = 6118;
int64_t x410 = -1LL;
static volatile int64_t x411 = 235865122LL;
static uint32_t x416 = 19669U;
int64_t x417 = INT64_MAX;
volatile uint64_t t84 = 117LLU;
static int32_t t85 = 13486;
static int64_t x432 = -1LL;
static uint16_t x441 = UINT16_MAX;
static int64_t x442 = INT64_MIN;
uint32_t x443 = UINT32_MAX;
int64_t t89 = 46LL;
uint32_t x455 = UINT32_MAX;
int64_t x462 = -1LL;
volatile int64_t t93 = 338001692777LL;
uint16_t x471 = UINT16_MAX;
static uint32_t x475 = UINT32_MAX;
static int64_t t97 = 630881811350345LL;
int32_t t98 = -113761665;
uint32_t x491 = 21U;
volatile uint64_t t99 = 16039112353377LLU;


void f0(void) {
	uint64_t x3 = UINT64_MAX;
	static uint8_t x4 = 9U;
	static uint64_t t0 = 405LLU;

	t0 = ((x1^(x2+x3))%x4);

	if (t0 != 2LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = UINT32_MAX;
	int8_t x10 = -1;
	static uint16_t x11 = 3203U;
	volatile int8_t x12 = -1;
	uint32_t t1 = 25558282U;

	t1 = ((x9^(x10+x11))%x12);

	if (t1 != 4294964093U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x13 = -18537779LL;
	uint8_t x14 = 100U;
	static int16_t x15 = -2;
	static int32_t x16 = 214;
	volatile int64_t t2 = -984LL;

	t2 = ((x13^(x14+x15))%x16);

	if (t2 != -59LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = 828LL;
	volatile int16_t x18 = 5499;
	uint16_t x19 = 6136U;
	volatile int64_t t3 = 3294934781LL;

	t3 = ((x17^(x18+x19))%x20);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 418U;
	volatile int32_t x22 = -1;
	uint16_t x23 = 3U;
	int16_t x24 = -21;
	uint32_t t4 = 128U;

	t4 = ((x21^(x22+x23))%x24);

	if (t4 != 416U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MIN;
	volatile int16_t x27 = INT16_MIN;
	uint8_t x28 = 1U;

	t5 = ((x25^(x26+x27))%x28);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MAX;
	volatile int16_t x30 = INT16_MIN;
	uint64_t x31 = UINT64_MAX;
	int32_t x32 = 7967;
	volatile uint64_t t6 = 27800939012949571LLU;

	t6 = ((x29^(x30+x31))%x32);

	if (t6 != 2057LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MAX;
	int8_t x34 = INT8_MAX;
	uint16_t x35 = 20U;
	int64_t x36 = INT64_MIN;
	int64_t t7 = -964877LL;

	t7 = ((x33^(x34+x35))%x36);

	if (t7 != 236LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 729091646356187463LLU;
	static int64_t x38 = -1LL;
	int16_t x40 = -6;
	uint64_t t8 = 807020LLU;

	t8 = ((x37^(x38+x39))%x40);

	if (t8 != 17717652425205880504LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x42 = UINT64_MAX;
	int8_t x44 = -13;
	static uint64_t t9 = 314783045103892148LLU;

	t9 = ((x41^(x42+x43))%x44);

	if (t9 != 32766LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x45 = INT32_MAX;
	int16_t x46 = 473;
	static int8_t x47 = INT8_MIN;
	int8_t x48 = INT8_MAX;
	volatile int32_t t10 = 0;

	t10 = ((x45^(x46+x47))%x48);

	if (t10 != 43) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MIN;
	static volatile int8_t x50 = -1;
	static int32_t x51 = -1784697;
	int16_t x52 = -11541;
	volatile int32_t t11 = -1;

	t11 = ((x49^(x50+x51))%x52);

	if (t11 != 7771) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x54 = -1;
	int16_t x55 = INT16_MIN;
	static uint64_t x56 = UINT64_MAX;
	volatile uint64_t t12 = 157629LLU;

	t12 = ((x53^(x54+x55))%x56);

	if (t12 != 4288517424LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = 4;
	static volatile int64_t x62 = -16954689814LL;
	uint8_t x63 = 7U;
	static int16_t x64 = 71;
	int64_t t13 = 55819LL;

	t13 = ((x61^(x62+x63))%x64);

	if (t13 != -66LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = -56882293236927LL;
	int8_t x70 = 15;
	int8_t x71 = INT8_MAX;
	static uint64_t x72 = 20594568250LLU;

	t14 = ((x69^(x70+x71))%x72);

	if (t14 != 7412035581LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x73 = INT32_MIN;
	volatile int16_t x74 = INT16_MAX;
	static int8_t x75 = 1;
	int32_t t15 = 2818879;

	t15 = ((x73^(x74+x75))%x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = INT8_MAX;
	int32_t x79 = INT32_MAX;
	static uint16_t x80 = UINT16_MAX;
	int32_t t16 = -631;

	t16 = ((x77^(x78+x79))%x80);

	if (t16 != 32641) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = INT64_MAX;
	int16_t x82 = INT16_MIN;
	volatile int64_t x83 = -1LL;
	static int32_t x84 = INT32_MIN;
	static volatile int64_t t17 = 781715203099LL;

	t17 = ((x81^(x82+x83))%x84);

	if (t17 != -2147450880LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x93 = INT16_MAX;
	volatile uint32_t x94 = 1565046867U;
	int32_t x95 = -1;
	int64_t x96 = INT64_MIN;

	t18 = ((x93^(x94+x95))%x96);

	if (t18 != 1565050797LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x97 = 838;
	int64_t x98 = -527364834469536296LL;
	uint8_t x99 = UINT8_MAX;
	int32_t x100 = INT32_MAX;
	static int64_t t19 = 63114540848830605LL;

	t19 = ((x97^(x98+x99))%x100);

	if (t19 != -1748633978LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x109 = INT32_MAX;
	volatile int8_t x110 = 1;
	uint16_t x111 = UINT16_MAX;
	uint16_t x112 = 9U;
	int32_t t20 = 5;

	t20 = ((x109^(x110+x111))%x112);

	if (t20 != 3) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x117 = INT8_MIN;
	int16_t x118 = INT16_MAX;
	static int64_t x119 = INT64_MIN;
	int32_t x120 = INT32_MIN;

	t21 = ((x117^(x118+x119))%x120);

	if (t21 != 2147451007LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x121 = 1052887167;
	uint8_t x122 = UINT8_MAX;
	int64_t x123 = INT64_MIN;
	static volatile int64_t x124 = -2020158102316149LL;
	volatile int64_t t22 = 2211348168948170703LL;

	t22 = ((x121^(x122+x123))%x124);

	if (t22 != -1350298728668455LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x125 = 41748557128598LLU;
	uint32_t x126 = 1U;
	uint8_t x127 = UINT8_MAX;
	uint32_t x128 = UINT32_MAX;
	volatile uint64_t t23 = 84686129LLU;

	t23 = ((x125^(x126+x127))%x128);

	if (t23 != 1475020942LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x135 = 726U;
	int32_t x136 = 84;
	volatile int64_t t24 = -57669676LL;

	t24 = ((x133^(x134+x135))%x136);

	if (t24 != 37LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x142 = 4U;
	uint64_t x143 = UINT64_MAX;
	int8_t x144 = INT8_MIN;
	static uint64_t t25 = 437806LLU;

	t25 = ((x141^(x142+x143))%x144);

	if (t25 != 3LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x145 = -12;
	uint8_t x146 = 31U;
	volatile uint16_t x148 = UINT16_MAX;
	static volatile int32_t t26 = -1;

	t26 = ((x145^(x146+x147))%x148);

	if (t26 != -22) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x149 = -188;
	static int8_t x150 = 9;
	volatile int16_t x151 = -3759;
	volatile int32_t t27 = -948390379;

	t27 = ((x149^(x150+x151))%x152);

	if (t27 != 4) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x153 = INT16_MIN;
	int16_t x154 = 231;
	int8_t x155 = INT8_MIN;
	volatile int8_t x156 = INT8_MIN;
	int32_t t28 = -53740;

	t28 = ((x153^(x154+x155))%x156);

	if (t28 != -25) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x161 = 27;
	volatile uint64_t x162 = UINT64_MAX;
	static uint16_t x163 = UINT16_MAX;
	uint8_t x164 = UINT8_MAX;

	t29 = ((x161^(x162+x163))%x164);

	if (t29 != 229LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x165 = INT8_MIN;
	volatile int32_t x166 = INT32_MIN;
	uint32_t x167 = 47840U;
	int64_t x168 = -1LL;
	int64_t t30 = 1850280LL;

	t30 = ((x165^(x166+x167))%x168);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x170 = 0U;
	int32_t x171 = INT32_MAX;
	static uint64_t x172 = UINT64_MAX;
	volatile uint64_t t31 = 292804468LLU;

	t31 = ((x169^(x170+x171))%x172);

	if (t31 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x177 = INT64_MIN;
	uint64_t x179 = 399775608LLU;
	int32_t x180 = 689050;
	volatile uint64_t t32 = 95589091463020LLU;

	t32 = ((x177^(x178+x179))%x180);

	if (t32 != 617788LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x181 = INT8_MIN;
	uint32_t x182 = 101662404U;
	static uint32_t t33 = 509U;

	t33 = ((x181^(x182+x183))%x184);

	if (t33 != 2045788483U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x185 = INT16_MIN;
	uint32_t x186 = UINT32_MAX;
	static int16_t x187 = -1;
	uint8_t x188 = UINT8_MAX;
	volatile uint32_t t34 = 57325U;

	t34 = ((x185^(x186+x187))%x188);

	if (t34 != 126U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x189 = 19;
	int64_t x192 = 4084525272029572203LL;

	t35 = ((x189^(x190+x191))%x192);

	if (t35 != 2108642985591262698LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x193 = INT32_MIN;
	int8_t x194 = INT8_MAX;
	int8_t x195 = INT8_MIN;
	volatile int16_t x196 = -7;
	static volatile int32_t t36 = 380;

	t36 = ((x193^(x194+x195))%x196);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x197 = -1LL;
	int64_t x199 = -1LL;
	volatile int64_t x200 = -1LL;
	int64_t t37 = 78LL;

	t37 = ((x197^(x198+x199))%x200);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x201 = 11267114289804LL;
	int32_t x202 = -101029730;
	int64_t t38 = -1804LL;

	t38 = ((x201^(x202+x203))%x204);

	if (t38 != -11267081100399LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x205 = 448U;
	static int64_t x206 = 570478061354LL;
	static int64_t x207 = INT64_MIN;
	volatile uint8_t x208 = UINT8_MAX;
	int64_t t39 = 12326111154LL;

	t39 = ((x205^(x206+x207))%x208);

	if (t39 != -178LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x209 = INT64_MIN;
	int8_t x210 = -1;
	static int16_t x212 = INT16_MIN;
	static volatile int64_t t40 = 438345792203777497LL;

	t40 = ((x209^(x210+x211))%x212);

	if (t40 != -2LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x213 = -1LL;
	int64_t x215 = 7920LL;
	volatile uint8_t x216 = UINT8_MAX;
	volatile uint64_t t41 = 7661LLU;

	t41 = ((x213^(x214+x215))%x216);

	if (t41 != 221LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x221 = INT8_MAX;
	volatile int16_t x222 = -11;
	int64_t x223 = 1939LL;
	int8_t x224 = INT8_MIN;
	int64_t t42 = 1146202166LL;

	t42 = ((x221^(x222+x223))%x224);

	if (t42 != 119LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x225 = -1;
	volatile uint16_t x226 = UINT16_MAX;
	volatile uint16_t x227 = 2022U;
	static int32_t t43 = -45526163;

	t43 = ((x225^(x226+x227))%x228);

	if (t43 != -8) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x229 = -1;
	int32_t x230 = INT32_MAX;
	volatile int8_t x231 = -14;
	uint32_t x232 = 2885U;
	static uint32_t t44 = 1761519U;

	t44 = ((x229^(x230+x231))%x232);

	if (t44 != 2177U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x233 = INT64_MAX;
	uint16_t x234 = 12670U;
	uint32_t x235 = UINT32_MAX;
	int32_t x236 = 62163;
	volatile int64_t t45 = -70051115991885LL;

	t45 = ((x233^(x234+x235))%x236);

	if (t45 != 24211LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x238 = UINT32_MAX;
	uint8_t x239 = 58U;
	int8_t x240 = -1;
	volatile uint32_t t46 = 122U;

	t46 = ((x237^(x238+x239))%x240);

	if (t46 != 198U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x241 = UINT64_MAX;
	int16_t x243 = INT16_MIN;
	int32_t x244 = INT32_MIN;

	t47 = ((x241^(x242+x243))%x244);

	if (t47 != 32767LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x246 = INT64_MAX;
	int32_t x247 = -1;
	int64_t x248 = INT64_MIN;
	static int64_t t48 = -1360348175621148585LL;

	t48 = ((x245^(x246+x247))%x248);

	if (t48 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x253 = -158639555846LL;
	uint16_t x254 = 3U;
	int16_t x255 = INT16_MIN;
	uint32_t x256 = UINT32_MAX;
	static volatile int64_t t49 = 61LL;

	t49 = ((x253^(x254+x255))%x256);

	if (t49 != 4020763421LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x257 = -51923;
	int64_t x259 = INT64_MAX;
	int32_t x260 = -1;
	static int64_t t50 = 104LL;

	t50 = ((x257^(x258+x259))%x260);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x261 = INT64_MIN;
	int16_t x262 = -8;
	static int32_t x264 = 31878574;
	static volatile int64_t t51 = -266557330980LL;

	t51 = ((x261^(x262+x263))%x264);

	if (t51 != 1721753LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x269 = -351144551;
	int8_t x270 = 15;
	int16_t x271 = -113;
	static uint8_t x272 = UINT8_MAX;

	t52 = ((x269^(x270+x271))%x272);

	if (t52 != 20) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x277 = 1;
	int64_t x278 = -1480LL;
	int64_t t53 = -133558999LL;

	t53 = ((x277^(x278+x279))%x280);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x282 = INT8_MAX;
	uint16_t x283 = 14568U;
	int64_t x284 = -713623906833LL;
	static volatile int64_t t54 = 3069598038061064LL;

	t54 = ((x281^(x282+x283))%x284);

	if (t54 != 14659LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x286 = 88;
	int16_t x287 = INT16_MIN;
	volatile uint64_t t55 = 17869207024343LLU;

	t55 = ((x285^(x286+x287))%x288);

	if (t55 != 2147450946LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x289 = INT16_MAX;
	int8_t x290 = INT8_MIN;
	static uint32_t x291 = 95445U;
	static uint16_t x292 = 9U;

	t56 = ((x289^(x290+x291))%x292);

	if (t56 != 5U) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x293 = -13898;
	uint32_t x294 = 24160U;
	int8_t x295 = 1;
	int16_t x296 = -12112;
	volatile uint32_t t57 = 4139485U;

	t57 = ((x293^(x294+x295))%x296);

	if (t57 != 4294940631U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x298 = -71374;
	uint32_t x299 = 244327840U;
	volatile uint32_t t58 = 2U;

	t58 = ((x297^(x298+x299))%x300);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x301 = INT16_MAX;
	int16_t x302 = INT16_MIN;
	int8_t x304 = 1;
	static uint32_t t59 = 35U;

	t59 = ((x301^(x302+x303))%x304);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x305 = -42;
	uint8_t x306 = UINT8_MAX;
	static volatile int64_t x307 = INT64_MIN;
	int64_t x308 = 97565120930307LL;

	t60 = ((x305^(x306+x307))%x308);

	if (t60 != 53329708203348LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x309 = INT64_MIN;
	uint64_t x310 = UINT64_MAX;
	int64_t x312 = INT64_MIN;
	volatile uint64_t t61 = 16753997773LLU;

	t61 = ((x309^(x310+x311))%x312);

	if (t61 != 9223372036854743039LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x313 = 10853205768546438LLU;
	int8_t x314 = INT8_MIN;
	uint64_t x316 = UINT64_MAX;
	uint64_t t62 = 66586282812516094LLU;

	t62 = ((x313^(x314+x315))%x316);

	if (t62 != 18435890867940972294LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x318 = INT8_MAX;
	int16_t x319 = -19;
	int8_t x320 = INT8_MIN;

	t63 = ((x317^(x318+x319))%x320);

	if (t63 != -21LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x321 = 0;
	uint8_t x322 = 4U;
	int64_t x323 = -1LL;
	int8_t x324 = -1;
	volatile int64_t t64 = 411LL;

	t64 = ((x321^(x322+x323))%x324);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x326 = INT32_MAX;
	int16_t x327 = INT16_MIN;
	int32_t x328 = 27;
	int32_t t65 = 92;

	t65 = ((x325^(x326+x327))%x328);

	if (t65 != 8) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x337 = 109989LLU;
	int64_t x338 = -3067374699798156LL;
	uint64_t t66 = 18760974344105398LLU;

	t66 = ((x337^(x338+x339))%x340);

	if (t66 != 18443676699009844853LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x341 = INT32_MAX;
	volatile int8_t x343 = 3;
	int64_t x344 = INT64_MIN;
	static int64_t t67 = 1129665411308808LL;

	t67 = ((x341^(x342+x343))%x344);

	if (t67 != 2147483389LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x345 = INT16_MIN;
	volatile uint32_t x346 = UINT32_MAX;
	uint16_t x347 = 9450U;
	uint32_t t68 = 1U;

	t68 = ((x345^(x346+x347))%x348);

	if (t68 != 4294943977U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x350 = 5462751U;
	uint32_t t69 = 3289U;

	t69 = ((x349^(x350+x351))%x352);

	if (t69 != 5462561U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x353 = 14525278LLU;
	int8_t x355 = INT8_MIN;
	uint64_t t70 = 539327707471LLU;

	t70 = ((x353^(x354+x355))%x356);

	if (t70 != 19LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x357 = INT16_MAX;
	uint64_t x358 = 7965298848777479285LLU;
	volatile int16_t x359 = -508;
	int16_t x360 = -18;
	static uint64_t t71 = 478489LLU;

	t71 = ((x357^(x358+x359))%x360);

	if (t71 != 7965298848777493894LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x371 = INT16_MIN;
	uint16_t x372 = 50U;
	static volatile int64_t t72 = -251478845185166544LL;

	t72 = ((x369^(x370+x371))%x372);

	if (t72 != -7LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x373 = -1;
	int64_t x374 = INT64_MAX;
	static volatile int32_t x375 = INT32_MIN;
	int8_t x376 = INT8_MIN;

	t73 = ((x373^(x374+x375))%x376);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x377 = INT16_MIN;
	int64_t x378 = INT64_MIN;
	int16_t x379 = INT16_MAX;
	static volatile uint32_t x380 = UINT32_MAX;
	int64_t t74 = -89500LL;

	t74 = ((x377^(x378+x379))%x380);

	if (t74 != 2147483647LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x381 = 485LLU;
	int64_t x383 = INT64_MIN;
	static int16_t x384 = 1;
	uint64_t t75 = 31LLU;

	t75 = ((x381^(x382+x383))%x384);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x385 = INT64_MIN;
	int32_t x386 = 10556;
	int8_t x387 = -1;
	uint32_t x388 = 86135913U;
	int64_t t76 = 7LL;

	t76 = ((x385^(x386+x387))%x388);

	if (t76 != -41964805LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x389 = UINT32_MAX;
	volatile int32_t x390 = -171;
	volatile int8_t x391 = 2;
	uint8_t x392 = 8U;
	volatile uint32_t t77 = 4U;

	t77 = ((x389^(x390+x391))%x392);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x393 = INT64_MIN;
	uint32_t x395 = 842935838U;
	volatile int64_t x396 = INT64_MAX;
	int64_t t78 = 50591713712LL;

	t78 = ((x393^(x394+x395))%x396);

	if (t78 != -9223372036011834684LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x401 = INT8_MIN;
	int32_t x403 = INT32_MIN;
	volatile int32_t t79 = -2629;

	t79 = ((x401^(x402+x403))%x404);

	if (t79 != 4340) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x405 = INT8_MIN;
	static volatile int8_t x406 = 1;
	int16_t x407 = 4038;
	volatile int64_t x408 = -1LL;
	volatile int64_t t80 = 192722032LL;

	t80 = ((x405^(x406+x407))%x408);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x409 = UINT32_MAX;
	static int32_t x412 = INT32_MIN;
	volatile int64_t t81 = -2LL;

	t81 = ((x409^(x410+x411))%x412);

	if (t81 != 1911618526LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x413 = 1;
	uint32_t x414 = 20U;
	static int64_t x415 = -1LL;
	volatile int64_t t82 = 511LL;

	t82 = ((x413^(x414+x415))%x416);

	if (t82 != 18LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x418 = -1;
	uint64_t x419 = UINT64_MAX;
	static volatile int32_t x420 = INT32_MAX;
	volatile uint64_t t83 = 8203195LLU;

	t83 = ((x417^(x418+x419))%x420);

	if (t83 != 3LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x421 = INT16_MAX;
	uint64_t x422 = UINT64_MAX;
	int16_t x423 = -3103;
	static int16_t x424 = INT16_MIN;

	t84 = ((x421^(x422+x423))%x424);

	if (t84 != 3103LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x425 = 232U;
	volatile uint8_t x426 = 1U;
	volatile int16_t x427 = -1;
	int8_t x428 = -1;

	t85 = ((x425^(x426+x427))%x428);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x429 = INT8_MIN;
	int8_t x430 = -1;
	int64_t x431 = -247123596LL;
	int64_t t86 = 26720603LL;

	t86 = ((x429^(x430+x431))%x432);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x433 = INT16_MAX;
	static int32_t x434 = -1;
	uint16_t x435 = UINT16_MAX;
	int64_t x436 = INT64_MIN;
	volatile int64_t t87 = -78958408LL;

	t87 = ((x433^(x434+x435))%x436);

	if (t87 != 32769LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x437 = INT64_MAX;
	int64_t x438 = INT64_MIN;
	volatile int32_t x439 = 7;
	volatile uint16_t x440 = 19610U;
	volatile int64_t t88 = 510351802757LL;

	t88 = ((x437^(x438+x439))%x440);

	if (t88 != -8LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x444 = -1LL;

	t89 = ((x441^(x442+x443))%x444);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x445 = -1;
	int16_t x446 = INT16_MAX;
	int64_t x447 = INT64_MIN;
	static int64_t x448 = 3LL;
	int64_t t90 = -1609483318487168LL;

	t90 = ((x445^(x446+x447))%x448);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x449 = INT64_MAX;
	int64_t x450 = 15736LL;
	int64_t x451 = 102266472LL;
	uint64_t x452 = 25454LLU;
	volatile uint64_t t91 = 703428169519546LLU;

	t91 = ((x449^(x450+x451))%x452);

	if (t91 != 17139LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x453 = INT16_MIN;
	static int32_t x454 = INT32_MIN;
	int8_t x456 = INT8_MIN;
	static uint32_t t92 = 2199132U;

	t92 = ((x453^(x454+x455))%x456);

	if (t92 != 2147516415U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x461 = -38;
	int64_t x463 = INT64_MAX;
	uint32_t x464 = 145U;

	t93 = ((x461^(x462+x463))%x464);

	if (t93 != -92LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x469 = UINT8_MAX;
	volatile uint8_t x470 = UINT8_MAX;
	uint16_t x472 = 13U;
	volatile int32_t t94 = 1932323;

	t94 = ((x469^(x470+x471))%x472);

	if (t94 != 4) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint16_t x473 = 26U;
	static int16_t x474 = INT16_MIN;
	int64_t x476 = -1LL;
	int64_t t95 = 4054590749LL;

	t95 = ((x473^(x474+x475))%x476);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x477 = -1;
	int16_t x478 = INT16_MIN;
	uint64_t x479 = 1075423257960374743LLU;
	int8_t x480 = -1;
	volatile uint64_t t96 = 26913802513LLU;

	t96 = ((x477^(x478+x479))%x480);

	if (t96 != 17371320815749209640LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x481 = INT64_MIN;
	uint8_t x482 = 7U;
	int64_t x483 = INT64_MIN;
	static volatile uint8_t x484 = 62U;

	t97 = ((x481^(x482+x483))%x484);

	if (t97 != 7LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x485 = 3714;
	static uint8_t x486 = 30U;
	volatile int32_t x487 = -81571857;
	int16_t x488 = INT16_MIN;

	t98 = ((x485^(x486+x487))%x488);

	if (t98 != -8561) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x489 = 25;
	int16_t x490 = INT16_MAX;
	static uint64_t x492 = UINT64_MAX;

	t99 = ((x489^(x490+x491))%x492);

	if (t99 != 32781LLU) { NG(); } else { ; }
	
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

