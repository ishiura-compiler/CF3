#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x3 = 1;
static int32_t x4 = -15026449;
int16_t x6 = INT16_MIN;
int64_t x8 = INT64_MIN;
volatile uint64_t x9 = 553322369320289LLU;
volatile int8_t x13 = INT8_MAX;
static uint8_t x20 = 11U;
uint32_t x23 = 2561715U;
int8_t x26 = 0;
static int8_t x28 = -1;
volatile int8_t x30 = INT8_MIN;
static int64_t x34 = -2059340518968LL;
static int64_t x47 = INT64_MIN;
volatile int64_t x57 = INT64_MIN;
int16_t x60 = INT16_MIN;
volatile int32_t x61 = -1;
int32_t x63 = -1;
uint8_t x67 = UINT8_MAX;
static volatile int8_t x76 = 1;
int16_t x78 = -1;
int8_t x79 = INT8_MIN;
int64_t x85 = -1978623119LL;
int16_t x87 = -1;
int64_t x102 = INT64_MIN;
volatile int8_t x110 = INT8_MIN;
int32_t x113 = -1;
static int64_t x121 = INT64_MAX;
volatile int32_t t30 = -3;
int8_t x128 = INT8_MAX;
uint32_t x135 = UINT32_MAX;
uint64_t x137 = 52LLU;
uint16_t x138 = UINT16_MAX;
uint64_t x147 = 99671LLU;
volatile int8_t x162 = 1;
static volatile uint32_t x166 = UINT32_MAX;
static int32_t t42 = -4044576;
static int8_t x179 = INT8_MIN;
int16_t x180 = -1;
static volatile uint32_t x190 = 245U;
volatile int32_t t48 = -31;
volatile int32_t x200 = INT32_MIN;
int32_t x201 = -1;
static uint16_t x203 = 87U;
int8_t x207 = INT8_MAX;
static int16_t x208 = -1;
uint32_t x213 = 514402859U;
uint32_t x215 = 3760384U;
static volatile int32_t t54 = -1786;
static uint64_t x228 = UINT64_MAX;
int32_t t57 = 7152717;
uint64_t x248 = 15LLU;
static int16_t x249 = 0;
static int8_t x251 = -1;
int64_t x252 = -1LL;
uint16_t x254 = 13U;
volatile int32_t t63 = -160875;
volatile int8_t x257 = 1;
static uint32_t x259 = 503535U;
int32_t x264 = -131146;
static int32_t t65 = -8425078;
static volatile int64_t x265 = INT64_MIN;
int32_t x271 = INT32_MIN;
static uint64_t x277 = 1223856561329LLU;
static uint32_t x281 = UINT32_MAX;
volatile int32_t t70 = 19;
int16_t x286 = -1;
int16_t x290 = INT16_MIN;
int32_t t72 = -500249;
int32_t t73 = -101;
uint8_t x304 = UINT8_MAX;
int16_t x309 = -1;
static uint16_t x317 = UINT16_MAX;
static int8_t x321 = INT8_MIN;
static volatile int8_t x322 = -1;
uint16_t x324 = 7U;
static int64_t x326 = 2580048260321445LL;
volatile int32_t x332 = INT32_MIN;
static volatile int8_t x336 = -1;
int32_t x337 = 3159441;
int64_t x340 = -1LL;
static int8_t x342 = INT8_MIN;
static int16_t x345 = -2;
uint32_t x349 = UINT32_MAX;
uint16_t x351 = 109U;
volatile int16_t x352 = INT16_MIN;
volatile int32_t x356 = -248794;
uint16_t x360 = UINT16_MAX;
static int32_t t90 = 1721157;
int64_t x375 = -1LL;
volatile uint64_t x383 = 665850064025960271LLU;
volatile uint64_t x387 = UINT64_MAX;
int8_t x390 = INT8_MAX;
int64_t x393 = INT64_MAX;
int16_t x396 = -1;
volatile int32_t t98 = 112928;
int16_t x397 = -1;


void f0(void) {
	int64_t x1 = -133LL;
	volatile uint64_t x2 = 39LLU;
	int32_t t0 = -116358;

	t0 = (((x1<=x2)<=x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	static uint8_t x7 = 7U;
	int32_t t1 = 0;

	t1 = (((x5<=x6)<=x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MAX;
	int8_t x11 = -41;
	volatile int16_t x12 = -154;
	int32_t t2 = 872;

	t2 = (((x9<=x10)<=x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = 2LLU;
	static volatile int32_t x15 = INT32_MAX;
	volatile uint32_t x16 = 5115U;
	volatile int32_t t3 = -17;

	t3 = (((x13<=x14)<=x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 6U;
	volatile int64_t x18 = -1LL;
	uint8_t x19 = 30U;
	volatile int32_t t4 = 88864899;

	t4 = (((x17<=x18)<=x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = 192972;
	uint64_t x22 = 3916450255456445LLU;
	static uint16_t x24 = UINT16_MAX;
	volatile int32_t t5 = -47444;

	t5 = (((x21<=x22)<=x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 764;
	static int16_t x27 = -1;
	volatile int32_t t6 = -13;

	t6 = (((x25<=x26)<=x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -32;
	volatile uint16_t x31 = 6U;
	static int16_t x32 = -1;
	volatile int32_t t7 = 13517261;

	t7 = (((x29<=x30)<=x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	static uint8_t x35 = 1U;
	static int32_t x36 = INT32_MIN;
	volatile int32_t t8 = 30458;

	t8 = (((x33<=x34)<=x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int64_t x38 = INT64_MIN;
	volatile uint8_t x39 = 9U;
	int32_t x40 = 16;
	int32_t t9 = -246055621;

	t9 = (((x37<=x38)<=x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 14U;
	int32_t x42 = -1;
	static int8_t x43 = INT8_MAX;
	int64_t x44 = -39LL;
	int32_t t10 = 0;

	t10 = (((x41<=x42)<=x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 3;
	int16_t x46 = 2093;
	static volatile int32_t x48 = INT32_MIN;
	int32_t t11 = 248803;

	t11 = (((x45<=x46)<=x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	int64_t x50 = INT64_MIN;
	static volatile int64_t x51 = 386188312LL;
	volatile uint8_t x52 = UINT8_MAX;
	volatile int32_t t12 = -515079663;

	t12 = (((x49<=x50)<=x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	volatile int64_t x54 = INT64_MIN;
	int32_t x55 = INT32_MAX;
	volatile int32_t x56 = -2918;
	int32_t t13 = 435249;

	t13 = (((x53<=x54)<=x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = INT8_MAX;
	int8_t x59 = INT8_MIN;
	int32_t t14 = -1;

	t14 = (((x57<=x58)<=x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x62 = 252LLU;
	int32_t x64 = INT32_MAX;
	volatile int32_t t15 = 109622600;

	t15 = (((x61<=x62)<=x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 23U;
	int8_t x66 = -1;
	volatile uint16_t x68 = UINT16_MAX;
	volatile int32_t t16 = -53625;

	t16 = (((x65<=x66)<=x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x69 = UINT32_MAX;
	uint8_t x70 = 22U;
	int32_t x71 = INT32_MIN;
	uint16_t x72 = 20489U;
	volatile int32_t t17 = -5433045;

	t17 = (((x69<=x70)<=x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -2;
	static uint16_t x74 = UINT16_MAX;
	int16_t x75 = INT16_MIN;
	volatile int32_t t18 = -5882;

	t18 = (((x73<=x74)<=x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x77 = 30064011U;
	volatile uint64_t x80 = 8491814033871LLU;
	static volatile int32_t t19 = 5;

	t19 = (((x77<=x78)<=x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -33219316;
	int64_t x82 = INT64_MIN;
	int64_t x83 = INT64_MIN;
	int16_t x84 = INT16_MAX;
	int32_t t20 = 2;

	t20 = (((x81<=x82)<=x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = INT8_MIN;
	int32_t x88 = 13;
	static volatile int32_t t21 = -198532;

	t21 = (((x85<=x86)<=x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 63858845129113005LLU;
	uint64_t x90 = UINT64_MAX;
	uint32_t x91 = 117003096U;
	uint32_t x92 = 133U;
	volatile int32_t t22 = 56772074;

	t22 = (((x89<=x90)<=x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = -7;
	uint32_t x94 = 2U;
	int32_t x95 = -93683;
	uint16_t x96 = 4777U;
	volatile int32_t t23 = -3769343;

	t23 = (((x93<=x94)<=x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 15681U;
	int16_t x98 = INT16_MAX;
	volatile int16_t x99 = INT16_MIN;
	static uint16_t x100 = UINT16_MAX;
	volatile int32_t t24 = -22053064;

	t24 = (((x97<=x98)<=x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x101 = UINT64_MAX;
	int16_t x103 = -1;
	int64_t x104 = -1LL;
	int32_t t25 = 128;

	t25 = (((x101<=x102)<=x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = -3;
	static uint16_t x106 = 2U;
	int32_t x107 = INT32_MAX;
	int16_t x108 = -1;
	int32_t t26 = -274;

	t26 = (((x105<=x106)<=x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = UINT16_MAX;
	uint8_t x111 = 0U;
	int16_t x112 = 3;
	volatile int32_t t27 = -3568589;

	t27 = (((x109<=x110)<=x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x114 = INT8_MIN;
	int64_t x115 = 236288678311LL;
	static uint64_t x116 = 4898932LLU;
	int32_t t28 = -1357766;

	t28 = (((x113<=x114)<=x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x117 = -1;
	uint64_t x118 = 2314687165989LLU;
	volatile uint8_t x119 = 19U;
	uint8_t x120 = 55U;
	volatile int32_t t29 = 0;

	t29 = (((x117<=x118)<=x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = -1780390845794LL;
	uint64_t x123 = 57556985225542LLU;
	uint8_t x124 = UINT8_MAX;

	t30 = (((x121<=x122)<=x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -1LL;
	int64_t x126 = 113LL;
	int16_t x127 = INT16_MIN;
	int32_t t31 = -217457112;

	t31 = (((x125<=x126)<=x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = INT64_MAX;
	int16_t x130 = -1;
	int8_t x131 = -1;
	int64_t x132 = -1LL;
	static volatile int32_t t32 = 1;

	t32 = (((x129<=x130)<=x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	static int16_t x134 = INT16_MAX;
	volatile int16_t x136 = INT16_MIN;
	volatile int32_t t33 = 0;

	t33 = (((x133<=x134)<=x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x139 = 0;
	int32_t x140 = 12;
	static int32_t t34 = -21840854;

	t34 = (((x137<=x138)<=x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = INT16_MIN;
	uint8_t x142 = 3U;
	int64_t x143 = -1LL;
	int8_t x144 = INT8_MAX;
	volatile int32_t t35 = 127458653;

	t35 = (((x141<=x142)<=x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -1;
	uint64_t x146 = UINT64_MAX;
	uint16_t x148 = 4U;
	volatile int32_t t36 = 384;

	t36 = (((x145<=x146)<=x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 1660U;
	int32_t x150 = INT32_MIN;
	volatile uint64_t x151 = UINT64_MAX;
	int16_t x152 = -50;
	int32_t t37 = 37853;

	t37 = (((x149<=x150)<=x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 89328785816LLU;
	static volatile int64_t x154 = INT64_MAX;
	volatile uint16_t x155 = UINT16_MAX;
	uint8_t x156 = 3U;
	int32_t t38 = 27532;

	t38 = (((x153<=x154)<=x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 530333311LLU;
	volatile int64_t x158 = INT64_MIN;
	static int64_t x159 = 2221877624338223949LL;
	uint16_t x160 = 12702U;
	int32_t t39 = 127377791;

	t39 = (((x157<=x158)<=x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	uint8_t x163 = 29U;
	static int64_t x164 = INT64_MAX;
	int32_t t40 = -1;

	t40 = (((x161<=x162)<=x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 20777U;
	int8_t x167 = -1;
	uint16_t x168 = 2682U;
	int32_t t41 = 797404899;

	t41 = (((x165<=x166)<=x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	static int8_t x170 = 22;
	volatile int32_t x171 = INT32_MAX;
	volatile int16_t x172 = 24;

	t42 = (((x169<=x170)<=x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MAX;
	static uint8_t x174 = 0U;
	uint32_t x175 = UINT32_MAX;
	volatile int64_t x176 = INT64_MAX;
	volatile int32_t t43 = -5;

	t43 = (((x173<=x174)<=x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	static uint32_t x178 = 12252584U;
	static int32_t t44 = -78647;

	t44 = (((x177<=x178)<=x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	uint32_t x182 = 199798399U;
	uint8_t x183 = UINT8_MAX;
	volatile int8_t x184 = -1;
	volatile int32_t t45 = -1802;

	t45 = (((x181<=x182)<=x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x185 = 527U;
	static uint16_t x186 = UINT16_MAX;
	int8_t x187 = INT8_MAX;
	int32_t x188 = -1;
	volatile int32_t t46 = -11805241;

	t46 = (((x185<=x186)<=x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	static int16_t x191 = -1;
	static uint64_t x192 = UINT64_MAX;
	volatile int32_t t47 = -28436879;

	t47 = (((x189<=x190)<=x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 5506U;
	uint8_t x194 = UINT8_MAX;
	static volatile int8_t x195 = 57;
	int64_t x196 = INT64_MIN;

	t48 = (((x193<=x194)<=x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 38LLU;
	int16_t x198 = 230;
	volatile uint16_t x199 = 10U;
	int32_t t49 = -1113;

	t49 = (((x197<=x198)<=x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x202 = UINT64_MAX;
	volatile int16_t x204 = -1263;
	int32_t t50 = -120;

	t50 = (((x201<=x202)<=x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = 1;
	uint32_t x206 = 104712186U;
	int32_t t51 = 193000;

	t51 = (((x205<=x206)<=x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 106U;
	static uint64_t x210 = UINT64_MAX;
	uint32_t x211 = UINT32_MAX;
	int64_t x212 = -449267876356LL;
	volatile int32_t t52 = -520653021;

	t52 = (((x209<=x210)<=x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x214 = INT16_MAX;
	static volatile int64_t x216 = -1LL;
	int32_t t53 = 208376;

	t53 = (((x213<=x214)<=x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x217 = UINT64_MAX;
	int32_t x218 = 7514;
	static int64_t x219 = -8558639507LL;
	int64_t x220 = -6109757634LL;

	t54 = (((x217<=x218)<=x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -1LL;
	int64_t x222 = -18433384703LL;
	static int8_t x223 = INT8_MIN;
	volatile int8_t x224 = INT8_MAX;
	volatile int32_t t55 = 15;

	t55 = (((x221<=x222)<=x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = INT16_MIN;
	volatile uint64_t x226 = 285851754103633700LLU;
	volatile int16_t x227 = INT16_MAX;
	volatile int32_t t56 = 3935429;

	t56 = (((x225<=x226)<=x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = 98U;
	int64_t x230 = -3908288495813588065LL;
	int16_t x231 = INT16_MAX;
	int32_t x232 = INT32_MIN;

	t57 = (((x229<=x230)<=x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x233 = INT64_MAX;
	uint8_t x234 = 4U;
	volatile int64_t x235 = -52623667347005LL;
	int16_t x236 = INT16_MIN;
	static int32_t t58 = 200880484;

	t58 = (((x233<=x234)<=x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -1;
	uint8_t x238 = 7U;
	uint32_t x239 = 2U;
	int64_t x240 = INT64_MAX;
	int32_t t59 = 6094244;

	t59 = (((x237<=x238)<=x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -95770883;
	uint8_t x242 = 45U;
	volatile int8_t x243 = -1;
	int64_t x244 = -1LL;
	volatile int32_t t60 = 83344;

	t60 = (((x241<=x242)<=x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 12LLU;
	volatile uint8_t x246 = 7U;
	static uint64_t x247 = UINT64_MAX;
	volatile int32_t t61 = -42449;

	t61 = (((x245<=x246)<=x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x250 = INT8_MIN;
	static int32_t t62 = 103741;

	t62 = (((x249<=x250)<=x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x253 = 2;
	int16_t x255 = INT16_MAX;
	static int32_t x256 = INT32_MIN;

	t63 = (((x253<=x254)<=x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x258 = -524337632;
	int64_t x260 = INT64_MAX;
	int32_t t64 = 4;

	t64 = (((x257<=x258)<=x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -1;
	int16_t x262 = INT16_MIN;
	int16_t x263 = INT16_MAX;

	t65 = (((x261<=x262)<=x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x266 = -139;
	int32_t x267 = -1;
	int32_t x268 = 1230;
	volatile int32_t t66 = 1;

	t66 = (((x265<=x266)<=x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 12LLU;
	static int32_t x270 = INT32_MIN;
	int64_t x272 = -1LL;
	static int32_t t67 = 4077;

	t67 = (((x269<=x270)<=x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MIN;
	int64_t x274 = INT64_MIN;
	static int8_t x275 = INT8_MIN;
	uint16_t x276 = 1U;
	static volatile int32_t t68 = -5206780;

	t68 = (((x273<=x274)<=x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x278 = 1;
	volatile uint16_t x279 = 1U;
	static volatile int16_t x280 = 242;
	static int32_t t69 = -116;

	t69 = (((x277<=x278)<=x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x282 = 10737U;
	int16_t x283 = INT16_MIN;
	static int16_t x284 = 1070;

	t70 = (((x281<=x282)<=x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = UINT32_MAX;
	volatile uint32_t x287 = 1865382426U;
	int64_t x288 = -2205137LL;
	int32_t t71 = 12701;

	t71 = (((x285<=x286)<=x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MAX;
	uint32_t x291 = 161669U;
	int8_t x292 = -13;

	t72 = (((x289<=x290)<=x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	static int8_t x294 = -1;
	static int16_t x295 = -1;
	int64_t x296 = INT64_MAX;

	t73 = (((x293<=x294)<=x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x297 = -21LL;
	int32_t x298 = -1;
	int8_t x299 = INT8_MAX;
	int32_t x300 = INT32_MAX;
	static volatile int32_t t74 = 31426;

	t74 = (((x297<=x298)<=x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = -1719949746071370205LL;
	uint64_t x302 = UINT64_MAX;
	int8_t x303 = 39;
	volatile int32_t t75 = 1;

	t75 = (((x301<=x302)<=x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -3;
	int32_t x306 = -1;
	static uint32_t x307 = 15297U;
	int32_t x308 = -71;
	int32_t t76 = -6420;

	t76 = (((x305<=x306)<=x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x310 = 22;
	int16_t x311 = INT16_MAX;
	int32_t x312 = 105271758;
	int32_t t77 = 92;

	t77 = (((x309<=x310)<=x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 14658U;
	uint64_t x314 = UINT64_MAX;
	static int64_t x315 = -81287315274LL;
	int32_t x316 = -7416039;
	volatile int32_t t78 = -7358860;

	t78 = (((x313<=x314)<=x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x318 = 2;
	uint32_t x319 = 24U;
	uint16_t x320 = 5U;
	int32_t t79 = 46;

	t79 = (((x317<=x318)<=x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x323 = INT8_MAX;
	volatile int32_t t80 = 4188983;

	t80 = (((x321<=x322)<=x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	static int64_t x327 = INT64_MAX;
	int64_t x328 = INT64_MIN;
	volatile int32_t t81 = 57;

	t81 = (((x325<=x326)<=x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	int16_t x330 = 9;
	int32_t x331 = 7473144;
	volatile int32_t t82 = 1;

	t82 = (((x329<=x330)<=x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x333 = 21785802699455LLU;
	volatile uint8_t x334 = 16U;
	int64_t x335 = -292523115815299034LL;
	volatile int32_t t83 = 1232;

	t83 = (((x333<=x334)<=x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x338 = 0;
	volatile uint8_t x339 = 7U;
	int32_t t84 = -15588;

	t84 = (((x337<=x338)<=x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 25974609780443LLU;
	uint8_t x343 = 1U;
	volatile int32_t x344 = INT32_MAX;
	volatile int32_t t85 = 117;

	t85 = (((x341<=x342)<=x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x346 = -49882LL;
	int16_t x347 = -6634;
	static int8_t x348 = INT8_MAX;
	volatile int32_t t86 = 202540495;

	t86 = (((x345<=x346)<=x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x350 = -1;
	static volatile int32_t t87 = 0;

	t87 = (((x349<=x350)<=x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 11LLU;
	static volatile uint64_t x354 = 2363357186LLU;
	int8_t x355 = INT8_MAX;
	static int32_t t88 = -13;

	t88 = (((x353<=x354)<=x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	uint64_t x358 = 66673572776434LLU;
	static volatile int64_t x359 = INT64_MIN;
	int32_t t89 = -1;

	t89 = (((x357<=x358)<=x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x361 = 4430961LLU;
	int16_t x362 = -1;
	int8_t x363 = -1;
	uint16_t x364 = 13086U;

	t90 = (((x361<=x362)<=x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	int64_t x366 = -1LL;
	static int8_t x367 = -1;
	int16_t x368 = INT16_MIN;
	static volatile int32_t t91 = 120;

	t91 = (((x365<=x366)<=x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x369 = UINT16_MAX;
	int16_t x370 = INT16_MIN;
	int32_t x371 = -1;
	int16_t x372 = INT16_MIN;
	int32_t t92 = 489;

	t92 = (((x369<=x370)<=x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = UINT64_MAX;
	static int8_t x374 = 0;
	int16_t x376 = 0;
	volatile int32_t t93 = 297235;

	t93 = (((x373<=x374)<=x375)==x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 9U;
	int8_t x378 = -1;
	static int16_t x379 = INT16_MIN;
	static int8_t x380 = -22;
	int32_t t94 = 9353;

	t94 = (((x377<=x378)<=x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MAX;
	int16_t x382 = -1;
	uint64_t x384 = 47307LLU;
	volatile int32_t t95 = -5074;

	t95 = (((x381<=x382)<=x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x385 = 54909U;
	volatile int32_t x386 = INT32_MIN;
	uint16_t x388 = 55U;
	volatile int32_t t96 = 358152;

	t96 = (((x385<=x386)<=x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -567632744459181238LL;
	uint8_t x391 = 3U;
	volatile uint16_t x392 = 453U;
	volatile int32_t t97 = -7;

	t97 = (((x389<=x390)<=x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x394 = INT64_MIN;
	static int32_t x395 = -1;

	t98 = (((x393<=x394)<=x395)==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x398 = INT64_MIN;
	static int64_t x399 = INT64_MIN;
	int16_t x400 = -2;
	int32_t t99 = 205;

	t99 = (((x397<=x398)<=x399)==x400);

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

