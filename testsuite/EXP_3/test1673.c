#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MAX;
volatile int8_t x6 = -2;
uint8_t x7 = 14U;
int32_t t1 = -194541263;
static volatile uint8_t x12 = UINT8_MAX;
uint16_t x16 = 763U;
int64_t x20 = INT64_MIN;
uint16_t x23 = 3996U;
static int64_t x25 = 33208638826448781LL;
volatile uint8_t x27 = 2U;
volatile int32_t t6 = -30;
int32_t t7 = 670360947;
uint32_t x36 = 858U;
int16_t x37 = -1;
int8_t x45 = INT8_MAX;
uint32_t x49 = 370480U;
volatile int64_t x51 = 131459872928466LL;
volatile int32_t t12 = -5030;
volatile int64_t x54 = INT64_MIN;
int64_t x55 = -83283712145099763LL;
int64_t x65 = -1LL;
volatile uint64_t x67 = UINT64_MAX;
int32_t x74 = INT32_MAX;
int16_t x82 = INT16_MIN;
int16_t x88 = -3;
int64_t x89 = INT64_MAX;
uint16_t x90 = UINT16_MAX;
volatile int32_t x91 = -215;
int64_t x94 = -1LL;
int64_t x95 = -163124200908019LL;
static int32_t t23 = 29;
int8_t x100 = -1;
int8_t x103 = 6;
uint8_t x108 = UINT8_MAX;
static volatile int32_t t26 = 37;
int32_t t27 = 85606;
int16_t x119 = INT16_MIN;
volatile int32_t x127 = INT32_MAX;
volatile int16_t x140 = 18;
static uint16_t x150 = 220U;
static volatile int16_t x151 = -1;
uint8_t x153 = UINT8_MAX;
int32_t t38 = -444657662;
int64_t x164 = INT64_MIN;
int8_t x169 = INT8_MAX;
int32_t x170 = INT32_MAX;
int16_t x172 = 151;
int32_t t42 = 0;
uint16_t x175 = 11U;
uint16_t x176 = 95U;
volatile int32_t x178 = INT32_MAX;
int32_t x179 = INT32_MAX;
static int16_t x185 = 320;
int32_t x187 = INT32_MIN;
int32_t t48 = 1;
uint64_t x203 = 129744LLU;
int8_t x208 = -1;
uint16_t x212 = 30283U;
int8_t x213 = 3;
volatile uint64_t x220 = 474897292248113LLU;
volatile int64_t x221 = INT64_MAX;
int8_t x223 = INT8_MAX;
int32_t t55 = -4;
int64_t x225 = INT64_MAX;
volatile int32_t t58 = 959390499;
int32_t x241 = -1;
int16_t x242 = 5;
volatile int8_t x246 = 1;
int64_t x247 = 8477216478909LL;
static int32_t t61 = 913140627;
static int32_t x249 = -1;
uint8_t x254 = 6U;
int8_t x260 = -1;
static uint64_t x261 = 8LLU;
int64_t x275 = INT64_MIN;
int16_t x276 = 2;
int32_t t68 = 49551392;
volatile int32_t x278 = -3;
static volatile int32_t t69 = -1;
uint32_t x287 = UINT32_MAX;
uint32_t x288 = UINT32_MAX;
int8_t x297 = 8;
int8_t x298 = -27;
volatile int32_t t74 = -1020;
int32_t x302 = 84077;
volatile int32_t t75 = 232;
int8_t x308 = -4;
static uint16_t x312 = 1U;
int16_t x313 = INT16_MAX;
int16_t x330 = 136;
int8_t x334 = -1;
volatile uint64_t x336 = UINT64_MAX;
int32_t t83 = 966;
volatile int32_t x337 = -1;
int64_t x338 = INT64_MIN;
uint8_t x344 = 5U;
int32_t x351 = 613944940;
int8_t x352 = INT8_MAX;
int32_t x353 = INT32_MAX;
volatile int32_t t89 = -10816;
int16_t x363 = INT16_MIN;
int32_t t90 = -381750;
int64_t x377 = -14638637679765741LL;
int64_t x378 = -130LL;
int16_t x382 = INT16_MIN;
volatile uint64_t x385 = UINT64_MAX;
static int32_t x389 = -516868274;
int64_t x393 = -3263LL;
int64_t x397 = -1LL;
int64_t x398 = INT64_MAX;


void f0(void) {
	static uint8_t x1 = 26U;
	uint16_t x2 = UINT16_MAX;
	int16_t x3 = INT16_MIN;
	int16_t x4 = INT16_MIN;
	static int32_t t0 = -370539209;

	t0 = ((x1|x2)<(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x8 = INT64_MIN;

	t1 = ((x5|x6)<(x7<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 3358U;
	int32_t x10 = INT32_MAX;
	volatile int16_t x11 = 1;
	volatile int32_t t2 = -109546587;

	t2 = ((x9|x10)<(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = UINT64_MAX;
	uint8_t x14 = 21U;
	uint32_t x15 = 0U;
	static volatile int32_t t3 = -665186;

	t3 = ((x13|x14)<(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = -3;
	int32_t x18 = -3433076;
	static volatile int16_t x19 = INT16_MAX;
	int32_t t4 = -1;

	t4 = ((x17|x18)<(x19<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	int8_t x22 = INT8_MIN;
	volatile int16_t x24 = -1;
	volatile int32_t t5 = 1;

	t5 = ((x21|x22)<(x23<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x26 = -1;
	uint16_t x28 = 470U;

	t6 = ((x25|x26)<(x27<=x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 2U;
	uint16_t x30 = 54U;
	int64_t x31 = -1LL;
	int8_t x32 = INT8_MIN;

	t7 = ((x29|x30)<(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MAX;
	uint32_t x34 = 6919531U;
	int64_t x35 = INT64_MIN;
	int32_t t8 = 11098;

	t8 = ((x33|x34)<(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = -1;
	int8_t x39 = INT8_MAX;
	int64_t x40 = -1LL;
	int32_t t9 = 1726;

	t9 = ((x37|x38)<(x39<=x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 1U;
	int64_t x42 = INT64_MAX;
	uint8_t x43 = 3U;
	static int16_t x44 = -307;
	int32_t t10 = -66712839;

	t10 = ((x41|x42)<(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = INT16_MAX;
	int16_t x47 = INT16_MIN;
	int16_t x48 = -1;
	int32_t t11 = 5838078;

	t11 = ((x45|x46)<(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x50 = 1386LLU;
	volatile int16_t x52 = INT16_MAX;

	t12 = ((x49|x50)<(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = 4U;
	static int8_t x56 = INT8_MIN;
	volatile int32_t t13 = 33980;

	t13 = ((x53|x54)<(x55<=x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = 720056LL;
	int16_t x58 = 63;
	static uint16_t x59 = 6427U;
	uint32_t x60 = 25U;
	volatile int32_t t14 = 32876549;

	t14 = ((x57|x58)<(x59<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	volatile int32_t x62 = INT32_MIN;
	uint16_t x63 = 308U;
	static volatile int8_t x64 = -1;
	int32_t t15 = 7208225;

	t15 = ((x61|x62)<(x63<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = INT64_MIN;
	uint16_t x68 = 210U;
	volatile int32_t t16 = 3;

	t16 = ((x65|x66)<(x67<=x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = 14LL;
	uint16_t x70 = 212U;
	volatile int8_t x71 = 12;
	int32_t x72 = -95746269;
	volatile int32_t t17 = 50736388;

	t17 = ((x69|x70)<(x71<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 1969324U;
	uint8_t x75 = 0U;
	int32_t x76 = 224;
	int32_t t18 = 10268925;

	t18 = ((x73|x74)<(x75<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 7991767246799272437LLU;
	int16_t x78 = -1;
	uint64_t x79 = UINT64_MAX;
	static volatile uint16_t x80 = 20U;
	int32_t t19 = 1;

	t19 = ((x77|x78)<(x79<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = INT32_MIN;
	int32_t x83 = -1;
	volatile uint32_t x84 = 30013413U;
	static int32_t t20 = 10;

	t20 = ((x81|x82)<(x83<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	int16_t x86 = INT16_MIN;
	int16_t x87 = -181;
	volatile int32_t t21 = 275381704;

	t21 = ((x85|x86)<(x87<=x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x92 = -1;
	int32_t t22 = -57;

	t22 = ((x89|x90)<(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = 98;
	volatile uint16_t x96 = 243U;

	t23 = ((x93|x94)<(x95<=x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -1;
	int8_t x98 = INT8_MAX;
	uint32_t x99 = UINT32_MAX;
	volatile int32_t t24 = -1;

	t24 = ((x97|x98)<(x99<=x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint64_t x101 = 10779LLU;
	uint16_t x102 = 1539U;
	int8_t x104 = INT8_MIN;
	int32_t t25 = -611626543;

	t25 = ((x101|x102)<(x103<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 2582U;
	uint16_t x106 = 12178U;
	int32_t x107 = INT32_MIN;

	t26 = ((x105|x106)<(x107<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 0U;
	volatile uint16_t x110 = 1U;
	uint8_t x111 = 32U;
	int64_t x112 = -395714961898019436LL;

	t27 = ((x109|x110)<(x111<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	int16_t x114 = INT16_MIN;
	volatile int8_t x115 = 0;
	int32_t x116 = -1;
	volatile int32_t t28 = 13009;

	t28 = ((x113|x114)<(x115<=x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	volatile int64_t x118 = -476226350854897187LL;
	static volatile int8_t x120 = INT8_MIN;
	volatile int32_t t29 = 1;

	t29 = ((x117|x118)<(x119<=x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -1;
	int64_t x122 = INT64_MIN;
	static int16_t x123 = INT16_MAX;
	int16_t x124 = -1968;
	int32_t t30 = 172083;

	t30 = ((x121|x122)<(x123<=x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	static int8_t x126 = INT8_MIN;
	int32_t x128 = INT32_MIN;
	int32_t t31 = 0;

	t31 = ((x125|x126)<(x127<=x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x129 = 4887562U;
	int8_t x130 = -1;
	int64_t x131 = -6059555260LL;
	volatile int8_t x132 = -1;
	volatile int32_t t32 = -881091;

	t32 = ((x129|x130)<(x131<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x133 = 125U;
	static int16_t x134 = -118;
	int64_t x135 = INT64_MAX;
	uint64_t x136 = 35463765044201LLU;
	volatile int32_t t33 = -81823520;

	t33 = ((x133|x134)<(x135<=x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	uint8_t x138 = UINT8_MAX;
	static int64_t x139 = -1LL;
	volatile int32_t t34 = 339;

	t34 = ((x137|x138)<(x139<=x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MAX;
	volatile int32_t x142 = INT32_MAX;
	volatile uint64_t x143 = UINT64_MAX;
	int64_t x144 = 248279962821LL;
	int32_t t35 = 0;

	t35 = ((x141|x142)<(x143<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x145 = -1LL;
	int64_t x146 = -704LL;
	int16_t x147 = INT16_MIN;
	uint32_t x148 = UINT32_MAX;
	volatile int32_t t36 = 11621;

	t36 = ((x145|x146)<(x147<=x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x149 = UINT8_MAX;
	int32_t x152 = INT32_MIN;
	volatile int32_t t37 = 178;

	t37 = ((x149|x150)<(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x154 = 632LL;
	uint32_t x155 = 956536086U;
	int8_t x156 = INT8_MAX;

	t38 = ((x153|x154)<(x155<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -274LL;
	int8_t x158 = INT8_MAX;
	int16_t x159 = INT16_MIN;
	static uint64_t x160 = 507517LLU;
	int32_t t39 = 6;

	t39 = ((x157|x158)<(x159<=x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -11719;
	static uint64_t x162 = 92120728865002LLU;
	uint32_t x163 = UINT32_MAX;
	int32_t t40 = 17914210;

	t40 = ((x161|x162)<(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	int32_t x166 = INT32_MAX;
	static uint64_t x167 = 532465298918LLU;
	int8_t x168 = 10;
	volatile int32_t t41 = -74;

	t41 = ((x165|x166)<(x167<=x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x171 = INT8_MAX;

	t42 = ((x169|x170)<(x171<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 2582552U;
	volatile uint8_t x174 = 0U;
	volatile int32_t t43 = -122993221;

	t43 = ((x173|x174)<(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = UINT8_MAX;
	int8_t x180 = INT8_MAX;
	volatile int32_t t44 = 159313133;

	t44 = ((x177|x178)<(x179<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = 42887051;
	int32_t x182 = INT32_MAX;
	int8_t x183 = -1;
	uint16_t x184 = UINT16_MAX;
	volatile int32_t t45 = 96984;

	t45 = ((x181|x182)<(x183<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x186 = 8100627U;
	static uint32_t x188 = 6U;
	static int32_t t46 = 28455;

	t46 = ((x185|x186)<(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MAX;
	int8_t x190 = INT8_MIN;
	volatile int16_t x191 = INT16_MAX;
	uint64_t x192 = 14219632805366LLU;
	volatile int32_t t47 = 14404385;

	t47 = ((x189|x190)<(x191<=x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x193 = -1;
	volatile int16_t x194 = INT16_MAX;
	volatile int8_t x195 = -23;
	int32_t x196 = INT32_MIN;

	t48 = ((x193|x194)<(x195<=x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -1;
	uint8_t x198 = UINT8_MAX;
	uint32_t x199 = UINT32_MAX;
	int64_t x200 = -1LL;
	static int32_t t49 = -14;

	t49 = ((x197|x198)<(x199<=x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = -1;
	static volatile int8_t x202 = INT8_MIN;
	volatile int32_t x204 = 949258;
	static volatile int32_t t50 = -1835633;

	t50 = ((x201|x202)<(x203<=x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -1;
	static volatile int8_t x206 = INT8_MIN;
	static uint16_t x207 = 7271U;
	volatile int32_t t51 = 34423103;

	t51 = ((x205|x206)<(x207<=x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	uint32_t x210 = UINT32_MAX;
	uint64_t x211 = 857324482LLU;
	static volatile int32_t t52 = 2186046;

	t52 = ((x209|x210)<(x211<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x214 = INT32_MIN;
	static uint64_t x215 = UINT64_MAX;
	volatile int16_t x216 = -1;
	static volatile int32_t t53 = 1754514;

	t53 = ((x213|x214)<(x215<=x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x217 = 105LL;
	int16_t x218 = -1;
	volatile int64_t x219 = INT64_MIN;
	static volatile int32_t t54 = 218;

	t54 = ((x217|x218)<(x219<=x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x222 = 4551U;
	static uint16_t x224 = UINT16_MAX;

	t55 = ((x221|x222)<(x223<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x226 = 54883266988314323LLU;
	int8_t x227 = -1;
	uint8_t x228 = UINT8_MAX;
	volatile int32_t t56 = -712061301;

	t56 = ((x225|x226)<(x227<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x229 = 793902508U;
	int64_t x230 = INT64_MAX;
	uint32_t x231 = 120U;
	int8_t x232 = INT8_MIN;
	volatile int32_t t57 = 329109233;

	t57 = ((x229|x230)<(x231<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MAX;
	int64_t x234 = INT64_MAX;
	static int8_t x235 = INT8_MIN;
	static int32_t x236 = 2795805;

	t58 = ((x233|x234)<(x235<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -1;
	int64_t x238 = -1LL;
	int32_t x239 = 124156827;
	int32_t x240 = INT32_MIN;
	static int32_t t59 = -188215156;

	t59 = ((x237|x238)<(x239<=x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x243 = -1;
	static int64_t x244 = INT64_MIN;
	volatile int32_t t60 = -413;

	t60 = ((x241|x242)<(x243<=x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -1;
	uint16_t x248 = 455U;

	t61 = ((x245|x246)<(x247<=x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x250 = INT16_MIN;
	static int8_t x251 = 61;
	int16_t x252 = -1;
	volatile int32_t t62 = 421029684;

	t62 = ((x249|x250)<(x251<=x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	uint64_t x255 = 4911764LLU;
	uint32_t x256 = UINT32_MAX;
	int32_t t63 = 333560;

	t63 = ((x253|x254)<(x255<=x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = 2144;
	uint32_t x258 = 1U;
	int32_t x259 = 23302805;
	int32_t t64 = 92488625;

	t64 = ((x257|x258)<(x259<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x262 = UINT64_MAX;
	uint32_t x263 = UINT32_MAX;
	uint64_t x264 = UINT64_MAX;
	int32_t t65 = -65583515;

	t65 = ((x261|x262)<(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = 17;
	uint16_t x266 = 43U;
	int32_t x267 = INT32_MIN;
	int8_t x268 = INT8_MIN;
	static int32_t t66 = 7;

	t66 = ((x265|x266)<(x267<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = INT64_MIN;
	int16_t x270 = 18;
	int32_t x271 = INT32_MIN;
	uint32_t x272 = UINT32_MAX;
	static volatile int32_t t67 = -4883;

	t67 = ((x269|x270)<(x271<=x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 990U;
	int64_t x274 = -14106710324706LL;

	t68 = ((x273|x274)<(x275<=x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = INT64_MIN;
	static int16_t x279 = INT16_MIN;
	int32_t x280 = -5;

	t69 = ((x277|x278)<(x279<=x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -1;
	static int8_t x282 = -1;
	uint64_t x283 = 330184404393480LLU;
	static int64_t x284 = -1LL;
	int32_t t70 = -1057346187;

	t70 = ((x281|x282)<(x283<=x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = 1408;
	static volatile uint16_t x286 = 437U;
	int32_t t71 = -404;

	t71 = ((x285|x286)<(x287<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = INT16_MIN;
	int32_t x290 = INT32_MIN;
	int8_t x291 = INT8_MIN;
	int16_t x292 = -3269;
	static volatile int32_t t72 = 30265342;

	t72 = ((x289|x290)<(x291<=x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = 1518;
	int8_t x294 = -29;
	static int32_t x295 = INT32_MAX;
	volatile int32_t x296 = -1;
	int32_t t73 = 19;

	t73 = ((x293|x294)<(x295<=x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x299 = UINT8_MAX;
	volatile int8_t x300 = INT8_MIN;

	t74 = ((x297|x298)<(x299<=x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x301 = INT32_MIN;
	volatile uint32_t x303 = 1343454556U;
	uint8_t x304 = 23U;

	t75 = ((x301|x302)<(x303<=x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x305 = 5U;
	int64_t x306 = -1LL;
	uint8_t x307 = UINT8_MAX;
	int32_t t76 = 41300;

	t76 = ((x305|x306)<(x307<=x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	int32_t x310 = -1;
	static uint64_t x311 = UINT64_MAX;
	int32_t t77 = 999745;

	t77 = ((x309|x310)<(x311<=x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x314 = 27;
	static uint32_t x315 = 27991U;
	volatile int8_t x316 = -1;
	volatile int32_t t78 = -17494955;

	t78 = ((x313|x314)<(x315<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 0U;
	volatile int32_t x318 = -5405;
	uint64_t x319 = UINT64_MAX;
	static int64_t x320 = -146LL;
	volatile int32_t t79 = -951361472;

	t79 = ((x317|x318)<(x319<=x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x321 = 0;
	int64_t x322 = -1LL;
	volatile int32_t x323 = INT32_MIN;
	uint16_t x324 = UINT16_MAX;
	int32_t t80 = -508474281;

	t80 = ((x321|x322)<(x323<=x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 1U;
	uint8_t x326 = 22U;
	volatile int16_t x327 = 39;
	int32_t x328 = -19077224;
	static volatile int32_t t81 = 12;

	t81 = ((x325|x326)<(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 412951401218832LLU;
	int32_t x331 = INT32_MAX;
	static int64_t x332 = 206LL;
	int32_t t82 = 3247;

	t82 = ((x329|x330)<(x331<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x333 = -946;
	static volatile int32_t x335 = INT32_MIN;

	t83 = ((x333|x334)<(x335<=x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x339 = 2U;
	uint16_t x340 = 1U;
	int32_t t84 = 57969709;

	t84 = ((x337|x338)<(x339<=x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	int64_t x342 = INT64_MAX;
	int32_t x343 = INT32_MIN;
	int32_t t85 = -7;

	t85 = ((x341|x342)<(x343<=x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -508898;
	uint64_t x346 = 9644LLU;
	int32_t x347 = -2526;
	volatile uint32_t x348 = 329707044U;
	static int32_t t86 = 6;

	t86 = ((x345|x346)<(x347<=x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = UINT8_MAX;
	int16_t x350 = -13578;
	volatile int32_t t87 = -4134;

	t87 = ((x349|x350)<(x351<=x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x354 = 15U;
	int32_t x355 = INT32_MIN;
	static int8_t x356 = 0;
	int32_t t88 = -1824;

	t88 = ((x353|x354)<(x355<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = -1;
	uint64_t x358 = 678473141LLU;
	uint64_t x359 = 4536807346486894624LLU;
	static uint8_t x360 = 107U;

	t89 = ((x357|x358)<(x359<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MAX;
	volatile int8_t x362 = -1;
	int32_t x364 = INT32_MIN;

	t90 = ((x361|x362)<(x363<=x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = -1;
	static volatile int64_t x366 = -527LL;
	int16_t x367 = INT16_MIN;
	int64_t x368 = INT64_MIN;
	volatile int32_t t91 = -2166;

	t91 = ((x365|x366)<(x367<=x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = 4880;
	static int16_t x370 = INT16_MAX;
	int64_t x371 = INT64_MAX;
	uint32_t x372 = 74U;
	static int32_t t92 = 17608274;

	t92 = ((x369|x370)<(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x373 = 1;
	uint8_t x374 = 17U;
	int64_t x375 = 26915520149004LL;
	uint8_t x376 = 4U;
	static int32_t t93 = -2;

	t93 = ((x373|x374)<(x375<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x379 = INT8_MAX;
	uint32_t x380 = 22U;
	volatile int32_t t94 = -1;

	t94 = ((x377|x378)<(x379<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x381 = 0U;
	uint16_t x383 = UINT16_MAX;
	int32_t x384 = INT32_MIN;
	volatile int32_t t95 = 8864447;

	t95 = ((x381|x382)<(x383<=x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x386 = INT8_MIN;
	int32_t x387 = -821064432;
	uint64_t x388 = 3LLU;
	int32_t t96 = -6952;

	t96 = ((x385|x386)<(x387<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x390 = 1U;
	static uint16_t x391 = UINT16_MAX;
	uint16_t x392 = UINT16_MAX;
	volatile int32_t t97 = 103899118;

	t97 = ((x389|x390)<(x391<=x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x394 = UINT64_MAX;
	uint32_t x395 = 1398055710U;
	static int32_t x396 = INT32_MAX;
	volatile int32_t t98 = 0;

	t98 = ((x393|x394)<(x395<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x399 = 71619287U;
	uint32_t x400 = UINT32_MAX;
	int32_t t99 = 20;

	t99 = ((x397|x398)<(x399<=x400));

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

