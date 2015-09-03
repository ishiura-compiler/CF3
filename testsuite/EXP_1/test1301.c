#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x7 = UINT16_MAX;
int64_t x10 = 2915732106719LL;
int32_t x16 = 8;
int32_t t4 = -141;
int32_t x30 = -1;
int64_t x33 = INT64_MIN;
static uint8_t x35 = UINT8_MAX;
int64_t x37 = -1LL;
int16_t x40 = INT16_MIN;
int64_t x47 = -22999810LL;
static int16_t x49 = -71;
int8_t x52 = -1;
int16_t x60 = -1;
int64_t x61 = INT64_MIN;
int64_t x65 = INT64_MAX;
uint16_t x69 = 0U;
uint64_t x71 = 51240493814344536LLU;
uint64_t t17 = 3133896286825878LLU;
int32_t t18 = 0;
static int16_t x87 = INT16_MAX;
int8_t x94 = -9;
volatile uint16_t x95 = 115U;
int32_t t21 = 1;
int16_t x100 = INT16_MAX;
int32_t t22 = -15248;
static int32_t t23 = -58278;
volatile int8_t x108 = -1;
int64_t t26 = INT64_MIN;
uint16_t x118 = 102U;
int8_t x131 = INT8_MIN;
int8_t x132 = INT8_MIN;
static int16_t x137 = 2;
static int16_t x139 = INT16_MIN;
uint8_t x140 = 22U;
volatile int32_t t32 = 116489;
static volatile int16_t x141 = -1;
int8_t x143 = -12;
int64_t x145 = -1LL;
int64_t x153 = -1LL;
int16_t x154 = -1;
int32_t x186 = INT32_MIN;
int8_t x187 = INT8_MAX;
static volatile uint64_t t45 = UINT64_MAX;
volatile int16_t x196 = 1;
volatile uint16_t x212 = 21185U;
int32_t x214 = 1759;
static int16_t x221 = INT16_MIN;
volatile uint16_t x223 = 29U;
static int64_t x224 = -1LL;
volatile int64_t t52 = 601LL;
volatile uint64_t x227 = UINT64_MAX;
volatile int64_t x228 = INT64_MIN;
static int64_t t53 = 23587LL;
uint64_t x233 = 114415LLU;
static int8_t x243 = INT8_MIN;
int16_t x244 = INT16_MIN;
static volatile int32_t t57 = -250151;
volatile int16_t x245 = -1;
int8_t x248 = -1;
static int8_t x252 = 15;
uint32_t x254 = UINT32_MAX;
static int64_t x255 = -4062LL;
uint16_t x256 = 1U;
static volatile int32_t t60 = 1995223;
static uint16_t x260 = 24864U;
uint64_t x261 = 52503109281850LLU;
int64_t x273 = INT64_MIN;
static int32_t x276 = -1;
static int32_t t65 = 21362;
int16_t x281 = INT16_MAX;
int16_t x282 = INT16_MIN;
int8_t x284 = INT8_MIN;
static int32_t x294 = INT32_MIN;
static uint16_t x296 = UINT16_MAX;
int8_t x299 = -1;
volatile int32_t t71 = -1257748;
static int32_t x303 = INT32_MIN;
uint8_t x317 = UINT8_MAX;
int32_t t79 = -58724848;
volatile int16_t x333 = -7;
volatile uint64_t x335 = 513879286247LLU;
int32_t x350 = INT32_MIN;
volatile int32_t x360 = INT32_MIN;
int32_t x364 = -1;
int32_t x367 = INT32_MAX;
int16_t x372 = -1;
volatile int32_t t91 = 14651170;
int16_t x381 = INT16_MIN;
int8_t x382 = 31;
int8_t x383 = INT8_MIN;
volatile uint32_t t92 = 88U;
int32_t x388 = -1;
volatile uint16_t x390 = UINT16_MAX;
uint64_t x391 = 1392540998458LLU;
static int32_t t94 = -4806357;
uint32_t x395 = 187041114U;
int32_t x399 = INT32_MIN;
volatile int64_t t98 = INT64_MIN;
int8_t x412 = -33;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	int8_t x2 = INT8_MIN;
	volatile int8_t x3 = -1;
	static int16_t x4 = -1;
	volatile int32_t t0 = 0;

	t0 = (((x1==x2)<=x3)+x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int8_t x6 = 0;
	volatile uint8_t x8 = 22U;
	static volatile int32_t t1 = -2166812;

	t1 = (((x5==x6)<=x7)+x8);

	if (t1 != 23) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x9 = INT16_MAX;
	static int8_t x11 = INT8_MIN;
	uint16_t x12 = 5770U;
	int32_t t2 = -43;

	t2 = (((x9==x10)<=x11)+x12);

	if (t2 != 5770) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 3U;
	int8_t x14 = INT8_MIN;
	int32_t x15 = 4172619;
	static volatile int32_t t3 = -1441;

	t3 = (((x13==x14)<=x15)+x16);

	if (t3 != 9) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = -1;
	static int32_t x18 = 0;
	static uint64_t x19 = 58LLU;
	uint8_t x20 = UINT8_MAX;

	t4 = (((x17==x18)<=x19)+x20);

	if (t4 != 256) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -899;
	int16_t x22 = -22;
	uint32_t x23 = UINT32_MAX;
	uint16_t x24 = 3282U;
	int32_t t5 = 33500725;

	t5 = (((x21==x22)<=x23)+x24);

	if (t5 != 3283) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MAX;
	uint64_t x26 = 101LLU;
	int8_t x27 = INT8_MIN;
	static int64_t x28 = INT64_MIN;
	int64_t t6 = INT64_MIN;

	t6 = (((x25==x26)<=x27)+x28);

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	uint16_t x31 = UINT16_MAX;
	static uint32_t x32 = UINT32_MAX;
	volatile uint32_t t7 = 6U;

	t7 = (((x29==x30)<=x31)+x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x34 = -344304082652085482LL;
	uint16_t x36 = 28U;
	volatile int32_t t8 = 127596;

	t8 = (((x33==x34)<=x35)+x36);

	if (t8 != 29) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = INT64_MAX;
	static uint32_t x39 = 3806111U;
	volatile int32_t t9 = 27291789;

	t9 = (((x37==x38)<=x39)+x40);

	if (t9 != -32767) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	volatile uint32_t x42 = UINT32_MAX;
	uint8_t x43 = 0U;
	volatile uint8_t x44 = 4U;
	int32_t t10 = 1;

	t10 = (((x41==x42)<=x43)+x44);

	if (t10 != 5) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = INT64_MIN;
	int8_t x46 = INT8_MIN;
	int8_t x48 = INT8_MIN;
	static volatile int32_t t11 = 2094880;

	t11 = (((x45==x46)<=x47)+x48);

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x50 = 1073757503719LL;
	volatile int16_t x51 = -1;
	volatile int32_t t12 = -10439;

	t12 = (((x49==x50)<=x51)+x52);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x53 = 3421U;
	uint8_t x54 = 13U;
	int8_t x55 = -1;
	static int16_t x56 = -728;
	volatile int32_t t13 = 0;

	t13 = (((x53==x54)<=x55)+x56);

	if (t13 != -728) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 47;
	int64_t x58 = INT64_MAX;
	int16_t x59 = INT16_MIN;
	int32_t t14 = 12329;

	t14 = (((x57==x58)<=x59)+x60);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x62 = 10348;
	volatile int64_t x63 = -1LL;
	static int16_t x64 = INT16_MIN;
	volatile int32_t t15 = 144088;

	t15 = (((x61==x62)<=x63)+x64);

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = 54LL;
	int16_t x67 = INT16_MIN;
	int32_t x68 = INT32_MIN;
	volatile int32_t t16 = INT32_MIN;

	t16 = (((x65==x66)<=x67)+x68);

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x70 = INT16_MIN;
	uint64_t x72 = 6084LLU;

	t17 = (((x69==x70)<=x71)+x72);

	if (t17 != 6085LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = -38059LL;
	uint64_t x74 = 97992487535322LLU;
	volatile int64_t x75 = 5039734307LL;
	volatile int32_t x76 = INT32_MIN;

	t18 = (((x73==x74)<=x75)+x76);

	if (t18 != -2147483647) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = 3U;
	int64_t x86 = INT64_MIN;
	static uint16_t x88 = 1U;
	volatile int32_t t19 = 512887;

	t19 = (((x85==x86)<=x87)+x88);

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x89 = 1706U;
	uint8_t x90 = UINT8_MAX;
	volatile int16_t x91 = INT16_MIN;
	uint32_t x92 = 1037577649U;
	uint32_t t20 = 43U;

	t20 = (((x89==x90)<=x91)+x92);

	if (t20 != 1037577649U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x93 = -218514234;
	int16_t x96 = -1;

	t21 = (((x93==x94)<=x95)+x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = INT64_MAX;
	int64_t x98 = INT64_MAX;
	int8_t x99 = -1;

	t22 = (((x97==x98)<=x99)+x100);

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x101 = 1LLU;
	int16_t x102 = -222;
	int16_t x103 = INT16_MIN;
	volatile int32_t x104 = 5329923;

	t23 = (((x101==x102)<=x103)+x104);

	if (t23 != 5329923) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = INT32_MAX;
	int8_t x106 = -1;
	int32_t x107 = INT32_MAX;
	static int32_t t24 = -6595;

	t24 = (((x105==x106)<=x107)+x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = -1;
	uint8_t x110 = 102U;
	volatile int16_t x111 = 1;
	uint32_t x112 = UINT32_MAX;
	volatile uint32_t t25 = 7U;

	t25 = (((x109==x110)<=x111)+x112);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x113 = INT16_MIN;
	uint32_t x114 = 229130U;
	int64_t x115 = -6852195706330LL;
	volatile int64_t x116 = INT64_MIN;

	t26 = (((x113==x114)<=x115)+x116);

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x117 = UINT8_MAX;
	volatile uint8_t x119 = 25U;
	static int32_t x120 = -3280;
	static int32_t t27 = 910826;

	t27 = (((x117==x118)<=x119)+x120);

	if (t27 != -3279) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x121 = 1870900U;
	int32_t x122 = -15;
	int8_t x123 = INT8_MIN;
	uint32_t x124 = UINT32_MAX;
	static volatile uint32_t t28 = UINT32_MAX;

	t28 = (((x121==x122)<=x123)+x124);

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = INT8_MIN;
	static int32_t x126 = INT32_MIN;
	static volatile int64_t x127 = 12045773858017LL;
	int16_t x128 = INT16_MIN;
	volatile int32_t t29 = -137243;

	t29 = (((x125==x126)<=x127)+x128);

	if (t29 != -32767) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x129 = UINT32_MAX;
	int64_t x130 = INT64_MAX;
	int32_t t30 = -27208393;

	t30 = (((x129==x130)<=x131)+x132);

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = INT64_MIN;
	volatile uint64_t x134 = 1LLU;
	uint32_t x135 = UINT32_MAX;
	static int32_t x136 = -1;
	volatile int32_t t31 = 223;

	t31 = (((x133==x134)<=x135)+x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x138 = -1;

	t32 = (((x137==x138)<=x139)+x140);

	if (t32 != 22) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x142 = INT32_MIN;
	uint16_t x144 = 3638U;
	int32_t t33 = -3856;

	t33 = (((x141==x142)<=x143)+x144);

	if (t33 != 3638) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x146 = INT32_MIN;
	int8_t x147 = INT8_MIN;
	uint64_t x148 = UINT64_MAX;
	uint64_t t34 = UINT64_MAX;

	t34 = (((x145==x146)<=x147)+x148);

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x149 = -15;
	uint64_t x150 = 166057LLU;
	volatile int32_t x151 = INT32_MIN;
	int64_t x152 = INT64_MIN;
	int64_t t35 = INT64_MIN;

	t35 = (((x149==x150)<=x151)+x152);

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x155 = 345066836441952928LL;
	int32_t x156 = INT32_MIN;
	volatile int32_t t36 = -132772121;

	t36 = (((x153==x154)<=x155)+x156);

	if (t36 != -2147483647) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x157 = -1;
	static int8_t x158 = -1;
	int8_t x159 = -13;
	int64_t x160 = -13156451492206LL;
	int64_t t37 = 0LL;

	t37 = (((x157==x158)<=x159)+x160);

	if (t37 != -13156451492206LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x161 = INT64_MAX;
	static uint8_t x162 = 0U;
	static int32_t x163 = INT32_MIN;
	static uint32_t x164 = UINT32_MAX;
	volatile uint32_t t38 = UINT32_MAX;

	t38 = (((x161==x162)<=x163)+x164);

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = -808536129590LL;
	static int64_t x166 = -1LL;
	volatile uint64_t x167 = 34828830LLU;
	int8_t x168 = -1;
	volatile int32_t t39 = 62606;

	t39 = (((x165==x166)<=x167)+x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = -104;
	int16_t x170 = 15;
	static int32_t x171 = INT32_MIN;
	int8_t x172 = INT8_MAX;
	int32_t t40 = -37509;

	t40 = (((x169==x170)<=x171)+x172);

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x173 = 4260571571598LL;
	uint64_t x174 = UINT64_MAX;
	int32_t x175 = -1;
	static int16_t x176 = INT16_MAX;
	static int32_t t41 = 594536;

	t41 = (((x173==x174)<=x175)+x176);

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x177 = INT32_MIN;
	static int32_t x178 = -1;
	int32_t x179 = 7;
	uint16_t x180 = UINT16_MAX;
	static volatile int32_t t42 = -1;

	t42 = (((x177==x178)<=x179)+x180);

	if (t42 != 65536) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x181 = -2966;
	volatile int32_t x182 = INT32_MIN;
	uint8_t x183 = UINT8_MAX;
	int64_t x184 = 65214633792LL;
	int64_t t43 = -149693LL;

	t43 = (((x181==x182)<=x183)+x184);

	if (t43 != 65214633793LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = -23;
	uint64_t x188 = UINT64_MAX;
	volatile uint64_t t44 = 423610399200090170LLU;

	t44 = (((x185==x186)<=x187)+x188);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x189 = INT64_MAX;
	int16_t x190 = INT16_MAX;
	int32_t x191 = INT32_MIN;
	uint64_t x192 = UINT64_MAX;

	t45 = (((x189==x190)<=x191)+x192);

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x193 = 1;
	int64_t x194 = 55207286771906LL;
	static uint64_t x195 = UINT64_MAX;
	volatile int32_t t46 = -102752;

	t46 = (((x193==x194)<=x195)+x196);

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x201 = 3;
	static int32_t x202 = -687264656;
	int16_t x203 = INT16_MIN;
	static int64_t x204 = -1LL;
	int64_t t47 = -134767754512LL;

	t47 = (((x201==x202)<=x203)+x204);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x205 = INT8_MAX;
	uint64_t x206 = 178633401LLU;
	uint8_t x207 = 1U;
	int16_t x208 = INT16_MIN;
	volatile int32_t t48 = 1309679;

	t48 = (((x205==x206)<=x207)+x208);

	if (t48 != -32767) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x209 = UINT8_MAX;
	volatile int64_t x210 = INT64_MIN;
	uint64_t x211 = 659222313700697LLU;
	volatile int32_t t49 = 1977074;

	t49 = (((x209==x210)<=x211)+x212);

	if (t49 != 21186) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x213 = 3LLU;
	int8_t x215 = -1;
	static int64_t x216 = INT64_MIN;
	volatile int64_t t50 = INT64_MIN;

	t50 = (((x213==x214)<=x215)+x216);

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x217 = INT8_MIN;
	int64_t x218 = 2842094LL;
	int16_t x219 = INT16_MIN;
	int32_t x220 = INT32_MIN;
	int32_t t51 = INT32_MIN;

	t51 = (((x217==x218)<=x219)+x220);

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x222 = INT64_MIN;

	t52 = (((x221==x222)<=x223)+x224);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = -5LL;
	volatile int32_t x226 = -1;

	t53 = (((x225==x226)<=x227)+x228);

	if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x229 = INT16_MAX;
	int8_t x230 = INT8_MIN;
	int16_t x231 = -1;
	volatile uint32_t x232 = 227U;
	volatile uint32_t t54 = 537455961U;

	t54 = (((x229==x230)<=x231)+x232);

	if (t54 != 227U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x234 = UINT32_MAX;
	int32_t x235 = 34280;
	int8_t x236 = 20;
	volatile int32_t t55 = 232769319;

	t55 = (((x233==x234)<=x235)+x236);

	if (t55 != 21) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x237 = 32009609322305LLU;
	static int8_t x238 = 36;
	volatile int16_t x239 = INT16_MIN;
	volatile uint16_t x240 = 1U;
	int32_t t56 = 118;

	t56 = (((x237==x238)<=x239)+x240);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x241 = INT64_MAX;
	int16_t x242 = INT16_MIN;

	t57 = (((x241==x242)<=x243)+x244);

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x246 = INT64_MIN;
	int8_t x247 = 0;
	int32_t t58 = 1;

	t58 = (((x245==x246)<=x247)+x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x249 = UINT8_MAX;
	int16_t x250 = -1726;
	static uint16_t x251 = UINT16_MAX;
	int32_t t59 = 1413252;

	t59 = (((x249==x250)<=x251)+x252);

	if (t59 != 16) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x253 = INT16_MIN;

	t60 = (((x253==x254)<=x255)+x256);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x257 = 1U;
	int32_t x258 = -1;
	uint64_t x259 = 11812LLU;
	int32_t t61 = -12914531;

	t61 = (((x257==x258)<=x259)+x260);

	if (t61 != 24865) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x262 = INT8_MAX;
	static int32_t x263 = -1;
	int8_t x264 = INT8_MIN;
	volatile int32_t t62 = 0;

	t62 = (((x261==x262)<=x263)+x264);

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x265 = UINT16_MAX;
	volatile uint8_t x266 = 1U;
	volatile int8_t x267 = INT8_MIN;
	int16_t x268 = 120;
	int32_t t63 = -3342328;

	t63 = (((x265==x266)<=x267)+x268);

	if (t63 != 120) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x269 = -1;
	uint16_t x270 = UINT16_MAX;
	int16_t x271 = -1;
	uint64_t x272 = 51306133964763LLU;
	uint64_t t64 = 3688601LLU;

	t64 = (((x269==x270)<=x271)+x272);

	if (t64 != 51306133964763LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x274 = INT64_MIN;
	int64_t x275 = INT64_MIN;

	t65 = (((x273==x274)<=x275)+x276);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x277 = UINT8_MAX;
	int32_t x278 = 38050848;
	uint64_t x279 = UINT64_MAX;
	static int32_t x280 = -81248644;
	int32_t t66 = 0;

	t66 = (((x277==x278)<=x279)+x280);

	if (t66 != -81248643) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x283 = INT16_MIN;
	volatile int32_t t67 = 0;

	t67 = (((x281==x282)<=x283)+x284);

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x285 = -1;
	int16_t x286 = -1;
	uint8_t x287 = 42U;
	static uint8_t x288 = 1U;
	volatile int32_t t68 = -21;

	t68 = (((x285==x286)<=x287)+x288);

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = -1;
	volatile uint8_t x290 = 89U;
	int8_t x291 = -1;
	static volatile uint64_t x292 = 423LLU;
	static uint64_t t69 = 4037730646406858187LLU;

	t69 = (((x289==x290)<=x291)+x292);

	if (t69 != 423LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x293 = INT64_MAX;
	volatile uint8_t x295 = 0U;
	static volatile int32_t t70 = 4;

	t70 = (((x293==x294)<=x295)+x296);

	if (t70 != 65536) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x297 = 1U;
	int8_t x298 = 0;
	int32_t x300 = -2;

	t71 = (((x297==x298)<=x299)+x300);

	if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x301 = INT16_MAX;
	static volatile int16_t x302 = -1;
	volatile uint32_t x304 = 119954U;
	volatile uint32_t t72 = 9925726U;

	t72 = (((x301==x302)<=x303)+x304);

	if (t72 != 119954U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x305 = INT64_MIN;
	uint32_t x306 = UINT32_MAX;
	volatile int8_t x307 = INT8_MIN;
	int16_t x308 = -33;
	static volatile int32_t t73 = -26353767;

	t73 = (((x305==x306)<=x307)+x308);

	if (t73 != -33) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x309 = -1;
	int64_t x310 = 120244LL;
	uint32_t x311 = 4U;
	static int32_t x312 = -1011505;
	volatile int32_t t74 = 7750793;

	t74 = (((x309==x310)<=x311)+x312);

	if (t74 != -1011504) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x313 = INT64_MAX;
	int16_t x314 = -15066;
	volatile int64_t x315 = -5935790972231590LL;
	uint8_t x316 = UINT8_MAX;
	static int32_t t75 = -15185;

	t75 = (((x313==x314)<=x315)+x316);

	if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x318 = 87U;
	int16_t x319 = 142;
	uint8_t x320 = 67U;
	int32_t t76 = -735097010;

	t76 = (((x317==x318)<=x319)+x320);

	if (t76 != 68) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x321 = -1;
	int32_t x322 = INT32_MIN;
	int32_t x323 = -195244;
	static uint8_t x324 = UINT8_MAX;
	volatile int32_t t77 = -3;

	t77 = (((x321==x322)<=x323)+x324);

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x325 = INT16_MIN;
	uint32_t x326 = UINT32_MAX;
	int64_t x327 = -1LL;
	int8_t x328 = -1;
	int32_t t78 = -8834;

	t78 = (((x325==x326)<=x327)+x328);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x329 = UINT32_MAX;
	static int16_t x330 = 0;
	int16_t x331 = INT16_MAX;
	int16_t x332 = -1;

	t79 = (((x329==x330)<=x331)+x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x334 = -1;
	static int32_t x336 = 452316951;
	static volatile int32_t t80 = 13257;

	t80 = (((x333==x334)<=x335)+x336);

	if (t80 != 452316952) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x337 = UINT16_MAX;
	int8_t x338 = -1;
	int32_t x339 = -1;
	static int8_t x340 = -1;
	int32_t t81 = -18;

	t81 = (((x337==x338)<=x339)+x340);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x341 = 7U;
	int16_t x342 = 978;
	static uint64_t x343 = UINT64_MAX;
	uint8_t x344 = 62U;
	static volatile int32_t t82 = -2420423;

	t82 = (((x341==x342)<=x343)+x344);

	if (t82 != 63) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x345 = 16U;
	int32_t x346 = 781371488;
	static int32_t x347 = -22;
	int64_t x348 = 1754654154479156LL;
	static int64_t t83 = -529333111542950LL;

	t83 = (((x345==x346)<=x347)+x348);

	if (t83 != 1754654154479156LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x349 = INT8_MIN;
	int16_t x351 = INT16_MIN;
	static volatile int32_t x352 = 799648354;
	volatile int32_t t84 = -116;

	t84 = (((x349==x350)<=x351)+x352);

	if (t84 != 799648354) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x353 = -1;
	static volatile int8_t x354 = 0;
	uint8_t x355 = 30U;
	uint8_t x356 = UINT8_MAX;
	int32_t t85 = -80;

	t85 = (((x353==x354)<=x355)+x356);

	if (t85 != 256) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x357 = UINT16_MAX;
	volatile uint16_t x358 = UINT16_MAX;
	static uint32_t x359 = 2529U;
	volatile int32_t t86 = -1;

	t86 = (((x357==x358)<=x359)+x360);

	if (t86 != -2147483647) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x361 = 556774889LLU;
	volatile int32_t x362 = -45339828;
	int8_t x363 = INT8_MIN;
	int32_t t87 = 4;

	t87 = (((x361==x362)<=x363)+x364);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x365 = UINT32_MAX;
	int64_t x366 = 4189610772LL;
	int8_t x368 = INT8_MIN;
	int32_t t88 = 777;

	t88 = (((x365==x366)<=x367)+x368);

	if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = INT64_MAX;
	uint8_t x370 = UINT8_MAX;
	volatile uint64_t x371 = 5201LLU;
	int32_t t89 = -243174;

	t89 = (((x369==x370)<=x371)+x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x373 = 110919404862326LLU;
	int32_t x374 = INT32_MIN;
	static uint8_t x375 = 32U;
	static int64_t x376 = -97321LL;
	static int64_t t90 = 462LL;

	t90 = (((x373==x374)<=x375)+x376);

	if (t90 != -97320LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x377 = UINT64_MAX;
	int64_t x378 = -124LL;
	static volatile uint32_t x379 = 30538988U;
	int16_t x380 = INT16_MIN;

	t91 = (((x377==x378)<=x379)+x380);

	if (t91 != -32767) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x384 = 30026545U;

	t92 = (((x381==x382)<=x383)+x384);

	if (t92 != 30026545U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x385 = UINT64_MAX;
	volatile int16_t x386 = -3;
	int8_t x387 = -1;
	int32_t t93 = 343777063;

	t93 = (((x385==x386)<=x387)+x388);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x389 = INT8_MIN;
	volatile int32_t x392 = 3252;

	t94 = (((x389==x390)<=x391)+x392);

	if (t94 != 3253) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x393 = INT16_MIN;
	int16_t x394 = -1;
	int64_t x396 = INT64_MIN;
	int64_t t95 = -1LL;

	t95 = (((x393==x394)<=x395)+x396);

	if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x397 = INT64_MIN;
	int8_t x398 = -4;
	volatile int8_t x400 = INT8_MAX;
	static int32_t t96 = 119685561;

	t96 = (((x397==x398)<=x399)+x400);

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x401 = INT8_MIN;
	int8_t x402 = -1;
	volatile int8_t x403 = 5;
	int64_t x404 = INT64_MIN;
	int64_t t97 = -335LL;

	t97 = (((x401==x402)<=x403)+x404);

	if (t97 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x405 = 3U;
	static uint8_t x406 = UINT8_MAX;
	int64_t x407 = INT64_MIN;
	static int64_t x408 = INT64_MIN;

	t98 = (((x405==x406)<=x407)+x408);

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x409 = 181375646833LLU;
	static uint64_t x410 = UINT64_MAX;
	uint32_t x411 = UINT32_MAX;
	int32_t t99 = -399517944;

	t99 = (((x409==x410)<=x411)+x412);

	if (t99 != -32) { NG(); } else { ; }
	
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

