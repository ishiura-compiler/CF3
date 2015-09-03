#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x10 = INT64_MAX;
static uint64_t t4 = 2767308279LLU;
static volatile uint64_t x26 = 65369422LLU;
volatile uint64_t x29 = 522LLU;
int8_t x37 = -1;
static volatile uint16_t x42 = 23955U;
int64_t x44 = -19474376680809846LL;
static int8_t x46 = INT8_MAX;
static volatile int32_t t10 = -8869642;
int8_t x66 = INT8_MIN;
int64_t x69 = -569300051894088LL;
static volatile uint64_t t13 = 98195970913LLU;
int64_t x77 = 9434LL;
static int16_t x84 = INT16_MIN;
uint8_t x86 = 6U;
int8_t x88 = -12;
int32_t x92 = -1;
volatile int64_t x97 = -1LL;
int64_t x102 = 233130455LL;
int8_t x105 = INT8_MIN;
volatile int32_t x113 = INT32_MIN;
int8_t x114 = INT8_MIN;
uint32_t x115 = UINT32_MAX;
static int8_t x123 = 4;
static int32_t x124 = INT32_MAX;
int64_t t25 = -988LL;
volatile uint32_t x133 = UINT32_MAX;
int8_t x140 = INT8_MIN;
int64_t t28 = -12796212396LL;
int16_t x141 = INT16_MIN;
static int64_t x145 = -1463506026442865LL;
volatile int16_t x150 = INT16_MIN;
volatile int8_t x152 = INT8_MIN;
uint32_t x162 = UINT32_MAX;
volatile int8_t x163 = -1;
int16_t x167 = INT16_MAX;
static int8_t x169 = INT8_MIN;
int16_t x171 = INT16_MIN;
uint16_t x177 = 0U;
static uint64_t x180 = 2078382LLU;
static int64_t x182 = 0LL;
int32_t x204 = -2;
int64_t x208 = -91047231598LL;
int16_t x222 = INT16_MIN;
uint64_t t47 = 16749267LLU;
uint8_t x237 = 72U;
int16_t x243 = INT16_MAX;
volatile int16_t x245 = INT16_MIN;
uint64_t x248 = 376LLU;
int16_t x249 = INT16_MIN;
uint8_t x261 = 1U;
static uint64_t x264 = UINT64_MAX;
volatile uint64_t t53 = 104058735476LLU;
volatile uint64_t x275 = UINT64_MAX;
int32_t x277 = -395326;
int64_t x278 = -1LL;
volatile int32_t x280 = -218575;
static int8_t x285 = INT8_MAX;
int8_t x287 = INT8_MIN;
volatile int32_t x295 = -6;
volatile int16_t x310 = INT16_MAX;
static volatile int8_t x311 = -3;
volatile uint32_t x315 = 1U;
int16_t x319 = INT16_MIN;
int16_t x320 = INT16_MIN;
static volatile int32_t t64 = -10000;
static uint64_t x325 = 199336175LLU;
static int64_t x327 = -254765LL;
uint8_t x329 = 84U;
int16_t x333 = INT16_MIN;
int64_t x344 = -1LL;
uint32_t x348 = UINT32_MAX;
static int16_t x365 = INT16_MAX;
uint8_t x367 = 6U;
volatile int16_t x369 = -18;
int8_t x370 = INT8_MIN;
uint16_t x373 = 44U;
int32_t x374 = 5104485;
volatile uint32_t t78 = 54839U;
uint64_t x386 = 8028508278772145LLU;
int32_t x402 = INT32_MIN;
int8_t x403 = -1;
uint16_t x409 = 2U;
uint64_t x419 = 12317388663688LLU;
static uint16_t x431 = 2424U;
int16_t x433 = 1981;
int64_t x435 = 4258457984557641LL;
static int32_t x437 = INT32_MIN;
volatile int16_t x452 = INT16_MAX;
uint32_t t92 = 105558U;
uint8_t x454 = UINT8_MAX;
static uint64_t x464 = 10885684LLU;
static int16_t x465 = -15;
static int32_t t95 = 435;
static volatile int32_t t97 = -3280304;
int8_t x477 = -1;
uint64_t t98 = 1016LLU;


void f0(void) {
	static int16_t x1 = -1;
	volatile int32_t x2 = INT32_MIN;
	uint32_t x3 = 50U;
	static int32_t x4 = INT32_MIN;
	volatile uint32_t t0 = 245578652U;

	t0 = (((x1^x2)&x3)*x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 1U;
	static volatile uint8_t x6 = 1U;
	uint32_t x7 = 6082U;
	int64_t x8 = INT64_MIN;
	volatile int64_t t1 = -1033628914896245LL;

	t1 = (((x5^x6)&x7)*x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 2427LL;
	int16_t x11 = INT16_MIN;
	int8_t x12 = -1;
	static int64_t t2 = 1815433356414347LL;

	t2 = (((x9^x10)&x11)*x12);

	if (t2 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = 286402586384LLU;
	uint64_t x14 = 485000LLU;
	int32_t x15 = INT32_MAX;
	int32_t x16 = -1;
	volatile uint64_t t3 = 2067459469857570826LLU;

	t3 = (((x13^x14)&x15)*x16);

	if (t3 != 18446744072922349160LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MIN;
	uint64_t x18 = 191244926LLU;
	int8_t x19 = INT8_MIN;
	int64_t x20 = INT64_MIN;

	t4 = (((x17^x18)&x19)*x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -1;
	uint64_t x27 = UINT64_MAX;
	static int32_t x28 = INT32_MIN;
	uint64_t t5 = 246991766LLU;

	t5 = (((x25^x26)&x27)*x28);

	if (t5 != 140379766971695104LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x30 = INT8_MIN;
	static volatile uint8_t x31 = 124U;
	int32_t x32 = INT32_MIN;
	volatile uint64_t t6 = 18278496148513LLU;

	t6 = (((x29^x30)&x31)*x32);

	if (t6 != 18446744056529682432LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x33 = INT32_MAX;
	static int32_t x34 = INT32_MAX;
	volatile uint64_t x35 = 83247932343618LLU;
	int8_t x36 = -1;
	volatile uint64_t t7 = 2473357781699922883LLU;

	t7 = (((x33^x34)&x35)*x36);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x38 = -7943284;
	uint32_t x39 = UINT32_MAX;
	static int16_t x40 = -11;
	uint32_t t8 = 7U;

	t8 = (((x37^x38)&x39)*x40);

	if (t8 != 4207591183U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = UINT8_MAX;
	uint64_t x43 = 35932399LLU;
	volatile uint64_t t9 = 196LLU;

	t9 = (((x41^x42)&x43)*x44);

	if (t9 != 7879937811976487480LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x45 = 403;
	int32_t x47 = INT32_MAX;
	volatile int32_t x48 = 168045;

	t10 = (((x45^x46)&x47)*x48);

	if (t10 != 82678140) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = INT16_MAX;
	static volatile int8_t x58 = -3;
	static int32_t x59 = -1;
	volatile int16_t x60 = INT16_MAX;
	int32_t t11 = 2;

	t11 = (((x57^x58)&x59)*x60);

	if (t11 != -1073643522) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x65 = INT32_MIN;
	static uint8_t x67 = UINT8_MAX;
	int8_t x68 = INT8_MIN;
	int32_t t12 = -1570;

	t12 = (((x65^x66)&x67)*x68);

	if (t12 != -16384) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x70 = 8295726292781611LLU;
	static uint64_t x71 = UINT64_MAX;
	int16_t x72 = 76;

	t13 = (((x69^x70)&x71)*x72);

	if (t13 != 17773128911067063204LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x73 = -1;
	volatile int16_t x74 = INT16_MAX;
	volatile int16_t x75 = 329;
	volatile int16_t x76 = INT16_MIN;
	int32_t t14 = 1253244;

	t14 = (((x73^x74)&x75)*x76);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x78 = INT8_MAX;
	int32_t x79 = INT32_MIN;
	int8_t x80 = INT8_MAX;
	int64_t t15 = -3811505119685LL;

	t15 = (((x77^x78)&x79)*x80);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x81 = 1250LL;
	int32_t x82 = INT32_MIN;
	int16_t x83 = -1;
	int64_t t16 = 40655967928578LL;

	t16 = (((x81^x82)&x83)*x84);

	if (t16 != 70368703217664LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x85 = -1710693838277LL;
	static int16_t x87 = INT16_MIN;
	static int64_t t17 = -465439141333LL;

	t17 = (((x85^x86)&x87)*x88);

	if (t17 != 20528326115328LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = INT16_MIN;
	int32_t x90 = -448;
	int64_t x91 = INT64_MIN;
	volatile int64_t t18 = -44650647491LL;

	t18 = (((x89^x90)&x91)*x92);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x98 = UINT8_MAX;
	static uint32_t x99 = 193747U;
	static uint16_t x100 = UINT16_MAX;
	volatile int64_t t19 = 403366485561830LL;

	t19 = (((x97^x98)&x99)*x100);

	if (t19 != 12683381760LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x101 = 0;
	volatile uint32_t x103 = 88U;
	static int32_t x104 = INT32_MAX;
	static volatile int64_t t20 = 661731LL;

	t20 = (((x101^x102)&x103)*x104);

	if (t20 != 171798691760LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x106 = 6977U;
	volatile uint32_t x107 = 2009240U;
	int64_t x108 = -269150LL;
	int64_t t21 = 5437455391629LL;

	t21 = (((x105^x106)&x107)*x108);

	if (t21 != -540229267200LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x109 = INT16_MIN;
	int16_t x110 = -1;
	volatile uint16_t x111 = 18U;
	int16_t x112 = -1;
	int32_t t22 = -69;

	t22 = (((x109^x110)&x111)*x112);

	if (t22 != -18) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x116 = 2U;
	volatile uint32_t t23 = 1U;

	t23 = (((x113^x114)&x115)*x116);

	if (t23 != 4294967040U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x121 = -1;
	int64_t x122 = -1LL;
	int64_t t24 = 489LL;

	t24 = (((x121^x122)&x123)*x124);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x125 = -1;
	int32_t x126 = INT32_MIN;
	volatile int32_t x127 = 4631;
	volatile int64_t x128 = -6781734636LL;

	t25 = (((x125^x126)&x127)*x128);

	if (t25 != -31406213099316LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x129 = 237849513258LL;
	uint64_t x130 = 12716LLU;
	int8_t x131 = -1;
	int16_t x132 = INT16_MIN;
	volatile uint64_t t26 = 10459771LLU;

	t26 = (((x129^x130)&x131)*x132);

	if (t26 != 18438950220461834240LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x134 = 15U;
	volatile uint32_t x135 = 92U;
	int16_t x136 = -1;
	volatile uint32_t t27 = 174U;

	t27 = (((x133^x134)&x135)*x136);

	if (t27 != 4294967216U) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x137 = -192377142345LL;
	static int64_t x138 = 87673221LL;
	static int8_t x139 = INT8_MIN;

	t28 = (((x137^x138)&x139)*x140);

	if (t28 != 24635227439104LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x142 = INT16_MIN;
	int64_t x143 = 79065723094204264LL;
	static uint16_t x144 = 128U;
	volatile int64_t t29 = 543248149918498LL;

	t29 = (((x141^x142)&x143)*x144);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x146 = INT16_MIN;
	static int64_t x147 = INT64_MIN;
	volatile uint32_t x148 = UINT32_MAX;
	volatile int64_t t30 = -4LL;

	t30 = (((x145^x146)&x147)*x148);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x149 = UINT64_MAX;
	uint16_t x151 = 13U;
	uint64_t t31 = 11728LLU;

	t31 = (((x149^x150)&x151)*x152);

	if (t31 != 18446744073709549952LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x157 = -533;
	int8_t x158 = 0;
	int32_t x159 = -1;
	int16_t x160 = INT16_MIN;
	volatile int32_t t32 = 12376;

	t32 = (((x157^x158)&x159)*x160);

	if (t32 != 17465344) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x161 = 19U;
	volatile uint64_t x164 = 16743567276LLU;
	static volatile uint64_t t33 = 72046LLU;

	t33 = (((x161^x162)&x163)*x164);

	if (t33 != 16572841312795805328LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x165 = 8U;
	static uint32_t x166 = UINT32_MAX;
	static int8_t x168 = INT8_MAX;
	volatile uint32_t t34 = 72624953U;

	t34 = (((x165^x166)&x167)*x168);

	if (t34 != 4160393U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x170 = INT8_MAX;
	int16_t x172 = 3367;
	volatile int32_t t35 = -1;

	t35 = (((x169^x170)&x171)*x172);

	if (t35 != -110329856) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x173 = 1LL;
	int16_t x174 = 223;
	int32_t x175 = INT32_MIN;
	static uint32_t x176 = 5196279U;
	int64_t t36 = -13685377035107LL;

	t36 = (((x173^x174)&x175)*x176);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x178 = 2282U;
	uint16_t x179 = 126U;
	volatile uint64_t t37 = 11272845080655585LLU;

	t37 = (((x177^x178)&x179)*x180);

	if (t37 != 220308492LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x181 = 1;
	int16_t x183 = INT16_MIN;
	int64_t x184 = INT64_MIN;
	volatile int64_t t38 = -1LL;

	t38 = (((x181^x182)&x183)*x184);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x185 = 12U;
	int8_t x186 = INT8_MIN;
	int32_t x187 = INT32_MAX;
	int8_t x188 = INT8_MAX;
	volatile uint32_t t39 = 564U;

	t39 = (((x185^x186)&x187)*x188);

	if (t39 != 2147468916U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x189 = INT32_MIN;
	int16_t x190 = -1;
	int64_t x191 = 8688081888776LL;
	int8_t x192 = -23;
	int64_t t40 = 23210757078LL;

	t40 = (((x189^x190)&x191)*x192);

	if (t40 != -34742250168LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x193 = -4LL;
	static int32_t x194 = 143648230;
	uint8_t x195 = UINT8_MAX;
	static uint64_t x196 = 256633517371635693LLU;
	volatile uint64_t t41 = 50390LLU;

	t41 = (((x193^x194)&x195)*x196);

	if (t41 != 6672471451662528018LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x201 = INT8_MIN;
	int32_t x202 = INT32_MAX;
	volatile uint8_t x203 = 1U;
	volatile int32_t t42 = 354632534;

	t42 = (((x201^x202)&x203)*x204);

	if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x205 = UINT64_MAX;
	static uint64_t x206 = 60LLU;
	int64_t x207 = -1LL;
	uint64_t t43 = 122386025LLU;

	t43 = (((x205^x206)&x207)*x208);

	if (t43 != 5553881127478LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x213 = 3U;
	uint32_t x214 = 1U;
	volatile int8_t x215 = -1;
	static int16_t x216 = 122;
	volatile uint32_t t44 = 11U;

	t44 = (((x213^x214)&x215)*x216);

	if (t44 != 244U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x221 = INT16_MIN;
	uint64_t x223 = UINT64_MAX;
	uint32_t x224 = 597U;
	uint64_t t45 = 668863372877LLU;

	t45 = (((x221^x222)&x223)*x224);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x225 = -1;
	uint8_t x226 = 18U;
	int64_t x227 = 244773515972117232LL;
	uint64_t x228 = UINT64_MAX;
	uint64_t t46 = 20691LLU;

	t46 = (((x225^x226)&x227)*x228);

	if (t46 != 18201970557737434400LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x229 = -2;
	uint64_t x230 = 8923395376656446358LLU;
	uint32_t x231 = 97525U;
	static uint16_t x232 = 7019U;

	t47 = (((x229^x230)&x231)*x232);

	if (t47 != 482233376LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x238 = 3528093U;
	int64_t x239 = -8225932552LL;
	volatile int16_t x240 = -1;
	int64_t t48 = 421520456LL;

	t48 = (((x237^x238)&x239)*x240);

	if (t48 != -3150032LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x241 = 0U;
	volatile int32_t x242 = -583;
	int16_t x244 = INT16_MIN;
	volatile int32_t t49 = -11;

	t49 = (((x241^x242)&x243)*x244);

	if (t49 != -1054638080) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x246 = 966U;
	int64_t x247 = -368776673213LL;
	volatile uint64_t t50 = 9694285161751LLU;

	t50 = (((x245^x246)&x247)*x248);

	if (t50 != 18446605413679653104LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x250 = INT16_MAX;
	volatile uint64_t x251 = UINT64_MAX;
	static int32_t x252 = INT32_MIN;
	uint64_t t51 = 318091LLU;

	t51 = (((x249^x250)&x251)*x252);

	if (t51 != 2147483648LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x257 = 459499;
	volatile int32_t x258 = INT32_MIN;
	uint8_t x259 = 0U;
	int8_t x260 = INT8_MIN;
	int32_t t52 = -7194;

	t52 = (((x257^x258)&x259)*x260);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x262 = INT64_MAX;
	volatile int32_t x263 = INT32_MIN;

	t53 = (((x261^x262)&x263)*x264);

	if (t53 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x273 = 12;
	volatile int64_t x274 = INT64_MIN;
	volatile int8_t x276 = -1;
	uint64_t t54 = 1009305228LLU;

	t54 = (((x273^x274)&x275)*x276);

	if (t54 != 9223372036854775796LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x279 = UINT8_MAX;
	static volatile int64_t t55 = 30065LL;

	t55 = (((x277^x278)&x279)*x280);

	if (t55 != -13333075LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x281 = UINT64_MAX;
	int8_t x282 = 14;
	int32_t x283 = INT32_MIN;
	int16_t x284 = INT16_MIN;
	volatile uint64_t t56 = 88672666517LLU;

	t56 = (((x281^x282)&x283)*x284);

	if (t56 != 70368744177664LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x286 = 0;
	volatile uint32_t x288 = 15458U;
	volatile uint32_t t57 = 113009295U;

	t57 = (((x285^x286)&x287)*x288);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x289 = 2LLU;
	int8_t x290 = -1;
	int8_t x291 = INT8_MAX;
	int32_t x292 = INT32_MIN;
	uint64_t t58 = 6LLU;

	t58 = (((x289^x290)&x291)*x292);

	if (t58 != 18446743805274095616LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x293 = 62;
	static uint16_t x294 = UINT16_MAX;
	volatile int64_t x296 = -669392LL;
	int64_t t59 = 615573380271LL;

	t59 = (((x293^x294)&x295)*x296);

	if (t59 != -43826433024LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x297 = -1;
	int8_t x298 = -1;
	static int8_t x299 = INT8_MIN;
	int8_t x300 = 12;
	int32_t t60 = 2;

	t60 = (((x297^x298)&x299)*x300);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x309 = 133368LLU;
	uint64_t x312 = 237805487073115LLU;
	uint64_t t61 = 51948443112LLU;

	t61 = (((x309^x310)&x311)*x312);

	if (t61 != 1521848039858966983LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x313 = INT64_MAX;
	int16_t x314 = -1;
	uint64_t x316 = UINT64_MAX;
	uint64_t t62 = 22538305LLU;

	t62 = (((x313^x314)&x315)*x316);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x317 = INT8_MIN;
	uint64_t x318 = UINT64_MAX;
	uint64_t t63 = 0LLU;

	t63 = (((x317^x318)&x319)*x320);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x321 = 9;
	int16_t x322 = -4243;
	volatile int8_t x323 = INT8_MIN;
	int16_t x324 = 0;

	t64 = (((x321^x322)&x323)*x324);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x326 = INT32_MIN;
	volatile uint16_t x328 = UINT16_MAX;
	static volatile uint64_t t65 = 32215120204LLU;

	t65 = (((x325^x326)&x327)*x328);

	if (t65 != 18446616394882809661LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x330 = INT64_MIN;
	uint64_t x331 = 48154017LLU;
	int32_t x332 = INT32_MIN;
	uint64_t t66 = 943570324802329LLU;

	t66 = (((x329^x330)&x331)*x332);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x334 = -1;
	int64_t x335 = INT64_MIN;
	uint32_t x336 = 88816778U;
	int64_t t67 = -998LL;

	t67 = (((x333^x334)&x335)*x336);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x337 = 2U;
	volatile uint32_t x338 = 76163U;
	int32_t x339 = -1;
	uint32_t x340 = 2000148U;
	uint32_t t68 = 98419762U;

	t68 = (((x337^x338)&x339)*x340);

	if (t68 != 2009416468U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x341 = INT32_MIN;
	int64_t x342 = 7450648465LL;
	static int8_t x343 = -17;
	int64_t t69 = -313842LL;

	t69 = (((x341^x342)&x343)*x344);

	if (t69 != 7581737087LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x345 = INT64_MIN;
	int32_t x346 = INT32_MIN;
	static int8_t x347 = 46;
	int64_t t70 = -7LL;

	t70 = (((x345^x346)&x347)*x348);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x349 = 48;
	static uint64_t x350 = UINT64_MAX;
	int8_t x351 = INT8_MIN;
	volatile int8_t x352 = INT8_MIN;
	volatile uint64_t t71 = 1LLU;

	t71 = (((x349^x350)&x351)*x352);

	if (t71 != 16384LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x357 = UINT64_MAX;
	static int16_t x358 = INT16_MIN;
	int32_t x359 = -1;
	uint16_t x360 = 7U;
	uint64_t t72 = 12LLU;

	t72 = (((x357^x358)&x359)*x360);

	if (t72 != 229369LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x361 = UINT16_MAX;
	uint64_t x362 = 271142537585518LLU;
	static volatile int8_t x363 = -23;
	volatile int64_t x364 = 922829468LL;
	volatile uint64_t t73 = 502837283657760137LLU;

	t73 = (((x361^x362)&x363)*x364);

	if (t73 != 6687049422131667100LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x366 = INT64_MIN;
	uint32_t x368 = UINT32_MAX;
	volatile int64_t t74 = 67615487567772288LL;

	t74 = (((x365^x366)&x367)*x368);

	if (t74 != 25769803770LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x371 = -1;
	int32_t x372 = -1;
	volatile int32_t t75 = -10789;

	t75 = (((x369^x370)&x371)*x372);

	if (t75 != -110) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x375 = 851487;
	uint16_t x376 = 72U;
	static int32_t t76 = 32591;

	t76 = (((x373^x374)&x375)*x376);

	if (t76 != 60789384) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x377 = 7079LLU;
	int64_t x378 = INT64_MIN;
	volatile int8_t x379 = INT8_MIN;
	uint16_t x380 = UINT16_MAX;
	static volatile uint64_t t77 = 226228086307242673LLU;

	t77 = (((x377^x378)&x379)*x380);

	if (t77 != 9223372037316142208LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x381 = INT8_MIN;
	volatile uint8_t x382 = UINT8_MAX;
	volatile uint32_t x383 = UINT32_MAX;
	static uint32_t x384 = 19559173U;

	t78 = (((x381^x382)&x383)*x384);

	if (t78 != 1771833979U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x385 = -1;
	int32_t x387 = INT32_MAX;
	int32_t x388 = 38875402;
	uint64_t t79 = 4015501802802878823LLU;

	t79 = (((x385^x386)&x387)*x388);

	if (t79 != 41720950105292044LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x389 = -26745647;
	int32_t x390 = 101792552;
	static uint16_t x391 = 1U;
	uint32_t x392 = 4188148U;
	uint32_t t80 = 5943U;

	t80 = (((x389^x390)&x391)*x392);

	if (t80 != 4188148U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x397 = INT16_MIN;
	int8_t x398 = INT8_MIN;
	uint32_t x399 = 299U;
	static int8_t x400 = -1;
	static volatile uint32_t t81 = 21773705U;

	t81 = (((x397^x398)&x399)*x400);

	if (t81 != 4294967040U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x401 = UINT16_MAX;
	int16_t x404 = 1;
	static volatile int32_t t82 = -10854066;

	t82 = (((x401^x402)&x403)*x404);

	if (t82 != -2147418113) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x405 = INT64_MAX;
	int64_t x406 = -1501972156382LL;
	int32_t x407 = -1;
	static int16_t x408 = 1;
	static volatile int64_t t83 = 13856LL;

	t83 = (((x405^x406)&x407)*x408);

	if (t83 != -9223370534882619427LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x410 = 115995025;
	uint64_t x411 = 195040LLU;
	int16_t x412 = 1689;
	volatile uint64_t t84 = 22657296850LLU;

	t84 = (((x409^x410)&x411)*x412);

	if (t84 != 104420736LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint64_t x413 = 2966917861LLU;
	static uint16_t x414 = 0U;
	uint8_t x415 = 7U;
	int8_t x416 = INT8_MIN;
	volatile uint64_t t85 = 535725773933LLU;

	t85 = (((x413^x414)&x415)*x416);

	if (t85 != 18446744073709550976LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x417 = UINT8_MAX;
	uint16_t x418 = UINT16_MAX;
	int8_t x420 = 59;
	static volatile uint64_t t86 = 53129438318566LLU;

	t86 = (((x417^x418)&x419)*x420);

	if (t86 != 1616128LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x421 = INT64_MIN;
	uint64_t x422 = UINT64_MAX;
	uint8_t x423 = 15U;
	static int32_t x424 = 585101;
	uint64_t t87 = 729LLU;

	t87 = (((x421^x422)&x423)*x424);

	if (t87 != 8776515LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x425 = INT32_MIN;
	volatile int32_t x426 = -1;
	uint32_t x427 = 225U;
	volatile uint32_t x428 = 1U;
	uint32_t t88 = 3298U;

	t88 = (((x425^x426)&x427)*x428);

	if (t88 != 225U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x429 = -1;
	int32_t x430 = 17078;
	uint64_t x432 = UINT64_MAX;
	uint64_t t89 = 570736932434332999LLU;

	t89 = (((x429^x430)&x431)*x432);

	if (t89 != 18446744073709549240LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x434 = 247U;
	static int64_t x436 = 67468793317832LL;
	int64_t t90 = 129521114LL;

	t90 = (((x433^x434)&x435)*x436);

	if (t90 != 39401775297613888LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x438 = 2381530441877666LLU;
	int64_t x439 = -1LL;
	volatile int32_t x440 = -1;
	volatile uint64_t t91 = 951269843079LLU;

	t91 = (((x437^x438)&x439)*x440);

	if (t91 != 2381530307327838LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x449 = 5038U;
	int32_t x450 = INT32_MIN;
	uint32_t x451 = UINT32_MAX;

	t92 = (((x449^x450)&x451)*x452);

	if (t92 != 2312563794U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x453 = UINT64_MAX;
	int16_t x455 = -1;
	int8_t x456 = 24;
	static uint64_t t93 = 112741641090745937LLU;

	t93 = (((x453^x454)&x455)*x456);

	if (t93 != 18446744073709545472LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x461 = 9;
	uint64_t x462 = 5889030629LLU;
	volatile uint64_t x463 = UINT64_MAX;
	volatile uint64_t t94 = 16718344284851526LLU;

	t94 = (((x461^x462)&x463)*x464);

	if (t94 != 64106126569815024LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x466 = INT32_MAX;
	int32_t x467 = -67382;
	int8_t x468 = -1;

	t95 = (((x465^x466)&x467)*x468);

	if (t95 != 2147483638) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x469 = 0;
	uint16_t x470 = UINT16_MAX;
	int8_t x471 = -3;
	uint8_t x472 = 1U;
	int32_t t96 = -1;

	t96 = (((x469^x470)&x471)*x472);

	if (t96 != 65533) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x473 = 3U;
	static volatile uint8_t x474 = 1U;
	int16_t x475 = INT16_MIN;
	volatile int32_t x476 = INT32_MIN;

	t97 = (((x473^x474)&x475)*x476);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x478 = -1;
	int32_t x479 = -1;
	uint64_t x480 = 691876LLU;

	t98 = (((x477^x478)&x479)*x480);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x485 = INT32_MIN;
	volatile uint8_t x486 = UINT8_MAX;
	uint64_t x487 = 68741383227LLU;
	uint8_t x488 = 16U;
	uint64_t t99 = 50LLU;

	t99 = (((x485^x486)&x487)*x488);

	if (t99 != 1099511628720LLU) { NG(); } else { ; }
	
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

