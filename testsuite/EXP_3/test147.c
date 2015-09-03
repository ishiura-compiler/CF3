#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = 0;
uint64_t x11 = 13442LLU;
int32_t x13 = 3;
volatile int32_t t2 = -367517;
volatile int16_t x25 = INT16_MIN;
static uint64_t t5 = 848LLU;
static int16_t x45 = 1328;
volatile uint32_t x47 = 72576579U;
static volatile int8_t x52 = -12;
uint64_t x56 = UINT64_MAX;
int64_t x62 = INT64_MAX;
int32_t x65 = -1;
uint64_t x69 = 13296LLU;
uint32_t x72 = 11905U;
uint64_t t15 = 5275167762LLU;
int32_t x74 = INT32_MAX;
static int8_t x82 = INT8_MAX;
int8_t x85 = INT8_MIN;
uint8_t x86 = 48U;
static uint16_t x89 = UINT16_MAX;
static uint64_t x93 = UINT64_MAX;
static int16_t x94 = INT16_MIN;
int64_t x97 = -1LL;
uint32_t x100 = 90230U;
int64_t x103 = -1LL;
int32_t x104 = INT32_MIN;
int16_t x110 = INT16_MIN;
int64_t t24 = -2719735715022778191LL;
uint16_t x114 = 194U;
int8_t x115 = -7;
static int8_t x123 = INT8_MAX;
static uint64_t x131 = 3993324579LLU;
volatile uint64_t t27 = 924493158915716LLU;
static int32_t x137 = -1;
static int32_t x140 = 1;
volatile int32_t t29 = 3;
int16_t x144 = INT16_MAX;
int32_t t31 = -62984743;
uint16_t x153 = UINT16_MAX;
static uint64_t x155 = UINT64_MAX;
int32_t x158 = 73;
int32_t x165 = -1;
volatile int64_t x166 = 262605411599LL;
uint8_t x167 = UINT8_MAX;
int64_t t36 = 259562820LL;
int64_t t37 = -409432012844LL;
volatile int64_t t38 = 100013222LL;
uint16_t x178 = 9979U;
int8_t x187 = INT8_MIN;
static int8_t x209 = -52;
int64_t x210 = INT64_MIN;
int32_t x214 = INT32_MIN;
static volatile int32_t t44 = -1390;
int64_t x217 = INT64_MIN;
int32_t x220 = -1;
volatile int32_t x229 = 2;
static uint64_t x231 = 891845343375036686LLU;
volatile uint64_t x232 = 60815LLU;
uint16_t x242 = 7797U;
int8_t x247 = INT8_MIN;
int16_t x251 = INT16_MAX;
volatile uint64_t t51 = 5743805758LLU;
static uint32_t x256 = 322695U;
volatile int64_t t52 = 6030501777LL;
volatile int8_t x258 = INT8_MIN;
uint8_t x264 = UINT8_MAX;
static int32_t x265 = -1;
volatile int16_t x268 = 2770;
volatile int32_t t55 = 164;
uint32_t x273 = UINT32_MAX;
int16_t x275 = -84;
volatile uint32_t t56 = 1867945U;
int32_t x281 = -3594;
static volatile uint32_t x284 = 14U;
uint32_t x286 = 99041U;
int16_t x291 = -1;
int32_t x293 = -1;
uint8_t x309 = UINT8_MAX;
uint32_t x311 = UINT32_MAX;
int32_t x313 = -1;
int64_t x315 = INT64_MIN;
volatile int64_t t66 = 5411941LL;
int32_t x321 = 47857;
volatile int8_t x338 = -1;
static int8_t x342 = -1;
static volatile int32_t t73 = 270952837;
static int16_t x356 = INT16_MAX;
int8_t x357 = INT8_MIN;
int16_t x364 = -1;
uint8_t x365 = UINT8_MAX;
int16_t x375 = -7;
uint32_t x376 = 64311936U;
int32_t x377 = INT32_MIN;
uint16_t x382 = UINT16_MAX;
int64_t x388 = -15281579219829171LL;
static volatile int64_t t82 = 12123249243036LL;
uint8_t x402 = 0U;
uint64_t t86 = 0LLU;
uint32_t x405 = 392317U;
uint16_t x407 = 144U;
volatile uint64_t t87 = 58601094255915LLU;
volatile int64_t x411 = -63LL;
volatile uint64_t x414 = 17LLU;
volatile int64_t t90 = 10773515198493004LL;
int64_t x430 = INT64_MIN;
int8_t x431 = INT8_MIN;
volatile int8_t x434 = 0;
volatile int64_t x438 = INT64_MIN;
int32_t x441 = 1;
volatile int32_t x462 = INT32_MIN;
int64_t t99 = 681445472792924LL;


void f0(void) {
	int16_t x5 = -1;
	uint8_t x6 = 43U;
	volatile uint16_t x8 = UINT16_MAX;
	int32_t t0 = -1213;

	t0 = ((x5|x6)/(x7+x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 3047964U;
	int8_t x10 = 28;
	static int64_t x12 = INT64_MIN;
	uint64_t t1 = 46456668771823LLU;

	t1 = ((x9|x10)/(x11+x12));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x14 = INT8_MIN;
	uint16_t x15 = 0U;
	int8_t x16 = 23;

	t2 = ((x13|x14)/(x15+x16));

	if (t2 != -5) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = 231526;
	volatile int64_t x22 = INT64_MIN;
	int32_t x23 = INT32_MIN;
	uint16_t x24 = UINT16_MAX;
	int64_t t3 = -49110LL;

	t3 = ((x21|x22)/(x23+x24));

	if (t3 != 4295098369LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint32_t x26 = UINT32_MAX;
	volatile int64_t x27 = -1128926413LL;
	static volatile int8_t x28 = INT8_MIN;
	int64_t t4 = 20158063LL;

	t4 = ((x25|x26)/(x27+x28));

	if (t4 != -3LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = INT32_MIN;
	int16_t x30 = INT16_MIN;
	uint64_t x31 = 663080LLU;
	volatile uint32_t x32 = 12U;

	t5 = ((x29|x30)/(x31+x32));

	if (t5 != 27819283106581LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = -1;
	int16_t x34 = -1;
	int16_t x35 = -1;
	int32_t x36 = 2067;
	int32_t t6 = 14689352;

	t6 = ((x33|x34)/(x35+x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = 7U;
	volatile uint64_t x38 = 797LLU;
	volatile uint8_t x39 = UINT8_MAX;
	uint32_t x40 = 989U;
	uint64_t t7 = 17329LLU;

	t7 = ((x37|x38)/(x39+x40));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = INT8_MAX;
	volatile int64_t x42 = INT64_MIN;
	uint64_t x43 = 4407246299962805LLU;
	int64_t x44 = INT64_MIN;
	volatile uint64_t t8 = 2099625LLU;

	t8 = ((x41|x42)/(x43+x44));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x46 = -1;
	volatile int16_t x48 = -11;
	volatile uint32_t t9 = 183U;

	t9 = ((x45|x46)/(x47+x48));

	if (t9 != 59U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MAX;
	int8_t x50 = -1;
	volatile uint16_t x51 = UINT16_MAX;
	int32_t t10 = -835;

	t10 = ((x49|x50)/(x51+x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x53 = 2584470LL;
	int16_t x54 = INT16_MIN;
	uint64_t x55 = 391LLU;
	uint64_t t11 = 51378LLU;

	t11 = ((x53|x54)/(x55+x56));

	if (t11 != 47299343778742429LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x57 = -1;
	int64_t x58 = -1LL;
	int16_t x59 = -1;
	int8_t x60 = INT8_MIN;
	volatile int64_t t12 = 906910536LL;

	t12 = ((x57|x58)/(x59+x60));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x61 = 18U;
	uint32_t x63 = UINT32_MAX;
	int8_t x64 = INT8_MIN;
	volatile int64_t t13 = 81453LL;

	t13 = ((x61|x62)/(x63+x64));

	if (t13 != 2147483712LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x66 = INT8_MIN;
	volatile int32_t x67 = 197021493;
	static int8_t x68 = INT8_MAX;
	int32_t t14 = -1485411;

	t14 = ((x65|x66)/(x67+x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x70 = INT16_MAX;
	volatile uint8_t x71 = 5U;

	t15 = ((x69|x70)/(x71+x72));

	if (t15 != 2LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = INT64_MAX;
	int8_t x75 = -1;
	int64_t x76 = -1LL;
	volatile int64_t t16 = 6039LL;

	t16 = ((x73|x74)/(x75+x76));

	if (t16 != -4611686018427387903LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = INT8_MAX;
	int32_t x83 = -1;
	int32_t x84 = -1;
	volatile int32_t t17 = 2;

	t17 = ((x81|x82)/(x83+x84));

	if (t17 != -63) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x87 = -10737;
	uint16_t x88 = 11U;
	int32_t t18 = -6;

	t18 = ((x85|x86)/(x87+x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x90 = -1LL;
	int16_t x91 = INT16_MAX;
	uint32_t x92 = UINT32_MAX;
	static int64_t t19 = 915663LL;

	t19 = ((x89|x90)/(x91+x92));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x95 = -1LL;
	int64_t x96 = INT64_MAX;
	volatile uint64_t t20 = 329650635618288330LLU;

	t20 = ((x93|x94)/(x95+x96));

	if (t20 != 2LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x98 = 22U;
	static int64_t x99 = -14259920334656LL;
	volatile int64_t t21 = -13301090584LL;

	t21 = ((x97|x98)/(x99+x100));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x101 = UINT8_MAX;
	int64_t x102 = INT64_MIN;
	int64_t t22 = 495846035883LL;

	t22 = ((x101|x102)/(x103+x104));

	if (t22 != 4294967293LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x105 = INT16_MIN;
	int8_t x106 = 1;
	int32_t x107 = -114803717;
	volatile uint32_t x108 = 4U;
	static uint32_t t23 = 588601U;

	t23 = ((x105|x106)/(x107+x108));

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = -1;
	static int64_t x111 = -3295648768907293559LL;
	uint32_t x112 = 72512461U;

	t24 = ((x109|x110)/(x111+x112));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = 0U;
	int8_t x116 = INT8_MIN;
	volatile int32_t t25 = 13;

	t25 = ((x113|x114)/(x115+x116));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x121 = UINT32_MAX;
	static uint16_t x122 = 6U;
	uint8_t x124 = UINT8_MAX;
	volatile uint32_t t26 = 1745764U;

	t26 = ((x121|x122)/(x123+x124));

	if (t26 != 11243369U) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x129 = INT64_MIN;
	volatile int64_t x130 = INT64_MAX;
	uint32_t x132 = 389545633U;

	t27 = ((x129|x130)/(x131+x132));

	if (t27 != 4208827362LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x133 = INT64_MAX;
	static int16_t x134 = 51;
	int16_t x135 = -970;
	int64_t x136 = -1LL;
	static volatile int64_t t28 = -17654979534617121LL;

	t28 = ((x133|x134)/(x135+x136));

	if (t28 != -9498838348975052LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x138 = -1;
	static int16_t x139 = INT16_MAX;

	t29 = ((x137|x138)/(x139+x140));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x141 = INT8_MIN;
	uint64_t x142 = 71144704441050956LLU;
	static volatile int32_t x143 = -24570;
	volatile uint64_t t30 = 1729673572243141LLU;

	t30 = ((x141|x142)/(x143+x144));

	if (t30 != 2250426262499640LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x145 = INT16_MAX;
	int8_t x146 = INT8_MAX;
	int32_t x147 = -2557253;
	int32_t x148 = -52945536;

	t31 = ((x145|x146)/(x147+x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x149 = INT64_MAX;
	int32_t x150 = -26815;
	uint64_t x151 = UINT64_MAX;
	volatile int16_t x152 = INT16_MIN;
	volatile uint64_t t32 = 3219542LLU;

	t32 = ((x149|x150)/(x151+x152));

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x154 = 2U;
	int64_t x156 = -1802553385119489LL;
	volatile uint64_t t33 = 665LLU;

	t33 = ((x153|x154)/(x155+x156));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x157 = UINT32_MAX;
	static int16_t x159 = INT16_MAX;
	static uint64_t x160 = 35LLU;
	uint64_t t34 = 57125LLU;

	t34 = ((x157|x158)/(x159+x160));

	if (t34 != 130936LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x161 = INT8_MIN;
	int64_t x162 = INT64_MIN;
	volatile int8_t x163 = 40;
	int16_t x164 = -7;
	static int64_t t35 = 33232395483980758LL;

	t35 = ((x161|x162)/(x163+x164));

	if (t35 != -3LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x168 = 11U;

	t36 = ((x165|x166)/(x167+x168));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = INT64_MIN;
	int64_t x170 = INT64_MIN;
	static int16_t x171 = -1;
	volatile int8_t x172 = 30;

	t37 = ((x169|x170)/(x171+x172));

	if (t37 != -318047311615681924LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x173 = INT16_MIN;
	int64_t x174 = INT64_MAX;
	uint16_t x175 = UINT16_MAX;
	int64_t x176 = -1LL;

	t38 = ((x173|x174)/(x175+x176));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x177 = -1;
	uint8_t x179 = UINT8_MAX;
	uint8_t x180 = 6U;
	int32_t t39 = -2676;

	t39 = ((x177|x178)/(x179+x180));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x185 = INT8_MIN;
	uint16_t x186 = UINT16_MAX;
	int16_t x188 = INT16_MIN;
	static int32_t t40 = 10;

	t40 = ((x185|x186)/(x187+x188));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x193 = -34;
	volatile int16_t x194 = INT16_MIN;
	uint8_t x195 = UINT8_MAX;
	int8_t x196 = INT8_MIN;
	static volatile int32_t t41 = 0;

	t41 = ((x193|x194)/(x195+x196));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x201 = INT32_MAX;
	static uint8_t x202 = UINT8_MAX;
	int16_t x203 = INT16_MAX;
	static uint16_t x204 = 187U;
	volatile int32_t t42 = 8778;

	t42 = ((x201|x202)/(x203+x204));

	if (t42 != 65166) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x211 = 885390U;
	int32_t x212 = INT32_MIN;
	static volatile int64_t t43 = -178492231494LL;

	t43 = ((x209|x210)/(x211+x212));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x213 = -1;
	int8_t x215 = INT8_MIN;
	static int8_t x216 = -41;

	t44 = ((x213|x214)/(x215+x216));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x218 = 1U;
	volatile int8_t x219 = -1;
	volatile int64_t t45 = -21LL;

	t45 = ((x217|x218)/(x219+x220));

	if (t45 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x221 = INT64_MAX;
	static int8_t x222 = -1;
	int64_t x223 = -1LL;
	int8_t x224 = -1;
	volatile int64_t t46 = 40003932457293138LL;

	t46 = ((x221|x222)/(x223+x224));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x230 = INT16_MIN;
	static uint64_t t47 = 13185438766114LLU;

	t47 = ((x229|x230)/(x231+x232));

	if (t47 != 20LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x233 = INT8_MIN;
	static volatile int16_t x234 = INT16_MAX;
	int8_t x235 = -1;
	uint64_t x236 = UINT64_MAX;
	volatile uint64_t t48 = 4LLU;

	t48 = ((x233|x234)/(x235+x236));

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x241 = 7548157792169LLU;
	uint8_t x243 = 6U;
	static uint16_t x244 = UINT16_MAX;
	volatile uint64_t t49 = 1549840089532539837LLU;

	t49 = ((x241|x242)/(x243+x244));

	if (t49 != 115166961LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x245 = INT64_MIN;
	static uint64_t x246 = UINT64_MAX;
	static volatile uint8_t x248 = 0U;
	uint64_t t50 = 3681795424LLU;

	t50 = ((x245|x246)/(x247+x248));

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x249 = INT64_MIN;
	static volatile uint8_t x250 = UINT8_MAX;
	uint64_t x252 = 0LLU;

	t51 = ((x249|x250)/(x251+x252));

	if (t51 != 281483566907400LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint16_t x253 = 50U;
	int64_t x254 = 17253123LL;
	uint8_t x255 = 6U;

	t52 = ((x253|x254)/(x255+x256));

	if (t52 != 53LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x257 = 92704LLU;
	int64_t x259 = 758LL;
	uint8_t x260 = 26U;
	static uint64_t t53 = 248LLU;

	t53 = ((x257|x258)/(x259+x260));

	if (t53 != 23529010298098917LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x261 = 1629539U;
	int32_t x262 = INT32_MIN;
	static int8_t x263 = INT8_MAX;
	uint32_t t54 = 79983404U;

	t54 = ((x261|x262)/(x263+x264));

	if (t54 != 5625950U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x266 = -1;
	static uint16_t x267 = 452U;

	t55 = ((x265|x266)/(x267+x268));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x274 = INT32_MIN;
	int16_t x276 = 216;

	t56 = ((x273|x274)/(x275+x276));

	if (t56 != 32537631U) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x277 = INT16_MAX;
	static uint8_t x278 = UINT8_MAX;
	static uint8_t x279 = 34U;
	volatile uint64_t x280 = 39133LLU;
	uint64_t t57 = 30940435601LLU;

	t57 = ((x277|x278)/(x279+x280));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x282 = -1LL;
	static int8_t x283 = 60;
	int64_t t58 = 23560247LL;

	t58 = ((x281|x282)/(x283+x284));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x285 = 59;
	volatile int8_t x287 = -1;
	int8_t x288 = INT8_MIN;
	volatile uint32_t t59 = 359U;

	t59 = ((x285|x286)/(x287+x288));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x289 = 2;
	int64_t x290 = INT64_MAX;
	uint64_t x292 = 34LLU;
	static volatile uint64_t t60 = 566151LLU;

	t60 = ((x289|x290)/(x291+x292));

	if (t60 != 279496122328932600LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x294 = INT32_MIN;
	int64_t x295 = INT64_MIN;
	static uint16_t x296 = UINT16_MAX;
	int64_t t61 = 24933635368162778LL;

	t61 = ((x293|x294)/(x295+x296));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x297 = INT16_MAX;
	uint16_t x298 = 25441U;
	int16_t x299 = INT16_MIN;
	int16_t x300 = -16178;
	volatile int32_t t62 = 87584;

	t62 = ((x297|x298)/(x299+x300));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x301 = INT64_MAX;
	int16_t x302 = INT16_MAX;
	uint32_t x303 = 142U;
	volatile int16_t x304 = INT16_MAX;
	static int64_t t63 = -115LL;

	t63 = ((x301|x302)/(x303+x304));

	if (t63 != 280268985288364LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x305 = INT32_MAX;
	volatile int8_t x306 = INT8_MIN;
	uint64_t x307 = UINT64_MAX;
	int8_t x308 = INT8_MAX;
	uint64_t t64 = 6239242758925565111LLU;

	t64 = ((x305|x306)/(x307+x308));

	if (t64 != 146402730743726600LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x310 = 63U;
	int16_t x312 = -1;
	uint32_t t65 = 9214059U;

	t65 = ((x309|x310)/(x311+x312));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x314 = INT32_MAX;
	int64_t x316 = INT64_MAX;

	t66 = ((x313|x314)/(x315+x316));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x317 = -1;
	int64_t x318 = -1LL;
	volatile int16_t x319 = 6306;
	int16_t x320 = INT16_MAX;
	volatile int64_t t67 = 1277677290LL;

	t67 = ((x317|x318)/(x319+x320));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x322 = INT64_MAX;
	uint8_t x323 = 7U;
	static int16_t x324 = 10657;
	volatile int64_t t68 = -4939027547703151LL;

	t68 = ((x321|x322)/(x323+x324));

	if (t68 != 864907355293958LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x325 = 124LLU;
	uint16_t x326 = 2U;
	int8_t x327 = INT8_MIN;
	int64_t x328 = -8783120LL;
	uint64_t t69 = 22421250235962LLU;

	t69 = ((x325|x326)/(x327+x328));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x333 = INT32_MIN;
	int64_t x334 = -1LL;
	int8_t x335 = INT8_MIN;
	int32_t x336 = 121739;
	int64_t t70 = -445476855260592LL;

	t70 = ((x333|x334)/(x335+x336));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x337 = -1;
	static uint64_t x339 = 1035569LLU;
	int64_t x340 = 8779852790007LL;
	static volatile uint64_t t71 = 11577501190679LLU;

	t71 = ((x337|x338)/(x339+x340));

	if (t71 != 2101030LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x341 = UINT16_MAX;
	int16_t x343 = INT16_MIN;
	static volatile uint64_t x344 = 10571420LLU;
	volatile uint64_t t72 = 2365LLU;

	t72 = ((x341|x342)/(x343+x344));

	if (t72 != 1750389335724LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x345 = INT32_MAX;
	int16_t x346 = -293;
	int8_t x347 = -1;
	volatile uint8_t x348 = UINT8_MAX;

	t73 = ((x345|x346)/(x347+x348));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x349 = 4923LLU;
	volatile int8_t x350 = INT8_MAX;
	int32_t x351 = 3688;
	int16_t x352 = INT16_MAX;
	static uint64_t t74 = 68541LLU;

	t74 = ((x349|x350)/(x351+x352));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x353 = UINT8_MAX;
	volatile int16_t x354 = INT16_MIN;
	static int16_t x355 = INT16_MIN;
	volatile int32_t t75 = 13596;

	t75 = ((x353|x354)/(x355+x356));

	if (t75 != 32513) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x358 = INT8_MAX;
	int32_t x359 = INT32_MIN;
	int64_t x360 = -5264354077LL;
	volatile int64_t t76 = 23305122736138LL;

	t76 = ((x357|x358)/(x359+x360));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x361 = INT16_MIN;
	volatile int16_t x362 = INT16_MIN;
	int64_t x363 = -451475LL;
	static int64_t t77 = 2128535161LL;

	t77 = ((x361|x362)/(x363+x364));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x366 = INT8_MIN;
	uint64_t x367 = 237LLU;
	uint8_t x368 = 19U;
	uint64_t t78 = 9015855251011448LLU;

	t78 = ((x365|x366)/(x367+x368));

	if (t78 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x373 = 373056737477594051LLU;
	int32_t x374 = INT32_MIN;
	volatile uint64_t t79 = 1316LLU;

	t79 = ((x373|x374)/(x375+x376));

	if (t79 != 286832386459LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x378 = -1LL;
	static int8_t x379 = INT8_MAX;
	int32_t x380 = INT32_MIN;
	volatile int64_t t80 = -5LL;

	t80 = ((x377|x378)/(x379+x380));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x381 = INT16_MIN;
	static uint32_t x383 = 397590U;
	int64_t x384 = 4062638LL;
	volatile int64_t t81 = 870472494LL;

	t81 = ((x381|x382)/(x383+x384));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint32_t x385 = 18U;
	volatile uint32_t x386 = 2264367U;
	int64_t x387 = -1208914279540595323LL;

	t82 = ((x385|x386)/(x387+x388));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x389 = -1;
	int16_t x390 = 3;
	uint64_t x391 = UINT64_MAX;
	static int32_t x392 = -1;
	uint64_t t83 = 832588425LLU;

	t83 = ((x389|x390)/(x391+x392));

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x393 = -1;
	int64_t x394 = INT64_MAX;
	int16_t x395 = -1528;
	int64_t x396 = INT64_MAX;
	int64_t t84 = -5778990966704LL;

	t84 = ((x393|x394)/(x395+x396));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x397 = -406LL;
	volatile int64_t x398 = -11648289LL;
	static int64_t x399 = INT64_MIN;
	uint64_t x400 = UINT64_MAX;
	uint64_t t85 = 16LLU;

	t85 = ((x397|x398)/(x399+x400));

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x401 = UINT8_MAX;
	static uint8_t x403 = 99U;
	uint64_t x404 = 4352361753174LLU;

	t86 = ((x401|x402)/(x403+x404));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x406 = UINT64_MAX;
	int64_t x408 = -176933LL;

	t87 = ((x405|x406)/(x407+x408));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x409 = INT64_MIN;
	static uint16_t x410 = UINT16_MAX;
	int32_t x412 = INT32_MAX;
	volatile int64_t t88 = -49594921157LL;

	t88 = ((x409|x410)/(x411+x412));

	if (t88 != -4294967423LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x413 = 347U;
	int64_t x415 = INT64_MIN;
	static uint16_t x416 = 111U;
	uint64_t t89 = 5493447LLU;

	t89 = ((x413|x414)/(x415+x416));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x417 = -1;
	int16_t x418 = INT16_MIN;
	int64_t x419 = -1LL;
	int32_t x420 = INT32_MIN;

	t90 = ((x417|x418)/(x419+x420));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x421 = INT8_MIN;
	uint64_t x422 = 29714253665509LLU;
	volatile int8_t x423 = -1;
	int16_t x424 = INT16_MIN;
	uint64_t t91 = 469327910465843LLU;

	t91 = ((x421|x422)/(x423+x424));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x425 = 0;
	uint32_t x426 = 8277120U;
	volatile int8_t x427 = INT8_MIN;
	uint64_t x428 = 1230974LLU;
	volatile uint64_t t92 = 369431551233737166LLU;

	t92 = ((x425|x426)/(x427+x428));

	if (t92 != 6LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x429 = INT8_MIN;
	volatile uint16_t x432 = 601U;
	volatile int64_t t93 = -1LL;

	t93 = ((x429|x430)/(x431+x432));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x433 = INT16_MIN;
	int64_t x435 = INT64_MIN;
	static volatile uint32_t x436 = 121362U;
	static int64_t t94 = 5670609482LL;

	t94 = ((x433|x434)/(x435+x436));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x437 = 645LLU;
	uint8_t x439 = 0U;
	uint64_t x440 = 147LLU;
	uint64_t t95 = 19160423307750LLU;

	t95 = ((x437|x438)/(x439+x440));

	if (t95 != 62744027461597118LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x442 = INT16_MIN;
	int16_t x443 = INT16_MIN;
	static uint32_t x444 = 1U;
	volatile uint32_t t96 = 59695U;

	t96 = ((x441|x442)/(x443+x444));

	if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x449 = 15U;
	static volatile int64_t x450 = -1LL;
	uint16_t x451 = UINT16_MAX;
	static int16_t x452 = -14;
	volatile int64_t t97 = -82869138LL;

	t97 = ((x449|x450)/(x451+x452));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x453 = UINT8_MAX;
	int64_t x454 = INT64_MAX;
	static uint64_t x455 = UINT64_MAX;
	volatile int16_t x456 = -1;
	volatile uint64_t t98 = 1617302019LLU;

	t98 = ((x453|x454)/(x455+x456));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x461 = INT8_MIN;
	int8_t x463 = INT8_MIN;
	int64_t x464 = INT64_MAX;

	t99 = ((x461|x462)/(x463+x464));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

