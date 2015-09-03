#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x8 = 3U;
uint32_t x11 = 181498U;
volatile int32_t t2 = -1614322;
uint8_t x16 = 53U;
int32_t x17 = -896;
volatile uint16_t x19 = 1973U;
static volatile int64_t x20 = INT64_MAX;
volatile int32_t t6 = 1780189;
int8_t x29 = INT8_MAX;
int64_t x31 = INT64_MIN;
uint16_t x37 = 29U;
volatile uint32_t x46 = 5U;
int64_t x55 = INT64_MAX;
volatile int32_t t13 = 54547;
volatile uint64_t x59 = UINT64_MAX;
int64_t x60 = INT64_MAX;
int32_t x64 = INT32_MIN;
static int8_t x65 = INT8_MAX;
static uint8_t x68 = 3U;
static uint32_t x71 = 53053U;
volatile int32_t x72 = INT32_MIN;
volatile uint64_t x74 = 1481711541059912983LLU;
static volatile int64_t x83 = -763LL;
static int32_t x85 = -1;
volatile int64_t x103 = -1LL;
int32_t t25 = 22;
int16_t x114 = INT16_MIN;
volatile int32_t t28 = 0;
int32_t t29 = -17;
static volatile uint16_t x132 = UINT16_MAX;
uint16_t x137 = 21U;
static volatile int32_t t35 = 40949590;
uint64_t x147 = UINT64_MAX;
static int64_t x150 = INT64_MIN;
volatile int32_t t37 = -7952;
static volatile int32_t t39 = -1;
volatile uint32_t x161 = 8075744U;
static int16_t x164 = INT16_MIN;
static uint64_t x167 = UINT64_MAX;
int32_t t42 = -35;
int64_t x183 = -629303489193096253LL;
static volatile uint16_t x188 = 1U;
uint64_t x193 = 972206515454864374LLU;
uint16_t x195 = 113U;
int16_t x199 = -1;
uint8_t x207 = UINT8_MAX;
volatile int8_t x221 = -1;
int64_t x231 = INT64_MIN;
int32_t x233 = -11;
volatile int32_t x235 = INT32_MIN;
int16_t x236 = -1;
int8_t x238 = -1;
volatile int64_t x242 = INT64_MIN;
int32_t x247 = 878600220;
int64_t x248 = -147LL;
static int32_t t61 = -303927;
int16_t x249 = INT16_MAX;
static int32_t x262 = INT32_MIN;
uint64_t x266 = 5LLU;
int32_t x272 = 17516663;
int32_t x276 = -1;
static int16_t x283 = INT16_MIN;
volatile int32_t t70 = 3;
uint16_t x285 = 9765U;
static uint8_t x286 = 13U;
int32_t t72 = 223;
volatile int32_t t76 = -6778408;
volatile int64_t x309 = INT64_MAX;
int64_t x310 = INT64_MAX;
int32_t t77 = -192;
static int64_t x316 = INT64_MIN;
static int8_t x324 = -1;
uint8_t x336 = 27U;
int32_t x351 = INT32_MIN;
int32_t x361 = INT32_MIN;
volatile int64_t x363 = INT64_MIN;
volatile int32_t t90 = 197608;
int32_t x365 = -1;
int32_t x366 = INT32_MIN;
int32_t x368 = INT32_MAX;
volatile int32_t t91 = -181;
uint64_t x373 = 6LLU;
volatile int32_t t94 = -672;
int16_t x383 = INT16_MAX;
int8_t x391 = -3;
uint8_t x393 = 0U;
int16_t x399 = -1;
uint32_t x400 = 246569078U;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int32_t x2 = INT32_MAX;
	static uint16_t x3 = 0U;
	static int16_t x4 = 0;
	volatile int32_t t0 = -820;

	t0 = ((x1|x2)<(x3==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -530517009553640LL;
	uint32_t x6 = 87718U;
	int16_t x7 = -2731;
	int32_t t1 = 6419;

	t1 = ((x5|x6)<(x7==x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MIN;
	static int64_t x10 = -61438489935LL;
	int16_t x12 = -1;

	t2 = ((x9|x10)<(x11==x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	uint8_t x14 = 0U;
	static int64_t x15 = -100924671938976853LL;
	volatile int32_t t3 = -65698;

	t3 = ((x13|x14)<(x15==x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x18 = 2U;
	volatile int32_t t4 = -198036265;

	t4 = ((x17|x18)<(x19==x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x21 = UINT16_MAX;
	volatile uint64_t x22 = UINT64_MAX;
	int8_t x23 = -1;
	volatile int32_t x24 = -22;
	volatile int32_t t5 = -237952;

	t5 = ((x21|x22)<(x23==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = 194505;
	int32_t x26 = -82047;
	volatile int8_t x27 = -1;
	int64_t x28 = -1LL;

	t6 = ((x25|x26)<(x27==x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x30 = 10797U;
	uint32_t x32 = UINT32_MAX;
	volatile int32_t t7 = -109;

	t7 = ((x29|x30)<(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x33 = 0U;
	volatile int16_t x34 = 49;
	int8_t x35 = INT8_MAX;
	volatile uint64_t x36 = 124646874847LLU;
	volatile int32_t t8 = -129677250;

	t8 = ((x33|x34)<(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x38 = 1774;
	int8_t x39 = -1;
	uint16_t x40 = 1611U;
	volatile int32_t t9 = 16067;

	t9 = ((x37|x38)<(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 108830990U;
	uint16_t x42 = UINT16_MAX;
	uint64_t x43 = UINT64_MAX;
	uint32_t x44 = UINT32_MAX;
	volatile int32_t t10 = -145676095;

	t10 = ((x41|x42)<(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 15U;
	int8_t x47 = -1;
	volatile int32_t x48 = INT32_MAX;
	static int32_t t11 = 0;

	t11 = ((x45|x46)<(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	static volatile uint32_t x50 = 2764U;
	static int64_t x51 = INT64_MIN;
	uint8_t x52 = 3U;
	volatile int32_t t12 = 225775922;

	t12 = ((x49|x50)<(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	int32_t x54 = INT32_MIN;
	uint64_t x56 = UINT64_MAX;

	t13 = ((x53|x54)<(x55==x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = -43;
	volatile int16_t x58 = INT16_MAX;
	int32_t t14 = -56250175;

	t14 = ((x57|x58)<(x59==x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = 1;
	int8_t x62 = -1;
	int16_t x63 = INT16_MIN;
	static volatile int32_t t15 = -721128;

	t15 = ((x61|x62)<(x63==x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x66 = UINT64_MAX;
	int8_t x67 = -1;
	int32_t t16 = 43212;

	t16 = ((x65|x66)<(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MAX;
	static volatile uint8_t x70 = 26U;
	volatile int32_t t17 = -81;

	t17 = ((x69|x70)<(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = INT64_MAX;
	int64_t x75 = INT64_MIN;
	volatile uint32_t x76 = 2U;
	static volatile int32_t t18 = 49350781;

	t18 = ((x73|x74)<(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MAX;
	static uint8_t x78 = 85U;
	volatile int32_t x79 = INT32_MAX;
	int8_t x80 = INT8_MIN;
	volatile int32_t t19 = -59;

	t19 = ((x77|x78)<(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = -1LL;
	static uint64_t x82 = 216519678249413757LLU;
	static uint64_t x84 = 5848249830547328LLU;
	volatile int32_t t20 = -6266;

	t20 = ((x81|x82)<(x83==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = INT16_MIN;
	int64_t x87 = INT64_MIN;
	volatile uint16_t x88 = 5U;
	static int32_t t21 = -6983416;

	t21 = ((x85|x86)<(x87==x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = UINT8_MAX;
	int8_t x90 = INT8_MIN;
	uint16_t x91 = 1U;
	int64_t x92 = 1685011969594LL;
	static volatile int32_t t22 = 4015791;

	t22 = ((x89|x90)<(x91==x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x93 = 29905922U;
	static int32_t x94 = 7575;
	static volatile uint8_t x95 = 0U;
	int8_t x96 = 39;
	volatile int32_t t23 = 131;

	t23 = ((x93|x94)<(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 53698U;
	int8_t x98 = 29;
	int8_t x99 = INT8_MIN;
	static uint8_t x100 = UINT8_MAX;
	static volatile int32_t t24 = 852640;

	t24 = ((x97|x98)<(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = UINT8_MAX;
	int64_t x102 = -63805914438985152LL;
	int64_t x104 = -201078982767167LL;

	t25 = ((x101|x102)<(x103==x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	volatile int8_t x106 = INT8_MIN;
	static int8_t x107 = 4;
	int64_t x108 = INT64_MAX;
	volatile int32_t t26 = 24884;

	t26 = ((x105|x106)<(x107==x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 2005U;
	int32_t x110 = 1;
	static int32_t x111 = INT32_MIN;
	int64_t x112 = INT64_MAX;
	volatile int32_t t27 = -2;

	t27 = ((x109|x110)<(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x113 = INT32_MIN;
	int8_t x115 = INT8_MAX;
	int8_t x116 = -1;

	t28 = ((x113|x114)<(x115==x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = 0;
	int32_t x118 = INT32_MAX;
	volatile int64_t x119 = 57090732465709LL;
	volatile int8_t x120 = 13;

	t29 = ((x117|x118)<(x119==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x121 = 143393916342864082LLU;
	volatile uint8_t x122 = UINT8_MAX;
	uint64_t x123 = 77283921850297353LLU;
	volatile int32_t x124 = -1;
	static int32_t t30 = 72923945;

	t30 = ((x121|x122)<(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = INT32_MAX;
	int32_t x126 = -1;
	volatile int32_t x127 = INT32_MIN;
	int32_t x128 = INT32_MIN;
	int32_t t31 = -1349988;

	t31 = ((x125|x126)<(x127==x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x129 = 29572U;
	static volatile int8_t x130 = INT8_MAX;
	volatile int64_t x131 = INT64_MIN;
	int32_t t32 = -31104131;

	t32 = ((x129|x130)<(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 199U;
	int16_t x134 = 27;
	uint32_t x135 = 11U;
	int16_t x136 = INT16_MAX;
	volatile int32_t t33 = 1596;

	t33 = ((x133|x134)<(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x138 = -62;
	uint64_t x139 = 10LLU;
	static int64_t x140 = -83271014149LL;
	int32_t t34 = 36;

	t34 = ((x137|x138)<(x139==x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = 29609902016LL;
	uint8_t x142 = 67U;
	static int64_t x143 = INT64_MAX;
	uint8_t x144 = 36U;

	t35 = ((x141|x142)<(x143==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = 1135823;
	int64_t x146 = -1LL;
	int16_t x148 = -1;
	int32_t t36 = -142263501;

	t36 = ((x145|x146)<(x147==x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x149 = INT8_MAX;
	uint16_t x151 = 8009U;
	int16_t x152 = INT16_MIN;

	t37 = ((x149|x150)<(x151==x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = INT16_MAX;
	uint64_t x154 = UINT64_MAX;
	uint64_t x155 = UINT64_MAX;
	volatile int64_t x156 = 8LL;
	int32_t t38 = 913782091;

	t38 = ((x153|x154)<(x155==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	int32_t x158 = INT32_MIN;
	int32_t x159 = INT32_MIN;
	static volatile int16_t x160 = INT16_MIN;

	t39 = ((x157|x158)<(x159==x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x162 = UINT64_MAX;
	static volatile int8_t x163 = -1;
	volatile int32_t t40 = 261946706;

	t40 = ((x161|x162)<(x163==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 56U;
	volatile int64_t x166 = 45833768549262LL;
	uint64_t x168 = 58001037357LLU;
	volatile int32_t t41 = -1782;

	t41 = ((x165|x166)<(x167==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 4193630068647348LLU;
	uint32_t x170 = UINT32_MAX;
	int32_t x171 = 1579;
	int8_t x172 = 14;

	t42 = ((x169|x170)<(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -1;
	volatile int8_t x174 = -1;
	static int16_t x175 = INT16_MIN;
	int16_t x176 = -1026;
	int32_t t43 = 1004;

	t43 = ((x173|x174)<(x175==x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 20975446442311LLU;
	uint32_t x178 = UINT32_MAX;
	volatile int8_t x179 = INT8_MIN;
	int32_t x180 = INT32_MAX;
	int32_t t44 = -77059;

	t44 = ((x177|x178)<(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MAX;
	static int64_t x182 = INT64_MIN;
	int32_t x184 = INT32_MIN;
	int32_t t45 = -1;

	t45 = ((x181|x182)<(x183==x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 26U;
	volatile int8_t x186 = INT8_MIN;
	int16_t x187 = INT16_MIN;
	volatile int32_t t46 = 4051;

	t46 = ((x185|x186)<(x187==x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 327651391514289296LLU;
	int16_t x190 = INT16_MAX;
	static int32_t x191 = INT32_MIN;
	int64_t x192 = 4065767126289LL;
	static int32_t t47 = -974038;

	t47 = ((x189|x190)<(x191==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x194 = INT8_MIN;
	volatile int32_t x196 = -1;
	int32_t t48 = -1;

	t48 = ((x193|x194)<(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MAX;
	int8_t x198 = -1;
	uint32_t x200 = 695341U;
	static volatile int32_t t49 = -1;

	t49 = ((x197|x198)<(x199==x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x201 = 30U;
	int16_t x202 = INT16_MAX;
	int64_t x203 = INT64_MAX;
	int64_t x204 = -11970382242669LL;
	int32_t t50 = -1157632;

	t50 = ((x201|x202)<(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 3U;
	static int16_t x206 = -1;
	int64_t x208 = INT64_MIN;
	volatile int32_t t51 = -1156;

	t51 = ((x205|x206)<(x207==x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -1115256425683LL;
	int8_t x210 = INT8_MIN;
	int8_t x211 = INT8_MIN;
	static int8_t x212 = INT8_MIN;
	int32_t t52 = 859;

	t52 = ((x209|x210)<(x211==x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 59U;
	uint32_t x214 = 12192U;
	static uint8_t x215 = 59U;
	int32_t x216 = INT32_MIN;
	volatile int32_t t53 = -2661568;

	t53 = ((x213|x214)<(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	uint64_t x218 = UINT64_MAX;
	int8_t x219 = INT8_MAX;
	int16_t x220 = -1;
	static volatile int32_t t54 = 13966;

	t54 = ((x217|x218)<(x219==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x222 = -1;
	static uint64_t x223 = 12865851LLU;
	int64_t x224 = INT64_MIN;
	static int32_t t55 = 634;

	t55 = ((x221|x222)<(x223==x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x225 = 428653638973LLU;
	volatile int16_t x226 = INT16_MIN;
	int16_t x227 = INT16_MAX;
	int8_t x228 = INT8_MIN;
	volatile int32_t t56 = -13200;

	t56 = ((x225|x226)<(x227==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = UINT32_MAX;
	static int8_t x230 = 1;
	int32_t x232 = 8856152;
	int32_t t57 = -46500236;

	t57 = ((x229|x230)<(x231==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x234 = -1;
	int32_t t58 = 1380732;

	t58 = ((x233|x234)<(x235==x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 56U;
	uint64_t x239 = 1314039677614LLU;
	volatile uint8_t x240 = UINT8_MAX;
	volatile int32_t t59 = 1686;

	t59 = ((x237|x238)<(x239==x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = INT64_MIN;
	uint32_t x243 = 815586787U;
	static uint32_t x244 = 115464709U;
	int32_t t60 = 116463162;

	t60 = ((x241|x242)<(x243==x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -1;
	volatile int32_t x246 = 4510772;

	t61 = ((x245|x246)<(x247==x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x250 = UINT32_MAX;
	volatile uint64_t x251 = UINT64_MAX;
	volatile int32_t x252 = 39319;
	int32_t t62 = 1967407;

	t62 = ((x249|x250)<(x251==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -30;
	static int16_t x254 = 2040;
	static volatile int64_t x255 = -94LL;
	int16_t x256 = INT16_MAX;
	int32_t t63 = 96877440;

	t63 = ((x253|x254)<(x255==x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 1U;
	int16_t x258 = -962;
	volatile uint64_t x259 = 1028706178840LLU;
	int64_t x260 = -294LL;
	int32_t t64 = -439913031;

	t64 = ((x257|x258)<(x259==x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 1U;
	static volatile int16_t x263 = INT16_MIN;
	static int64_t x264 = INT64_MAX;
	static int32_t t65 = -177197237;

	t65 = ((x261|x262)<(x263==x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -2811;
	uint64_t x267 = 438519469439664LLU;
	int16_t x268 = INT16_MIN;
	volatile int32_t t66 = 108636881;

	t66 = ((x265|x266)<(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x269 = 39U;
	int32_t x270 = INT32_MAX;
	static int16_t x271 = -726;
	static int32_t t67 = -27;

	t67 = ((x269|x270)<(x271==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 7LLU;
	volatile uint32_t x274 = 11289943U;
	int16_t x275 = INT16_MIN;
	int32_t t68 = -2842061;

	t68 = ((x273|x274)<(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	uint16_t x278 = 61U;
	volatile int64_t x279 = -1042613919900LL;
	int64_t x280 = -1719853433505604782LL;
	int32_t t69 = 5073844;

	t69 = ((x277|x278)<(x279==x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = UINT16_MAX;
	int32_t x282 = INT32_MIN;
	volatile int64_t x284 = -234LL;

	t70 = ((x281|x282)<(x283==x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x287 = UINT32_MAX;
	int16_t x288 = INT16_MIN;
	int32_t t71 = -308;

	t71 = ((x285|x286)<(x287==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MAX;
	static int32_t x290 = -60663796;
	static int8_t x291 = -1;
	int64_t x292 = INT64_MIN;

	t72 = ((x289|x290)<(x291==x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = UINT64_MAX;
	static int16_t x294 = INT16_MIN;
	int8_t x295 = INT8_MAX;
	static uint64_t x296 = UINT64_MAX;
	volatile int32_t t73 = 497;

	t73 = ((x293|x294)<(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	int32_t x298 = INT32_MIN;
	int64_t x299 = INT64_MAX;
	int8_t x300 = 3;
	int32_t t74 = -382488;

	t74 = ((x297|x298)<(x299==x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 7411372252876489023LLU;
	int64_t x302 = 22437468049389LL;
	uint32_t x303 = UINT32_MAX;
	int8_t x304 = -1;
	volatile int32_t t75 = 644;

	t75 = ((x301|x302)<(x303==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x305 = 2;
	volatile int32_t x306 = 0;
	int8_t x307 = INT8_MAX;
	int64_t x308 = INT64_MIN;

	t76 = ((x305|x306)<(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x311 = INT8_MIN;
	int16_t x312 = INT16_MIN;

	t77 = ((x309|x310)<(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MAX;
	uint16_t x314 = UINT16_MAX;
	int8_t x315 = -53;
	static int32_t t78 = 1003769;

	t78 = ((x313|x314)<(x315==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x317 = 5U;
	volatile int32_t x318 = -1310;
	int32_t x319 = INT32_MIN;
	int64_t x320 = -706LL;
	int32_t t79 = 2879873;

	t79 = ((x317|x318)<(x319==x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 40707292LLU;
	uint64_t x322 = UINT64_MAX;
	int16_t x323 = -1;
	int32_t t80 = 1221;

	t80 = ((x321|x322)<(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MAX;
	static uint64_t x326 = 432032416082544796LLU;
	uint16_t x327 = UINT16_MAX;
	uint32_t x328 = 1573258U;
	volatile int32_t t81 = 2;

	t81 = ((x325|x326)<(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 0U;
	int16_t x330 = 4968;
	static uint64_t x331 = 3591492373016087LLU;
	int32_t x332 = INT32_MIN;
	int32_t t82 = -200;

	t82 = ((x329|x330)<(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x333 = UINT8_MAX;
	int16_t x334 = INT16_MAX;
	static int16_t x335 = INT16_MIN;
	volatile int32_t t83 = -5522;

	t83 = ((x333|x334)<(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MAX;
	volatile int64_t x338 = 3493961022656LL;
	int64_t x339 = -1LL;
	int16_t x340 = INT16_MAX;
	int32_t t84 = 234094;

	t84 = ((x337|x338)<(x339==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	static int8_t x342 = 0;
	static uint16_t x343 = UINT16_MAX;
	int32_t x344 = INT32_MIN;
	int32_t t85 = 1884539;

	t85 = ((x341|x342)<(x343==x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	int64_t x346 = 1049LL;
	static int32_t x347 = INT32_MAX;
	volatile int8_t x348 = INT8_MIN;
	int32_t t86 = -109044;

	t86 = ((x345|x346)<(x347==x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	int64_t x350 = -1LL;
	uint16_t x352 = 56U;
	volatile int32_t t87 = -4207726;

	t87 = ((x349|x350)<(x351==x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = -1;
	int64_t x354 = INT64_MIN;
	int64_t x355 = INT64_MIN;
	uint32_t x356 = UINT32_MAX;
	int32_t t88 = 701944;

	t88 = ((x353|x354)<(x355==x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	static int32_t x358 = INT32_MAX;
	int32_t x359 = 2956;
	volatile uint8_t x360 = 66U;
	volatile int32_t t89 = 115567741;

	t89 = ((x357|x358)<(x359==x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x362 = -1;
	uint8_t x364 = 0U;

	t90 = ((x361|x362)<(x363==x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x367 = INT16_MIN;

	t91 = ((x365|x366)<(x367==x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = 20;
	static int64_t x370 = -10847518LL;
	int64_t x371 = -2423110177837LL;
	int16_t x372 = INT16_MIN;
	int32_t t92 = 72892359;

	t92 = ((x369|x370)<(x371==x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x374 = -1;
	static volatile int32_t x375 = INT32_MIN;
	int16_t x376 = INT16_MIN;
	int32_t t93 = -4083;

	t93 = ((x373|x374)<(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	static uint64_t x378 = UINT64_MAX;
	int32_t x379 = -20301;
	uint32_t x380 = 32U;

	t94 = ((x377|x378)<(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = -6;
	static int64_t x382 = 0LL;
	int64_t x384 = INT64_MAX;
	volatile int32_t t95 = 14285899;

	t95 = ((x381|x382)<(x383==x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = INT16_MIN;
	int64_t x386 = INT64_MAX;
	volatile int32_t x387 = -1;
	volatile uint16_t x388 = 0U;
	int32_t t96 = 14;

	t96 = ((x385|x386)<(x387==x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x389 = 3791U;
	volatile int8_t x390 = INT8_MAX;
	volatile uint64_t x392 = UINT64_MAX;
	volatile int32_t t97 = -9942187;

	t97 = ((x389|x390)<(x391==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x394 = -1LL;
	volatile int64_t x395 = -1399128LL;
	int32_t x396 = 9816058;
	int32_t t98 = 15074;

	t98 = ((x393|x394)<(x395==x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x397 = UINT32_MAX;
	volatile int32_t x398 = INT32_MIN;
	int32_t t99 = -2;

	t99 = ((x397|x398)<(x399==x400));

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

