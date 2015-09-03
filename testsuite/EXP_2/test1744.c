#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x1 = UINT8_MAX;
volatile uint64_t x16 = 432372LLU;
static int16_t x22 = -2;
int8_t x23 = -1;
int16_t x24 = -1;
volatile uint32_t x46 = 2696U;
int16_t x49 = -1;
static uint32_t x56 = 4U;
int32_t x69 = INT32_MIN;
uint64_t x72 = 372LLU;
volatile uint64_t t13 = 79580718LLU;
static int8_t x79 = -1;
int64_t x80 = -1LL;
int64_t x86 = INT64_MIN;
int8_t x89 = INT8_MIN;
uint64_t t17 = 543740282715LLU;
int8_t x111 = -1;
uint64_t x114 = UINT64_MAX;
static int64_t x124 = INT64_MAX;
int32_t x125 = INT32_MAX;
static int8_t x126 = INT8_MIN;
volatile int32_t t22 = -8202492;
uint8_t x131 = UINT8_MAX;
int64_t x132 = -3772294154562273215LL;
int32_t x141 = -1;
uint64_t x145 = 32465159002LLU;
uint64_t t25 = 116510LLU;
static int64_t x152 = -260087LL;
int8_t x165 = INT8_MIN;
volatile int64_t x169 = INT64_MIN;
uint64_t t31 = 120478654702LLU;
uint64_t t32 = 942721221014820551LLU;
uint32_t x181 = 111018U;
volatile int16_t x186 = -1;
int32_t x187 = -154395;
int32_t x188 = -287;
uint8_t x193 = 110U;
volatile int64_t x194 = -1LL;
static volatile uint64_t x196 = 1077144269278LLU;
int64_t x197 = -1LL;
int64_t x199 = 43467423518LL;
int32_t t37 = 2133693;
int16_t x217 = INT16_MAX;
static uint64_t x219 = 1138871979317914613LLU;
volatile int32_t x223 = -267163199;
static int64_t x224 = -1LL;
static int16_t x226 = -1;
int8_t x229 = INT8_MAX;
volatile uint8_t x232 = 40U;
int32_t t42 = -10035904;
int64_t t44 = -28338601845456760LL;
volatile uint64_t x250 = UINT64_MAX;
volatile uint64_t t48 = 134011311013261597LLU;
uint64_t t50 = 1529825679141461LLU;
int32_t x292 = -1;
static int32_t x297 = INT32_MAX;
static uint8_t x298 = 53U;
static volatile int32_t x304 = -8;
volatile uint32_t x305 = UINT32_MAX;
int8_t x312 = -1;
static uint16_t x322 = UINT16_MAX;
static int16_t x324 = 1209;
int8_t x327 = INT8_MIN;
volatile int64_t t61 = 3306296404LL;
uint64_t x336 = 1709361952787LLU;
static int32_t x342 = INT32_MIN;
int32_t x348 = -754972646;
int64_t x349 = 920075137923LL;
uint64_t x354 = UINT64_MAX;
static volatile uint8_t x356 = 3U;
uint32_t t67 = 54795246U;
int16_t x362 = INT16_MAX;
volatile uint64_t x365 = UINT64_MAX;
volatile int64_t t71 = -8511604292312481LL;
int8_t x377 = 0;
volatile int64_t x379 = -13453LL;
int16_t x381 = INT16_MIN;
int64_t x382 = INT64_MAX;
uint16_t x393 = UINT16_MAX;
uint32_t x403 = UINT32_MAX;
int64_t t80 = -12389583006738024LL;
int64_t x427 = INT64_MAX;
volatile uint32_t t82 = 11U;
int8_t x452 = -1;
int8_t x454 = INT8_MIN;
static int64_t x465 = 9272337326LL;
static uint8_t x473 = 2U;
static volatile int8_t x482 = -1;
volatile uint64_t t91 = 25537LLU;
int16_t x487 = -1;
static uint16_t x495 = 17387U;
static uint16_t x500 = 3U;
int64_t t96 = -13185784LL;
int16_t x513 = INT16_MAX;
volatile int8_t x515 = -1;
uint64_t t97 = 6482145148581LLU;
uint64_t t99 = 1LLU;


void f0(void) {
	volatile int8_t x2 = -6;
	int16_t x3 = INT16_MAX;
	volatile uint32_t x4 = 1010029U;
	static uint32_t t0 = 7906U;

	t0 = ((x1%(x2&x3))-x4);

	if (t0 != 4293957522U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MAX;
	static int8_t x10 = INT8_MIN;
	volatile int64_t x11 = -1LL;
	int64_t x12 = INT64_MAX;
	volatile int64_t t1 = -23939756209651LL;

	t1 = ((x9%(x10&x11))-x12);

	if (t1 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x13 = INT64_MIN;
	uint8_t x14 = 5U;
	uint16_t x15 = UINT16_MAX;
	static volatile uint64_t t2 = 35080697985LLU;

	t2 = ((x13%(x14&x15))-x16);

	if (t2 != 18446744073709119241LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = 14147089;
	int8_t x18 = 22;
	int8_t x19 = -1;
	uint32_t x20 = UINT32_MAX;
	volatile uint32_t t3 = 23U;

	t3 = ((x17%(x18&x19))-x20);

	if (t3 != 12U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = UINT16_MAX;
	volatile int32_t t4 = 56;

	t4 = ((x21%(x22&x23))-x24);

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x25 = 2;
	int8_t x26 = INT8_MIN;
	static uint16_t x27 = 233U;
	int32_t x28 = -1;
	int32_t t5 = -6;

	t5 = ((x25%(x26&x27))-x28);

	if (t5 != 3) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	int32_t x30 = -1;
	volatile uint8_t x31 = UINT8_MAX;
	int64_t x32 = INT64_MIN;
	int64_t t6 = INT64_MAX;

	t6 = ((x29%(x30&x31))-x32);

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x37 = UINT8_MAX;
	int8_t x38 = INT8_MIN;
	int64_t x39 = -1LL;
	int8_t x40 = -2;
	volatile int64_t t7 = -1273354823LL;

	t7 = ((x37%(x38&x39))-x40);

	if (t7 != 129LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x41 = INT64_MIN;
	int32_t x42 = 11124340;
	uint16_t x43 = UINT16_MAX;
	uint16_t x44 = UINT16_MAX;
	volatile int64_t t8 = -3447138255605570788LL;

	t8 = ((x41%(x42&x43))-x44);

	if (t8 != -70151LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = 1U;
	int64_t x47 = -1LL;
	uint32_t x48 = 0U;
	int64_t t9 = 17LL;

	t9 = ((x45%(x46&x47))-x48);

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x50 = -486633020;
	volatile uint64_t x51 = 127013LLU;
	static uint8_t x52 = UINT8_MAX;
	uint64_t t10 = 85956352753LLU;

	t10 = ((x49%(x50&x51))-x52);

	if (t10 != 22744LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x53 = -3;
	static uint16_t x54 = UINT16_MAX;
	int8_t x55 = INT8_MAX;
	uint32_t t11 = 201U;

	t11 = ((x53%(x54&x55))-x56);

	if (t11 != 4294967289U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x65 = 3221828U;
	uint64_t x66 = 3582068LLU;
	int64_t x67 = INT64_MAX;
	int64_t x68 = INT64_MIN;
	volatile uint64_t t12 = 520125620491LLU;

	t12 = ((x65%(x66&x67))-x68);

	if (t12 != 9223372036857997636LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x70 = UINT8_MAX;
	int8_t x71 = INT8_MIN;

	t13 = ((x69%(x70&x71))-x72);

	if (t13 != 18446744073709551244LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x77 = INT32_MIN;
	int16_t x78 = INT16_MIN;
	volatile int64_t t14 = -1986LL;

	t14 = ((x77%(x78&x79))-x80);

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x81 = INT16_MAX;
	uint16_t x82 = 7U;
	int8_t x83 = -1;
	static uint64_t x84 = 0LLU;
	uint64_t t15 = 498450LLU;

	t15 = ((x81%(x82&x83))-x84);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x85 = 51801541U;
	int64_t x87 = -515026LL;
	static int8_t x88 = -42;
	int64_t t16 = 777633LL;

	t16 = ((x85%(x86&x87))-x88);

	if (t16 != 51801583LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x90 = -1;
	int32_t x91 = INT32_MIN;
	uint64_t x92 = 53304LLU;

	t17 = ((x89%(x90&x91))-x92);

	if (t17 != 18446744073709498184LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x93 = 2;
	int64_t x94 = -1LL;
	volatile int8_t x95 = 41;
	uint16_t x96 = 3442U;
	int64_t t18 = 3596007242698LL;

	t18 = ((x93%(x94&x95))-x96);

	if (t18 != -3440LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x109 = 0;
	int32_t x110 = INT32_MIN;
	int64_t x112 = 15939LL;
	static int64_t t19 = 1045473571253914LL;

	t19 = ((x109%(x110&x111))-x112);

	if (t19 != -15939LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x113 = INT64_MIN;
	volatile int8_t x115 = -5;
	uint32_t x116 = UINT32_MAX;
	uint64_t t20 = 14178721348756757LLU;

	t20 = ((x113%(x114&x115))-x116);

	if (t20 != 9223372032559808513LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x121 = 17U;
	int64_t x122 = -1LL;
	volatile uint32_t x123 = UINT32_MAX;
	static int64_t t21 = -110LL;

	t21 = ((x121%(x122&x123))-x124);

	if (t21 != -9223372036854775790LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x127 = -1;
	static int8_t x128 = -6;

	t22 = ((x125%(x126&x127))-x128);

	if (t22 != 133) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x129 = INT32_MIN;
	int32_t x130 = 118131;
	int64_t t23 = -3576310418548LL;

	t23 = ((x129%(x130&x131))-x132);

	if (t23 != 3772294154562273117LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x142 = INT32_MAX;
	uint64_t x143 = UINT64_MAX;
	uint32_t x144 = UINT32_MAX;
	uint64_t t24 = 65190342059LLU;

	t24 = ((x141%(x142&x143))-x144);

	if (t24 != 18446744069414584324LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x146 = INT64_MIN;
	static volatile int16_t x147 = INT16_MIN;
	uint32_t x148 = 1318192U;

	t25 = ((x145%(x146&x147))-x148);

	if (t25 != 32463840810LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x149 = INT16_MAX;
	static int32_t x150 = INT32_MAX;
	uint32_t x151 = 3U;
	volatile int64_t t26 = 7867195594LL;

	t26 = ((x149%(x150&x151))-x152);

	if (t26 != 260088LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x153 = INT32_MIN;
	uint16_t x154 = 1755U;
	int16_t x155 = -414;
	int8_t x156 = INT8_MAX;
	volatile int32_t t27 = -1;

	t27 = ((x153%(x154&x155))-x156);

	if (t27 != -1173) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x157 = -1;
	volatile int64_t x158 = 4963971706033LL;
	static uint16_t x159 = UINT16_MAX;
	int16_t x160 = 3;
	volatile int64_t t28 = -3LL;

	t28 = ((x157%(x158&x159))-x160);

	if (t28 != -4LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x161 = INT64_MIN;
	static int8_t x162 = INT8_MIN;
	int32_t x163 = -10;
	int32_t x164 = -1001;
	volatile int64_t t29 = 13LL;

	t29 = ((x161%(x162&x163))-x164);

	if (t29 != 1001LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x166 = INT16_MIN;
	uint16_t x167 = UINT16_MAX;
	int16_t x168 = INT16_MIN;
	volatile int32_t t30 = 69;

	t30 = ((x165%(x166&x167))-x168);

	if (t30 != 32640) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x170 = UINT32_MAX;
	int32_t x171 = INT32_MIN;
	uint64_t x172 = 7922881074LLU;

	t31 = ((x169%(x170&x171))-x172);

	if (t31 != 18446744065786670542LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x177 = UINT8_MAX;
	uint64_t x178 = UINT64_MAX;
	int64_t x179 = -1LL;
	static uint32_t x180 = UINT32_MAX;

	t32 = ((x177%(x178&x179))-x180);

	if (t32 != 18446744069414584576LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x182 = -1;
	int64_t x183 = INT64_MAX;
	volatile uint8_t x184 = UINT8_MAX;
	volatile int64_t t33 = 86LL;

	t33 = ((x181%(x182&x183))-x184);

	if (t33 != 110763LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x185 = 3;
	volatile int32_t t34 = -12864;

	t34 = ((x185%(x186&x187))-x188);

	if (t34 != 290) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x195 = 7135028588LLU;
	volatile uint64_t t35 = 8462034599613LLU;

	t35 = ((x193%(x194&x195))-x196);

	if (t35 != 18446742996565282448LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x198 = INT64_MAX;
	static uint8_t x200 = UINT8_MAX;
	static int64_t t36 = 735028092966819LL;

	t36 = ((x197%(x198&x199))-x200);

	if (t36 != -256LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x205 = 33U;
	static int32_t x206 = -1;
	static uint8_t x207 = 39U;
	volatile uint16_t x208 = UINT16_MAX;

	t37 = ((x205%(x206&x207))-x208);

	if (t37 != -65502) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x218 = 11419;
	int16_t x220 = 7936;
	volatile uint64_t t38 = 625083LLU;

	t38 = ((x217%(x218&x219))-x220);

	if (t38 != 18446744073709545292LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x221 = 1889U;
	uint16_t x222 = 814U;
	volatile int64_t t39 = -13858113LL;

	t39 = ((x221%(x222&x223))-x224);

	if (t39 != 98LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x225 = -2;
	int8_t x227 = 1;
	static int8_t x228 = INT8_MAX;
	int32_t t40 = 56107955;

	t40 = ((x225%(x226&x227))-x228);

	if (t40 != -127) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x230 = -73126190318568154LL;
	int32_t x231 = INT32_MIN;
	static volatile int64_t t41 = 30757952LL;

	t41 = ((x229%(x230&x231))-x232);

	if (t41 != 87LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x237 = 0;
	int16_t x238 = -1;
	int16_t x239 = INT16_MIN;
	volatile uint8_t x240 = 1U;

	t42 = ((x237%(x238&x239))-x240);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x241 = 0U;
	int64_t x242 = INT64_MIN;
	static int16_t x243 = -1;
	volatile uint16_t x244 = 28980U;
	static volatile int64_t t43 = -1515187051056510920LL;

	t43 = ((x241%(x242&x243))-x244);

	if (t43 != -28980LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x245 = 23591411U;
	volatile int64_t x246 = -1LL;
	int8_t x247 = -1;
	volatile int64_t x248 = 502485524911919289LL;

	t44 = ((x245%(x246&x247))-x248);

	if (t44 != -502485524911919289LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x249 = INT16_MIN;
	static volatile int8_t x251 = -44;
	uint8_t x252 = UINT8_MAX;
	uint64_t t45 = 8660898093378LLU;

	t45 = ((x249%(x250&x251))-x252);

	if (t45 != 18446744073709518593LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x257 = 3162LL;
	static volatile uint32_t x258 = 7693U;
	int8_t x259 = -12;
	int32_t x260 = -1;
	volatile int64_t t46 = 49847023171LL;

	t46 = ((x257%(x258&x259))-x260);

	if (t46 != 3163LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x261 = 0U;
	volatile int64_t x262 = INT64_MIN;
	int16_t x263 = INT16_MIN;
	int8_t x264 = INT8_MAX;
	volatile int64_t t47 = 12LL;

	t47 = ((x261%(x262&x263))-x264);

	if (t47 != -127LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x265 = 5;
	int64_t x266 = 263572381LL;
	uint64_t x267 = 4919234072857213287LLU;
	int16_t x268 = INT16_MIN;

	t48 = ((x265%(x266&x267))-x268);

	if (t48 != 32773LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x269 = INT64_MIN;
	uint64_t x270 = 2204483515873920LLU;
	int16_t x271 = -1;
	int8_t x272 = 13;
	volatile uint64_t t49 = 224420027289293835LLU;

	t49 = ((x269%(x270&x271))-x272);

	if (t49 != 2017489954168435LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x277 = 108U;
	volatile uint64_t x278 = 11024796995960LLU;
	int16_t x279 = INT16_MAX;
	static int64_t x280 = 117245720597LL;

	t50 = ((x277%(x278&x279))-x280);

	if (t50 != 18446743956463831127LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x281 = 62U;
	uint16_t x282 = 4U;
	uint64_t x283 = 428LLU;
	int32_t x284 = INT32_MIN;
	uint64_t t51 = 1267714594LLU;

	t51 = ((x281%(x282&x283))-x284);

	if (t51 != 2147483650LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x285 = INT8_MIN;
	int8_t x286 = INT8_MIN;
	int64_t x287 = 1674461718LL;
	int64_t x288 = INT64_MIN;
	volatile int64_t t52 = -403004213583288LL;

	t52 = ((x285%(x286&x287))-x288);

	if (t52 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x289 = INT32_MIN;
	volatile uint32_t x290 = 742702U;
	static volatile int32_t x291 = -64;
	volatile uint32_t t53 = 517164640U;

	t53 = ((x289%(x290&x291))-x292);

	if (t53 != 465153U) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x299 = 12;
	int16_t x300 = -3815;
	static int32_t t54 = 879374;

	t54 = ((x297%(x298&x299))-x300);

	if (t54 != 3818) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x301 = -171;
	int64_t x302 = 113496964LL;
	int8_t x303 = INT8_MIN;
	volatile int64_t t55 = 1LL;

	t55 = ((x301%(x302&x303))-x304);

	if (t55 != -163LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x306 = INT32_MIN;
	int32_t x307 = -47089010;
	int16_t x308 = INT16_MAX;
	static volatile uint32_t t56 = 90468U;

	t56 = ((x305%(x306&x307))-x308);

	if (t56 != 2147450880U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x309 = 0U;
	volatile int32_t x310 = -1;
	int64_t x311 = 11846368154192LL;
	volatile int64_t t57 = -349147670276414713LL;

	t57 = ((x309%(x310&x311))-x312);

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x313 = 123;
	int8_t x314 = -29;
	volatile uint16_t x315 = UINT16_MAX;
	static uint8_t x316 = 2U;
	volatile int32_t t58 = -8381621;

	t58 = ((x313%(x314&x315))-x316);

	if (t58 != 121) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x321 = INT32_MIN;
	static int16_t x323 = -115;
	int32_t t59 = -200420;

	t59 = ((x321%(x322&x323))-x324);

	if (t59 != -40532) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x325 = 1U;
	int32_t x326 = INT32_MIN;
	int16_t x328 = INT16_MIN;
	volatile int32_t t60 = 13981358;

	t60 = ((x325%(x326&x327))-x328);

	if (t60 != 32769) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x329 = INT64_MIN;
	int8_t x330 = -1;
	int32_t x331 = INT32_MIN;
	static int8_t x332 = INT8_MIN;

	t61 = ((x329%(x330&x331))-x332);

	if (t61 != 128LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x333 = 3651348358587LLU;
	int8_t x334 = -1;
	int64_t x335 = INT64_MAX;
	volatile uint64_t t62 = 16621789746979475LLU;

	t62 = ((x333%(x334&x335))-x336);

	if (t62 != 1941986405800LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x341 = 498216399529484LLU;
	int16_t x343 = -1;
	uint32_t x344 = UINT32_MAX;
	volatile uint64_t t63 = 18009444758261LLU;

	t63 = ((x341%(x342&x343))-x344);

	if (t63 != 498212104562189LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x345 = INT64_MAX;
	uint32_t x346 = 4U;
	int16_t x347 = -1;
	volatile int64_t t64 = 1608764760969711LL;

	t64 = ((x345%(x346&x347))-x348);

	if (t64 != 754972649LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x350 = 224U;
	static int64_t x351 = -12427692077699944LL;
	static int64_t x352 = 0LL;
	int64_t t65 = 97243LL;

	t65 = ((x349%(x350&x351))-x352);

	if (t65 != 3LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x353 = INT64_MAX;
	uint8_t x355 = 112U;
	volatile uint64_t t66 = 901827673310106609LLU;

	t66 = ((x353%(x354&x355))-x356);

	if (t66 != 60LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x357 = INT32_MIN;
	int16_t x358 = -1;
	uint32_t x359 = UINT32_MAX;
	uint32_t x360 = 8032179U;

	t67 = ((x357%(x358&x359))-x360);

	if (t67 != 2139451469U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x361 = -1;
	uint16_t x363 = 17U;
	volatile int16_t x364 = 3;
	volatile int32_t t68 = 751004;

	t68 = ((x361%(x362&x363))-x364);

	if (t68 != -4) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x366 = UINT16_MAX;
	int64_t x367 = -97341846083134277LL;
	int16_t x368 = INT16_MAX;
	uint64_t t69 = 4070923742939LLU;

	t69 = ((x365%(x366&x367))-x368);

	if (t69 != 18446744073709521419LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x369 = -1;
	uint64_t x370 = UINT64_MAX;
	int8_t x371 = INT8_MIN;
	uint8_t x372 = UINT8_MAX;
	static uint64_t t70 = 977127320120LLU;

	t70 = ((x369%(x370&x371))-x372);

	if (t70 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x373 = 4004697828340022677LL;
	int64_t x374 = -128513253812358LL;
	static int8_t x375 = 26;
	int8_t x376 = INT8_MIN;

	t71 = ((x373%(x374&x375))-x376);

	if (t71 != 147LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x378 = INT16_MAX;
	static int8_t x380 = -1;
	volatile int64_t t72 = -31253214426LL;

	t72 = ((x377%(x378&x379))-x380);

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x383 = UINT8_MAX;
	uint16_t x384 = 61U;
	volatile int64_t t73 = 756105175LL;

	t73 = ((x381%(x382&x383))-x384);

	if (t73 != -189LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x394 = -1LL;
	uint32_t x395 = 15910U;
	uint64_t x396 = 19719475703682607LLU;
	volatile uint64_t t74 = 3016844715481549165LLU;

	t74 = ((x393%(x394&x395))-x396);

	if (t74 != 18427024598005870904LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint8_t x397 = 1U;
	volatile int16_t x398 = INT16_MAX;
	static int64_t x399 = INT64_MAX;
	int8_t x400 = INT8_MAX;
	volatile int64_t t75 = -63117LL;

	t75 = ((x397%(x398&x399))-x400);

	if (t75 != -126LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x401 = INT32_MAX;
	int32_t x402 = -1;
	int16_t x404 = INT16_MAX;
	volatile uint32_t t76 = 29U;

	t76 = ((x401%(x402&x403))-x404);

	if (t76 != 2147450880U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x405 = -1;
	int32_t x406 = INT32_MAX;
	volatile int8_t x407 = INT8_MAX;
	int64_t x408 = INT64_MAX;
	volatile int64_t t77 = INT64_MIN;

	t77 = ((x405%(x406&x407))-x408);

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x413 = 6U;
	uint32_t x414 = 44U;
	volatile int8_t x415 = INT8_MAX;
	int8_t x416 = -1;
	uint32_t t78 = 410033U;

	t78 = ((x413%(x414&x415))-x416);

	if (t78 != 7U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x417 = INT16_MIN;
	uint8_t x418 = UINT8_MAX;
	static int32_t x419 = -1;
	int64_t x420 = INT64_MIN;
	static volatile int64_t t79 = -13LL;

	t79 = ((x417%(x418&x419))-x420);

	if (t79 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x421 = 1U;
	volatile int16_t x422 = -1;
	int64_t x423 = INT64_MAX;
	static volatile int8_t x424 = -3;

	t80 = ((x421%(x422&x423))-x424);

	if (t80 != 4LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x425 = INT16_MAX;
	int32_t x426 = INT32_MIN;
	int64_t x428 = -15791489101LL;
	volatile int64_t t81 = -13800LL;

	t81 = ((x425%(x426&x427))-x428);

	if (t81 != 15791521868LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x433 = 30372923U;
	static uint32_t x434 = 530440U;
	int32_t x435 = INT32_MAX;
	int16_t x436 = 807;

	t82 = ((x433%(x434&x435))-x436);

	if (t82 != 137036U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x441 = 14U;
	uint32_t x442 = 47417U;
	int32_t x443 = -25544032;
	int8_t x444 = INT8_MIN;
	volatile uint32_t t83 = 16713317U;

	t83 = ((x441%(x442&x443))-x444);

	if (t83 != 142U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x449 = INT64_MAX;
	volatile uint64_t x450 = UINT64_MAX;
	volatile int64_t x451 = INT64_MAX;
	volatile uint64_t t84 = 61880647808848921LLU;

	t84 = ((x449%(x450&x451))-x452);

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x453 = UINT64_MAX;
	uint32_t x455 = 2997U;
	uint32_t x456 = 2052506U;
	volatile uint64_t t85 = 3866LLU;

	t85 = ((x453%(x454&x455))-x456);

	if (t85 != 18446744073707499621LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x461 = -1;
	uint64_t x462 = 1LLU;
	uint64_t x463 = UINT64_MAX;
	int16_t x464 = -4340;
	volatile uint64_t t86 = 442606772024010770LLU;

	t86 = ((x461%(x462&x463))-x464);

	if (t86 != 4340LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x466 = -1;
	static int32_t x467 = INT32_MAX;
	volatile int64_t x468 = 12334558182LL;
	volatile int64_t t87 = 18LL;

	t87 = ((x465%(x466&x467))-x468);

	if (t87 != -11652155444LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x469 = -9144596024497543LL;
	volatile int64_t x470 = 16654018LL;
	volatile int16_t x471 = -1;
	uint16_t x472 = UINT16_MAX;
	int64_t t88 = -24806086480LL;

	t88 = ((x469%(x470&x471))-x472);

	if (t88 != -12286474LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x474 = -1;
	uint64_t x475 = 31378LLU;
	static uint16_t x476 = UINT16_MAX;
	volatile uint64_t t89 = 6148114949189189LLU;

	t89 = ((x473%(x474&x475))-x476);

	if (t89 != 18446744073709486083LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x477 = 20;
	uint64_t x478 = 195414323238071LLU;
	int64_t x479 = -1LL;
	volatile uint64_t x480 = 18281517279184444LLU;
	uint64_t t90 = 459024353816849LLU;

	t90 = ((x477%(x478&x479))-x480);

	if (t90 != 18428462556430367192LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x481 = INT32_MIN;
	uint64_t x483 = 268LLU;
	static uint64_t x484 = 232485725205LLU;

	t91 = ((x481%(x482&x483))-x484);

	if (t91 != 18446743841223826579LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x485 = -1;
	volatile int16_t x486 = INT16_MAX;
	int16_t x488 = INT16_MIN;
	volatile int32_t t92 = -9;

	t92 = ((x485%(x486&x487))-x488);

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x493 = 45U;
	uint64_t x494 = 29958038140737LLU;
	int8_t x496 = INT8_MAX;
	uint64_t t93 = 16LLU;

	t93 = ((x493%(x494&x495))-x496);

	if (t93 != 18446744073709551534LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x497 = 1;
	uint64_t x498 = UINT64_MAX;
	uint32_t x499 = 283623242U;
	uint64_t t94 = 456814941513457LLU;

	t94 = ((x497%(x498&x499))-x500);

	if (t94 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x501 = 2U;
	static int64_t x502 = 55538766693LL;
	int32_t x503 = -1161;
	volatile uint16_t x504 = 17U;
	int64_t t95 = 7767445667LL;

	t95 = ((x501%(x502&x503))-x504);

	if (t95 != -15LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x505 = INT64_MAX;
	int16_t x506 = -1;
	int64_t x507 = -21534097946556401LL;
	uint8_t x508 = 6U;

	t96 = ((x505%(x506&x507))-x508);

	if (t96 != 6778115728636173LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint64_t x514 = 9166794683LLU;
	int16_t x516 = INT16_MAX;

	t97 = ((x513%(x514&x515))-x516);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x517 = INT32_MIN;
	int8_t x518 = -1;
	static int16_t x519 = -13699;
	int8_t x520 = INT8_MIN;
	int32_t t98 = -8076971;

	t98 = ((x517%(x518&x519))-x520);

	if (t98 != -882) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x521 = 817U;
	static uint32_t x522 = 81U;
	static uint8_t x523 = 31U;
	uint64_t x524 = 4621LLU;

	t99 = ((x521%(x522&x523))-x524);

	if (t99 != 18446744073709546996LLU) { NG(); } else { ; }
	
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

