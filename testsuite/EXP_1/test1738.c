#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
static volatile int8_t x3 = INT8_MIN;
int64_t x5 = -8044LL;
int64_t x9 = -120628LL;
uint32_t x17 = UINT32_MAX;
int8_t x23 = INT8_MIN;
volatile uint8_t x29 = 60U;
uint16_t x32 = 47U;
int64_t x36 = INT64_MAX;
static int8_t x46 = -1;
int8_t x52 = -32;
int8_t x53 = -1;
int32_t x59 = INT32_MAX;
static int32_t x63 = -2529;
int64_t x65 = 31071096678846LL;
int32_t t16 = -53481;
int64_t x72 = -1LL;
int32_t t17 = 128682975;
int64_t x78 = INT64_MIN;
int16_t x79 = -17;
int32_t t19 = -648571869;
uint32_t x86 = UINT32_MAX;
int32_t t21 = -10;
int8_t x95 = INT8_MIN;
int16_t x99 = INT16_MIN;
static uint32_t x102 = 7509332U;
volatile int32_t t25 = 2;
uint16_t x105 = UINT16_MAX;
int32_t x113 = -1;
volatile int32_t t28 = 5932;
int8_t x129 = INT8_MIN;
int16_t x131 = INT16_MAX;
static int8_t x132 = -1;
static uint8_t x133 = 25U;
uint64_t x134 = 120056338103423LLU;
uint8_t x137 = 50U;
volatile int32_t t35 = -2909;
uint8_t x145 = UINT8_MAX;
int32_t x146 = INT32_MIN;
volatile int32_t t36 = -15834712;
static uint16_t x151 = UINT16_MAX;
volatile int32_t t38 = -2651;
int8_t x157 = 0;
int16_t x163 = INT16_MIN;
int32_t x166 = INT32_MIN;
int8_t x172 = 5;
static volatile int16_t x173 = 0;
int32_t x174 = 163;
volatile int8_t x175 = INT8_MIN;
int64_t x180 = INT64_MAX;
int32_t x184 = INT32_MIN;
int32_t t46 = 1;
static int16_t x190 = INT16_MAX;
int8_t x197 = -1;
static volatile int32_t x200 = INT32_MIN;
int64_t x204 = 76178600735LL;
volatile int16_t x207 = 15;
volatile int32_t t50 = 92;
int16_t x209 = 197;
static volatile uint8_t x211 = 6U;
int8_t x212 = -1;
uint8_t x215 = 43U;
uint64_t x225 = 3LLU;
volatile int8_t x229 = INT8_MIN;
int32_t x241 = INT32_MIN;
int8_t x242 = 1;
int16_t x251 = 23;
int16_t x254 = INT16_MIN;
static int32_t t61 = 190868;
int16_t x263 = -1;
static int64_t x265 = INT64_MIN;
int8_t x272 = -7;
static int8_t x274 = INT8_MIN;
static int16_t x276 = -7;
uint64_t x282 = 50947768699LLU;
int16_t x283 = INT16_MIN;
uint64_t x287 = 5297256043LLU;
volatile int32_t t67 = 3;
static volatile int64_t x294 = -480335971LL;
int32_t x299 = INT32_MIN;
int32_t t70 = -1540338;
int8_t x311 = 1;
int64_t x318 = -1LL;
int16_t x323 = INT16_MIN;
int32_t x334 = -1;
uint32_t x357 = 75210827U;
volatile int32_t t84 = 24457705;
int32_t x371 = 663271;
volatile int32_t t86 = -12049;
int16_t x373 = -8;
static int64_t x379 = -1LL;
volatile int64_t x381 = -12324886430LL;
uint32_t x386 = 1238U;
int32_t x390 = -103757;
int32_t x396 = INT32_MAX;
volatile int16_t x402 = INT16_MAX;
int16_t x408 = INT16_MAX;
int32_t t95 = -2;
uint32_t x410 = 317775647U;
static int64_t x418 = INT64_MIN;


void f0(void) {
	int8_t x2 = INT8_MIN;
	int32_t x4 = INT32_MIN;
	static volatile int32_t t0 = -3881;

	t0 = (((x1&x2)/x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = 6586;
	static int32_t x7 = INT32_MIN;
	int16_t x8 = INT16_MAX;
	volatile int32_t t1 = 2;

	t1 = (((x5&x6)/x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MAX;
	static int8_t x11 = 3;
	int8_t x12 = 1;
	static int32_t t2 = 117013945;

	t2 = (((x9&x10)/x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MAX;
	volatile uint16_t x14 = UINT16_MAX;
	int8_t x15 = -1;
	volatile int64_t x16 = -1211LL;
	int32_t t3 = 189;

	t3 = (((x13&x14)/x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = 21U;
	int8_t x19 = INT8_MAX;
	int16_t x20 = -1;
	int32_t t4 = 409981;

	t4 = (((x17&x18)/x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	static volatile int64_t x22 = -1LL;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 6;

	t5 = (((x21&x22)/x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	volatile int32_t x26 = INT32_MIN;
	volatile uint8_t x27 = 7U;
	static uint16_t x28 = 2620U;
	int32_t t6 = -378;

	t6 = (((x25&x26)/x27)<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x30 = UINT8_MAX;
	uint64_t x31 = 9262010611609LLU;
	static volatile int32_t t7 = 300121574;

	t7 = (((x29&x30)/x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1235;
	int16_t x34 = 3;
	static int8_t x35 = INT8_MAX;
	volatile int32_t t8 = 193052;

	t8 = (((x33&x34)/x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -8352454;
	static int32_t x38 = 199623;
	int32_t x39 = -1;
	volatile int64_t x40 = 372379LL;
	int32_t t9 = -9498609;

	t9 = (((x37&x38)/x39)<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = -23034308;
	volatile uint32_t x42 = 401316283U;
	static uint8_t x43 = UINT8_MAX;
	int8_t x44 = INT8_MAX;
	static volatile int32_t t10 = 1;

	t10 = (((x41&x42)/x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	int64_t x47 = INT64_MAX;
	static uint64_t x48 = 157LLU;
	static int32_t t11 = 240404;

	t11 = (((x45&x46)/x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 126U;
	uint16_t x50 = UINT16_MAX;
	uint32_t x51 = UINT32_MAX;
	volatile int32_t t12 = -1913;

	t12 = (((x49&x50)/x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = 98;
	int8_t x55 = -1;
	uint16_t x56 = UINT16_MAX;
	int32_t t13 = 10625583;

	t13 = (((x53&x54)/x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -31541;
	int64_t x58 = -1LL;
	uint64_t x60 = 147550473454LLU;
	int32_t t14 = -174097;

	t14 = (((x57&x58)/x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	static int8_t x62 = -1;
	int64_t x64 = INT64_MIN;
	volatile int32_t t15 = 9;

	t15 = (((x61&x62)/x63)<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = -1;
	int32_t x67 = INT32_MIN;
	volatile int16_t x68 = 4649;

	t16 = (((x65&x66)/x67)<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -52;
	static int8_t x70 = -1;
	int16_t x71 = -10;

	t17 = (((x69&x70)/x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = -29634LL;
	int64_t x74 = INT64_MIN;
	uint32_t x75 = UINT32_MAX;
	volatile uint16_t x76 = 18U;
	int32_t t18 = 31251;

	t18 = (((x73&x74)/x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x77 = 3U;
	int16_t x80 = -1;

	t19 = (((x77&x78)/x79)<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -14;
	int64_t x82 = -1LL;
	uint8_t x83 = 3U;
	int8_t x84 = INT8_MAX;
	int32_t t20 = -1;

	t20 = (((x81&x82)/x83)<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x85 = 1LLU;
	uint8_t x87 = 115U;
	volatile int64_t x88 = INT64_MAX;

	t21 = (((x85&x86)/x87)<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -181;
	int16_t x90 = INT16_MAX;
	uint16_t x91 = 13U;
	volatile int64_t x92 = -22918LL;
	static volatile int32_t t22 = 38;

	t22 = (((x89&x90)/x91)<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -6998;
	int64_t x94 = -1LL;
	int16_t x96 = -12025;
	volatile int32_t t23 = -100270029;

	t23 = (((x93&x94)/x95)<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x97 = UINT16_MAX;
	uint64_t x98 = 58369525407074152LLU;
	int16_t x100 = INT16_MIN;
	volatile int32_t t24 = -447680513;

	t24 = (((x97&x98)/x99)<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 15450837U;
	uint16_t x103 = 690U;
	static int16_t x104 = 208;

	t25 = (((x101&x102)/x103)<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x106 = 195;
	int8_t x107 = INT8_MAX;
	volatile int16_t x108 = INT16_MAX;
	volatile int32_t t26 = 105;

	t26 = (((x105&x106)/x107)<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	int32_t x110 = -1;
	int8_t x111 = INT8_MIN;
	static uint8_t x112 = 2U;
	static volatile int32_t t27 = 48302;

	t27 = (((x109&x110)/x111)<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = 1LL;
	uint8_t x115 = 1U;
	uint32_t x116 = 1126U;

	t28 = (((x113&x114)/x115)<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MAX;
	static uint32_t x118 = UINT32_MAX;
	int8_t x119 = -6;
	static volatile uint32_t x120 = 0U;
	volatile int32_t t29 = -3;

	t29 = (((x117&x118)/x119)<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 1U;
	uint32_t x122 = 168951723U;
	int32_t x123 = INT32_MAX;
	int32_t x124 = INT32_MIN;
	int32_t t30 = 1805;

	t30 = (((x121&x122)/x123)<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x125 = INT64_MIN;
	volatile int64_t x126 = INT64_MAX;
	int64_t x127 = -1LL;
	uint32_t x128 = UINT32_MAX;
	volatile int32_t t31 = 183;

	t31 = (((x125&x126)/x127)<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x130 = UINT16_MAX;
	int32_t t32 = -59;

	t32 = (((x129&x130)/x131)<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x135 = INT32_MAX;
	uint8_t x136 = UINT8_MAX;
	int32_t t33 = -45707;

	t33 = (((x133&x134)/x135)<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x138 = INT16_MAX;
	uint16_t x139 = 655U;
	static int8_t x140 = INT8_MAX;
	static int32_t t34 = 2941055;

	t34 = (((x137&x138)/x139)<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = UINT16_MAX;
	static int16_t x142 = INT16_MIN;
	uint32_t x143 = 5U;
	static uint32_t x144 = 23781095U;

	t35 = (((x141&x142)/x143)<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x147 = INT8_MIN;
	uint8_t x148 = UINT8_MAX;

	t36 = (((x145&x146)/x147)<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = INT32_MAX;
	static volatile uint64_t x150 = 1168LLU;
	volatile int32_t x152 = 481802;
	static int32_t t37 = -54587;

	t37 = (((x149&x150)/x151)<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = -1;
	int16_t x154 = 0;
	static int64_t x155 = INT64_MIN;
	int64_t x156 = 5369294729790956LL;

	t38 = (((x153&x154)/x155)<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x158 = -52;
	volatile uint16_t x159 = 3U;
	int32_t x160 = INT32_MIN;
	volatile int32_t t39 = 986188889;

	t39 = (((x157&x158)/x159)<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	int64_t x162 = INT64_MAX;
	int64_t x164 = INT64_MAX;
	int32_t t40 = -509352;

	t40 = (((x161&x162)/x163)<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = UINT8_MAX;
	volatile int64_t x167 = 2017662LL;
	uint32_t x168 = UINT32_MAX;
	static int32_t t41 = -1;

	t41 = (((x165&x166)/x167)<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x169 = 1965U;
	static int64_t x170 = INT64_MIN;
	static volatile uint64_t x171 = UINT64_MAX;
	int32_t t42 = 428847991;

	t42 = (((x169&x170)/x171)<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x176 = INT64_MIN;
	static volatile int32_t t43 = 3117;

	t43 = (((x173&x174)/x175)<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x177 = -139;
	int8_t x178 = INT8_MAX;
	static uint16_t x179 = 60U;
	int32_t t44 = 0;

	t44 = (((x177&x178)/x179)<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = UINT64_MAX;
	int16_t x182 = INT16_MIN;
	int8_t x183 = INT8_MAX;
	volatile int32_t t45 = -1489990;

	t45 = (((x181&x182)/x183)<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	int64_t x186 = -4064163LL;
	int32_t x187 = 4;
	int64_t x188 = INT64_MAX;

	t46 = (((x185&x186)/x187)<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	uint16_t x191 = 56U;
	uint8_t x192 = 0U;
	static volatile int32_t t47 = 1;

	t47 = (((x189&x190)/x191)<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x198 = INT8_MIN;
	static int64_t x199 = INT64_MIN;
	volatile int32_t t48 = -63450;

	t48 = (((x197&x198)/x199)<x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = -1LL;
	volatile int64_t x202 = -1LL;
	int8_t x203 = -39;
	volatile int32_t t49 = -1593461;

	t49 = (((x201&x202)/x203)<x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x205 = 49U;
	int16_t x206 = -6803;
	static int8_t x208 = INT8_MIN;

	t50 = (((x205&x206)/x207)<x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x210 = -1;
	static volatile int32_t t51 = 48518961;

	t51 = (((x209&x210)/x211)<x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x213 = UINT8_MAX;
	int16_t x214 = INT16_MIN;
	static int32_t x216 = -1;
	int32_t t52 = -2151132;

	t52 = (((x213&x214)/x215)<x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x226 = -3;
	uint8_t x227 = 59U;
	static int32_t x228 = INT32_MIN;
	static volatile int32_t t53 = -56449;

	t53 = (((x225&x226)/x227)<x228);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x230 = UINT64_MAX;
	volatile uint64_t x231 = 7022045872399814095LLU;
	static uint32_t x232 = 864U;
	static volatile int32_t t54 = -86188937;

	t54 = (((x229&x230)/x231)<x232);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x233 = INT8_MIN;
	static uint64_t x234 = UINT64_MAX;
	int8_t x235 = INT8_MAX;
	static uint8_t x236 = 29U;
	int32_t t55 = -455;

	t55 = (((x233&x234)/x235)<x236);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x237 = -1;
	int16_t x238 = 5611;
	static int8_t x239 = INT8_MIN;
	static int32_t x240 = INT32_MAX;
	int32_t t56 = 0;

	t56 = (((x237&x238)/x239)<x240);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x243 = 127;
	int32_t x244 = INT32_MIN;
	int32_t t57 = -22874;

	t57 = (((x241&x242)/x243)<x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = -1;
	uint16_t x246 = 3U;
	volatile int8_t x247 = -1;
	uint16_t x248 = 6U;
	int32_t t58 = -12471943;

	t58 = (((x245&x246)/x247)<x248);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x249 = UINT8_MAX;
	int16_t x250 = 12;
	static int64_t x252 = INT64_MAX;
	int32_t t59 = 0;

	t59 = (((x249&x250)/x251)<x252);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x253 = -884523;
	uint16_t x255 = 14100U;
	uint64_t x256 = 893815329087985671LLU;
	int32_t t60 = -1962535;

	t60 = (((x253&x254)/x255)<x256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x257 = 2046671U;
	uint8_t x258 = 10U;
	volatile uint8_t x259 = 7U;
	int32_t x260 = 0;

	t61 = (((x257&x258)/x259)<x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x261 = INT64_MAX;
	volatile int64_t x262 = 2556859103090673LL;
	uint16_t x264 = 10U;
	static volatile int32_t t62 = 3615583;

	t62 = (((x261&x262)/x263)<x264);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x266 = 1;
	int32_t x267 = INT32_MAX;
	static uint32_t x268 = 187741748U;
	int32_t t63 = 1;

	t63 = (((x265&x266)/x267)<x268);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x269 = -1;
	int16_t x270 = INT16_MAX;
	volatile uint32_t x271 = 7628U;
	int32_t t64 = -4109340;

	t64 = (((x269&x270)/x271)<x272);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x273 = UINT64_MAX;
	int32_t x275 = INT32_MAX;
	volatile int32_t t65 = 215388857;

	t65 = (((x273&x274)/x275)<x276);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x281 = INT32_MIN;
	uint16_t x284 = UINT16_MAX;
	volatile int32_t t66 = -23547879;

	t66 = (((x281&x282)/x283)<x284);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x285 = INT16_MIN;
	int16_t x286 = INT16_MIN;
	int8_t x288 = INT8_MIN;

	t67 = (((x285&x286)/x287)<x288);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x289 = 542U;
	volatile int32_t x290 = INT32_MAX;
	uint16_t x291 = UINT16_MAX;
	int64_t x292 = INT64_MIN;
	static int32_t t68 = -6;

	t68 = (((x289&x290)/x291)<x292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x293 = 592U;
	int16_t x295 = INT16_MIN;
	int16_t x296 = INT16_MIN;
	static volatile int32_t t69 = 1;

	t69 = (((x293&x294)/x295)<x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x297 = INT32_MIN;
	volatile int16_t x298 = INT16_MAX;
	static volatile int8_t x300 = INT8_MIN;

	t70 = (((x297&x298)/x299)<x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x301 = -1LL;
	int8_t x302 = INT8_MAX;
	int16_t x303 = 101;
	int32_t x304 = INT32_MIN;
	static volatile int32_t t71 = 1191704;

	t71 = (((x301&x302)/x303)<x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x305 = 1669320U;
	int32_t x306 = INT32_MIN;
	uint64_t x307 = 58626LLU;
	uint64_t x308 = UINT64_MAX;
	volatile int32_t t72 = -6;

	t72 = (((x305&x306)/x307)<x308);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x309 = INT64_MIN;
	uint64_t x310 = 3404394682680700LLU;
	volatile int64_t x312 = 303737903712LL;
	int32_t t73 = -220321;

	t73 = (((x309&x310)/x311)<x312);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x313 = 10365905LLU;
	uint16_t x314 = 10391U;
	static int8_t x315 = -1;
	uint32_t x316 = 4823U;
	static int32_t t74 = -18502;

	t74 = (((x313&x314)/x315)<x316);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x317 = 11604;
	int8_t x319 = 1;
	volatile uint16_t x320 = UINT16_MAX;
	volatile int32_t t75 = 250273330;

	t75 = (((x317&x318)/x319)<x320);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x321 = 872;
	volatile uint32_t x322 = UINT32_MAX;
	uint32_t x324 = UINT32_MAX;
	int32_t t76 = -329410;

	t76 = (((x321&x322)/x323)<x324);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x325 = 19772U;
	uint8_t x326 = 0U;
	int64_t x327 = 75427036LL;
	static int64_t x328 = 37719552062216LL;
	volatile int32_t t77 = -2398;

	t77 = (((x325&x326)/x327)<x328);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x329 = INT32_MIN;
	int8_t x330 = INT8_MAX;
	volatile int32_t x331 = -1005337208;
	int64_t x332 = -1LL;
	static volatile int32_t t78 = -2374230;

	t78 = (((x329&x330)/x331)<x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x333 = 888LLU;
	static volatile uint16_t x335 = 10768U;
	uint64_t x336 = 967243LLU;
	static int32_t t79 = 6;

	t79 = (((x333&x334)/x335)<x336);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x337 = 2U;
	uint16_t x338 = UINT16_MAX;
	uint64_t x339 = 1LLU;
	volatile uint64_t x340 = 8849148409572033568LLU;
	volatile int32_t t80 = 65;

	t80 = (((x337&x338)/x339)<x340);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x341 = UINT16_MAX;
	uint64_t x342 = 102569827LLU;
	int8_t x343 = 4;
	uint16_t x344 = UINT16_MAX;
	static volatile int32_t t81 = 1797989;

	t81 = (((x341&x342)/x343)<x344);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x353 = INT64_MIN;
	volatile uint16_t x354 = 5801U;
	volatile int64_t x355 = INT64_MAX;
	static uint32_t x356 = 20315700U;
	int32_t t82 = 4122932;

	t82 = (((x353&x354)/x355)<x356);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x358 = 8383LLU;
	volatile int32_t x359 = 80194;
	uint32_t x360 = UINT32_MAX;
	volatile int32_t t83 = 572985404;

	t83 = (((x357&x358)/x359)<x360);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x361 = 0U;
	volatile int8_t x362 = INT8_MIN;
	uint16_t x363 = UINT16_MAX;
	uint32_t x364 = UINT32_MAX;

	t84 = (((x361&x362)/x363)<x364);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x365 = INT8_MAX;
	int16_t x366 = INT16_MAX;
	volatile int8_t x367 = INT8_MIN;
	volatile uint32_t x368 = 52821389U;
	volatile int32_t t85 = -4213693;

	t85 = (((x365&x366)/x367)<x368);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x369 = INT16_MIN;
	int32_t x370 = INT32_MAX;
	uint32_t x372 = UINT32_MAX;

	t86 = (((x369&x370)/x371)<x372);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x374 = 121;
	volatile int64_t x375 = -384LL;
	static int64_t x376 = -14528LL;
	int32_t t87 = 354;

	t87 = (((x373&x374)/x375)<x376);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x377 = UINT16_MAX;
	int32_t x378 = 29;
	int64_t x380 = INT64_MIN;
	volatile int32_t t88 = 7;

	t88 = (((x377&x378)/x379)<x380);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x382 = 2357788256336443502LLU;
	static int16_t x383 = -1;
	volatile int8_t x384 = -1;
	int32_t t89 = 108142003;

	t89 = (((x381&x382)/x383)<x384);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x385 = 1;
	uint64_t x387 = UINT64_MAX;
	static int8_t x388 = INT8_MIN;
	static volatile int32_t t90 = 2;

	t90 = (((x385&x386)/x387)<x388);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x389 = -1;
	int64_t x391 = INT64_MIN;
	uint8_t x392 = 1U;
	volatile int32_t t91 = -394063;

	t91 = (((x389&x390)/x391)<x392);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x393 = INT8_MAX;
	int32_t x394 = INT32_MIN;
	int16_t x395 = INT16_MAX;
	int32_t t92 = 4182;

	t92 = (((x393&x394)/x395)<x396);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x397 = UINT32_MAX;
	int64_t x398 = INT64_MAX;
	int8_t x399 = -1;
	int64_t x400 = 477970522619575LL;
	int32_t t93 = 2022;

	t93 = (((x397&x398)/x399)<x400);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x401 = 1350;
	volatile uint64_t x403 = UINT64_MAX;
	int64_t x404 = 59LL;
	int32_t t94 = -39664084;

	t94 = (((x401&x402)/x403)<x404);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x405 = UINT64_MAX;
	volatile uint64_t x406 = UINT64_MAX;
	volatile int32_t x407 = -5;

	t95 = (((x405&x406)/x407)<x408);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x409 = INT32_MIN;
	int64_t x411 = INT64_MAX;
	int64_t x412 = 2759805453764055063LL;
	int32_t t96 = -5935;

	t96 = (((x409&x410)/x411)<x412);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x413 = UINT32_MAX;
	static int32_t x414 = 3562888;
	int32_t x415 = 8752;
	int32_t x416 = INT32_MIN;
	volatile int32_t t97 = 70189;

	t97 = (((x413&x414)/x415)<x416);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x417 = UINT64_MAX;
	uint64_t x419 = UINT64_MAX;
	int8_t x420 = -1;
	volatile int32_t t98 = -149073124;

	t98 = (((x417&x418)/x419)<x420);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x421 = INT16_MAX;
	uint64_t x422 = UINT64_MAX;
	volatile uint32_t x423 = 283107U;
	volatile int8_t x424 = -6;
	volatile int32_t t99 = -347857;

	t99 = (((x421&x422)/x423)<x424);

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

