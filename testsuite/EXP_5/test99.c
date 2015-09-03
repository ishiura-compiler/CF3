#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = INT8_MIN;
int32_t x13 = 4086;
static uint64_t x19 = 1670LLU;
uint32_t x23 = UINT32_MAX;
volatile int32_t t3 = 29;
int16_t x25 = INT16_MIN;
int32_t x28 = INT32_MIN;
static volatile uint16_t x30 = UINT16_MAX;
uint32_t x37 = 61847U;
volatile int32_t t7 = 46;
volatile int32_t x46 = 921539294;
int8_t x47 = 33;
int8_t x54 = -1;
static uint32_t x55 = 5U;
int16_t x64 = INT16_MIN;
int16_t x66 = 4;
int8_t x67 = -1;
uint8_t x68 = 53U;
volatile int64_t x70 = INT64_MAX;
static uint8_t x78 = 7U;
uint16_t x82 = 171U;
volatile int32_t t18 = 1;
volatile int16_t x87 = 0;
uint8_t x88 = UINT8_MAX;
volatile int32_t t19 = -514446;
int8_t x89 = INT8_MIN;
uint16_t x92 = 6620U;
int16_t x100 = INT16_MAX;
volatile int32_t t22 = 11811;
int8_t x101 = INT8_MAX;
static volatile int16_t x104 = 4674;
uint64_t x107 = 5067LLU;
static int16_t x112 = 112;
volatile int32_t t28 = 7619777;
static int16_t x127 = -1;
volatile int8_t x131 = -31;
uint8_t x133 = UINT8_MAX;
int8_t x134 = -1;
int8_t x140 = -1;
volatile int32_t t32 = 2;
volatile int32_t t33 = -59;
int16_t x145 = INT16_MIN;
volatile uint64_t x155 = UINT64_MAX;
uint16_t x168 = UINT16_MAX;
int8_t x174 = INT8_MIN;
volatile int32_t t42 = -160856;
uint32_t x186 = 2U;
int8_t x187 = -1;
static int32_t x192 = INT32_MIN;
volatile int16_t x196 = -1;
int32_t x202 = INT32_MAX;
static int8_t x204 = INT8_MIN;
volatile int32_t t49 = -1633;
int8_t x213 = INT8_MAX;
int32_t x220 = -10729730;
volatile int32_t t51 = 888552089;
int64_t x232 = INT64_MAX;
static int32_t t54 = 2045358;
static int32_t t55 = -5096952;
volatile int8_t x240 = -6;
int32_t x242 = 1;
volatile int32_t x253 = -816;
static uint8_t x256 = 33U;
int32_t t60 = -10140;
int64_t x258 = INT64_MIN;
volatile uint16_t x261 = 3109U;
int16_t x262 = INT16_MAX;
static volatile uint32_t x268 = 16435983U;
volatile int32_t t63 = 7532;
int8_t x279 = INT8_MAX;
uint64_t x282 = 2538848678LLU;
uint16_t x286 = 64U;
static volatile int32_t t69 = -31;
int32_t x298 = -7497797;
uint64_t x302 = 393294716407LLU;
uint64_t x303 = 803650205888LLU;
volatile int32_t t71 = 31;
volatile int32_t x307 = -1;
int16_t x310 = INT16_MIN;
int16_t x311 = -817;
static int16_t x314 = INT16_MIN;
volatile int32_t t74 = -574574768;
volatile uint8_t x319 = UINT8_MAX;
int64_t x329 = INT64_MIN;
int64_t x335 = INT64_MAX;
static uint32_t x344 = UINT32_MAX;
static volatile int32_t t80 = -2979359;
static int16_t x345 = 71;
int32_t x358 = 3;
volatile uint64_t x360 = 57400150281411LLU;
int32_t t85 = -3;
int32_t t86 = -21648155;
int8_t x376 = -1;
static uint64_t x378 = 5458096244588LLU;
int32_t x386 = INT32_MIN;
volatile int32_t t90 = -266202358;
int64_t x396 = -1LL;
uint8_t x397 = UINT8_MAX;
int64_t x401 = -1LL;
int8_t x407 = 3;
uint16_t x411 = 485U;
int32_t x412 = INT32_MIN;
static volatile int32_t t95 = 4033;
int32_t x415 = 5;
volatile int32_t t96 = -23;
volatile int32_t x417 = INT32_MIN;
int32_t t97 = -11598;
uint64_t x424 = 30LLU;
int32_t t98 = -211307410;
int16_t x425 = 129;
volatile int32_t x426 = 2683;
volatile uint32_t x428 = 61418U;
volatile int32_t t99 = -30662;


void f0(void) {
	int16_t x2 = -1;
	uint16_t x3 = 3096U;
	int8_t x4 = -1;
	volatile int32_t t0 = -379395622;

	t0 = (x1==((x2+x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x14 = 103;
	int8_t x15 = INT8_MAX;
	int16_t x16 = INT16_MIN;
	int32_t t1 = -3036;

	t1 = (x13==((x14+x15)==x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x17 = 502103;
	int8_t x18 = -14;
	volatile int64_t x20 = INT64_MIN;
	int32_t t2 = 2347258;

	t2 = (x17==((x18+x19)==x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x21 = INT8_MIN;
	int32_t x22 = INT32_MIN;
	int32_t x24 = -1;

	t3 = (x21==((x22+x23)==x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x26 = -6025;
	int16_t x27 = -17;
	static int32_t t4 = 31789;

	t4 = (x25==((x26+x27)==x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x29 = 2U;
	uint8_t x31 = 6U;
	uint64_t x32 = 2205491325861LLU;
	volatile int32_t t5 = -394462;

	t5 = (x29==((x30+x31)==x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x33 = -1;
	static int32_t x34 = INT32_MIN;
	int64_t x35 = -4461LL;
	int8_t x36 = INT8_MIN;
	volatile int32_t t6 = -108;

	t6 = (x33==((x34+x35)==x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x38 = -1782147877LL;
	static uint32_t x39 = 3386U;
	static volatile uint64_t x40 = 3755LLU;

	t7 = (x37==((x38+x39)==x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = INT8_MIN;
	int8_t x42 = -55;
	int16_t x43 = -1;
	uint8_t x44 = 49U;
	static int32_t t8 = 48584;

	t8 = (x41==((x42+x43)==x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x45 = INT64_MIN;
	uint32_t x48 = UINT32_MAX;
	static volatile int32_t t9 = -229447;

	t9 = (x45==((x46+x47)==x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = 1581LLU;
	uint64_t x50 = 908610LLU;
	int32_t x51 = -336726444;
	int32_t x52 = INT32_MIN;
	volatile int32_t t10 = 1460;

	t10 = (x49==((x50+x51)==x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x53 = UINT16_MAX;
	volatile uint32_t x56 = 3U;
	int32_t t11 = 30;

	t11 = (x53==((x54+x55)==x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = 95U;
	static uint32_t x58 = 16U;
	int32_t x59 = INT32_MIN;
	int8_t x60 = -13;
	volatile int32_t t12 = -3009749;

	t12 = (x57==((x58+x59)==x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MIN;
	int16_t x62 = INT16_MIN;
	int8_t x63 = INT8_MAX;
	volatile int32_t t13 = -1385;

	t13 = (x61==((x62+x63)==x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x65 = UINT16_MAX;
	volatile int32_t t14 = 7763705;

	t14 = (x65==((x66+x67)==x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x69 = -52540;
	int16_t x71 = INT16_MIN;
	uint32_t x72 = 1269134437U;
	volatile int32_t t15 = -6;

	t15 = (x69==((x70+x71)==x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x73 = INT64_MAX;
	int8_t x74 = -1;
	int16_t x75 = -1;
	static int16_t x76 = 4;
	static volatile int32_t t16 = 2466;

	t16 = (x73==((x74+x75)==x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = INT64_MIN;
	int32_t x79 = -6;
	volatile uint64_t x80 = 2609150809170LLU;
	volatile int32_t t17 = 0;

	t17 = (x77==((x78+x79)==x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x81 = UINT16_MAX;
	volatile int64_t x83 = -1LL;
	int32_t x84 = -1;

	t18 = (x81==((x82+x83)==x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = INT32_MIN;
	static volatile int16_t x86 = INT16_MIN;

	t19 = (x85==((x86+x87)==x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x90 = 1U;
	uint16_t x91 = 2906U;
	static int32_t t20 = -526;

	t20 = (x89==((x90+x91)==x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x93 = INT64_MIN;
	int16_t x94 = -7;
	int64_t x95 = -19968445113763038LL;
	static int64_t x96 = -178611170LL;
	int32_t t21 = 403;

	t21 = (x93==((x94+x95)==x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = INT64_MAX;
	uint32_t x98 = 61U;
	static int8_t x99 = 6;

	t22 = (x97==((x98+x99)==x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x102 = -1;
	int16_t x103 = -3;
	int32_t t23 = -1;

	t23 = (x101==((x102+x103)==x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = INT64_MIN;
	static int32_t x106 = INT32_MIN;
	int32_t x108 = -2968;
	volatile int32_t t24 = -686119547;

	t24 = (x105==((x106+x107)==x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = INT64_MAX;
	uint8_t x110 = 92U;
	uint16_t x111 = 22822U;
	int32_t t25 = 15;

	t25 = (x109==((x110+x111)==x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x113 = UINT16_MAX;
	int8_t x114 = INT8_MAX;
	volatile int16_t x115 = INT16_MIN;
	int8_t x116 = INT8_MAX;
	int32_t t26 = 2;

	t26 = (x113==((x114+x115)==x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = INT16_MAX;
	uint16_t x118 = 30U;
	int16_t x119 = -1;
	volatile int32_t x120 = INT32_MAX;
	static volatile int32_t t27 = 12;

	t27 = (x117==((x118+x119)==x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x121 = INT64_MIN;
	int16_t x122 = -1103;
	int8_t x123 = -1;
	int32_t x124 = INT32_MIN;

	t28 = (x121==((x122+x123)==x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x125 = UINT32_MAX;
	uint64_t x126 = 1980556729071LLU;
	int64_t x128 = -7LL;
	volatile int32_t t29 = -30715740;

	t29 = (x125==((x126+x127)==x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x129 = INT16_MIN;
	uint16_t x130 = UINT16_MAX;
	volatile int8_t x132 = 1;
	volatile int32_t t30 = 15254;

	t30 = (x129==((x130+x131)==x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x135 = INT16_MIN;
	int16_t x136 = 2343;
	volatile int32_t t31 = 215097;

	t31 = (x133==((x134+x135)==x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x137 = 47;
	volatile int32_t x138 = 249;
	int16_t x139 = 1;

	t32 = (x137==((x138+x139)==x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = -92278;
	uint32_t x142 = UINT32_MAX;
	uint8_t x143 = UINT8_MAX;
	volatile uint16_t x144 = 1409U;

	t33 = (x141==((x142+x143)==x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x146 = 5;
	int8_t x147 = -1;
	uint32_t x148 = 44U;
	volatile int32_t t34 = -366;

	t34 = (x145==((x146+x147)==x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = INT32_MIN;
	uint64_t x150 = 268014270420547712LLU;
	int16_t x151 = -1;
	int16_t x152 = 1;
	static volatile int32_t t35 = 14;

	t35 = (x149==((x150+x151)==x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = 1;
	uint64_t x154 = UINT64_MAX;
	uint16_t x156 = 13U;
	volatile int32_t t36 = 850;

	t36 = (x153==((x154+x155)==x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x157 = UINT16_MAX;
	int8_t x158 = INT8_MAX;
	static uint32_t x159 = 618406U;
	static int64_t x160 = INT64_MIN;
	int32_t t37 = -20086976;

	t37 = (x157==((x158+x159)==x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = INT8_MIN;
	int16_t x162 = INT16_MAX;
	int8_t x163 = 0;
	int64_t x164 = INT64_MIN;
	int32_t t38 = -886242528;

	t38 = (x161==((x162+x163)==x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x165 = UINT32_MAX;
	volatile int8_t x166 = -1;
	int16_t x167 = INT16_MIN;
	volatile int32_t t39 = 94824;

	t39 = (x165==((x166+x167)==x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x169 = 83181880LLU;
	static int8_t x170 = -1;
	int32_t x171 = 224559;
	static uint64_t x172 = UINT64_MAX;
	int32_t t40 = -31973;

	t40 = (x169==((x170+x171)==x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x173 = UINT64_MAX;
	int64_t x175 = 83288279321014LL;
	volatile int64_t x176 = -957954240794LL;
	volatile int32_t t41 = 0;

	t41 = (x173==((x174+x175)==x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = 8412329056387485LL;
	volatile uint8_t x178 = 94U;
	uint32_t x179 = UINT32_MAX;
	volatile int32_t x180 = 19810;

	t42 = (x177==((x178+x179)==x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x181 = INT32_MIN;
	static int8_t x182 = INT8_MIN;
	int64_t x183 = 36538452622LL;
	uint32_t x184 = 1818228U;
	int32_t t43 = -338186;

	t43 = (x181==((x182+x183)==x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x185 = 43U;
	uint16_t x188 = UINT16_MAX;
	int32_t t44 = -6157;

	t44 = (x185==((x186+x187)==x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x189 = 26;
	static uint16_t x190 = UINT16_MAX;
	volatile uint16_t x191 = 3U;
	int32_t t45 = 28;

	t45 = (x189==((x190+x191)==x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x193 = INT32_MIN;
	int32_t x194 = -1;
	int64_t x195 = -1867072508318137733LL;
	int32_t t46 = -126;

	t46 = (x193==((x194+x195)==x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x197 = 26LLU;
	int16_t x198 = -1;
	uint8_t x199 = 5U;
	int8_t x200 = INT8_MIN;
	volatile int32_t t47 = 0;

	t47 = (x197==((x198+x199)==x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = INT8_MIN;
	int64_t x203 = -3084279441481223621LL;
	int32_t t48 = 460729;

	t48 = (x201==((x202+x203)==x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = -1;
	int16_t x206 = INT16_MAX;
	uint8_t x207 = 41U;
	int16_t x208 = 2;

	t49 = (x205==((x206+x207)==x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x214 = UINT8_MAX;
	uint16_t x215 = 1740U;
	static uint8_t x216 = 5U;
	int32_t t50 = 24168742;

	t50 = (x213==((x214+x215)==x216));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x217 = INT8_MIN;
	uint16_t x218 = 86U;
	int8_t x219 = INT8_MAX;

	t51 = (x217==((x218+x219)==x220));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x221 = -1;
	uint32_t x222 = UINT32_MAX;
	int64_t x223 = INT64_MIN;
	volatile int64_t x224 = 14578560876795004LL;
	static int32_t t52 = -43728;

	t52 = (x221==((x222+x223)==x224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x225 = 11669;
	int32_t x226 = INT32_MIN;
	static int64_t x227 = -261255135LL;
	uint16_t x228 = 151U;
	volatile int32_t t53 = -16036097;

	t53 = (x225==((x226+x227)==x228));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x229 = UINT16_MAX;
	volatile int64_t x230 = INT64_MAX;
	int64_t x231 = INT64_MIN;

	t54 = (x229==((x230+x231)==x232));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x233 = INT8_MIN;
	int32_t x234 = INT32_MIN;
	static uint16_t x235 = 2171U;
	int64_t x236 = 2808997271539435990LL;

	t55 = (x233==((x234+x235)==x236));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x237 = 3304480290730LL;
	uint64_t x238 = 2710377717LLU;
	int16_t x239 = INT16_MIN;
	int32_t t56 = -1;

	t56 = (x237==((x238+x239)==x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x241 = 30U;
	static volatile int8_t x243 = 2;
	static int64_t x244 = INT64_MIN;
	static int32_t t57 = -5744251;

	t57 = (x241==((x242+x243)==x244));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x245 = INT32_MIN;
	uint32_t x246 = 1856098428U;
	uint64_t x247 = 1594910546013437600LLU;
	uint16_t x248 = 590U;
	int32_t t58 = -9999;

	t58 = (x245==((x246+x247)==x248));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x249 = UINT64_MAX;
	volatile int32_t x250 = -1;
	int16_t x251 = INT16_MIN;
	int32_t x252 = INT32_MIN;
	static int32_t t59 = 1129;

	t59 = (x249==((x250+x251)==x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x254 = 15;
	uint8_t x255 = 43U;

	t60 = (x253==((x254+x255)==x256));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x257 = UINT64_MAX;
	uint16_t x259 = 0U;
	int64_t x260 = -15383940113368328LL;
	volatile int32_t t61 = 11501478;

	t61 = (x257==((x258+x259)==x260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x263 = 0;
	volatile int64_t x264 = INT64_MIN;
	static int32_t t62 = 36;

	t62 = (x261==((x262+x263)==x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x265 = INT8_MIN;
	int8_t x266 = INT8_MIN;
	int8_t x267 = INT8_MIN;

	t63 = (x265==((x266+x267)==x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x273 = 2U;
	uint16_t x274 = UINT16_MAX;
	uint16_t x275 = UINT16_MAX;
	int64_t x276 = INT64_MIN;
	volatile int32_t t64 = 0;

	t64 = (x273==((x274+x275)==x276));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x277 = 663862236146988586LLU;
	int32_t x278 = INT32_MIN;
	static int8_t x280 = INT8_MIN;
	volatile int32_t t65 = 0;

	t65 = (x277==((x278+x279)==x280));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x281 = UINT16_MAX;
	int16_t x283 = -1;
	int8_t x284 = INT8_MAX;
	volatile int32_t t66 = 2625033;

	t66 = (x281==((x282+x283)==x284));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x285 = UINT32_MAX;
	int16_t x287 = INT16_MAX;
	static int64_t x288 = -1756256557LL;
	static int32_t t67 = 5;

	t67 = (x285==((x286+x287)==x288));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x289 = -1;
	volatile uint8_t x290 = UINT8_MAX;
	int8_t x291 = INT8_MIN;
	static uint16_t x292 = UINT16_MAX;
	static volatile int32_t t68 = -16378;

	t68 = (x289==((x290+x291)==x292));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x293 = 0U;
	int8_t x294 = INT8_MIN;
	uint32_t x295 = 5043U;
	int8_t x296 = -1;

	t69 = (x293==((x294+x295)==x296));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x297 = 0LLU;
	int32_t x299 = -15;
	uint8_t x300 = 23U;
	volatile int32_t t70 = -4059;

	t70 = (x297==((x298+x299)==x300));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x301 = 20347117LL;
	int32_t x304 = -1;

	t71 = (x301==((x302+x303)==x304));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x305 = UINT8_MAX;
	static int64_t x306 = -1LL;
	static volatile int32_t x308 = 760;
	int32_t t72 = 0;

	t72 = (x305==((x306+x307)==x308));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x309 = 65072;
	int16_t x312 = INT16_MIN;
	static volatile int32_t t73 = -7900;

	t73 = (x309==((x310+x311)==x312));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x313 = -4;
	uint16_t x315 = 2U;
	static int16_t x316 = INT16_MIN;

	t74 = (x313==((x314+x315)==x316));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x317 = INT32_MIN;
	uint32_t x318 = UINT32_MAX;
	static int32_t x320 = 39;
	static volatile int32_t t75 = 166;

	t75 = (x317==((x318+x319)==x320));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x321 = -1;
	volatile int8_t x322 = 59;
	int8_t x323 = 18;
	int16_t x324 = INT16_MIN;
	volatile int32_t t76 = 6884;

	t76 = (x321==((x322+x323)==x324));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x330 = -3173778446779088LL;
	uint32_t x331 = 10U;
	volatile uint16_t x332 = 879U;
	volatile int32_t t77 = 10965;

	t77 = (x329==((x330+x331)==x332));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x333 = 41983U;
	int64_t x334 = INT64_MIN;
	volatile int32_t x336 = -1;
	volatile int32_t t78 = 159;

	t78 = (x333==((x334+x335)==x336));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x337 = 1260695139U;
	static volatile int64_t x338 = INT64_MIN;
	int8_t x339 = INT8_MAX;
	int8_t x340 = -1;
	static volatile int32_t t79 = -451930980;

	t79 = (x337==((x338+x339)==x340));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x341 = 76U;
	static int8_t x342 = INT8_MIN;
	static volatile uint16_t x343 = 7058U;

	t80 = (x341==((x342+x343)==x344));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x346 = INT16_MAX;
	uint32_t x347 = 1180U;
	int32_t x348 = 443;
	volatile int32_t t81 = -4;

	t81 = (x345==((x346+x347)==x348));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x353 = INT16_MIN;
	volatile int32_t x354 = -1;
	static int16_t x355 = INT16_MIN;
	volatile uint32_t x356 = UINT32_MAX;
	volatile int32_t t82 = 421383189;

	t82 = (x353==((x354+x355)==x356));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x357 = UINT16_MAX;
	volatile uint64_t x359 = 13204497LLU;
	int32_t t83 = -1745;

	t83 = (x357==((x358+x359)==x360));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x361 = -1;
	uint16_t x362 = UINT16_MAX;
	int32_t x363 = -2;
	uint8_t x364 = 74U;
	int32_t t84 = -15250140;

	t84 = (x361==((x362+x363)==x364));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x365 = INT8_MAX;
	uint64_t x366 = 44413319966624LLU;
	int8_t x367 = -1;
	int32_t x368 = -2;

	t85 = (x365==((x366+x367)==x368));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x369 = INT64_MIN;
	int32_t x370 = -1;
	static int16_t x371 = -820;
	static int16_t x372 = INT16_MIN;

	t86 = (x369==((x370+x371)==x372));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x373 = INT64_MIN;
	int64_t x374 = INT64_MIN;
	volatile uint8_t x375 = UINT8_MAX;
	volatile int32_t t87 = 243;

	t87 = (x373==((x374+x375)==x376));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x377 = 17375055LL;
	uint8_t x379 = 13U;
	static int16_t x380 = -1;
	volatile int32_t t88 = -1;

	t88 = (x377==((x378+x379)==x380));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x381 = INT64_MIN;
	int32_t x382 = 7;
	uint64_t x383 = UINT64_MAX;
	int32_t x384 = INT32_MIN;
	static int32_t t89 = -55152;

	t89 = (x381==((x382+x383)==x384));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x385 = INT64_MIN;
	int64_t x387 = -327LL;
	int16_t x388 = -1;

	t90 = (x385==((x386+x387)==x388));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x393 = INT8_MIN;
	volatile int8_t x394 = INT8_MAX;
	static volatile uint8_t x395 = 1U;
	static volatile int32_t t91 = 70;

	t91 = (x393==((x394+x395)==x396));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x398 = 381U;
	static int8_t x399 = INT8_MAX;
	volatile int64_t x400 = INT64_MIN;
	static int32_t t92 = -702505;

	t92 = (x397==((x398+x399)==x400));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x402 = -1;
	uint16_t x403 = 10406U;
	int32_t x404 = INT32_MAX;
	int32_t t93 = 0;

	t93 = (x401==((x402+x403)==x404));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x405 = -1;
	uint16_t x406 = UINT16_MAX;
	int8_t x408 = -22;
	static int32_t t94 = -21893027;

	t94 = (x405==((x406+x407)==x408));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x409 = INT64_MIN;
	int8_t x410 = INT8_MIN;

	t95 = (x409==((x410+x411)==x412));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x413 = 575764434U;
	volatile int16_t x414 = -2547;
	uint32_t x416 = 285298U;

	t96 = (x413==((x414+x415)==x416));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x418 = -1;
	int8_t x419 = -52;
	int32_t x420 = 432;

	t97 = (x417==((x418+x419)==x420));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x421 = 4LL;
	static volatile int32_t x422 = 778888;
	static int32_t x423 = -1;

	t98 = (x421==((x422+x423)==x424));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x427 = 1947U;

	t99 = (x425==((x426+x427)==x428));

	if (t99 != 0) { NG(); } else { ; }
	
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

