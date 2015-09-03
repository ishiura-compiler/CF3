#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x2 = INT32_MAX;
static int8_t x10 = -1;
volatile int8_t x11 = -14;
uint32_t x12 = 0U;
int32_t x18 = INT32_MIN;
uint8_t x20 = 99U;
volatile int64_t x22 = INT64_MIN;
static int64_t t9 = -1369145795LL;
static int8_t x49 = -1;
int16_t x58 = 4;
volatile uint64_t t12 = 14834262LLU;
int64_t x67 = INT64_MIN;
uint32_t x74 = 11540U;
uint16_t x75 = 519U;
uint32_t t15 = 86761U;
int32_t x83 = 30;
uint16_t x87 = 18U;
uint32_t x88 = 10U;
int64_t x91 = -254617874009635704LL;
static int64_t x99 = 20588228LL;
int32_t x101 = -183;
static int8_t x102 = INT8_MAX;
static volatile int32_t x106 = -1;
volatile uint64_t x108 = UINT64_MAX;
uint64_t x110 = 1662LLU;
volatile uint64_t t24 = 1506802108941LLU;
int16_t x120 = -47;
int32_t t26 = 117;
static int8_t x125 = INT8_MIN;
int16_t x126 = INT16_MIN;
uint8_t x127 = 2U;
uint8_t x129 = 15U;
int64_t x130 = INT64_MAX;
uint8_t x132 = UINT8_MAX;
uint8_t x133 = UINT8_MAX;
uint64_t t31 = 196LLU;
uint32_t x147 = 3647U;
volatile int32_t x150 = -1;
int16_t x158 = INT16_MIN;
int64_t t36 = -28739324LL;
static volatile uint32_t t37 = 0U;
static volatile int32_t x178 = -375538052;
volatile int32_t x182 = INT32_MIN;
int64_t x184 = 2550181773229LL;
volatile uint16_t x185 = UINT16_MAX;
int8_t x187 = -1;
uint32_t x196 = 5009744U;
volatile int64_t t42 = 1LL;
int16_t x206 = INT16_MAX;
int16_t x210 = -2252;
int32_t x211 = 3246;
int32_t t46 = -3205537;
int8_t x221 = -1;
volatile int16_t x223 = -1;
int16_t x225 = INT16_MAX;
int16_t x229 = -1;
int32_t x241 = -684061;
static int16_t x251 = -1490;
static int32_t t54 = -5645648;
int16_t x260 = -8134;
volatile int8_t x261 = INT8_MIN;
volatile int32_t t56 = -1936;
static int8_t x265 = INT8_MAX;
uint8_t x267 = UINT8_MAX;
int8_t x276 = INT8_MAX;
uint32_t x279 = 59783515U;
uint8_t x283 = 80U;
static uint16_t x288 = UINT16_MAX;
static int64_t x293 = INT64_MIN;
int8_t x298 = INT8_MAX;
static volatile int32_t x300 = 1;
int16_t x302 = 163;
int16_t x304 = INT16_MAX;
uint64_t x305 = 18064804LLU;
uint16_t x307 = UINT16_MAX;
uint64_t t66 = 5555LLU;
static volatile int64_t x310 = -1LL;
volatile uint64_t t68 = 4563LLU;
uint32_t t70 = 1422652U;
static volatile int64_t t71 = -28184781883849735LL;
int16_t x337 = -8693;
int8_t x342 = 9;
static int64_t x343 = -2807LL;
int64_t x348 = 4389854661971437LL;
int16_t x360 = -1;
volatile uint32_t t78 = 498638U;
volatile int8_t x365 = INT8_MAX;
static int8_t x374 = INT8_MIN;
int8_t x385 = -1;
static volatile uint32_t x388 = 24U;
uint32_t t83 = 3U;
uint8_t x395 = 97U;
int32_t x403 = 1624420;
int16_t x405 = INT16_MIN;
volatile int32_t x411 = INT32_MAX;
int16_t x439 = INT16_MIN;
static int64_t x442 = -1LL;
static int64_t t96 = 29457675LL;
int32_t x447 = -1;
volatile int64_t x450 = INT64_MIN;


void f0(void) {
	int16_t x1 = -1;
	uint64_t x3 = 291915794148322LLU;
	int16_t x4 = 6213;
	uint64_t t0 = 1852LLU;

	t0 = ((x1+(x2%x3))-x4);

	if (t0 != 2147477433LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	static int64_t x6 = INT64_MIN;
	volatile int8_t x7 = INT8_MIN;
	int32_t x8 = INT32_MIN;
	static int64_t t1 = -10632LL;

	t1 = ((x5+(x6%x7))-x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	volatile uint32_t t2 = 160U;

	t2 = ((x9+(x10%x11))-x12);

	if (t2 != 4294967294U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int64_t x14 = -1917033LL;
	int32_t x15 = 100248;
	static int32_t x16 = INT32_MIN;
	int64_t t3 = 359654889206718LL;

	t3 = ((x13+(x14%x15))-x16);

	if (t3 != 2147471326LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	int8_t x19 = INT8_MIN;
	static int32_t t4 = -17;

	t4 = ((x17+(x18%x19))-x20);

	if (t4 != -100) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	volatile int16_t x23 = -1;
	uint32_t x24 = 18U;
	int64_t t5 = 11243083LL;

	t5 = ((x21+(x22%x23))-x24);

	if (t5 != -19LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 5U;
	int8_t x26 = INT8_MIN;
	volatile uint16_t x27 = 13U;
	uint64_t x28 = 299855352LLU;
	static volatile uint64_t t6 = 238078191622LLU;

	t6 = ((x25+(x26%x27))-x28);

	if (t6 != 18446744073409696258LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 13U;
	static volatile uint16_t x30 = 308U;
	int16_t x31 = INT16_MAX;
	int32_t x32 = -1;
	static volatile int32_t t7 = 180;

	t7 = ((x29+(x30%x31))-x32);

	if (t7 != 322) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	volatile uint16_t x34 = UINT16_MAX;
	static int8_t x35 = INT8_MIN;
	int64_t x36 = -22472284LL;
	volatile uint64_t t8 = 33043958256778397LLU;

	t8 = ((x33+(x34%x35))-x36);

	if (t8 != 22472410LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = -3;
	int64_t x38 = 79888588802LL;
	int8_t x39 = INT8_MIN;
	uint32_t x40 = 74U;

	t9 = ((x37+(x38%x39))-x40);

	if (t9 != -75LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x50 = -32;
	static int8_t x51 = INT8_MAX;
	static volatile int32_t x52 = 58686626;
	static volatile int32_t t10 = 58;

	t10 = ((x49+(x50%x51))-x52);

	if (t10 != -58686659) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x53 = 32997591471LL;
	static int32_t x54 = -1;
	static uint8_t x55 = 4U;
	int32_t x56 = INT32_MIN;
	static int64_t t11 = 3496336821LL;

	t11 = ((x53+(x54%x55))-x56);

	if (t11 != 35145075118LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x57 = UINT64_MAX;
	volatile uint16_t x59 = 1U;
	int8_t x60 = 38;

	t12 = ((x57+(x58%x59))-x60);

	if (t12 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x61 = 8;
	int32_t x62 = -1;
	uint16_t x63 = UINT16_MAX;
	int16_t x64 = 6338;
	volatile int32_t t13 = -159165;

	t13 = ((x61+(x62%x63))-x64);

	if (t13 != -6331) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = -1;
	int32_t x66 = 17061417;
	int16_t x68 = INT16_MIN;
	volatile int64_t t14 = -7582377804001LL;

	t14 = ((x65+(x66%x67))-x68);

	if (t14 != 17094184LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x73 = 12782;
	int8_t x76 = -20;

	t15 = ((x73+(x74%x75))-x76);

	if (t15 != 12924U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x77 = 10313161967564216LLU;
	int64_t x78 = INT64_MAX;
	int64_t x79 = INT64_MAX;
	uint32_t x80 = 405599U;
	static volatile uint64_t t16 = 1089LLU;

	t16 = ((x77+(x78%x79))-x80);

	if (t16 != 10313161967158617LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x81 = UINT64_MAX;
	static uint16_t x82 = UINT16_MAX;
	uint64_t x84 = 2651LLU;
	uint64_t t17 = 3869991912188650480LLU;

	t17 = ((x81+(x82%x83))-x84);

	if (t17 != 18446744073709548979LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = -1328580;
	uint32_t x86 = 777U;
	volatile uint32_t t18 = 26308279U;

	t18 = ((x85+(x86%x87))-x88);

	if (t18 != 4293638709U) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x89 = INT16_MAX;
	volatile int64_t x90 = INT64_MIN;
	int8_t x92 = INT8_MAX;
	volatile int64_t t19 = 458LL;

	t19 = ((x89+(x90%x91))-x92);

	if (t19 != -57128572507857824LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = -1LL;
	static volatile int64_t x94 = -1LL;
	static int8_t x95 = -49;
	uint8_t x96 = UINT8_MAX;
	int64_t t20 = -32302248844233753LL;

	t20 = ((x93+(x94%x95))-x96);

	if (t20 != -257LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = -7423;
	int8_t x98 = -1;
	static uint32_t x100 = UINT32_MAX;
	volatile int64_t t21 = -6522977096LL;

	t21 = ((x97+(x98%x99))-x100);

	if (t21 != -4294974719LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x103 = -3;
	int32_t x104 = -5003579;
	volatile int32_t t22 = -191127;

	t22 = ((x101+(x102%x103))-x104);

	if (t22 != 5003397) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x105 = 16478433U;
	int64_t x107 = INT64_MAX;
	uint64_t t23 = 1542663271715141LLU;

	t23 = ((x105+(x106%x107))-x108);

	if (t23 != 16478433LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x109 = INT32_MIN;
	static int16_t x111 = -1;
	uint64_t x112 = 0LLU;

	t24 = ((x109+(x110%x111))-x112);

	if (t24 != 18446744071562069630LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = -14;
	int64_t x114 = -17443484064601LL;
	static int16_t x115 = INT16_MIN;
	int8_t x116 = -17;
	volatile int64_t t25 = 1274237336856LL;

	t25 = ((x113+(x114%x115))-x116);

	if (t25 != -23382LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x117 = UINT16_MAX;
	uint16_t x118 = 3271U;
	static volatile uint8_t x119 = UINT8_MAX;

	t26 = ((x117+(x118%x119))-x120);

	if (t26 != 65793) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint64_t x128 = 1834883681868019LLU;
	uint64_t t27 = 52241LLU;

	t27 = ((x125+(x126%x127))-x128);

	if (t27 != 18444909190027683469LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x131 = INT8_MIN;
	volatile int64_t t28 = -776484LL;

	t28 = ((x129+(x130%x131))-x132);

	if (t28 != -113LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x134 = INT32_MAX;
	uint64_t x135 = 8984167174940129607LLU;
	volatile uint64_t x136 = 61643914329234176LLU;
	volatile uint64_t t29 = 2834LLU;

	t29 = ((x133+(x134%x135))-x136);

	if (t29 != 18385100161527801342LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = INT16_MIN;
	int32_t x138 = -718;
	uint16_t x139 = 3U;
	int64_t x140 = 1837132643LL;
	int64_t t30 = -27560800663496348LL;

	t30 = ((x137+(x138%x139))-x140);

	if (t30 != -1837165412LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x141 = 2111530986U;
	int32_t x142 = 876249;
	static int8_t x143 = INT8_MIN;
	uint64_t x144 = 65881LLU;

	t31 = ((x141+(x142%x143))-x144);

	if (t31 != 2111465194LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x145 = 115U;
	static int8_t x146 = 1;
	uint32_t x148 = 60258264U;
	volatile uint32_t t32 = 410928281U;

	t32 = ((x145+(x146%x147))-x148);

	if (t32 != 4234709148U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = -1;
	uint64_t x151 = 28853LLU;
	int32_t x152 = -51592848;
	uint64_t t33 = 862LLU;

	t33 = ((x149+(x150%x151))-x152);

	if (t33 != 51619031LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x153 = 13U;
	int8_t x154 = INT8_MAX;
	uint16_t x155 = 13105U;
	int32_t x156 = 541490355;
	static int32_t t34 = -4;

	t34 = ((x153+(x154%x155))-x156);

	if (t34 != -541490215) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x157 = INT16_MAX;
	int64_t x159 = -2033065798498335713LL;
	volatile int16_t x160 = INT16_MIN;
	int64_t t35 = -3576799LL;

	t35 = ((x157+(x158%x159))-x160);

	if (t35 != 32767LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = INT16_MIN;
	volatile int64_t x162 = INT64_MIN;
	int8_t x163 = 22;
	static int64_t x164 = -62996442593211LL;

	t36 = ((x161+(x162%x163))-x164);

	if (t36 != 62996442560435LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x165 = 80244U;
	int8_t x166 = INT8_MAX;
	int32_t x167 = -1;
	uint32_t x168 = UINT32_MAX;

	t37 = ((x165+(x166%x167))-x168);

	if (t37 != 80245U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x169 = UINT64_MAX;
	int32_t x170 = INT32_MAX;
	static int8_t x171 = -1;
	int16_t x172 = 6360;
	static uint64_t t38 = 53672LLU;

	t38 = ((x169+(x170%x171))-x172);

	if (t38 != 18446744073709545255LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x177 = INT16_MIN;
	int64_t x179 = INT64_MIN;
	static int16_t x180 = INT16_MIN;
	int64_t t39 = -4198635841585LL;

	t39 = ((x177+(x178%x179))-x180);

	if (t39 != -375538052LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x181 = 10587065;
	uint64_t x183 = 328519908221LLU;
	uint64_t t40 = 229593848193546LLU;

	t40 = ((x181+(x182%x183))-x184);

	if (t40 != 18446741560709395171LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x186 = UINT32_MAX;
	int64_t x188 = -1LL;
	int64_t t41 = 19284386426955660LL;

	t41 = ((x185+(x186%x187))-x188);

	if (t41 != 65536LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x193 = -1LL;
	int32_t x194 = 0;
	int8_t x195 = -1;

	t42 = ((x193+(x194%x195))-x196);

	if (t42 != -5009745LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x201 = 31352U;
	int64_t x202 = 218LL;
	static volatile int64_t x203 = INT64_MAX;
	int8_t x204 = INT8_MAX;
	volatile int64_t t43 = 124965150382983388LL;

	t43 = ((x201+(x202%x203))-x204);

	if (t43 != 31443LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x205 = INT16_MIN;
	volatile uint32_t x207 = 2378U;
	int16_t x208 = -233;
	volatile uint32_t t44 = 83763U;

	t44 = ((x205+(x206%x207))-x208);

	if (t44 != 4294936614U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x209 = 5U;
	static uint16_t x212 = 44U;
	static int32_t t45 = -16278175;

	t45 = ((x209+(x210%x211))-x212);

	if (t45 != -2291) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x213 = 104U;
	int16_t x214 = INT16_MIN;
	volatile int32_t x215 = -1;
	static volatile uint8_t x216 = 15U;

	t46 = ((x213+(x214%x215))-x216);

	if (t46 != 89) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x222 = INT64_MIN;
	uint16_t x224 = 15U;
	int64_t t47 = 839296LL;

	t47 = ((x221+(x222%x223))-x224);

	if (t47 != -16LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x226 = INT64_MIN;
	uint64_t x227 = 3LLU;
	volatile int16_t x228 = INT16_MIN;
	uint64_t t48 = 2149358LLU;

	t48 = ((x225+(x226%x227))-x228);

	if (t48 != 65537LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x230 = 2157U;
	volatile int16_t x231 = -1;
	volatile int32_t x232 = 1;
	volatile uint32_t t49 = 348708398U;

	t49 = ((x229+(x230%x231))-x232);

	if (t49 != 2155U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x233 = INT8_MIN;
	uint32_t x234 = 978U;
	volatile int16_t x235 = INT16_MIN;
	static int16_t x236 = INT16_MIN;
	uint32_t t50 = 26164U;

	t50 = ((x233+(x234%x235))-x236);

	if (t50 != 33618U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x237 = -369LL;
	volatile uint16_t x238 = 14920U;
	int8_t x239 = INT8_MIN;
	uint64_t x240 = 289509LLU;
	uint64_t t51 = 3967451500LLU;

	t51 = ((x237+(x238%x239))-x240);

	if (t51 != 18446744073709261810LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x242 = 3162074U;
	uint16_t x243 = 14U;
	static uint64_t x244 = 302336569716LLU;
	uint64_t t52 = 17648829LLU;

	t52 = ((x241+(x242%x243))-x244);

	if (t52 != 18446743775667265141LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x249 = 10LL;
	int32_t x250 = -908;
	static int8_t x252 = INT8_MIN;
	int64_t t53 = 3219732LL;

	t53 = ((x249+(x250%x251))-x252);

	if (t53 != -770LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x253 = INT8_MIN;
	static int16_t x254 = INT16_MAX;
	int32_t x255 = -534185079;
	int32_t x256 = -1;

	t54 = ((x253+(x254%x255))-x256);

	if (t54 != 32640) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x257 = -1LL;
	int32_t x258 = INT32_MIN;
	int64_t x259 = 2LL;
	int64_t t55 = -98LL;

	t55 = ((x257+(x258%x259))-x260);

	if (t55 != 8133LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x262 = UINT8_MAX;
	int8_t x263 = -1;
	volatile int8_t x264 = -8;

	t56 = ((x261+(x262%x263))-x264);

	if (t56 != -120) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x266 = 8037LL;
	uint64_t x268 = UINT64_MAX;
	static uint64_t t57 = 4542337316168402014LLU;

	t57 = ((x265+(x266%x267))-x268);

	if (t57 != 260LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x269 = UINT8_MAX;
	volatile int8_t x270 = INT8_MIN;
	int16_t x271 = -1397;
	int16_t x272 = 594;
	static volatile int32_t t58 = 1;

	t58 = ((x269+(x270%x271))-x272);

	if (t58 != -467) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x273 = -1;
	static uint64_t x274 = UINT64_MAX;
	uint8_t x275 = 35U;
	volatile uint64_t t59 = 9LLU;

	t59 = ((x273+(x274%x275))-x276);

	if (t59 != 18446744073709551503LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x277 = 558324U;
	uint32_t x278 = 5931680U;
	int16_t x280 = 1616;
	uint32_t t60 = 1295U;

	t60 = ((x277+(x278%x279))-x280);

	if (t60 != 6488388U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x281 = INT8_MAX;
	static uint64_t x282 = 509LLU;
	static uint64_t x284 = 199351LLU;
	uint64_t t61 = 172LLU;

	t61 = ((x281+(x282%x283))-x284);

	if (t61 != 18446744073709352421LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x285 = INT32_MIN;
	static int32_t x286 = 89;
	int64_t x287 = -1LL;
	int64_t t62 = 378764715386133LL;

	t62 = ((x285+(x286%x287))-x288);

	if (t62 != -2147549183LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x294 = UINT8_MAX;
	static int64_t x295 = INT64_MAX;
	static volatile int16_t x296 = -94;
	int64_t t63 = 0LL;

	t63 = ((x293+(x294%x295))-x296);

	if (t63 != -9223372036854775459LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x297 = INT16_MAX;
	int32_t x299 = INT32_MIN;
	int32_t t64 = -90;

	t64 = ((x297+(x298%x299))-x300);

	if (t64 != 32893) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x301 = INT16_MAX;
	static int64_t x303 = 1LL;
	int64_t t65 = 20535222421LL;

	t65 = ((x301+(x302%x303))-x304);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x306 = UINT32_MAX;
	int64_t x308 = INT64_MIN;

	t66 = ((x305+(x306%x307))-x308);

	if (t66 != 9223372036872840612LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x309 = -1728459612564621LL;
	volatile uint64_t x311 = 2798220572464530572LLU;
	int64_t x312 = INT64_MAX;
	uint64_t t67 = 1LLU;

	t67 = ((x309+(x310%x311))-x312);

	if (t67 != 10879064216164579371LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x317 = INT64_MAX;
	int64_t x318 = INT64_MIN;
	volatile uint16_t x319 = UINT16_MAX;
	uint64_t x320 = 1492217443LLU;

	t68 = ((x317+(x318%x319))-x320);

	if (t68 != 9223372035362525596LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x321 = INT64_MIN;
	static volatile int8_t x322 = 20;
	int64_t x323 = INT64_MAX;
	static volatile int16_t x324 = INT16_MIN;
	volatile int64_t t69 = 29571335088LL;

	t69 = ((x321+(x322%x323))-x324);

	if (t69 != -9223372036854743020LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x325 = INT8_MIN;
	int16_t x326 = INT16_MIN;
	static volatile int8_t x327 = -49;
	uint32_t x328 = UINT32_MAX;

	t70 = ((x325+(x326%x327))-x328);

	if (t70 != 4294967133U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x329 = -1;
	int32_t x330 = INT32_MIN;
	int8_t x331 = -7;
	int64_t x332 = -11594794LL;

	t71 = ((x329+(x330%x331))-x332);

	if (t71 != 11594791LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x333 = INT32_MIN;
	static int32_t x334 = -1;
	uint32_t x335 = 4476325U;
	int32_t x336 = 2371;
	volatile uint32_t t72 = 1268991U;

	t72 = ((x333+(x334%x335))-x336);

	if (t72 != 2149652897U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x338 = -1;
	static int8_t x339 = -1;
	int64_t x340 = -199305LL;
	int64_t t73 = -376LL;

	t73 = ((x337+(x338%x339))-x340);

	if (t73 != 190612LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x341 = INT16_MIN;
	int8_t x344 = INT8_MIN;
	volatile int64_t t74 = -17381456LL;

	t74 = ((x341+(x342%x343))-x344);

	if (t74 != -32631LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x345 = INT32_MIN;
	uint32_t x346 = 5208212U;
	uint16_t x347 = UINT16_MAX;
	volatile int64_t t75 = -2371LL;

	t75 = ((x345+(x346%x347))-x348);

	if (t75 != -4389852514456842LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x349 = 862894005869115380LL;
	uint64_t x350 = 808491250LLU;
	volatile int8_t x351 = INT8_MIN;
	uint8_t x352 = UINT8_MAX;
	uint64_t t76 = 27244811LLU;

	t76 = ((x349+(x350%x351))-x352);

	if (t76 != 862894006677606375LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x353 = 1573U;
	uint64_t x354 = 6424254311901435028LLU;
	int16_t x355 = INT16_MIN;
	volatile int32_t x356 = INT32_MIN;
	uint64_t t77 = 96043027LLU;

	t77 = ((x353+(x354%x355))-x356);

	if (t77 != 6424254314048920249LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x357 = 30;
	int32_t x358 = INT32_MIN;
	uint32_t x359 = UINT32_MAX;

	t78 = ((x357+(x358%x359))-x360);

	if (t78 != 2147483679U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x361 = -55752590858806LL;
	volatile int8_t x362 = INT8_MIN;
	static volatile uint16_t x363 = 13U;
	int64_t x364 = 39LL;
	static volatile int64_t t79 = 240606LL;

	t79 = ((x361+(x362%x363))-x364);

	if (t79 != -55752590858856LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint16_t x366 = 60U;
	volatile uint32_t x367 = 651263U;
	static int8_t x368 = INT8_MIN;
	volatile uint32_t t80 = 117291641U;

	t80 = ((x365+(x366%x367))-x368);

	if (t80 != 315U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x369 = INT16_MIN;
	uint64_t x370 = UINT64_MAX;
	static int32_t x371 = INT32_MAX;
	int8_t x372 = INT8_MIN;
	uint64_t t81 = 29LLU;

	t81 = ((x369+(x370%x371))-x372);

	if (t81 != 18446744073709518979LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x373 = INT64_MIN;
	int8_t x375 = -1;
	volatile int32_t x376 = -1;
	volatile int64_t t82 = -19555097438155LL;

	t82 = ((x373+(x374%x375))-x376);

	if (t82 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x386 = -48;
	static uint16_t x387 = UINT16_MAX;

	t83 = ((x385+(x386%x387))-x388);

	if (t83 != 4294967223U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x389 = 27U;
	int32_t x390 = INT32_MIN;
	uint64_t x391 = UINT64_MAX;
	static int64_t x392 = -4906764184498LL;
	volatile uint64_t t84 = 24432236997585LLU;

	t84 = ((x389+(x390%x391))-x392);

	if (t84 != 4904616700877LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x393 = -2;
	volatile int16_t x394 = INT16_MIN;
	volatile int64_t x396 = -1LL;
	int64_t t85 = -8677461LL;

	t85 = ((x393+(x394%x395))-x396);

	if (t85 != -80LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x397 = INT32_MIN;
	int32_t x398 = INT32_MIN;
	int64_t x399 = INT64_MIN;
	int64_t x400 = -1311LL;
	int64_t t86 = -936713LL;

	t86 = ((x397+(x398%x399))-x400);

	if (t86 != -4294965985LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x401 = -1;
	static uint64_t x402 = 35879169538LLU;
	uint16_t x404 = 144U;
	volatile uint64_t t87 = 2300658299789LLU;

	t87 = ((x401+(x402%x403))-x404);

	if (t87 != 604853LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x406 = 345U;
	int32_t x407 = INT32_MIN;
	int32_t x408 = INT32_MIN;
	volatile int32_t t88 = -82137;

	t88 = ((x405+(x406%x407))-x408);

	if (t88 != 2147451225) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x409 = 58388948573751LLU;
	uint64_t x410 = UINT64_MAX;
	volatile uint16_t x412 = 699U;
	volatile uint64_t t89 = 1431858829889LLU;

	t89 = ((x409+(x410%x411))-x412);

	if (t89 != 58388948573055LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x413 = -25;
	volatile uint32_t x414 = UINT32_MAX;
	static int64_t x415 = 4207LL;
	static int8_t x416 = INT8_MIN;
	int64_t t90 = -516312845693776462LL;

	t90 = ((x413+(x414%x415))-x416);

	if (t90 != 3235LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x417 = -1040290399LL;
	volatile int8_t x418 = -57;
	int64_t x419 = INT64_MAX;
	volatile int8_t x420 = -52;
	volatile int64_t t91 = -9206813053664921LL;

	t91 = ((x417+(x418%x419))-x420);

	if (t91 != -1040290404LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x421 = -241117981802713LL;
	int16_t x422 = -7457;
	static int32_t x423 = INT32_MIN;
	int32_t x424 = -14905805;
	volatile int64_t t92 = 6460425312469678LL;

	t92 = ((x421+(x422%x423))-x424);

	if (t92 != -241117966904365LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x429 = 230978441U;
	uint8_t x430 = 8U;
	uint64_t x431 = 237LLU;
	int16_t x432 = INT16_MIN;
	static uint64_t t93 = 220LLU;

	t93 = ((x429+(x430%x431))-x432);

	if (t93 != 231011217LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x433 = INT16_MIN;
	volatile uint32_t x434 = UINT32_MAX;
	int8_t x435 = INT8_MIN;
	int16_t x436 = INT16_MIN;
	volatile uint32_t t94 = 2111658865U;

	t94 = ((x433+(x434%x435))-x436);

	if (t94 != 127U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x437 = INT32_MIN;
	volatile int64_t x438 = INT64_MAX;
	volatile int16_t x440 = -1;
	int64_t t95 = -1LL;

	t95 = ((x437+(x438%x439))-x440);

	if (t95 != -2147450880LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x441 = 74U;
	volatile uint32_t x443 = 328U;
	volatile int16_t x444 = INT16_MAX;

	t96 = ((x441+(x442%x443))-x444);

	if (t96 != -32694LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x445 = INT8_MIN;
	volatile int8_t x446 = INT8_MIN;
	volatile int64_t x448 = INT64_MIN;
	volatile int64_t t97 = -16238911614375LL;

	t97 = ((x445+(x446%x447))-x448);

	if (t97 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x449 = 459899435754073040LL;
	static int8_t x451 = 3;
	int64_t x452 = -1LL;
	volatile int64_t t98 = 1047LL;

	t98 = ((x449+(x450%x451))-x452);

	if (t98 != 459899435754073039LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x453 = INT32_MIN;
	uint16_t x454 = 3U;
	int16_t x455 = -1;
	int8_t x456 = -56;
	volatile int32_t t99 = 648792;

	t99 = ((x453+(x454%x455))-x456);

	if (t99 != -2147483592) { NG(); } else { ; }
	
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

