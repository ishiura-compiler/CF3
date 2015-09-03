#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = 128LL;
volatile int16_t x12 = INT16_MIN;
volatile uint64_t t3 = 1068LLU;
int32_t x19 = -32216;
uint8_t x30 = 66U;
volatile int16_t x32 = INT16_MAX;
volatile int32_t t6 = 419184;
volatile int64_t x34 = -1LL;
volatile int64_t x36 = INT64_MIN;
int16_t x40 = 2;
static int32_t x42 = -1;
int8_t x45 = INT8_MIN;
uint32_t x53 = UINT32_MAX;
int32_t x56 = -1042148;
int8_t x58 = INT8_MAX;
int16_t x61 = INT16_MAX;
static int32_t x62 = -1;
int64_t t14 = -17602430LL;
static volatile int16_t x65 = -12;
uint32_t x69 = UINT32_MAX;
volatile int32_t x70 = -1;
int32_t x75 = INT32_MIN;
int32_t x80 = INT32_MIN;
int8_t x88 = INT8_MIN;
int32_t x95 = INT32_MIN;
int8_t x97 = 62;
int64_t t23 = 127765254652LL;
int32_t x101 = -10704;
int64_t x102 = INT64_MIN;
static uint8_t x110 = UINT8_MAX;
volatile int64_t t26 = 593896110125763LL;
uint32_t x113 = UINT32_MAX;
static int32_t x119 = -286304;
int8_t x122 = 7;
static int8_t x123 = INT8_MAX;
volatile int64_t t29 = 214423882140733046LL;
static volatile uint32_t t30 = 49U;
volatile int16_t x135 = -1;
uint8_t x139 = UINT8_MAX;
int64_t x158 = INT64_MIN;
int64_t t38 = -8256772514003LL;
volatile int32_t x168 = -1;
static volatile int32_t t40 = 236;
int32_t x170 = INT32_MIN;
int16_t x179 = -1;
static int32_t t43 = -1;
volatile int64_t t45 = -22648939144LL;
volatile int64_t t47 = -28736239650961LL;
int16_t x205 = INT16_MIN;
static int32_t x217 = 116811310;
uint32_t x218 = UINT32_MAX;
uint64_t t54 = 210416552140649699LLU;
volatile uint32_t x232 = 2465189U;
static uint32_t t55 = 263510216U;
uint32_t x233 = UINT32_MAX;
int8_t x239 = INT8_MAX;
int32_t x247 = INT32_MIN;
uint16_t x253 = UINT16_MAX;
uint32_t x255 = UINT32_MAX;
int16_t x258 = 13591;
int16_t x261 = INT16_MAX;
static int8_t x263 = -1;
uint16_t x264 = 104U;
int8_t x265 = -2;
volatile uint64_t x269 = 256083896446394785LLU;
int64_t x270 = INT64_MIN;
volatile int64_t x271 = INT64_MAX;
int16_t x272 = -2502;
int8_t x278 = INT8_MAX;
int16_t x280 = INT16_MIN;
volatile uint32_t t67 = 51863U;
int16_t x284 = 89;
static uint32_t x285 = 11588995U;
static int64_t x286 = INT64_MIN;
int16_t x292 = INT16_MIN;
static int16_t x295 = INT16_MAX;
int16_t x296 = -215;
uint8_t x297 = 7U;
int16_t x310 = -7704;
int8_t x314 = INT8_MIN;
volatile int64_t x318 = -352531617267194LL;
volatile int32_t x322 = -1;
int64_t x328 = INT64_MIN;
static int8_t x332 = INT8_MIN;
uint64_t t84 = 6721778515LLU;
int32_t x351 = INT32_MIN;
volatile uint32_t x355 = UINT32_MAX;
int8_t x361 = INT8_MIN;
int8_t x366 = -1;
volatile int64_t t90 = 2141425979143693LL;
int8_t x375 = INT8_MIN;
uint64_t t91 = 10357636LLU;
volatile uint8_t x379 = 105U;
volatile int64_t t93 = -269752515602120LL;
int32_t x386 = 14;
int16_t x391 = INT16_MAX;
uint32_t x392 = 5227U;
volatile int64_t t95 = -1192712987664062LL;
int32_t x396 = INT32_MIN;
int8_t x397 = INT8_MIN;
int32_t t97 = -2;
volatile int64_t t98 = -845384250LL;
uint32_t x407 = UINT32_MAX;


void f0(void) {
	static volatile uint64_t x1 = 25764360LLU;
	volatile int8_t x3 = INT8_MAX;
	uint16_t x4 = UINT16_MAX;
	uint64_t t0 = 7636535750276306968LLU;

	t0 = ((x1&(x2&x3))%x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 29;
	uint32_t x6 = 12U;
	uint32_t x7 = 10059093U;
	int8_t x8 = -7;
	uint32_t t1 = 7830U;

	t1 = ((x5&(x6&x7))%x8);

	if (t1 != 4U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 7U;
	int16_t x10 = -4482;
	int16_t x11 = INT16_MIN;
	volatile uint32_t t2 = 156U;

	t2 = ((x9&(x10&x11))%x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 120U;
	volatile int16_t x14 = 1;
	uint64_t x15 = 324214446726148LLU;
	int8_t x16 = 23;

	t3 = ((x13&(x14&x15))%x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint16_t x17 = 148U;
	int32_t x18 = -69379;
	static int32_t x20 = 2393674;
	volatile int32_t t4 = 304;

	t4 = ((x17&(x18&x19))%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 78398529;
	uint64_t x22 = 8705800LLU;
	volatile int16_t x23 = INT16_MIN;
	static int8_t x24 = INT8_MIN;
	uint64_t t5 = 53569741805427499LLU;

	t5 = ((x21&(x22&x23))%x24);

	if (t5 != 8650752LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = 559;
	int16_t x31 = -1;

	t6 = ((x29&(x30&x31))%x32);

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MAX;
	volatile int32_t x35 = INT32_MIN;
	int64_t t7 = -29LL;

	t7 = ((x33&(x34&x35))%x36);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x37 = 12LLU;
	uint16_t x38 = UINT16_MAX;
	int8_t x39 = INT8_MIN;
	volatile uint64_t t8 = 288481449732347LLU;

	t8 = ((x37&(x38&x39))%x40);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = -1;
	int8_t x43 = 5;
	int8_t x44 = INT8_MIN;
	int32_t t9 = 116195;

	t9 = ((x41&(x42&x43))%x44);

	if (t9 != 5) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x46 = 29U;
	volatile int32_t x47 = 0;
	static int8_t x48 = -1;
	volatile int32_t t10 = 384;

	t10 = ((x45&(x46&x47))%x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x49 = INT64_MIN;
	static int8_t x50 = -2;
	int64_t x51 = INT64_MIN;
	volatile int64_t x52 = INT64_MAX;
	static int64_t t11 = 4909229210LL;

	t11 = ((x49&(x50&x51))%x52);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x54 = -1;
	volatile uint32_t x55 = 1994935848U;
	volatile uint32_t t12 = 101736358U;

	t12 = ((x53&(x54&x55))%x56);

	if (t12 != 1994935848U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = -177757LL;
	volatile uint8_t x59 = 0U;
	uint64_t x60 = 43LLU;
	uint64_t t13 = 1010983799251LLU;

	t13 = ((x57&(x58&x59))%x60);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x63 = -3810993LL;
	uint32_t x64 = UINT32_MAX;

	t14 = ((x61&(x62&x63))%x64);

	if (t14 != 22863LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x66 = INT64_MAX;
	int32_t x67 = INT32_MIN;
	static uint8_t x68 = UINT8_MAX;
	volatile int64_t t15 = -16710875944143684LL;

	t15 = ((x65&(x66&x67))%x68);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x71 = -1;
	uint32_t x72 = UINT32_MAX;
	uint32_t t16 = 8101557U;

	t16 = ((x69&(x70&x71))%x72);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = 14069834965933LL;
	int64_t x74 = INT64_MIN;
	int64_t x76 = -867969598817979091LL;
	int64_t t17 = 8363299826225237LL;

	t17 = ((x73&(x74&x75))%x76);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MIN;
	uint32_t x78 = 1U;
	static int16_t x79 = -2;
	volatile uint32_t t18 = 2086U;

	t18 = ((x77&(x78&x79))%x80);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x81 = INT16_MIN;
	int32_t x82 = -374322;
	int16_t x83 = -1;
	int16_t x84 = INT16_MAX;
	volatile int32_t t19 = -306;

	t19 = ((x81&(x82&x83))%x84);

	if (t19 != -12) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x85 = -1;
	int64_t x86 = INT64_MIN;
	uint16_t x87 = UINT16_MAX;
	static volatile int64_t t20 = -306125905982249LL;

	t20 = ((x85&(x86&x87))%x88);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x89 = 1;
	volatile int8_t x90 = INT8_MIN;
	int16_t x91 = -1;
	volatile uint32_t x92 = UINT32_MAX;
	volatile uint32_t t21 = 498U;

	t21 = ((x89&(x90&x91))%x92);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = 15033;
	volatile uint8_t x94 = 46U;
	static int64_t x96 = INT64_MAX;
	int64_t t22 = 51169LL;

	t22 = ((x93&(x94&x95))%x96);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x98 = 27172058050324075LL;
	int8_t x99 = INT8_MIN;
	volatile int32_t x100 = INT32_MIN;

	t23 = ((x97&(x98&x99))%x100);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x103 = INT32_MAX;
	volatile uint64_t x104 = 83802982LLU;
	uint64_t t24 = 12LLU;

	t24 = ((x101&(x102&x103))%x104);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = 11376;
	int64_t x106 = INT64_MIN;
	static volatile int64_t x107 = -818064LL;
	int64_t x108 = INT64_MIN;
	static volatile int64_t t25 = -728866610381514655LL;

	t25 = ((x105&(x106&x107))%x108);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = INT64_MIN;
	static uint32_t x111 = 0U;
	int32_t x112 = -39;

	t26 = ((x109&(x110&x111))%x112);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x114 = -1;
	uint64_t x115 = 161764001472334370LLU;
	static int64_t x116 = INT64_MAX;
	uint64_t t27 = 1LLU;

	t27 = ((x113&(x114&x115))%x116);

	if (t27 != 2503232034LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = INT16_MAX;
	static uint32_t x118 = 607U;
	int32_t x120 = INT32_MAX;
	volatile uint32_t t28 = 904U;

	t28 = ((x117&(x118&x119))%x120);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = -80846LL;
	int16_t x124 = 160;

	t29 = ((x121&(x122&x123))%x124);

	if (t29 != 2LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = 4U;
	volatile int8_t x126 = INT8_MAX;
	uint32_t x127 = UINT32_MAX;
	static int8_t x128 = INT8_MIN;

	t30 = ((x125&(x126&x127))%x128);

	if (t30 != 4U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = INT8_MAX;
	int8_t x130 = 0;
	uint16_t x131 = 10537U;
	uint16_t x132 = 46U;
	volatile int32_t t31 = 1034060073;

	t31 = ((x129&(x130&x131))%x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x133 = -1;
	int64_t x134 = INT64_MIN;
	uint8_t x136 = 31U;
	int64_t t32 = -165239236886LL;

	t32 = ((x133&(x134&x135))%x136);

	if (t32 != -8LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x137 = 703U;
	int32_t x138 = INT32_MAX;
	volatile uint32_t x140 = UINT32_MAX;
	uint32_t t33 = 31558U;

	t33 = ((x137&(x138&x139))%x140);

	if (t33 != 191U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x141 = UINT16_MAX;
	int8_t x142 = INT8_MIN;
	volatile int32_t x143 = INT32_MAX;
	uint32_t x144 = 99U;
	uint32_t t34 = 56050U;

	t34 = ((x141&(x142&x143))%x144);

	if (t34 != 68U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = -1;
	static int64_t x146 = INT64_MIN;
	int8_t x147 = INT8_MIN;
	uint8_t x148 = UINT8_MAX;
	int64_t t35 = -784441LL;

	t35 = ((x145&(x146&x147))%x148);

	if (t35 != -128LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = 613660504641044LL;
	int8_t x150 = INT8_MAX;
	int32_t x151 = -23549;
	int64_t x152 = 745417084193LL;
	volatile int64_t t36 = -1579877935LL;

	t36 = ((x149&(x150&x151))%x152);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x153 = 937191251281LLU;
	int16_t x154 = 45;
	volatile int32_t x155 = INT32_MAX;
	uint16_t x156 = 599U;
	static volatile uint64_t t37 = 47728241LLU;

	t37 = ((x153&(x154&x155))%x156);

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x157 = INT16_MIN;
	uint32_t x159 = 1919U;
	uint32_t x160 = UINT32_MAX;

	t38 = ((x157&(x158&x159))%x160);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x161 = -1;
	volatile int16_t x162 = INT16_MIN;
	uint8_t x163 = UINT8_MAX;
	uint64_t x164 = 5866109LLU;
	volatile uint64_t t39 = 4592936LLU;

	t39 = ((x161&(x162&x163))%x164);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x165 = 7807;
	static int8_t x166 = INT8_MAX;
	int16_t x167 = INT16_MIN;

	t40 = ((x165&(x166&x167))%x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x169 = UINT8_MAX;
	int8_t x171 = -1;
	static uint8_t x172 = 4U;
	int32_t t41 = 61;

	t41 = ((x169&(x170&x171))%x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = INT16_MIN;
	int32_t x174 = INT32_MIN;
	int8_t x175 = INT8_MIN;
	int32_t x176 = -9576327;
	static volatile int32_t t42 = 708;

	t42 = ((x173&(x174&x175))%x176);

	if (t42 != -2386400) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x177 = UINT8_MAX;
	static volatile int16_t x178 = INT16_MIN;
	int32_t x180 = INT32_MAX;

	t43 = ((x177&(x178&x179))%x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x181 = INT16_MIN;
	int16_t x182 = -1;
	int32_t x183 = INT32_MAX;
	uint64_t x184 = UINT64_MAX;
	uint64_t t44 = 1LLU;

	t44 = ((x181&(x182&x183))%x184);

	if (t44 != 2147450880LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = -1;
	int64_t x186 = 787512392605509LL;
	uint16_t x187 = UINT16_MAX;
	volatile uint16_t x188 = UINT16_MAX;

	t45 = ((x185&(x186&x187))%x188);

	if (t45 != 57157LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x189 = 29U;
	static int8_t x190 = INT8_MIN;
	int8_t x191 = 1;
	volatile int16_t x192 = INT16_MAX;
	int32_t t46 = 118306;

	t46 = ((x189&(x190&x191))%x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = -48;
	static int64_t x194 = -159LL;
	uint16_t x195 = 2090U;
	volatile int8_t x196 = -1;

	t47 = ((x193&(x194&x195))%x196);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = 1;
	uint16_t x198 = 0U;
	int64_t x199 = INT64_MIN;
	static int32_t x200 = INT32_MAX;
	static volatile int64_t t48 = 4LL;

	t48 = ((x197&(x198&x199))%x200);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x206 = 61;
	uint8_t x207 = UINT8_MAX;
	int8_t x208 = 7;
	static volatile int32_t t49 = 5;

	t49 = ((x205&(x206&x207))%x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x209 = 1LLU;
	int64_t x210 = -1LL;
	uint8_t x211 = 3U;
	volatile int8_t x212 = -1;
	uint64_t t50 = 4605246439924040LLU;

	t50 = ((x209&(x210&x211))%x212);

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x213 = 50U;
	int32_t x214 = INT32_MAX;
	int8_t x215 = INT8_MIN;
	volatile int64_t x216 = 1540230075235370LL;
	volatile int64_t t51 = 4082186358LL;

	t51 = ((x213&(x214&x215))%x216);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x219 = 297645800128LLU;
	int32_t x220 = INT32_MIN;
	volatile uint64_t t52 = 188311259674188055LLU;

	t52 = ((x217&(x218&x219))%x220);

	if (t52 != 68313600LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x221 = INT32_MAX;
	int8_t x222 = INT8_MAX;
	volatile uint8_t x223 = 0U;
	uint32_t x224 = UINT32_MAX;
	uint32_t t53 = 2U;

	t53 = ((x221&(x222&x223))%x224);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x225 = -710219897582LL;
	int64_t x226 = -20526LL;
	int64_t x227 = INT64_MIN;
	uint64_t x228 = 47LLU;

	t54 = ((x225&(x226&x227))%x228);

	if (t54 != 36LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x229 = 1015U;
	int32_t x230 = INT32_MIN;
	uint16_t x231 = UINT16_MAX;

	t55 = ((x229&(x230&x231))%x232);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x234 = 0LLU;
	static volatile uint8_t x235 = UINT8_MAX;
	static volatile int8_t x236 = -1;
	static uint64_t t56 = 31961070901217760LLU;

	t56 = ((x233&(x234&x235))%x236);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x237 = 2U;
	int16_t x238 = 1;
	int16_t x240 = -1;
	int32_t t57 = -85191;

	t57 = ((x237&(x238&x239))%x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x241 = 882696043U;
	uint16_t x242 = 6U;
	static uint8_t x243 = UINT8_MAX;
	uint8_t x244 = 54U;
	uint32_t t58 = 3U;

	t58 = ((x241&(x242&x243))%x244);

	if (t58 != 2U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = -1;
	int32_t x246 = INT32_MIN;
	int16_t x248 = INT16_MAX;
	int32_t t59 = 392;

	t59 = ((x245&(x246&x247))%x248);

	if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x249 = 2021;
	static uint32_t x250 = UINT32_MAX;
	uint8_t x251 = 0U;
	int64_t x252 = -15088LL;
	int64_t t60 = 1382325137LL;

	t60 = ((x249&(x250&x251))%x252);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x254 = INT64_MAX;
	int16_t x256 = 17;
	int64_t t61 = 0LL;

	t61 = ((x253&(x254&x255))%x256);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x257 = -1LL;
	volatile uint16_t x259 = 293U;
	volatile int64_t x260 = INT64_MIN;
	static volatile int64_t t62 = -15658956LL;

	t62 = ((x257&(x258&x259))%x260);

	if (t62 != 261LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x262 = INT64_MIN;
	volatile int64_t t63 = 0LL;

	t63 = ((x261&(x262&x263))%x264);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x266 = 8U;
	static int16_t x267 = INT16_MAX;
	volatile int16_t x268 = 6;
	static volatile int32_t t64 = -61;

	t64 = ((x265&(x266&x267))%x268);

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t t65 = 32351154LLU;

	t65 = ((x269&(x270&x271))%x272);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = INT16_MIN;
	uint32_t x274 = UINT32_MAX;
	uint16_t x275 = 107U;
	uint8_t x276 = 1U;
	uint32_t t66 = 2523692U;

	t66 = ((x273&(x274&x275))%x276);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x277 = 55U;
	static uint32_t x279 = 125153414U;

	t67 = ((x277&(x278&x279))%x280);

	if (t67 != 6U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x281 = INT64_MIN;
	static uint8_t x282 = 98U;
	static int64_t x283 = -13018605LL;
	int64_t t68 = -6LL;

	t68 = ((x281&(x282&x283))%x284);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x287 = -1;
	static int8_t x288 = INT8_MAX;
	volatile int64_t t69 = -231906011610098LL;

	t69 = ((x285&(x286&x287))%x288);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x289 = INT64_MAX;
	int64_t x290 = INT64_MAX;
	int8_t x291 = INT8_MIN;
	static volatile int64_t t70 = -863307547LL;

	t70 = ((x289&(x290&x291))%x292);

	if (t70 != 32640LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = 351;
	uint16_t x294 = UINT16_MAX;
	volatile int32_t t71 = -13687481;

	t71 = ((x293&(x294&x295))%x296);

	if (t71 != 136) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x298 = -1;
	int8_t x299 = INT8_MIN;
	uint64_t x300 = 66075611LLU;
	uint64_t t72 = 539015437572LLU;

	t72 = ((x297&(x298&x299))%x300);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x301 = -1LL;
	uint16_t x302 = 14U;
	uint8_t x303 = UINT8_MAX;
	int8_t x304 = 1;
	volatile int64_t t73 = 674698206456688LL;

	t73 = ((x301&(x302&x303))%x304);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = -1;
	static int16_t x306 = 2100;
	static int64_t x307 = INT64_MIN;
	int8_t x308 = INT8_MIN;
	static int64_t t74 = 246399222LL;

	t74 = ((x305&(x306&x307))%x308);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x309 = UINT16_MAX;
	volatile int16_t x311 = INT16_MAX;
	static uint64_t x312 = UINT64_MAX;
	uint64_t t75 = 12296515LLU;

	t75 = ((x309&(x310&x311))%x312);

	if (t75 != 25064LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x313 = INT8_MIN;
	int8_t x315 = INT8_MIN;
	static int16_t x316 = -252;
	int32_t t76 = -16114;

	t76 = ((x313&(x314&x315))%x316);

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = -1;
	int64_t x319 = INT64_MAX;
	int64_t x320 = 10887177388242500LL;
	volatile int64_t t77 = -6278673LL;

	t77 = ((x317&(x318&x319))%x320);

	if (t77 != 1580257396111114LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x321 = INT32_MIN;
	volatile int8_t x323 = INT8_MIN;
	uint32_t x324 = 7505033U;
	volatile uint32_t t78 = 49196741U;

	t78 = ((x321&(x322&x323))%x324);

	if (t78 != 1044210U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x325 = 75U;
	uint32_t x326 = 26282721U;
	int32_t x327 = 164356;
	volatile int64_t t79 = -2007533373788234LL;

	t79 = ((x325&(x326&x327))%x328);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x329 = -7;
	volatile uint64_t x330 = 3847565886198277LLU;
	volatile int64_t x331 = -1LL;
	static uint64_t t80 = 3051LLU;

	t80 = ((x329&(x330&x331))%x332);

	if (t80 != 3847565886198273LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x333 = -2;
	volatile int8_t x334 = 0;
	int16_t x335 = INT16_MAX;
	static int64_t x336 = -83745845885925728LL;
	volatile int64_t t81 = 53LL;

	t81 = ((x333&(x334&x335))%x336);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x337 = 396U;
	static uint8_t x338 = 49U;
	volatile int16_t x339 = -1;
	volatile int8_t x340 = -1;
	volatile int32_t t82 = -540320;

	t82 = ((x337&(x338&x339))%x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x341 = INT16_MAX;
	uint16_t x342 = 1762U;
	static volatile uint64_t x343 = UINT64_MAX;
	static int16_t x344 = -1058;
	static volatile uint64_t t83 = 25402396860LLU;

	t83 = ((x341&(x342&x343))%x344);

	if (t83 != 1762LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x345 = 804U;
	uint64_t x346 = UINT64_MAX;
	volatile int64_t x347 = 46087LL;
	int16_t x348 = INT16_MIN;

	t84 = ((x345&(x346&x347))%x348);

	if (t84 != 4LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x349 = UINT32_MAX;
	volatile int32_t x350 = INT32_MIN;
	volatile int16_t x352 = INT16_MIN;
	uint32_t t85 = 550193621U;

	t85 = ((x349&(x350&x351))%x352);

	if (t85 != 2147483648U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x353 = UINT16_MAX;
	volatile int8_t x354 = INT8_MIN;
	int64_t x356 = INT64_MAX;
	static int64_t t86 = -3928848LL;

	t86 = ((x353&(x354&x355))%x356);

	if (t86 != 65408LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x357 = -1;
	volatile int32_t x358 = INT32_MAX;
	volatile int16_t x359 = INT16_MIN;
	static int16_t x360 = -1;
	int32_t t87 = -2;

	t87 = ((x357&(x358&x359))%x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x362 = UINT8_MAX;
	int8_t x363 = -50;
	volatile uint64_t x364 = 19949598LLU;
	volatile uint64_t t88 = 10127454916LLU;

	t88 = ((x361&(x362&x363))%x364);

	if (t88 != 128LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x365 = INT64_MAX;
	int32_t x367 = INT32_MIN;
	int64_t x368 = INT64_MAX;
	static int64_t t89 = -810LL;

	t89 = ((x365&(x366&x367))%x368);

	if (t89 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x369 = INT64_MAX;
	int16_t x370 = -1;
	volatile uint8_t x371 = 61U;
	static volatile int32_t x372 = -1;

	t90 = ((x369&(x370&x371))%x372);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x373 = -16366258;
	uint64_t x374 = UINT64_MAX;
	int16_t x376 = 4;

	t91 = ((x373&(x374&x375))%x376);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x377 = INT8_MIN;
	int64_t x378 = -41677773893399LL;
	int8_t x380 = INT8_MAX;
	int64_t t92 = -1174111LL;

	t92 = ((x377&(x378&x379))%x380);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x381 = INT64_MAX;
	uint16_t x382 = 2689U;
	volatile int32_t x383 = -104081;
	uint16_t x384 = 11U;

	t93 = ((x381&(x382&x383))%x384);

	if (t93 != 3LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x385 = INT8_MIN;
	int8_t x387 = INT8_MIN;
	volatile int64_t x388 = INT64_MAX;
	int64_t t94 = -329596271509953LL;

	t94 = ((x385&(x386&x387))%x388);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x389 = -1819;
	static int64_t x390 = 2223872360935078LL;

	t95 = ((x389&(x390&x391))%x392);

	if (t95 != 653LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x393 = INT64_MAX;
	volatile uint8_t x394 = 1U;
	static int8_t x395 = -1;
	int64_t t96 = 1565940649477685LL;

	t96 = ((x393&(x394&x395))%x396);

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x398 = -2;
	uint8_t x399 = 2U;
	static uint8_t x400 = 76U;

	t97 = ((x397&(x398&x399))%x400);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x401 = -1;
	static int32_t x402 = INT32_MAX;
	static volatile int32_t x403 = 41994;
	int64_t x404 = 717860LL;

	t98 = ((x401&(x402&x403))%x404);

	if (t98 != 41994LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x405 = 0U;
	int16_t x406 = 0;
	volatile int32_t x408 = -1781415;
	uint32_t t99 = 48U;

	t99 = ((x405&(x406&x407))%x408);

	if (t99 != 0U) { NG(); } else { ; }
	
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

