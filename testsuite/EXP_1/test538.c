#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = 81123;
uint8_t x12 = 26U;
static volatile uint64_t t1 = 9705387342LLU;
uint32_t x14 = 6865734U;
int16_t x21 = INT16_MIN;
int8_t x22 = -1;
int32_t x29 = INT32_MAX;
static int16_t x37 = -101;
int16_t x39 = INT16_MAX;
volatile int32_t t8 = 102926445;
uint8_t x54 = 5U;
volatile int16_t x56 = -1;
static int8_t x58 = INT8_MAX;
volatile int64_t x63 = -1LL;
int16_t x64 = -39;
uint8_t x68 = 5U;
volatile uint32_t t14 = 1761340686U;
int32_t t15 = 623057;
uint16_t x76 = 22808U;
volatile uint8_t x80 = UINT8_MAX;
volatile int8_t x82 = INT8_MAX;
int16_t x87 = -1;
int64_t x94 = -1LL;
static int64_t x95 = -573871003531LL;
static uint8_t x98 = 2U;
uint32_t x106 = UINT32_MAX;
volatile uint32_t t24 = 30718174U;
uint8_t x110 = 30U;
int16_t x113 = -1;
int64_t x114 = -1LL;
int32_t x115 = INT32_MIN;
static int64_t x124 = 3416LL;
int8_t x125 = 7;
static int32_t x128 = INT32_MIN;
volatile int32_t t28 = -236160557;
static uint32_t x129 = UINT32_MAX;
static volatile int64_t t30 = -177336315LL;
int8_t x144 = INT8_MIN;
int32_t x145 = INT32_MIN;
uint32_t x147 = 31U;
int64_t x149 = -1LL;
static uint8_t x156 = 1U;
int16_t x163 = -111;
uint64_t t37 = 62624974486455043LLU;
volatile int16_t x167 = 1;
volatile uint64_t t38 = 440110071289LLU;
uint32_t t39 = 1U;
int16_t x173 = 1;
static volatile int64_t x175 = INT64_MIN;
static uint16_t x180 = 1U;
static volatile int32_t t42 = -47;
int64_t x185 = 101855LL;
static int16_t x186 = INT16_MIN;
volatile int32_t x187 = INT32_MAX;
int64_t t43 = 1733882389156361LL;
uint16_t x194 = 13301U;
int32_t x201 = -249;
static volatile int64_t x204 = INT64_MIN;
int8_t x205 = -18;
uint8_t x213 = UINT8_MAX;
static int64_t x222 = -49297158LL;
int8_t x224 = -1;
static int64_t x225 = 124LL;
volatile uint8_t x229 = 6U;
uint32_t x236 = UINT32_MAX;
uint32_t t53 = 78551438U;
uint8_t x239 = 3U;
int64_t x244 = 300LL;
uint32_t x263 = UINT32_MAX;
volatile int64_t t60 = -90027924131972958LL;
int16_t x265 = 22;
int32_t x279 = 26;
int32_t x284 = INT32_MAX;
int64_t t63 = 95515866046625185LL;
static int8_t x288 = -1;
static uint64_t t64 = 93LLU;
static uint64_t x290 = 101901638683593327LLU;
volatile uint64_t x292 = 752848935515428038LLU;
int16_t x295 = -1;
static int32_t x296 = INT32_MIN;
static int16_t x317 = -1;
volatile int64_t x324 = INT64_MIN;
uint16_t x332 = 2U;
int64_t t73 = 10435LL;
volatile int8_t x337 = INT8_MIN;
uint64_t x342 = 53427LLU;
int32_t x345 = INT32_MIN;
static uint8_t x347 = 8U;
static uint64_t x348 = 181254145389LLU;
int8_t x352 = -1;
volatile int64_t t81 = -96322219054749113LL;
static volatile uint64_t t82 = 29041938LLU;
uint16_t x373 = 52U;
static int16_t x383 = INT16_MIN;
static int32_t t86 = -5373;
volatile int64_t t87 = -325121321LL;
int32_t x397 = INT32_MAX;
uint32_t x398 = 198U;
volatile int64_t t89 = -6LL;
int64_t x409 = INT64_MIN;
uint32_t x418 = 92186430U;
static int64_t x419 = INT64_MIN;
static volatile int64_t t92 = -15744166551LL;
int16_t x425 = 1;
int8_t x445 = INT8_MAX;
int64_t t97 = 380706445LL;
int32_t t98 = 1;
int64_t x457 = -1LL;
int8_t x458 = INT8_MIN;
volatile int32_t x459 = INT32_MAX;
volatile uint32_t x460 = UINT32_MAX;


void f0(void) {
	uint64_t x6 = 27309184316348968LLU;
	static uint32_t x7 = 193511378U;
	int32_t x8 = INT32_MAX;
	volatile uint64_t t0 = 159LLU;

	t0 = (((x5/x6)*x7)%x8);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = 46;
	uint64_t x10 = UINT64_MAX;
	int16_t x11 = INT16_MIN;

	t1 = (((x9/x10)*x11)%x12);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x13 = 87472793LLU;
	int8_t x15 = -51;
	volatile uint16_t x16 = 114U;
	uint64_t t2 = 450636480350411LLU;

	t2 = (((x13/x14)*x15)%x16);

	if (t2 != 70LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = UINT8_MAX;
	static int8_t x18 = 1;
	static int16_t x19 = -1;
	static uint64_t x20 = UINT64_MAX;
	volatile uint64_t t3 = 3829131929LLU;

	t3 = (((x17/x18)*x19)%x20);

	if (t3 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x23 = INT16_MIN;
	int32_t x24 = INT32_MIN;
	volatile int32_t t4 = 3423;

	t4 = (((x21/x22)*x23)%x24);

	if (t4 != -1073741824) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -77;
	int64_t x26 = INT64_MIN;
	int64_t x27 = -150007LL;
	int64_t x28 = -1LL;
	volatile int64_t t5 = -1157578179821642839LL;

	t5 = (((x25/x26)*x27)%x28);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x30 = -5;
	volatile int32_t x31 = -1;
	uint8_t x32 = UINT8_MAX;
	static int32_t t6 = 8999823;

	t6 = (((x29/x30)*x31)%x32);

	if (t6 != 229) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MIN;
	volatile uint8_t x34 = UINT8_MAX;
	uint16_t x35 = UINT16_MAX;
	uint32_t x36 = 53658097U;
	static volatile uint32_t t7 = 118U;

	t7 = (((x33/x34)*x35)%x36);

	if (t7 != 47589153U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x38 = -24069905;
	uint8_t x40 = 43U;

	t8 = (((x37/x38)*x39)%x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = INT64_MAX;
	volatile int16_t x46 = INT16_MAX;
	uint64_t x47 = UINT64_MAX;
	static volatile int64_t x48 = INT64_MIN;
	volatile uint64_t t9 = 52098761521786113LLU;

	t9 = (((x45/x46)*x47)%x48);

	if (t9 != 9223090553287868408LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = INT32_MIN;
	uint16_t x50 = UINT16_MAX;
	volatile int16_t x51 = INT16_MIN;
	uint8_t x52 = UINT8_MAX;
	int32_t t10 = 6;

	t10 = (((x49/x50)*x51)%x52);

	if (t10 != 64) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MAX;
	int16_t x55 = -1;
	volatile int32_t t11 = 5825;

	t11 = (((x53/x54)*x55)%x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x57 = 242992995085370LLU;
	uint32_t x59 = 75U;
	int8_t x60 = INT8_MAX;
	static uint64_t t12 = 12036886LLU;

	t12 = (((x57/x58)*x59)%x60);

	if (t12 != 3LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x61 = INT16_MAX;
	volatile int32_t x62 = -665958633;
	static volatile int64_t t13 = 2429714503436LL;

	t13 = (((x61/x62)*x63)%x64);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = 2U;
	static int8_t x66 = 6;
	volatile int16_t x67 = 1;

	t14 = (((x65/x66)*x67)%x68);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x69 = UINT16_MAX;
	uint8_t x70 = 2U;
	int8_t x71 = INT8_MIN;
	static uint8_t x72 = 98U;

	t15 = (((x69/x70)*x71)%x72);

	if (t15 != -70) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = INT16_MIN;
	int64_t x74 = -5858217LL;
	static uint8_t x75 = 71U;
	int64_t t16 = 83886385LL;

	t16 = (((x73/x74)*x75)%x76);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	int32_t x78 = 3;
	static int16_t x79 = INT16_MAX;
	volatile int32_t t17 = -3797024;

	t17 = (((x77/x78)*x79)%x80);

	if (t17 != -149) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x81 = 1U;
	static int64_t x83 = INT64_MAX;
	volatile uint16_t x84 = 99U;
	volatile int64_t t18 = 519369503114032185LL;

	t18 = (((x81/x82)*x83)%x84);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x85 = UINT16_MAX;
	int16_t x86 = -165;
	uint64_t x88 = 4133315742421LLU;
	uint64_t t19 = 219LLU;

	t19 = (((x85/x86)*x87)%x88);

	if (t19 != 397LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = INT8_MAX;
	volatile int16_t x90 = INT16_MAX;
	static volatile int16_t x91 = 0;
	int16_t x92 = INT16_MIN;
	volatile int32_t t20 = 53288;

	t20 = (((x89/x90)*x91)%x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = -848637LL;
	static int16_t x96 = INT16_MAX;
	int64_t t21 = -640312290740544LL;

	t21 = (((x93/x94)*x95)%x96);

	if (t21 != -4683LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = -1;
	int32_t x99 = INT32_MIN;
	volatile int32_t x100 = INT32_MAX;
	int32_t t22 = -43;

	t22 = (((x97/x98)*x99)%x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x101 = -104718469;
	static volatile int64_t x102 = INT64_MAX;
	uint64_t x103 = 5546868615296LLU;
	uint32_t x104 = UINT32_MAX;
	uint64_t t23 = 80914065LLU;

	t23 = (((x101/x102)*x103)%x104);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = INT32_MIN;
	static int8_t x107 = -1;
	uint32_t x108 = 728071092U;

	t24 = (((x105/x106)*x107)%x108);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x109 = 0LL;
	int64_t x111 = INT64_MAX;
	int32_t x112 = INT32_MIN;
	volatile int64_t t25 = 12096242646964LL;

	t25 = (((x109/x110)*x111)%x112);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x116 = INT32_MAX;
	int64_t t26 = -1LL;

	t26 = (((x113/x114)*x115)%x116);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = 2;
	uint16_t x122 = 141U;
	int32_t x123 = INT32_MIN;
	volatile int64_t t27 = 3999219924LL;

	t27 = (((x121/x122)*x123)%x124);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x126 = INT16_MIN;
	int16_t x127 = -1;

	t28 = (((x125/x126)*x127)%x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x130 = INT8_MIN;
	static uint32_t x131 = 0U;
	int32_t x132 = -1;
	volatile uint32_t t29 = 49869U;

	t29 = (((x129/x130)*x131)%x132);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x133 = 0;
	int32_t x134 = INT32_MAX;
	int32_t x135 = INT32_MIN;
	static int64_t x136 = -1LL;

	t30 = (((x133/x134)*x135)%x136);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x137 = 23011462415266LL;
	int32_t x138 = INT32_MIN;
	uint32_t x139 = 978548U;
	static uint32_t x140 = 1023059U;
	volatile int64_t t31 = 32036444397140LL;

	t31 = (((x137/x138)*x139)%x140);

	if (t31 != -833188LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x141 = 6U;
	int16_t x142 = INT16_MAX;
	uint8_t x143 = 5U;
	static uint32_t t32 = 82641365U;

	t32 = (((x141/x142)*x143)%x144);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x146 = INT8_MIN;
	volatile int8_t x148 = INT8_MAX;
	static volatile uint32_t t33 = 1300377U;

	t33 = (((x145/x146)*x147)%x148);

	if (t33 != 121U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x150 = 65736337157715LL;
	int32_t x151 = INT32_MIN;
	int32_t x152 = -208;
	volatile int64_t t34 = -143038827099162838LL;

	t34 = (((x149/x150)*x151)%x152);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = INT16_MAX;
	volatile int64_t x154 = 15538411083LL;
	volatile int32_t x155 = -1593264;
	volatile int64_t t35 = -515470130681460LL;

	t35 = (((x153/x154)*x155)%x156);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x157 = INT8_MAX;
	static uint8_t x158 = UINT8_MAX;
	static volatile uint8_t x159 = UINT8_MAX;
	volatile uint32_t x160 = 520U;
	uint32_t t36 = 1809U;

	t36 = (((x157/x158)*x159)%x160);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x161 = 25193LLU;
	volatile uint32_t x162 = 111U;
	static uint16_t x164 = 228U;

	t37 = (((x161/x162)*x163)%x164);

	if (t37 != 106LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x165 = INT32_MIN;
	uint64_t x166 = 4LLU;
	int16_t x168 = INT16_MIN;

	t38 = (((x165/x166)*x167)%x168);

	if (t38 != 4611686017890516992LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x169 = UINT8_MAX;
	uint32_t x170 = UINT32_MAX;
	volatile int16_t x171 = 849;
	uint32_t x172 = 956U;

	t39 = (((x169/x170)*x171)%x172);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x174 = UINT32_MAX;
	int32_t x176 = INT32_MAX;
	volatile int64_t t40 = -3991054419LL;

	t40 = (((x173/x174)*x175)%x176);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = -12;
	static int32_t x178 = -10468;
	int16_t x179 = INT16_MAX;
	static int32_t t41 = 7162;

	t41 = (((x177/x178)*x179)%x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x181 = 0;
	int8_t x182 = INT8_MAX;
	int32_t x183 = -1981899;
	int8_t x184 = INT8_MIN;

	t42 = (((x181/x182)*x183)%x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x188 = -1;

	t43 = (((x185/x186)*x187)%x188);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x193 = 117511373245690591LL;
	int16_t x195 = -18;
	volatile int16_t x196 = INT16_MAX;
	volatile int64_t t44 = 136457445875LL;

	t44 = (((x193/x194)*x195)%x196);

	if (t44 != -3217LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x197 = 0U;
	uint64_t x198 = UINT64_MAX;
	static int64_t x199 = INT64_MIN;
	int16_t x200 = 2746;
	volatile uint64_t t45 = 780LLU;

	t45 = (((x197/x198)*x199)%x200);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x202 = 53;
	int8_t x203 = INT8_MAX;
	volatile int64_t t46 = 30609017839180415LL;

	t46 = (((x201/x202)*x203)%x204);

	if (t46 != -508LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x206 = UINT32_MAX;
	static int16_t x207 = INT16_MIN;
	uint64_t x208 = UINT64_MAX;
	volatile uint64_t t47 = 5165461973498820LLU;

	t47 = (((x205/x206)*x207)%x208);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x214 = 5LLU;
	int8_t x215 = INT8_MIN;
	volatile uint32_t x216 = 47237U;
	uint64_t t48 = 462659418LLU;

	t48 = (((x213/x214)*x215)%x216);

	if (t48 != 21180LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x217 = -1;
	int64_t x218 = INT64_MAX;
	volatile int32_t x219 = INT32_MIN;
	static volatile int8_t x220 = -1;
	volatile int64_t t49 = 4268560464LL;

	t49 = (((x217/x218)*x219)%x220);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x221 = 0U;
	uint8_t x223 = 95U;
	int64_t t50 = -13582237300LL;

	t50 = (((x221/x222)*x223)%x224);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x226 = UINT32_MAX;
	int64_t x227 = 55696361398457278LL;
	static int16_t x228 = INT16_MIN;
	volatile int64_t t51 = 9LL;

	t51 = (((x225/x226)*x227)%x228);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x230 = 7545U;
	int16_t x231 = -1;
	int16_t x232 = -179;
	static volatile uint32_t t52 = 15352U;

	t52 = (((x229/x230)*x231)%x232);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x233 = 16413113U;
	static int16_t x234 = -20;
	uint32_t x235 = 54943262U;

	t53 = (((x233/x234)*x235)%x236);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x237 = -2347493069975LL;
	int32_t x238 = -77;
	int8_t x240 = INT8_MIN;
	int64_t t54 = -668523LL;

	t54 = (((x237/x238)*x239)%x240);

	if (t54 != 62LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x241 = UINT8_MAX;
	int32_t x242 = INT32_MIN;
	uint64_t x243 = 68265LLU;
	static uint64_t t55 = 518521500015LLU;

	t55 = (((x241/x242)*x243)%x244);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x245 = 11U;
	uint32_t x246 = 4339563U;
	int8_t x247 = -1;
	volatile uint16_t x248 = UINT16_MAX;
	static volatile uint32_t t56 = 3916016U;

	t56 = (((x245/x246)*x247)%x248);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x249 = UINT8_MAX;
	uint64_t x250 = 272570609212LLU;
	static uint16_t x251 = 636U;
	int8_t x252 = INT8_MAX;
	static volatile uint64_t t57 = 685LLU;

	t57 = (((x249/x250)*x251)%x252);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x253 = 13;
	static int16_t x254 = -30;
	int8_t x255 = INT8_MAX;
	static volatile int16_t x256 = -484;
	static int32_t t58 = 350804205;

	t58 = (((x253/x254)*x255)%x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x257 = -1;
	uint8_t x258 = 17U;
	volatile uint16_t x259 = 123U;
	int8_t x260 = -7;
	volatile int32_t t59 = -1;

	t59 = (((x257/x258)*x259)%x260);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x261 = -1LL;
	uint8_t x262 = UINT8_MAX;
	static volatile uint32_t x264 = 1359743U;

	t60 = (((x261/x262)*x263)%x264);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x266 = INT16_MIN;
	int8_t x267 = INT8_MIN;
	int64_t x268 = -1LL;
	int64_t t61 = 581355788164514762LL;

	t61 = (((x265/x266)*x267)%x268);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x277 = 0;
	int8_t x278 = INT8_MIN;
	int16_t x280 = INT16_MIN;
	int32_t t62 = -14458232;

	t62 = (((x277/x278)*x279)%x280);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x281 = UINT32_MAX;
	int64_t x282 = INT64_MAX;
	static uint8_t x283 = UINT8_MAX;

	t63 = (((x281/x282)*x283)%x284);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x285 = 61040230561LLU;
	int64_t x286 = -1LL;
	int32_t x287 = -2;

	t64 = (((x285/x286)*x287)%x288);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x289 = -1LL;
	int64_t x291 = -1LL;
	static volatile uint64_t t65 = 5010264876088333LLU;

	t65 = (((x289/x290)*x291)%x292);

	if (t65 != 378369621339278523LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x293 = INT32_MIN;
	static uint32_t x294 = 3813562U;
	volatile uint32_t t66 = 60U;

	t66 = (((x293/x294)*x295)%x296);

	if (t66 != 2147483085U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x301 = 3U;
	volatile uint64_t x302 = 15113LLU;
	uint32_t x303 = 2U;
	int32_t x304 = INT32_MIN;
	static uint64_t t67 = 285LLU;

	t67 = (((x301/x302)*x303)%x304);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x309 = INT32_MIN;
	static int8_t x310 = INT8_MIN;
	uint16_t x311 = 0U;
	uint8_t x312 = 2U;
	static volatile int32_t t68 = -1448;

	t68 = (((x309/x310)*x311)%x312);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x313 = INT8_MAX;
	static int8_t x314 = INT8_MIN;
	uint64_t x315 = 127513409666017504LLU;
	int64_t x316 = -2LL;
	uint64_t t69 = 18378LLU;

	t69 = (((x313/x314)*x315)%x316);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x318 = INT8_MIN;
	int64_t x319 = 457976861LL;
	int64_t x320 = 11966LL;
	volatile int64_t t70 = -15250359325985LL;

	t70 = (((x317/x318)*x319)%x320);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x321 = 941;
	uint64_t x322 = 335LLU;
	int16_t x323 = 1874;
	uint64_t t71 = 426201862LLU;

	t71 = (((x321/x322)*x323)%x324);

	if (t71 != 3748LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x325 = -1LL;
	static int64_t x326 = INT64_MIN;
	uint16_t x327 = 355U;
	uint64_t x328 = 12478909364947783LLU;
	volatile uint64_t t72 = 329624314LLU;

	t72 = (((x325/x326)*x327)%x328);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x329 = 147035877590LL;
	int8_t x330 = INT8_MAX;
	static int64_t x331 = -1LL;

	t73 = (((x329/x330)*x331)%x332);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x333 = 1497648871966868LLU;
	int8_t x334 = -1;
	int32_t x335 = -1;
	static volatile int32_t x336 = INT32_MAX;
	uint64_t t74 = 38318423837LLU;

	t74 = (((x333/x334)*x335)%x336);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x338 = 1151829U;
	static int32_t x339 = 1606214;
	static int64_t x340 = -133323118899LL;
	int64_t t75 = 768199005449134LL;

	t75 = (((x337/x338)*x339)%x340);

	if (t75 != 1692998496LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x341 = 1;
	uint64_t x343 = 2084002104565701LLU;
	int16_t x344 = -115;
	uint64_t t76 = 1824547639119205LLU;

	t76 = (((x341/x342)*x343)%x344);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x346 = 9777414029LLU;
	static volatile uint64_t t77 = 63781661544LLU;

	t77 = (((x345/x346)*x347)%x348);

	if (t77 != 15093352096LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x349 = -1;
	int16_t x350 = INT16_MIN;
	int32_t x351 = 15768203;
	volatile int32_t t78 = -14163281;

	t78 = (((x349/x350)*x351)%x352);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x353 = 3;
	uint64_t x354 = 7118423896LLU;
	int16_t x355 = INT16_MAX;
	uint64_t x356 = 7894893430913LLU;
	volatile uint64_t t79 = 8LLU;

	t79 = (((x353/x354)*x355)%x356);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x357 = INT32_MAX;
	int64_t x358 = -1LL;
	volatile int64_t x359 = 4263LL;
	volatile int16_t x360 = 21;
	volatile int64_t t80 = 57331778081919LL;

	t80 = (((x357/x358)*x359)%x360);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x361 = -13839185597831LL;
	uint32_t x362 = 1689847U;
	static volatile int8_t x363 = INT8_MIN;
	int8_t x364 = INT8_MIN;

	t81 = (((x361/x362)*x363)%x364);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x365 = 271;
	volatile uint16_t x366 = UINT16_MAX;
	static int32_t x367 = -1;
	volatile uint64_t x368 = 263546298006075105LLU;

	t82 = (((x365/x366)*x367)%x368);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x369 = INT8_MIN;
	uint32_t x370 = 1036005720U;
	volatile int32_t x371 = -2901;
	int8_t x372 = INT8_MAX;
	static uint32_t t83 = 66249U;

	t83 = (((x369/x370)*x371)%x372);

	if (t83 != 96U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x374 = INT32_MIN;
	int16_t x375 = INT16_MAX;
	int16_t x376 = -773;
	volatile int32_t t84 = 64672;

	t84 = (((x373/x374)*x375)%x376);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x381 = 99U;
	uint32_t x382 = UINT32_MAX;
	int16_t x384 = INT16_MIN;
	uint32_t t85 = 56662U;

	t85 = (((x381/x382)*x383)%x384);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x389 = INT16_MIN;
	volatile int8_t x390 = -10;
	volatile int32_t x391 = -143;
	volatile int8_t x392 = -1;

	t86 = (((x389/x390)*x391)%x392);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x393 = -1;
	static int64_t x394 = 15976476728LL;
	int8_t x395 = -1;
	static int64_t x396 = INT64_MIN;

	t87 = (((x393/x394)*x395)%x396);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x399 = 1111896415564201310LLU;
	volatile uint8_t x400 = UINT8_MAX;
	volatile uint64_t t88 = 283559165652LLU;

	t88 = (((x397/x398)*x399)%x400);

	if (t88 != 64LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x405 = 0;
	int64_t x406 = INT64_MIN;
	int8_t x407 = INT8_MAX;
	int64_t x408 = 190634779645LL;

	t89 = (((x405/x406)*x407)%x408);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint32_t x410 = UINT32_MAX;
	int32_t x411 = -1;
	volatile uint16_t x412 = UINT16_MAX;
	int64_t t90 = -48022906904756881LL;

	t90 = (((x409/x410)*x411)%x412);

	if (t90 != 32768LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x413 = INT16_MIN;
	uint64_t x414 = 3226591449LLU;
	uint64_t x415 = 982LLU;
	int16_t x416 = INT16_MIN;
	volatile uint64_t t91 = 32575398199175LLU;

	t91 = (((x413/x414)*x415)%x416);

	if (t91 != 5614191621602LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x417 = 5532U;
	int64_t x420 = INT64_MIN;

	t92 = (((x417/x418)*x419)%x420);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x421 = INT16_MIN;
	volatile int16_t x422 = INT16_MIN;
	uint32_t x423 = UINT32_MAX;
	uint64_t x424 = UINT64_MAX;
	uint64_t t93 = 1603LLU;

	t93 = (((x421/x422)*x423)%x424);

	if (t93 != 4294967295LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x426 = -1;
	volatile uint8_t x427 = UINT8_MAX;
	int8_t x428 = INT8_MAX;
	volatile int32_t t94 = -8952974;

	t94 = (((x425/x426)*x427)%x428);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x429 = INT32_MIN;
	int64_t x430 = INT64_MIN;
	int32_t x431 = INT32_MAX;
	int32_t x432 = INT32_MAX;
	int64_t t95 = 190703996902638LL;

	t95 = (((x429/x430)*x431)%x432);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x433 = INT8_MAX;
	static uint8_t x434 = UINT8_MAX;
	uint64_t x435 = UINT64_MAX;
	static int16_t x436 = 2;
	uint64_t t96 = 214LLU;

	t96 = (((x433/x434)*x435)%x436);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x446 = INT32_MIN;
	volatile int64_t x447 = INT64_MIN;
	uint16_t x448 = 19U;

	t97 = (((x445/x446)*x447)%x448);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x449 = -1;
	int8_t x450 = 35;
	int32_t x451 = INT32_MAX;
	static uint8_t x452 = 26U;

	t98 = (((x449/x450)*x451)%x452);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t t99 = 5208470323067298LL;

	t99 = (((x457/x458)*x459)%x460);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

