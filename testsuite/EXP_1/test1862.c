#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t1 = 63933159402LLU;
static int32_t x12 = INT32_MIN;
uint8_t x13 = 9U;
static volatile int16_t x15 = INT16_MAX;
int32_t t4 = 63947;
static int16_t x22 = 1017;
static int64_t x23 = -174LL;
uint64_t x26 = UINT64_MAX;
volatile int16_t x31 = INT16_MAX;
volatile uint8_t x36 = UINT8_MAX;
static int32_t x38 = -1;
static int16_t x48 = 1;
volatile int16_t x50 = INT16_MIN;
int64_t x52 = -1LL;
int16_t x53 = 1;
static uint16_t x54 = 9U;
int32_t t13 = -1191;
int8_t x61 = 11;
volatile int32_t t15 = 309;
int16_t x85 = INT16_MIN;
volatile int16_t x92 = INT16_MIN;
volatile int32_t t17 = -255;
static int64_t x102 = -1LL;
int32_t x103 = INT32_MIN;
static volatile uint32_t x109 = 7878U;
uint8_t x110 = 6U;
volatile uint8_t x124 = 0U;
uint8_t x130 = UINT8_MAX;
int16_t x132 = -1;
volatile uint64_t t24 = 1952967LLU;
uint8_t x147 = 0U;
uint8_t x148 = UINT8_MAX;
volatile int64_t t27 = -454343169940LL;
uint64_t t28 = 2981LLU;
int16_t x155 = INT16_MAX;
volatile int16_t x156 = -1;
volatile int32_t t29 = -13596;
uint8_t x158 = 15U;
int32_t t30 = 13;
int16_t x169 = -1;
static int32_t x172 = INT32_MIN;
uint64_t t31 = 11616261263788796LLU;
uint64_t x176 = UINT64_MAX;
uint64_t t32 = 31340424315LLU;
uint32_t x181 = 12490U;
int32_t x189 = INT32_MIN;
static int16_t x207 = -931;
volatile uint64_t t37 = 402LLU;
uint64_t x220 = 10554623895197LLU;
uint32_t x222 = 29257U;
int8_t x223 = INT8_MIN;
int32_t t40 = 629430786;
volatile int64_t t41 = -165341300LL;
uint64_t x234 = 24284LLU;
uint64_t t42 = 399132LLU;
uint64_t x240 = 2895253LLU;
static volatile uint64_t t43 = 30342LLU;
volatile uint32_t x241 = UINT32_MAX;
int64_t x244 = -1LL;
volatile int64_t t44 = -15873316878LL;
int16_t x246 = INT16_MIN;
static uint64_t t45 = 7625526896LLU;
int8_t x253 = -1;
uint8_t x271 = UINT8_MAX;
int16_t x273 = INT16_MIN;
int8_t x276 = INT8_MIN;
int32_t t49 = -81470907;
int8_t x279 = INT8_MIN;
uint64_t x287 = 4205937958206LLU;
uint8_t x303 = 0U;
uint16_t x311 = 0U;
static uint16_t x312 = 24U;
int32_t x329 = INT32_MIN;
uint64_t x330 = 8LLU;
static int16_t x331 = INT16_MIN;
uint64_t x335 = UINT64_MAX;
static int8_t x356 = INT8_MAX;
uint8_t x359 = 6U;
static int32_t x371 = INT32_MAX;
static int32_t x376 = 704398;
static volatile uint64_t t68 = 49601711853LLU;
static uint64_t x379 = 1002377236614LLU;
volatile uint64_t t71 = 1LLU;
static int32_t x391 = 27292703;
volatile int64_t t76 = -3266708359386LL;
volatile int32_t x419 = -1;
static int8_t x420 = -1;
static uint64_t x422 = 17489760667LLU;
volatile uint32_t x425 = 3137U;
int32_t x428 = INT32_MIN;
uint32_t t80 = 2095U;
static volatile int64_t x430 = -1LL;
volatile int8_t x436 = INT8_MAX;
static int64_t x465 = 80LL;
int32_t x467 = 2054100;
int8_t x469 = 25;
volatile int8_t x475 = -1;
static volatile int16_t x478 = -1;
int8_t x480 = INT8_MIN;
int8_t x485 = INT8_MIN;
volatile int32_t t89 = 3558;
static int8_t x494 = -14;
int32_t x513 = INT32_MAX;
int8_t x515 = INT8_MIN;
int32_t x529 = INT32_MAX;
volatile int64_t x533 = -1LL;
int8_t x538 = -1;
volatile uint64_t t97 = 312921LLU;
volatile int32_t x553 = INT32_MIN;
static uint16_t x556 = 25U;
uint32_t t99 = 25698U;


void f0(void) {
	volatile int64_t x1 = 237544542874366158LL;
	volatile int8_t x2 = 62;
	static int16_t x3 = -6042;
	static uint64_t x4 = UINT64_MAX;
	static uint64_t t0 = 17510938796745926LLU;

	t0 = (((x1|x2)+x3)*x4);

	if (t0 != 18209199530835191452LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 0;
	static int64_t x6 = INT64_MAX;
	int64_t x7 = -1LL;
	volatile uint64_t x8 = UINT64_MAX;

	t1 = (((x5|x6)+x7)*x8);

	if (t1 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	static uint64_t x10 = 2LLU;
	volatile int8_t x11 = -1;
	static uint64_t t2 = 208008395534705LLU;

	t2 = (((x9|x10)+x11)*x12);

	if (t2 != 18446743528248705024LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x14 = INT8_MIN;
	static int32_t x16 = -1;
	int32_t t3 = -3581617;

	t3 = (((x13|x14)+x15)*x16);

	if (t3 != -32648) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -27;
	int32_t x18 = INT32_MIN;
	int8_t x19 = INT8_MIN;
	volatile int8_t x20 = 1;

	t4 = (((x17|x18)+x19)*x20);

	if (t4 != -155) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	static int16_t x24 = INT16_MIN;
	uint64_t t5 = 9892LLU;

	t5 = (((x21|x22)+x23)*x24);

	if (t5 != 5734400LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = 94989667390305421LL;
	int16_t x27 = INT16_MAX;
	int8_t x28 = INT8_MIN;
	volatile uint64_t t6 = 232860282182015LLU;

	t6 = (((x25|x26)+x27)*x28);

	if (t6 != 18446744073705357568LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 16;
	uint32_t x30 = 37445583U;
	int16_t x32 = -7;
	uint32_t t7 = 501U;

	t7 = (((x29|x30)+x31)*x32);

	if (t7 != 4032618734U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 47915431646LLU;
	int32_t x34 = INT32_MIN;
	int64_t x35 = -10419510279751703LL;
	volatile uint64_t t8 = 0LLU;

	t8 = (((x33|x34)+x35)*x36);

	if (t8 != 15789768575816341561LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 11537U;
	static int64_t x39 = -36LL;
	uint8_t x40 = UINT8_MAX;
	int64_t t9 = -319LL;

	t9 = (((x37|x38)+x39)*x40);

	if (t9 != -9435LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint8_t x41 = 26U;
	static int16_t x42 = INT16_MIN;
	int64_t x43 = -1LL;
	static int16_t x44 = 60;
	volatile int64_t t10 = -3088655LL;

	t10 = (((x41|x42)+x43)*x44);

	if (t10 != -1964580LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	int32_t x46 = INT32_MIN;
	uint8_t x47 = 99U;
	volatile int64_t t11 = -378713772776LL;

	t11 = (((x45|x46)+x47)*x48);

	if (t11 != 98LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	static volatile int16_t x51 = -1;
	int64_t t12 = 13410016LL;

	t12 = (((x49|x50)+x51)*x52);

	if (t12 != 32642LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x55 = -1;
	uint8_t x56 = 0U;

	t13 = (((x53|x54)+x55)*x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x62 = 1558370314U;
	uint8_t x63 = 12U;
	uint64_t x64 = UINT64_MAX;
	uint64_t t14 = 52938347418LLU;

	t14 = (((x61|x62)+x63)*x64);

	if (t14 != 18446744072151181289LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = INT8_MIN;
	volatile int8_t x78 = 0;
	volatile int32_t x79 = 59343;
	static uint8_t x80 = 0U;

	t15 = (((x77|x78)+x79)*x80);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x86 = INT64_MAX;
	int16_t x87 = INT16_MAX;
	volatile uint32_t x88 = UINT32_MAX;
	int64_t t16 = -1LL;

	t16 = (((x85|x86)+x87)*x88);

	if (t16 != 140728898387970LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x89 = INT8_MIN;
	uint8_t x90 = 29U;
	int8_t x91 = 0;

	t17 = (((x89|x90)+x91)*x92);

	if (t17 != 3244032) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x93 = INT32_MIN;
	uint32_t x94 = 473134U;
	volatile uint16_t x95 = 4148U;
	int32_t x96 = INT32_MIN;
	volatile uint32_t t18 = 4U;

	t18 = (((x93|x94)+x95)*x96);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x101 = 48212444U;
	volatile int32_t x104 = 90;
	int64_t t19 = -33714701LL;

	t19 = (((x101|x102)+x103)*x104);

	if (t19 != -193273528410LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x105 = -1;
	uint32_t x106 = 426524U;
	int16_t x107 = 25;
	uint32_t x108 = UINT32_MAX;
	volatile uint32_t t20 = 11578015U;

	t20 = (((x105|x106)+x107)*x108);

	if (t20 != 4294967272U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x111 = -1;
	uint8_t x112 = 106U;
	uint32_t t21 = 38U;

	t21 = (((x109|x110)+x111)*x112);

	if (t21 != 834962U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x117 = INT8_MIN;
	uint8_t x118 = UINT8_MAX;
	static volatile int32_t x119 = -1;
	volatile int16_t x120 = 231;
	volatile int32_t t22 = -258002424;

	t22 = (((x117|x118)+x119)*x120);

	if (t22 != -462) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x121 = 927346;
	static int8_t x122 = 4;
	volatile int64_t x123 = -1055693LL;
	int64_t t23 = 6LL;

	t23 = (((x121|x122)+x123)*x124);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x129 = INT8_MIN;
	static uint64_t x131 = 43253122226481302LLU;

	t24 = (((x129|x130)+x131)*x132);

	if (t24 != 18403490951483070315LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x133 = 252U;
	static int16_t x134 = -3;
	int16_t x135 = INT16_MIN;
	volatile uint16_t x136 = 15261U;
	volatile int32_t t25 = 27;

	t25 = (((x133|x134)+x135)*x136);

	if (t25 != -500118231) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x141 = -1;
	int32_t x142 = 1;
	int64_t x143 = -517179LL;
	static uint16_t x144 = UINT16_MAX;
	volatile int64_t t26 = -2638893337LL;

	t26 = (((x141|x142)+x143)*x144);

	if (t26 != -33893391300LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x145 = -1959;
	volatile int64_t x146 = INT64_MIN;

	t27 = (((x145|x146)+x147)*x148);

	if (t27 != -499545LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x149 = UINT64_MAX;
	volatile int64_t x150 = INT64_MIN;
	int8_t x151 = INT8_MIN;
	uint8_t x152 = UINT8_MAX;

	t28 = (((x149|x150)+x151)*x152);

	if (t28 != 18446744073709518721LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x153 = 1U;
	int16_t x154 = INT16_MAX;

	t29 = (((x153|x154)+x155)*x156);

	if (t29 != -65534) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x157 = -38;
	int32_t x159 = -1;
	int8_t x160 = INT8_MAX;

	t30 = (((x157|x158)+x159)*x160);

	if (t30 != -4318) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x170 = 0U;
	uint64_t x171 = UINT64_MAX;

	t31 = (((x169|x170)+x171)*x172);

	if (t31 != 9223372041149743104LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x173 = 2LL;
	int16_t x174 = INT16_MIN;
	uint16_t x175 = 233U;

	t32 = (((x173|x174)+x175)*x176);

	if (t32 != 32533LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x182 = UINT16_MAX;
	int16_t x183 = -98;
	static uint8_t x184 = UINT8_MAX;
	static volatile uint32_t t33 = 1043897789U;

	t33 = (((x181|x182)+x183)*x184);

	if (t33 != 16686435U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x185 = -1LL;
	uint64_t x186 = 2349576608428LLU;
	uint64_t x187 = 397042LLU;
	int64_t x188 = -165641690LL;
	volatile uint64_t t34 = 31080843001678LLU;

	t34 = (((x185|x186)+x187)*x188);

	if (t34 != 18446678307167312326LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x190 = -1LL;
	int32_t x191 = -111665;
	int32_t x192 = -17;
	volatile int64_t t35 = 13528335054LL;

	t35 = (((x189|x190)+x191)*x192);

	if (t35 != 1898322LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x205 = 3;
	uint32_t x206 = UINT32_MAX;
	int32_t x208 = INT32_MIN;
	volatile uint32_t t36 = 6U;

	t36 = (((x205|x206)+x207)*x208);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint8_t x209 = UINT8_MAX;
	int16_t x210 = -1;
	uint64_t x211 = UINT64_MAX;
	int16_t x212 = INT16_MIN;

	t37 = (((x209|x210)+x211)*x212);

	if (t37 != 65536LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x217 = 4073U;
	int16_t x218 = -14;
	int16_t x219 = 0;
	volatile uint64_t t38 = 5785222523100LLU;

	t38 = (((x217|x218)+x219)*x220);

	if (t38 != 18446691300590075631LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x221 = UINT64_MAX;
	int16_t x224 = INT16_MIN;
	uint64_t t39 = 52687609LLU;

	t39 = (((x221|x222)+x223)*x224);

	if (t39 != 4227072LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x225 = -1;
	int32_t x226 = -1;
	volatile int16_t x227 = INT16_MAX;
	static uint8_t x228 = UINT8_MAX;

	t40 = (((x225|x226)+x227)*x228);

	if (t40 != 8355330) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x229 = 1U;
	int64_t x230 = INT64_MIN;
	int16_t x231 = 931;
	int64_t x232 = -1LL;

	t41 = (((x229|x230)+x231)*x232);

	if (t41 != 9223372036854774876LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x233 = INT8_MIN;
	uint8_t x235 = 22U;
	int64_t x236 = INT64_MIN;

	t42 = (((x233|x234)+x235)*x236);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x237 = UINT16_MAX;
	uint64_t x238 = 252227LLU;
	int16_t x239 = INT16_MIN;

	t43 = (((x237|x238)+x239)*x240);

	if (t43 != 664098656875LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x242 = INT64_MIN;
	volatile uint8_t x243 = 2U;

	t44 = (((x241|x242)+x243)*x244);

	if (t44 != 9223372032559808511LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x245 = 56348LLU;
	int32_t x247 = INT32_MIN;
	volatile uint16_t x248 = 2U;

	t45 = (((x245|x246)+x247)*x248);

	if (t45 != 18446744069414565944LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x254 = INT64_MIN;
	volatile int32_t x255 = -488;
	volatile uint64_t x256 = 1487306838792053888LLU;
	volatile uint64_t t46 = 2227421LLU;

	t46 = (((x253|x254)+x255)*x256);

	if (t46 != 10576718779067713408LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x257 = -1LL;
	static int16_t x258 = INT16_MIN;
	int32_t x259 = 0;
	int16_t x260 = INT16_MIN;
	volatile int64_t t47 = 1673075074365LL;

	t47 = (((x257|x258)+x259)*x260);

	if (t47 != 32768LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x269 = -3554810;
	int8_t x270 = INT8_MIN;
	int32_t x272 = 586;
	volatile int32_t t48 = 177888999;

	t48 = (((x269|x270)+x271)*x272);

	if (t48 != 77938) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x274 = UINT16_MAX;
	uint8_t x275 = UINT8_MAX;

	t49 = (((x273|x274)+x275)*x276);

	if (t49 != -32512) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x277 = INT8_MIN;
	uint16_t x278 = UINT16_MAX;
	static uint32_t x280 = 16114U;
	volatile uint32_t t50 = 1U;

	t50 = (((x277|x278)+x279)*x280);

	if (t50 != 4292888590U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x285 = 3LLU;
	static int16_t x286 = INT16_MIN;
	int8_t x288 = INT8_MIN;
	uint64_t t51 = 109105941LLU;

	t51 = (((x285|x286)+x287)*x288);

	if (t51 != 18446205713655095168LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x289 = 30U;
	int32_t x290 = -77982;
	static int32_t x291 = -1;
	uint16_t x292 = 91U;
	volatile int32_t t52 = 7124;

	t52 = (((x289|x290)+x291)*x292);

	if (t52 != -7093905) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x293 = UINT8_MAX;
	uint8_t x294 = 3U;
	static volatile int16_t x295 = -1;
	uint8_t x296 = 55U;
	int32_t t53 = 315;

	t53 = (((x293|x294)+x295)*x296);

	if (t53 != 13970) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x301 = UINT16_MAX;
	int8_t x302 = INT8_MIN;
	static uint64_t x304 = UINT64_MAX;
	static volatile uint64_t t54 = 6785LLU;

	t54 = (((x301|x302)+x303)*x304);

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x305 = 406094LLU;
	static int32_t x306 = 15;
	static uint64_t x307 = 1338776LLU;
	volatile int8_t x308 = INT8_MIN;
	static volatile uint64_t t55 = 8687291568940LLU;

	t55 = (((x305|x306)+x307)*x308);

	if (t55 != 18446744073486208128LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x309 = -1LL;
	static int64_t x310 = INT64_MAX;
	volatile int64_t t56 = 266LL;

	t56 = (((x309|x310)+x311)*x312);

	if (t56 != -24LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x313 = INT64_MIN;
	volatile uint64_t x314 = UINT64_MAX;
	int8_t x315 = INT8_MIN;
	int32_t x316 = INT32_MIN;
	uint64_t t57 = 19516317953954LLU;

	t57 = (((x313|x314)+x315)*x316);

	if (t57 != 277025390592LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x317 = 220U;
	volatile int16_t x318 = -9086;
	uint16_t x319 = UINT16_MAX;
	uint8_t x320 = 0U;
	volatile int32_t t58 = 19566;

	t58 = (((x317|x318)+x319)*x320);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x321 = -1;
	static int8_t x322 = INT8_MIN;
	static volatile uint16_t x323 = 804U;
	volatile uint64_t x324 = UINT64_MAX;
	volatile uint64_t t59 = 27LLU;

	t59 = (((x321|x322)+x323)*x324);

	if (t59 != 18446744073709550813LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x332 = 15;
	uint64_t t60 = 29640253LLU;

	t60 = (((x329|x330)+x331)*x332);

	if (t60 != 18446744041496805496LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x333 = -23;
	int64_t x334 = INT64_MIN;
	int32_t x336 = 303000;
	volatile uint64_t t61 = 11943LLU;

	t61 = (((x333|x334)+x335)*x336);

	if (t61 != 18446744073702279616LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x337 = UINT64_MAX;
	static uint32_t x338 = UINT32_MAX;
	volatile uint64_t x339 = 116429LLU;
	volatile uint8_t x340 = UINT8_MAX;
	volatile uint64_t t62 = 506081649LLU;

	t62 = (((x337|x338)+x339)*x340);

	if (t62 != 29689140LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x341 = 150U;
	int16_t x342 = INT16_MAX;
	int64_t x343 = -97LL;
	int32_t x344 = -14;
	static int64_t t63 = 38159926548244LL;

	t63 = (((x341|x342)+x343)*x344);

	if (t63 != -457380LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x353 = 2577657536828LLU;
	volatile int16_t x354 = -1;
	uint8_t x355 = 10U;
	volatile uint64_t t64 = 6571LLU;

	t64 = (((x353|x354)+x355)*x356);

	if (t64 != 1143LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x357 = -1902;
	int16_t x358 = INT16_MIN;
	int16_t x360 = INT16_MAX;
	static volatile int32_t t65 = 38217562;

	t65 = (((x357|x358)+x359)*x360);

	if (t65 != -62126232) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x365 = 7LL;
	int8_t x366 = -1;
	int32_t x367 = 662594844;
	int8_t x368 = INT8_MIN;
	volatile int64_t t66 = -10300263425516LL;

	t66 = (((x365|x366)+x367)*x368);

	if (t66 != -84812139904LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x369 = 57681761LL;
	int8_t x370 = INT8_MIN;
	static int32_t x372 = 0;
	volatile int64_t t67 = 47860388910LL;

	t67 = (((x369|x370)+x371)*x372);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x373 = -1;
	static uint64_t x374 = UINT64_MAX;
	volatile int64_t x375 = 26LL;

	t68 = (((x373|x374)+x375)*x376);

	if (t68 != 17609950LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x377 = INT8_MAX;
	static int16_t x378 = INT16_MAX;
	static int16_t x380 = -397;
	volatile uint64_t t69 = 382362LLU;

	t69 = (((x377|x378)+x379)*x380);

	if (t69 != 18446346129933607359LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x381 = INT8_MIN;
	static uint64_t x382 = 865206LLU;
	volatile int32_t x383 = -1;
	uint32_t x384 = 1004905U;
	static volatile uint64_t t70 = 2266307LLU;

	t70 = (((x381|x382)+x383)*x384);

	if (t70 != 18446744073634183741LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x385 = UINT32_MAX;
	static int8_t x386 = 1;
	uint64_t x387 = UINT64_MAX;
	int32_t x388 = -6;

	t71 = (((x385|x386)+x387)*x388);

	if (t71 != 18446744047939747852LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x389 = -1;
	int64_t x390 = -1LL;
	int16_t x392 = 101;
	int64_t t72 = -1LL;

	t72 = (((x389|x390)+x391)*x392);

	if (t72 != 2756562902LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x393 = 435U;
	volatile uint64_t x394 = 4131LLU;
	volatile int32_t x395 = -1;
	int8_t x396 = 0;
	static volatile uint64_t t73 = 124LLU;

	t73 = (((x393|x394)+x395)*x396);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x397 = INT32_MAX;
	uint32_t x398 = 897U;
	static int8_t x399 = 23;
	uint64_t x400 = 83568605500681LLU;
	uint64_t t74 = 12702LLU;

	t74 = (((x397|x398)+x399)*x400);

	if (t74 != 12289288338103258822LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x401 = -1;
	static volatile int64_t x402 = INT64_MAX;
	volatile int16_t x403 = -1;
	int8_t x404 = INT8_MIN;
	static int64_t t75 = 18322297182LL;

	t75 = (((x401|x402)+x403)*x404);

	if (t75 != 256LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x405 = -23292961;
	int8_t x406 = 25;
	int64_t x407 = -969405686LL;
	static int8_t x408 = INT8_MIN;

	t76 = (((x405|x406)+x407)*x408);

	if (t76 != 127065426816LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x409 = -1LL;
	static volatile uint16_t x410 = 3U;
	static int8_t x411 = INT8_MIN;
	volatile int8_t x412 = 8;
	int64_t t77 = 497235845LL;

	t77 = (((x409|x410)+x411)*x412);

	if (t77 != -1032LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x417 = 2001LLU;
	static volatile int32_t x418 = INT32_MIN;
	volatile uint64_t t78 = 12386651955LLU;

	t78 = (((x417|x418)+x419)*x420);

	if (t78 != 2147481648LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x421 = 14;
	int64_t x423 = INT64_MIN;
	static int64_t x424 = INT64_MAX;
	uint64_t t79 = 51140LLU;

	t79 = (((x421|x422)+x423)*x424);

	if (t79 != 18446744056219790945LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x426 = -34218;
	uint32_t x427 = 4250951U;

	t80 = (((x425|x426)+x427)*x428);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x429 = 0;
	int32_t x431 = 0;
	int16_t x432 = -1;
	int64_t t81 = -1LL;

	t81 = (((x429|x430)+x431)*x432);

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x433 = 5U;
	volatile uint8_t x434 = UINT8_MAX;
	uint8_t x435 = 32U;
	int32_t t82 = -1031;

	t82 = (((x433|x434)+x435)*x436);

	if (t82 != 36449) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x449 = 30;
	static volatile int8_t x450 = INT8_MAX;
	int8_t x451 = INT8_MIN;
	static uint16_t x452 = 450U;
	volatile int32_t t83 = -4;

	t83 = (((x449|x450)+x451)*x452);

	if (t83 != -450) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x461 = -1;
	int64_t x462 = INT64_MIN;
	int16_t x463 = INT16_MAX;
	int8_t x464 = 1;
	int64_t t84 = -938696681015LL;

	t84 = (((x461|x462)+x463)*x464);

	if (t84 != 32766LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x466 = 3641979;
	int32_t x468 = INT32_MIN;
	volatile int64_t t85 = -146LL;

	t85 = (((x465|x466)+x467)*x468);

	if (t85 != -12232236510216192LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x470 = -1;
	int16_t x471 = INT16_MAX;
	uint16_t x472 = 5U;
	int32_t t86 = 81709776;

	t86 = (((x469|x470)+x471)*x472);

	if (t86 != 163830) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x473 = INT16_MIN;
	int16_t x474 = -5870;
	uint64_t x476 = 94607321LLU;
	uint64_t t87 = 60526187238668385LLU;

	t87 = (((x473|x474)+x475)*x476);

	if (t87 != 18446743518269970025LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x477 = INT32_MIN;
	int16_t x479 = 93;
	static volatile int32_t t88 = -14686746;

	t88 = (((x477|x478)+x479)*x480);

	if (t88 != -11776) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x486 = 42U;
	uint16_t x487 = 119U;
	volatile uint16_t x488 = 1430U;

	t89 = (((x485|x486)+x487)*x488);

	if (t89 != 47190) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint8_t x493 = 4U;
	volatile int64_t x495 = -1LL;
	int64_t x496 = -329367916936LL;
	volatile int64_t t90 = -3533284360594687319LL;

	t90 = (((x493|x494)+x495)*x496);

	if (t90 != 3623047086296LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x509 = 22U;
	static volatile int8_t x510 = -1;
	volatile uint32_t x511 = 268304390U;
	uint32_t x512 = 7U;
	uint32_t t91 = 1974712U;

	t91 = (((x509|x510)+x511)*x512);

	if (t91 != 1878130723U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x514 = -32;
	static volatile int16_t x516 = INT16_MIN;
	int32_t t92 = -5322;

	t92 = (((x513|x514)+x515)*x516);

	if (t92 != 4227072) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x517 = INT8_MIN;
	volatile uint32_t x518 = UINT32_MAX;
	int8_t x519 = 1;
	int8_t x520 = -6;
	volatile uint32_t t93 = 14U;

	t93 = (((x517|x518)+x519)*x520);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x530 = 24494417LLU;
	int16_t x531 = -19;
	uint8_t x532 = 10U;
	uint64_t t94 = 368LLU;

	t94 = (((x529|x530)+x531)*x532);

	if (t94 != 21474836280LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x534 = 22;
	volatile uint64_t x535 = UINT64_MAX;
	int16_t x536 = -1;
	static uint64_t t95 = 7LLU;

	t95 = (((x533|x534)+x535)*x536);

	if (t95 != 2LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x537 = INT32_MIN;
	uint16_t x539 = 609U;
	static int64_t x540 = -1LL;
	int64_t t96 = 48049465366212LL;

	t96 = (((x537|x538)+x539)*x540);

	if (t96 != -608LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x545 = INT32_MIN;
	uint32_t x546 = UINT32_MAX;
	int32_t x547 = -1;
	uint64_t x548 = UINT64_MAX;

	t97 = (((x545|x546)+x547)*x548);

	if (t97 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x549 = UINT16_MAX;
	volatile int8_t x550 = INT8_MIN;
	int64_t x551 = -243362445183LL;
	volatile int8_t x552 = INT8_MAX;
	volatile int64_t t98 = -206462922202LL;

	t98 = (((x549|x550)+x551)*x552);

	if (t98 != -30907030538368LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x554 = INT32_MIN;
	uint32_t x555 = 39U;

	t99 = (((x553|x554)+x555)*x556);

	if (t99 != 2147484623U) { NG(); } else { ; }
	
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

