#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x14 = INT8_MIN;
static int16_t x16 = 451;
static uint8_t x18 = 52U;
uint8_t x19 = 1U;
uint8_t x21 = 9U;
int8_t x25 = INT8_MAX;
int64_t x29 = INT64_MAX;
static volatile int32_t t7 = -110737;
volatile int8_t x37 = 0;
volatile uint16_t x40 = UINT16_MAX;
int32_t t10 = -42128319;
int32_t x47 = INT32_MIN;
int64_t x48 = 1521805118029831934LL;
static int32_t t14 = -61030;
int32_t x61 = INT32_MAX;
int16_t x66 = INT16_MAX;
uint16_t x69 = 24391U;
uint32_t x71 = 36206700U;
int16_t x73 = INT16_MIN;
uint8_t x75 = UINT8_MAX;
static volatile int32_t t18 = -22543417;
volatile int32_t t19 = 67145;
uint16_t x85 = 351U;
volatile int32_t t21 = 693283686;
int8_t x89 = -1;
uint16_t x92 = 1U;
int64_t x96 = INT64_MIN;
volatile int32_t t23 = -92408012;
uint8_t x97 = 10U;
uint32_t x99 = UINT32_MAX;
static volatile int32_t x102 = INT32_MIN;
int32_t t25 = 204;
int8_t x105 = INT8_MIN;
volatile uint64_t x115 = 3150182847515LLU;
int32_t t28 = -18;
int16_t x123 = INT16_MIN;
int32_t t30 = -9373;
volatile int32_t t31 = -6491777;
volatile int8_t x130 = INT8_MIN;
int32_t t33 = 568622176;
uint64_t x145 = 1LLU;
static volatile int32_t t37 = 653705092;
uint16_t x156 = 15U;
volatile int32_t t38 = -1680;
static volatile int32_t t39 = 5265831;
static volatile int32_t t40 = -3560804;
volatile int32_t t41 = 12;
int32_t t42 = 47456967;
int64_t x174 = INT64_MIN;
volatile int32_t x182 = -1;
int32_t x185 = -13252;
int16_t x191 = INT16_MIN;
volatile int32_t t47 = -612034346;
int64_t x197 = INT64_MIN;
int32_t x205 = 187;
int32_t x211 = 123892;
int32_t t52 = -1480;
int8_t x215 = -1;
int16_t x218 = INT16_MIN;
static int32_t t54 = -4767;
int64_t x224 = INT64_MIN;
volatile int32_t x229 = INT32_MIN;
volatile int64_t x230 = -1LL;
static uint32_t x237 = 17400U;
int8_t x246 = INT8_MAX;
volatile int32_t x255 = INT32_MIN;
uint8_t x260 = UINT8_MAX;
static volatile int32_t t64 = 29;
volatile uint32_t x265 = 174U;
volatile int32_t t66 = 0;
volatile int8_t x269 = 1;
int32_t t68 = 11721;
uint16_t x277 = 1U;
int32_t t69 = 515480;
static int32_t x287 = INT32_MIN;
int32_t t71 = -433636;
int8_t x293 = INT8_MAX;
uint64_t x303 = 4127LLU;
volatile uint8_t x304 = 2U;
int16_t x307 = -1;
volatile int32_t t76 = -11139;
static uint32_t x309 = 231U;
int8_t x311 = -1;
int16_t x312 = -6;
volatile uint64_t x313 = 4573329274495314897LLU;
int8_t x315 = INT8_MIN;
static int64_t x324 = -112097445426381LL;
uint8_t x326 = 29U;
int64_t x328 = -54201LL;
static volatile uint16_t x331 = 14995U;
static int64_t x350 = INT64_MIN;
static uint16_t x352 = UINT16_MAX;
uint32_t x355 = 7780U;
volatile uint64_t x365 = 328399885LLU;
static int16_t x370 = INT16_MIN;
volatile int32_t x387 = 12;
int8_t x388 = INT8_MAX;
int64_t x392 = 4508621490635810901LL;
volatile int32_t t97 = 13017;
int8_t x393 = 0;
static volatile int32_t t98 = -35;
int8_t x397 = -15;


void f0(void) {
	int32_t x1 = 30976;
	volatile int32_t x2 = INT32_MIN;
	static int8_t x3 = INT8_MAX;
	int16_t x4 = INT16_MAX;
	volatile int32_t t0 = 193426;

	t0 = ((x1*(x2==x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	int64_t x6 = INT64_MIN;
	volatile int64_t x7 = INT64_MIN;
	int64_t x8 = INT64_MAX;
	int32_t t1 = 1535;

	t1 = ((x5*(x6==x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 0;
	uint8_t x10 = 1U;
	uint16_t x11 = 0U;
	volatile int8_t x12 = -1;
	volatile int32_t t2 = 14;

	t2 = ((x9*(x10==x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	uint8_t x15 = 55U;
	static int32_t t3 = 3340463;

	t3 = ((x13*(x14==x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = INT32_MIN;
	uint32_t x20 = 425958U;
	static volatile int32_t t4 = -22385641;

	t4 = ((x17*(x18==x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x22 = INT8_MIN;
	volatile int64_t x23 = 19551561619LL;
	int64_t x24 = INT64_MIN;
	volatile int32_t t5 = -173536;

	t5 = ((x21*(x22==x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x26 = INT8_MIN;
	int64_t x27 = 11272LL;
	volatile int64_t x28 = 1719002LL;
	int32_t t6 = -4554111;

	t6 = ((x25*(x26==x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = -2072953796LL;
	int8_t x31 = INT8_MIN;
	int8_t x32 = 40;

	t7 = ((x29*(x30==x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MIN;
	static int64_t x34 = INT64_MIN;
	int64_t x35 = -23076524267789LL;
	int8_t x36 = 2;
	volatile int32_t t8 = 6;

	t8 = ((x33*(x34==x35))<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = INT32_MIN;
	static volatile int32_t x39 = -1;
	int32_t t9 = 0;

	t9 = ((x37*(x38==x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = 1;
	static uint8_t x42 = 4U;
	volatile int16_t x43 = INT16_MAX;
	static volatile int64_t x44 = 6LL;

	t10 = ((x41*(x42==x43))<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = -224234887;
	int8_t x46 = INT8_MIN;
	static int32_t t11 = 112;

	t11 = ((x45*(x46==x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -3866187426732059345LL;
	int64_t x50 = -934489479327LL;
	int32_t x51 = INT32_MIN;
	int32_t x52 = 234754246;
	static volatile int32_t t12 = -196404;

	t12 = ((x49*(x50==x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = -1;
	int8_t x54 = INT8_MAX;
	volatile uint16_t x55 = 207U;
	volatile uint16_t x56 = 0U;
	static volatile int32_t t13 = -88726477;

	t13 = ((x53*(x54==x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 292595U;
	int32_t x58 = INT32_MAX;
	int16_t x59 = -1;
	int32_t x60 = INT32_MAX;

	t14 = ((x57*(x58==x59))<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x62 = 23613LLU;
	static int8_t x63 = 0;
	int16_t x64 = -1;
	int32_t t15 = 19480;

	t15 = ((x61*(x62==x63))<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 152U;
	uint16_t x67 = UINT16_MAX;
	int16_t x68 = INT16_MIN;
	volatile int32_t t16 = -3034813;

	t16 = ((x65*(x66==x67))<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x70 = 4639397U;
	int16_t x72 = INT16_MIN;
	volatile int32_t t17 = 3114;

	t17 = ((x69*(x70==x71))<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x74 = INT64_MAX;
	int32_t x76 = INT32_MIN;

	t18 = ((x73*(x74==x75))<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MAX;
	static uint64_t x78 = 14LLU;
	uint32_t x79 = 1733U;
	uint64_t x80 = 386358129863787766LLU;

	t19 = ((x77*(x78==x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x81 = UINT64_MAX;
	static int32_t x82 = -1;
	int8_t x83 = INT8_MAX;
	uint64_t x84 = 14479254239286404LLU;
	volatile int32_t t20 = -82;

	t20 = ((x81*(x82==x83))<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x86 = INT16_MAX;
	int16_t x87 = INT16_MAX;
	int8_t x88 = INT8_MAX;

	t21 = ((x85*(x86==x87))<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x90 = INT16_MAX;
	volatile uint16_t x91 = 64U;
	int32_t t22 = 0;

	t22 = ((x89*(x90==x91))<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1LL;
	int64_t x94 = -102656614719LL;
	int8_t x95 = INT8_MIN;

	t23 = ((x93*(x94==x95))<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = -1;
	int32_t x100 = -1;
	int32_t t24 = 10;

	t24 = ((x97*(x98==x99))<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -1;
	uint16_t x103 = 26U;
	int8_t x104 = -51;

	t25 = ((x101*(x102==x103))<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x106 = INT16_MIN;
	uint64_t x107 = 11505071LLU;
	volatile int32_t x108 = -1;
	int32_t t26 = -90;

	t26 = ((x105*(x106==x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = INT64_MIN;
	static uint8_t x110 = UINT8_MAX;
	static volatile uint16_t x111 = 54U;
	int16_t x112 = INT16_MAX;
	volatile int32_t t27 = 77296449;

	t27 = ((x109*(x110==x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 5438U;
	static int16_t x114 = -2188;
	int64_t x116 = INT64_MIN;

	t28 = ((x113*(x114==x115))<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	volatile int16_t x118 = INT16_MAX;
	volatile int64_t x119 = INT64_MIN;
	int8_t x120 = -1;
	volatile int32_t t29 = -3;

	t29 = ((x117*(x118==x119))<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = -137078632;
	static volatile int16_t x122 = -1;
	int32_t x124 = -6;

	t30 = ((x121*(x122==x123))<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x125 = INT32_MIN;
	volatile int16_t x126 = 3;
	static uint16_t x127 = 2U;
	int16_t x128 = -2282;

	t31 = ((x125*(x126==x127))<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -22;
	volatile int64_t x131 = INT64_MIN;
	uint16_t x132 = 2616U;
	volatile int32_t t32 = -335;

	t32 = ((x129*(x130==x131))<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 947469893U;
	static int64_t x134 = 43527LL;
	volatile uint8_t x135 = 5U;
	int64_t x136 = INT64_MIN;

	t33 = ((x133*(x134==x135))<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x137 = 33679213LLU;
	static volatile int32_t x138 = INT32_MIN;
	int32_t x139 = 22;
	static int64_t x140 = INT64_MAX;
	volatile int32_t t34 = 4;

	t34 = ((x137*(x138==x139))<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 6789924U;
	int64_t x142 = INT64_MIN;
	volatile int32_t x143 = -27188;
	static int64_t x144 = 174294571686585LL;
	int32_t t35 = -393585896;

	t35 = ((x141*(x142==x143))<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x146 = 3105221;
	uint16_t x147 = UINT16_MAX;
	int64_t x148 = -1LL;
	volatile int32_t t36 = 5737529;

	t36 = ((x145*(x146==x147))<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -120;
	uint16_t x150 = 0U;
	volatile int64_t x151 = INT64_MIN;
	int64_t x152 = INT64_MIN;

	t37 = ((x149*(x150==x151))<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = INT64_MIN;
	int8_t x154 = INT8_MAX;
	static int16_t x155 = INT16_MAX;

	t38 = ((x153*(x154==x155))<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 3U;
	volatile int16_t x158 = INT16_MAX;
	int32_t x159 = INT32_MIN;
	volatile int32_t x160 = -501;

	t39 = ((x157*(x158==x159))<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -1;
	int8_t x162 = INT8_MAX;
	volatile int8_t x163 = -15;
	static uint64_t x164 = UINT64_MAX;

	t40 = ((x161*(x162==x163))<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x165 = 59U;
	int8_t x166 = INT8_MIN;
	int16_t x167 = 6;
	volatile uint64_t x168 = 48845192301LLU;

	t41 = ((x165*(x166==x167))<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x169 = 49U;
	int8_t x170 = -19;
	int32_t x171 = INT32_MIN;
	volatile int32_t x172 = INT32_MAX;

	t42 = ((x169*(x170==x171))<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x173 = 10U;
	int8_t x175 = 6;
	static int8_t x176 = -41;
	volatile int32_t t43 = -865516850;

	t43 = ((x173*(x174==x175))<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x177 = 38U;
	int32_t x178 = INT32_MAX;
	uint32_t x179 = UINT32_MAX;
	uint8_t x180 = 26U;
	volatile int32_t t44 = 59481959;

	t44 = ((x177*(x178==x179))<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = 4;
	int32_t x183 = -1;
	static volatile int8_t x184 = INT8_MIN;
	int32_t t45 = 959;

	t45 = ((x181*(x182==x183))<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x186 = 0;
	int16_t x187 = 3601;
	int8_t x188 = -1;
	static volatile int32_t t46 = -172453;

	t46 = ((x185*(x186==x187))<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MAX;
	int32_t x190 = INT32_MAX;
	int16_t x192 = INT16_MIN;

	t47 = ((x189*(x190==x191))<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x193 = 220LLU;
	uint32_t x194 = 1U;
	uint8_t x195 = UINT8_MAX;
	volatile uint16_t x196 = 43U;
	int32_t t48 = -3;

	t48 = ((x193*(x194==x195))<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x198 = -1;
	uint64_t x199 = UINT64_MAX;
	volatile uint16_t x200 = 323U;
	int32_t t49 = 16354;

	t49 = ((x197*(x198==x199))<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = 5;
	int8_t x202 = INT8_MIN;
	int64_t x203 = -81374LL;
	int64_t x204 = INT64_MAX;
	volatile int32_t t50 = -11991;

	t50 = ((x201*(x202==x203))<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x206 = INT8_MIN;
	int8_t x207 = INT8_MAX;
	int16_t x208 = -143;
	int32_t t51 = 262649952;

	t51 = ((x205*(x206==x207))<=x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	int8_t x210 = -1;
	int16_t x212 = INT16_MAX;

	t52 = ((x209*(x210==x211))<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -675794LL;
	int8_t x214 = INT8_MAX;
	uint16_t x216 = UINT16_MAX;
	int32_t t53 = 3737864;

	t53 = ((x213*(x214==x215))<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -1;
	volatile int64_t x219 = INT64_MIN;
	int32_t x220 = 211874066;

	t54 = ((x217*(x218==x219))<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x221 = 10U;
	static volatile int8_t x222 = -1;
	volatile int64_t x223 = 3148006LL;
	int32_t t55 = -2718;

	t55 = ((x221*(x222==x223))<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	uint32_t x226 = UINT32_MAX;
	volatile uint64_t x227 = 17531831LLU;
	int16_t x228 = 9;
	volatile int32_t t56 = -7920187;

	t56 = ((x225*(x226==x227))<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x231 = INT64_MAX;
	int32_t x232 = INT32_MAX;
	static volatile int32_t t57 = -143;

	t57 = ((x229*(x230==x231))<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MAX;
	static uint64_t x234 = 1177995060LLU;
	static volatile int32_t x235 = INT32_MIN;
	volatile int16_t x236 = INT16_MIN;
	volatile int32_t t58 = -675586;

	t58 = ((x233*(x234==x235))<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x238 = -1;
	uint16_t x239 = 1475U;
	int16_t x240 = INT16_MIN;
	static int32_t t59 = -108610328;

	t59 = ((x237*(x238==x239))<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = -28208995419829LL;
	uint32_t x242 = 250076U;
	static uint16_t x243 = 25U;
	static volatile int16_t x244 = INT16_MIN;
	static volatile int32_t t60 = 13675;

	t60 = ((x241*(x242==x243))<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 438600437555LLU;
	volatile int32_t x247 = INT32_MAX;
	volatile int32_t x248 = -4746101;
	int32_t t61 = 6192;

	t61 = ((x245*(x246==x247))<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint8_t x249 = UINT8_MAX;
	int64_t x250 = INT64_MIN;
	int8_t x251 = -1;
	volatile int8_t x252 = INT8_MAX;
	static volatile int32_t t62 = -464025;

	t62 = ((x249*(x250==x251))<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MAX;
	int8_t x254 = INT8_MAX;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t63 = -2371;

	t63 = ((x253*(x254==x255))<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 4U;
	int32_t x258 = -1;
	int64_t x259 = -7LL;

	t64 = ((x257*(x258==x259))<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = 11;
	uint32_t x262 = UINT32_MAX;
	static int8_t x263 = INT8_MIN;
	uint64_t x264 = 6LLU;
	static volatile int32_t t65 = 16307;

	t65 = ((x261*(x262==x263))<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x266 = 13U;
	static volatile uint64_t x267 = 40358856LLU;
	int8_t x268 = INT8_MIN;

	t66 = ((x265*(x266==x267))<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = INT16_MIN;
	volatile uint32_t x271 = UINT32_MAX;
	volatile uint16_t x272 = 186U;
	int32_t t67 = 0;

	t67 = ((x269*(x270==x271))<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 5U;
	uint16_t x274 = UINT16_MAX;
	volatile uint64_t x275 = 1121895162533086LLU;
	static int32_t x276 = INT32_MAX;

	t68 = ((x273*(x274==x275))<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x278 = UINT16_MAX;
	uint64_t x279 = UINT64_MAX;
	int32_t x280 = 1;

	t69 = ((x277*(x278==x279))<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x281 = 4716U;
	uint32_t x282 = 28786U;
	volatile int8_t x283 = INT8_MAX;
	static int32_t x284 = INT32_MAX;
	volatile int32_t t70 = 8134;

	t70 = ((x281*(x282==x283))<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 459U;
	int16_t x286 = 1;
	int8_t x288 = INT8_MIN;

	t71 = ((x285*(x286==x287))<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = UINT16_MAX;
	int8_t x290 = -1;
	int64_t x291 = INT64_MIN;
	uint32_t x292 = 11U;
	static int32_t t72 = 506485657;

	t72 = ((x289*(x290==x291))<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x294 = -250LL;
	volatile int32_t x295 = 114152;
	uint8_t x296 = 2U;
	int32_t t73 = 8289793;

	t73 = ((x293*(x294==x295))<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 43U;
	uint32_t x298 = 157936U;
	volatile int16_t x299 = INT16_MIN;
	static int16_t x300 = INT16_MIN;
	int32_t t74 = -111997;

	t74 = ((x297*(x298==x299))<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -7737;
	volatile uint16_t x302 = 135U;
	int32_t t75 = -44011489;

	t75 = ((x301*(x302==x303))<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 199U;
	int8_t x306 = 57;
	int32_t x308 = 1734799;

	t76 = ((x305*(x306==x307))<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x310 = INT64_MIN;
	static int32_t t77 = -1;

	t77 = ((x309*(x310==x311))<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x314 = -3917324192973949LL;
	int64_t x316 = -1LL;
	int32_t t78 = -113409;

	t78 = ((x313*(x314==x315))<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 774U;
	int32_t x318 = 14;
	int16_t x319 = INT16_MIN;
	uint64_t x320 = 1826253033957234LLU;
	volatile int32_t t79 = -3;

	t79 = ((x317*(x318==x319))<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = UINT8_MAX;
	volatile int16_t x322 = 14633;
	uint16_t x323 = 233U;
	volatile int32_t t80 = 12318;

	t80 = ((x321*(x322==x323))<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -1LL;
	volatile uint64_t x327 = 2994245862LLU;
	int32_t t81 = 43570;

	t81 = ((x325*(x326==x327))<=x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x329 = INT32_MIN;
	volatile int32_t x330 = INT32_MIN;
	int64_t x332 = INT64_MIN;
	volatile int32_t t82 = 58;

	t82 = ((x329*(x330==x331))<=x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 783025188U;
	uint8_t x334 = UINT8_MAX;
	volatile uint16_t x335 = 876U;
	static volatile int16_t x336 = -1;
	static volatile int32_t t83 = -70;

	t83 = ((x333*(x334==x335))<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = 21;
	static volatile int8_t x338 = INT8_MIN;
	int8_t x339 = -7;
	int8_t x340 = -7;
	int32_t t84 = 212647;

	t84 = ((x337*(x338==x339))<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x341 = 1;
	static volatile int16_t x342 = -1;
	uint8_t x343 = UINT8_MAX;
	int64_t x344 = INT64_MIN;
	static int32_t t85 = 4;

	t85 = ((x341*(x342==x343))<=x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = 2229;
	static int64_t x346 = INT64_MIN;
	static int16_t x347 = INT16_MIN;
	uint32_t x348 = 559986U;
	int32_t t86 = -5198398;

	t86 = ((x345*(x346==x347))<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = INT32_MIN;
	uint16_t x351 = UINT16_MAX;
	int32_t t87 = -30233;

	t87 = ((x349*(x350==x351))<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x353 = INT32_MIN;
	int16_t x354 = 607;
	int8_t x356 = -2;
	int32_t t88 = -2;

	t88 = ((x353*(x354==x355))<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = INT32_MAX;
	int8_t x358 = 1;
	static int8_t x359 = -1;
	volatile int32_t x360 = INT32_MIN;
	int32_t t89 = -69770;

	t89 = ((x357*(x358==x359))<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x361 = -1;
	int64_t x362 = -1LL;
	static volatile int64_t x363 = 3742LL;
	int8_t x364 = INT8_MIN;
	int32_t t90 = 110;

	t90 = ((x361*(x362==x363))<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x366 = 716508035U;
	static int64_t x367 = -889479213376147122LL;
	int32_t x368 = 38;
	int32_t t91 = 952;

	t91 = ((x365*(x366==x367))<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = -7;
	uint16_t x371 = UINT16_MAX;
	static int16_t x372 = -1;
	int32_t t92 = 962349300;

	t92 = ((x369*(x370==x371))<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	int16_t x374 = INT16_MIN;
	uint16_t x375 = UINT16_MAX;
	int16_t x376 = INT16_MAX;
	volatile int32_t t93 = 12;

	t93 = ((x373*(x374==x375))<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MAX;
	volatile int64_t x378 = INT64_MIN;
	int64_t x379 = INT64_MIN;
	int16_t x380 = 606;
	volatile int32_t t94 = -12239135;

	t94 = ((x377*(x378==x379))<=x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = 1LL;
	int8_t x382 = INT8_MIN;
	static volatile int16_t x383 = 1930;
	volatile uint8_t x384 = 0U;
	volatile int32_t t95 = -7255;

	t95 = ((x381*(x382==x383))<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x385 = UINT8_MAX;
	static uint64_t x386 = UINT64_MAX;
	int32_t t96 = -2;

	t96 = ((x385*(x386==x387))<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 1003004U;
	int8_t x390 = -1;
	static uint64_t x391 = 3178309127026256LLU;

	t97 = ((x389*(x390==x391))<=x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x394 = 18U;
	int16_t x395 = INT16_MIN;
	int8_t x396 = INT8_MIN;

	t98 = ((x393*(x394==x395))<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x398 = 138896;
	uint8_t x399 = 19U;
	int32_t x400 = 122;
	int32_t t99 = -8331674;

	t99 = ((x397*(x398==x399))<=x400);

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

