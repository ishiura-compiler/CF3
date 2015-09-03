#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 53751864085713349LLU;
static int16_t x4 = INT16_MAX;
volatile int32_t x7 = INT32_MAX;
int32_t t1 = 38;
volatile int32_t t4 = -1;
int16_t x26 = -1;
int32_t t6 = -16080094;
static volatile int32_t t7 = 489;
uint64_t t9 = 3558LLU;
int64_t x46 = 0LL;
int64_t x49 = 14542435584445LL;
uint32_t x52 = 9089U;
static volatile int64_t t12 = 197575480451059LL;
volatile uint32_t x53 = 178091U;
volatile int64_t x57 = INT64_MIN;
int16_t x62 = INT16_MIN;
int8_t x75 = INT8_MIN;
int32_t x77 = INT32_MIN;
int8_t x80 = -1;
uint8_t x84 = 79U;
int32_t x87 = -5;
static int64_t x88 = 16980187491001486LL;
volatile int16_t x95 = -1;
volatile int32_t t22 = -18;
int8_t x98 = INT8_MIN;
volatile int32_t t23 = 67457;
int16_t x107 = 51;
int32_t t26 = 44;
volatile uint8_t x117 = UINT8_MAX;
int64_t x119 = INT64_MAX;
int8_t x121 = INT8_MAX;
int32_t x124 = INT32_MIN;
static int16_t x125 = -1077;
uint8_t x147 = UINT8_MAX;
volatile int32_t x157 = 214370;
volatile int32_t t38 = 16;
uint32_t t39 = 10U;
static int16_t x176 = -1;
int16_t x179 = -1;
uint32_t x181 = UINT32_MAX;
volatile int8_t x182 = -40;
int16_t x195 = INT16_MIN;
int16_t x197 = INT16_MIN;
int8_t x198 = -1;
int8_t x202 = INT8_MIN;
static int64_t x208 = INT64_MIN;
int8_t x210 = INT8_MAX;
volatile uint64_t t49 = 1834773434677964LLU;
uint32_t x224 = 0U;
int32_t t51 = -56612;
int32_t t54 = 243;
uint32_t x244 = 364200254U;
int16_t x248 = INT16_MAX;
int64_t x249 = INT64_MAX;
int64_t x252 = 33835228483LL;
int32_t x268 = INT32_MAX;
volatile int16_t x275 = INT16_MIN;
volatile int64_t x277 = 2647983047146350LL;
int64_t x292 = 44LL;
int64_t x297 = INT64_MIN;
static volatile int8_t x299 = -1;
volatile uint64_t x300 = UINT64_MAX;
uint8_t x310 = 4U;
volatile int32_t t71 = -6177959;
uint8_t x323 = 21U;
volatile int16_t x327 = INT16_MIN;
int32_t t73 = 86832;
uint32_t x330 = 3649U;
int16_t x336 = 36;
volatile uint16_t x343 = 4862U;
int32_t x345 = -1;
static int16_t x347 = INT16_MIN;
int16_t x353 = INT16_MIN;
volatile int32_t x356 = -181554;
static int64_t x359 = INT64_MIN;
int16_t x360 = INT16_MAX;
volatile int32_t t81 = 907135;
volatile int8_t x366 = 0;
int16_t x368 = INT16_MIN;
int32_t t84 = -4;
int32_t x385 = INT32_MAX;
int64_t x386 = 686621207977LL;
volatile int16_t x388 = INT16_MAX;
volatile uint32_t x389 = 8940U;
int32_t x396 = INT32_MIN;
static int64_t t89 = 6784LL;
static int16_t x403 = 825;
static uint16_t x411 = 0U;
int32_t t93 = -6746151;
int8_t x414 = INT8_MIN;
int16_t x422 = -3;
uint8_t x423 = 107U;
volatile int32_t x426 = INT32_MAX;
uint32_t x427 = UINT32_MAX;
int8_t x429 = -7;
int64_t x431 = INT64_MAX;


void f0(void) {
	int64_t x1 = -1LL;
	int64_t x3 = INT64_MIN;
	volatile int64_t t0 = 3203306590895303LL;

	t0 = (x1&(x2<(x3+x4)));

	if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x5 = UINT16_MAX;
	volatile int8_t x6 = -1;
	int32_t x8 = INT32_MIN;

	t1 = (x5&(x6<(x7+x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	int8_t x10 = 3;
	static int8_t x11 = -5;
	uint64_t x12 = UINT64_MAX;
	static volatile int32_t t2 = 11435036;

	t2 = (x9&(x10<(x11+x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	int32_t x14 = -1;
	int64_t x15 = 6399415013LL;
	uint32_t x16 = 157326540U;
	volatile int32_t t3 = -15;

	t3 = (x13&(x14<(x15+x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MIN;
	int64_t x18 = INT64_MIN;
	int16_t x19 = -11006;
	uint16_t x20 = UINT16_MAX;

	t4 = (x17&(x18<(x19+x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	volatile uint16_t x22 = UINT16_MAX;
	int16_t x23 = -1;
	int64_t x24 = INT64_MAX;
	int32_t t5 = -11749;

	t5 = (x21&(x22<(x23+x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MIN;
	int8_t x27 = -1;
	uint64_t x28 = 104LLU;

	t6 = (x25&(x26<(x27+x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	int8_t x30 = INT8_MIN;
	volatile int16_t x31 = INT16_MIN;
	volatile uint16_t x32 = 748U;

	t7 = (x29&(x30<(x31+x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int16_t x34 = 2399;
	uint64_t x35 = 10361LLU;
	uint16_t x36 = UINT16_MAX;
	static volatile int64_t t8 = 2538164345075LL;

	t8 = (x33&(x34<(x35+x36)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	int16_t x38 = INT16_MAX;
	uint32_t x39 = UINT32_MAX;
	int8_t x40 = 15;

	t9 = (x37&(x38<(x39+x40)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MIN;
	static int8_t x42 = INT8_MIN;
	uint32_t x43 = 6866559U;
	uint32_t x44 = UINT32_MAX;
	volatile int32_t t10 = 25964335;

	t10 = (x41&(x42<(x43+x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = -1;
	volatile int8_t x47 = INT8_MAX;
	static int64_t x48 = -1801478783913916LL;
	volatile int32_t t11 = -22;

	t11 = (x45&(x46<(x47+x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x50 = 4U;
	int16_t x51 = INT16_MIN;

	t12 = (x49&(x50<(x51+x52)));

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = INT16_MAX;
	int64_t x55 = 3141728988123LL;
	volatile uint64_t x56 = 15612246335273511LLU;
	uint32_t t13 = 5U;

	t13 = (x53&(x54<(x55+x56)));

	if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x58 = UINT64_MAX;
	int32_t x59 = INT32_MIN;
	uint16_t x60 = 1U;
	static int64_t t14 = -16522LL;

	t14 = (x57&(x58<(x59+x60)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	int8_t x63 = -4;
	volatile int16_t x64 = INT16_MIN;
	static volatile int32_t t15 = 583869784;

	t15 = (x61&(x62<(x63+x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 52405U;
	int64_t x66 = 49461LL;
	volatile int16_t x67 = -1;
	volatile int64_t x68 = 81512328428LL;
	uint32_t t16 = 485159513U;

	t16 = (x65&(x66<(x67+x68)));

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = 1767238316100LLU;
	static uint8_t x74 = UINT8_MAX;
	uint8_t x76 = 0U;
	static uint64_t t17 = 5645LLU;

	t17 = (x73&(x74<(x75+x76)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x78 = UINT8_MAX;
	static uint32_t x79 = 74467U;
	volatile int32_t t18 = 1;

	t18 = (x77&(x78<(x79+x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x81 = 2U;
	uint64_t x82 = 8627498LLU;
	static int16_t x83 = INT16_MAX;
	volatile uint32_t t19 = 26U;

	t19 = (x81&(x82<(x83+x84)));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MIN;
	static uint8_t x86 = 3U;
	int32_t t20 = -1;

	t20 = (x85&(x86<(x87+x88)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	static int64_t x90 = INT64_MIN;
	int16_t x91 = INT16_MAX;
	int16_t x92 = INT16_MIN;
	static int32_t t21 = -2;

	t21 = (x89&(x90<(x91+x92)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = 1222U;
	static int8_t x94 = -2;
	uint16_t x96 = 4407U;

	t22 = (x93&(x94<(x95+x96)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MIN;
	volatile uint8_t x99 = 50U;
	uint64_t x100 = 93614590753LLU;

	t23 = (x97&(x98<(x99+x100)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x105 = UINT8_MAX;
	static uint32_t x106 = 21U;
	int16_t x108 = 6560;
	volatile int32_t t24 = -165;

	t24 = (x105&(x106<(x107+x108)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = -3105320974LL;
	int32_t x110 = INT32_MAX;
	static int64_t x111 = 1775859879414832250LL;
	volatile uint8_t x112 = UINT8_MAX;
	int64_t t25 = -133548886090LL;

	t25 = (x109&(x110<(x111+x112)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = INT32_MIN;
	int8_t x114 = INT8_MAX;
	int8_t x115 = -1;
	uint32_t x116 = 3045U;

	t26 = (x113&(x114<(x115+x116)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x118 = -10117491492476LL;
	int16_t x120 = -1;
	int32_t t27 = -46101;

	t27 = (x117&(x118<(x119+x120)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x122 = -1LL;
	volatile int16_t x123 = INT16_MAX;
	volatile int32_t t28 = 52472572;

	t28 = (x121&(x122<(x123+x124)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x126 = INT64_MAX;
	static int32_t x127 = -1;
	int32_t x128 = INT32_MAX;
	int32_t t29 = 119413;

	t29 = (x125&(x126<(x127+x128)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x133 = 1U;
	uint32_t x134 = 715U;
	static volatile uint64_t x135 = 6812351LLU;
	int32_t x136 = -1;
	static volatile int32_t t30 = 55;

	t30 = (x133&(x134<(x135+x136)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x137 = INT8_MAX;
	int8_t x138 = INT8_MIN;
	volatile uint8_t x139 = UINT8_MAX;
	int16_t x140 = -1;
	int32_t t31 = -1;

	t31 = (x137&(x138<(x139+x140)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x141 = -1LL;
	int16_t x142 = 132;
	int64_t x143 = -1LL;
	volatile int16_t x144 = INT16_MIN;
	static int64_t t32 = 24656832LL;

	t32 = (x141&(x142<(x143+x144)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x145 = INT8_MIN;
	int32_t x146 = -43850852;
	uint8_t x148 = 2U;
	int32_t t33 = -563083975;

	t33 = (x145&(x146<(x147+x148)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x149 = INT8_MAX;
	uint16_t x150 = UINT16_MAX;
	int64_t x151 = INT64_MIN;
	uint16_t x152 = UINT16_MAX;
	static volatile int32_t t34 = -1806;

	t34 = (x149&(x150<(x151+x152)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x153 = 3046267;
	static volatile int8_t x154 = 0;
	int8_t x155 = -13;
	uint32_t x156 = 1675U;
	int32_t t35 = 28256;

	t35 = (x153&(x154<(x155+x156)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x158 = 223;
	int8_t x159 = 1;
	static uint16_t x160 = UINT16_MAX;
	int32_t t36 = 53925746;

	t36 = (x157&(x158<(x159+x160)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = INT16_MIN;
	static volatile uint16_t x162 = 1267U;
	int64_t x163 = INT64_MIN;
	volatile int64_t x164 = 1320521LL;
	volatile int32_t t37 = 264778153;

	t37 = (x161&(x162<(x163+x164)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x165 = 1881U;
	static int32_t x166 = INT32_MAX;
	volatile int64_t x167 = -36756351906351838LL;
	int8_t x168 = INT8_MIN;

	t38 = (x165&(x166<(x167+x168)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x169 = 1747374U;
	int8_t x170 = INT8_MIN;
	uint64_t x171 = UINT64_MAX;
	uint8_t x172 = UINT8_MAX;

	t39 = (x169&(x170<(x171+x172)));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x173 = 3LLU;
	uint32_t x174 = 2682U;
	static int16_t x175 = -1;
	static volatile uint64_t t40 = 118881627LLU;

	t40 = (x173&(x174<(x175+x176)));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x177 = INT64_MAX;
	static int8_t x178 = -1;
	int8_t x180 = INT8_MIN;
	volatile int64_t t41 = -1398948752230LL;

	t41 = (x177&(x178<(x179+x180)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x183 = 880U;
	uint16_t x184 = 9581U;
	uint32_t t42 = 26496U;

	t42 = (x181&(x182<(x183+x184)));

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = INT64_MIN;
	int16_t x190 = -2;
	int16_t x191 = INT16_MIN;
	volatile uint64_t x192 = 7737974675673027878LLU;
	volatile int64_t t43 = 313227407090LL;

	t43 = (x189&(x190<(x191+x192)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x193 = INT16_MIN;
	static uint16_t x194 = UINT16_MAX;
	int64_t x196 = 113LL;
	int32_t t44 = 1753595;

	t44 = (x193&(x194<(x195+x196)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x199 = INT64_MIN;
	uint8_t x200 = 3U;
	int32_t t45 = 628614;

	t45 = (x197&(x198<(x199+x200)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x201 = INT64_MIN;
	uint64_t x203 = 3LLU;
	static uint16_t x204 = 554U;
	volatile int64_t t46 = -1LL;

	t46 = (x201&(x202<(x203+x204)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x205 = -1;
	int16_t x206 = INT16_MAX;
	int32_t x207 = INT32_MAX;
	volatile int32_t t47 = 455;

	t47 = (x205&(x206<(x207+x208)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x209 = 16;
	int8_t x211 = INT8_MIN;
	uint8_t x212 = 9U;
	int32_t t48 = 34630;

	t48 = (x209&(x210<(x211+x212)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x213 = UINT64_MAX;
	uint8_t x214 = 63U;
	static int64_t x215 = INT64_MIN;
	uint64_t x216 = 1262474LLU;

	t49 = (x213&(x214<(x215+x216)));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x217 = INT32_MIN;
	int8_t x218 = -1;
	int64_t x219 = -197817390LL;
	int16_t x220 = INT16_MAX;
	volatile int32_t t50 = -3915324;

	t50 = (x217&(x218<(x219+x220)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x221 = 26830U;
	uint16_t x222 = 917U;
	static int32_t x223 = INT32_MAX;

	t51 = (x221&(x222<(x223+x224)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x225 = 1;
	volatile uint64_t x226 = 3779852574LLU;
	int16_t x227 = INT16_MIN;
	static int64_t x228 = INT64_MAX;
	int32_t t52 = -294050594;

	t52 = (x225&(x226<(x227+x228)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x229 = UINT16_MAX;
	int32_t x230 = 6261;
	uint64_t x231 = 14597779721LLU;
	int16_t x232 = INT16_MIN;
	static volatile int32_t t53 = 64;

	t53 = (x229&(x230<(x231+x232)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x237 = -1;
	int32_t x238 = 31450;
	int32_t x239 = INT32_MAX;
	uint64_t x240 = 3LLU;

	t54 = (x237&(x238<(x239+x240)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x241 = 37;
	int16_t x242 = 30;
	int64_t x243 = INT64_MIN;
	int32_t t55 = -12;

	t55 = (x241&(x242<(x243+x244)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x245 = 9554591;
	int8_t x246 = -1;
	uint32_t x247 = 1U;
	int32_t t56 = 65512;

	t56 = (x245&(x246<(x247+x248)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x250 = UINT64_MAX;
	uint8_t x251 = 19U;
	volatile int64_t t57 = -452LL;

	t57 = (x249&(x250<(x251+x252)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x253 = 31599U;
	int32_t x254 = INT32_MAX;
	int16_t x255 = INT16_MAX;
	int32_t x256 = -11457526;
	uint32_t t58 = 660U;

	t58 = (x253&(x254<(x255+x256)));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x257 = 1;
	int32_t x258 = -33919;
	int64_t x259 = -1LL;
	volatile uint32_t x260 = 2950U;
	volatile int32_t t59 = -65722716;

	t59 = (x257&(x258<(x259+x260)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x261 = 0U;
	int16_t x262 = INT16_MIN;
	uint32_t x263 = 101U;
	volatile int16_t x264 = 4;
	volatile int32_t t60 = -10944;

	t60 = (x261&(x262<(x263+x264)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x265 = INT16_MIN;
	int8_t x266 = INT8_MIN;
	int8_t x267 = 0;
	volatile int32_t t61 = 609782;

	t61 = (x265&(x266<(x267+x268)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x273 = INT64_MIN;
	static volatile int64_t x274 = INT64_MIN;
	int32_t x276 = -1;
	static volatile int64_t t62 = -33501487241257689LL;

	t62 = (x273&(x274<(x275+x276)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x278 = INT64_MAX;
	uint64_t x279 = UINT64_MAX;
	int32_t x280 = INT32_MIN;
	static volatile int64_t t63 = 21791477390223LL;

	t63 = (x277&(x278<(x279+x280)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x285 = 0LLU;
	static int8_t x286 = -1;
	uint8_t x287 = 5U;
	static uint8_t x288 = UINT8_MAX;
	volatile uint64_t t64 = 3244LLU;

	t64 = (x285&(x286<(x287+x288)));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x289 = -1LL;
	static int32_t x290 = -350824881;
	int8_t x291 = INT8_MAX;
	static volatile int64_t t65 = -27621593LL;

	t65 = (x289&(x290<(x291+x292)));

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x293 = INT32_MIN;
	static int16_t x294 = -5499;
	static int64_t x295 = -1LL;
	static int32_t x296 = -1;
	volatile int32_t t66 = -295928168;

	t66 = (x293&(x294<(x295+x296)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x298 = INT8_MIN;
	int64_t t67 = -154LL;

	t67 = (x297&(x298<(x299+x300)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x305 = 1908U;
	static int16_t x306 = INT16_MAX;
	uint16_t x307 = 4U;
	uint64_t x308 = UINT64_MAX;
	volatile uint32_t t68 = 221069U;

	t68 = (x305&(x306<(x307+x308)));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x309 = -137;
	int16_t x311 = -1;
	uint8_t x312 = 15U;
	int32_t t69 = -16925;

	t69 = (x309&(x310<(x311+x312)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x313 = 327778120U;
	int8_t x314 = INT8_MIN;
	int16_t x315 = -145;
	int16_t x316 = 0;
	static uint32_t t70 = 569228U;

	t70 = (x313&(x314<(x315+x316)));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x317 = INT8_MIN;
	int8_t x318 = 1;
	volatile int64_t x319 = 2004202674827LL;
	static int32_t x320 = 100551342;

	t71 = (x317&(x318<(x319+x320)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x321 = -1;
	uint16_t x322 = 0U;
	uint8_t x324 = 1U;
	int32_t t72 = 120589;

	t72 = (x321&(x322<(x323+x324)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x325 = -1;
	static int8_t x326 = 0;
	int16_t x328 = INT16_MAX;

	t73 = (x325&(x326<(x327+x328)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x329 = 1003963273239218844LL;
	int64_t x331 = -1LL;
	uint64_t x332 = UINT64_MAX;
	int64_t t74 = -112312803611710LL;

	t74 = (x329&(x330<(x331+x332)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x333 = 4U;
	int32_t x334 = -1;
	int16_t x335 = -1;
	int32_t t75 = 223594068;

	t75 = (x333&(x334<(x335+x336)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x341 = -1;
	static int8_t x342 = INT8_MIN;
	int16_t x344 = INT16_MIN;
	volatile int32_t t76 = 28;

	t76 = (x341&(x342<(x343+x344)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x346 = -1;
	static int64_t x348 = 2060170492742127007LL;
	int32_t t77 = 1954466;

	t77 = (x345&(x346<(x347+x348)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x349 = -1;
	static int16_t x350 = INT16_MIN;
	static uint64_t x351 = 9LLU;
	static volatile uint64_t x352 = UINT64_MAX;
	static volatile int32_t t78 = -480731;

	t78 = (x349&(x350<(x351+x352)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x354 = 17U;
	uint16_t x355 = 14946U;
	volatile int32_t t79 = 125843;

	t79 = (x353&(x354<(x355+x356)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x357 = INT8_MAX;
	int16_t x358 = INT16_MIN;
	static int32_t t80 = 266;

	t80 = (x357&(x358<(x359+x360)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x361 = -11642;
	static int32_t x362 = INT32_MAX;
	static int64_t x363 = -1LL;
	static int64_t x364 = -37049786789880LL;

	t81 = (x361&(x362<(x363+x364)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x365 = 10088530428096LL;
	static int8_t x367 = -51;
	int64_t t82 = -912243707443520LL;

	t82 = (x365&(x366<(x367+x368)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x369 = UINT8_MAX;
	int32_t x370 = -1;
	static volatile uint16_t x371 = UINT16_MAX;
	uint8_t x372 = UINT8_MAX;
	static volatile int32_t t83 = -13;

	t83 = (x369&(x370<(x371+x372)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x373 = INT16_MIN;
	int32_t x374 = INT32_MAX;
	int32_t x375 = 526354630;
	volatile int64_t x376 = -1LL;

	t84 = (x373&(x374<(x375+x376)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x377 = 3U;
	static volatile int64_t x378 = INT64_MIN;
	int32_t x379 = INT32_MIN;
	static int32_t x380 = INT32_MAX;
	volatile int32_t t85 = 71;

	t85 = (x377&(x378<(x379+x380)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x381 = 17273U;
	int8_t x382 = -1;
	static int64_t x383 = -200693867LL;
	int8_t x384 = -1;
	static int32_t t86 = -17;

	t86 = (x381&(x382<(x383+x384)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x387 = 4U;
	volatile int32_t t87 = -889140;

	t87 = (x385&(x386<(x387+x388)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x390 = INT64_MIN;
	int8_t x391 = INT8_MIN;
	uint32_t x392 = 629018U;
	volatile uint32_t t88 = 33363143U;

	t88 = (x389&(x390<(x391+x392)));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x393 = INT64_MIN;
	static int8_t x394 = -19;
	volatile int8_t x395 = 2;

	t89 = (x393&(x394<(x395+x396)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x397 = -1;
	volatile uint16_t x398 = 3U;
	int32_t x399 = -1;
	uint64_t x400 = 11132LLU;
	volatile int32_t t90 = 15;

	t90 = (x397&(x398<(x399+x400)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x401 = -391;
	uint16_t x402 = UINT16_MAX;
	static uint16_t x404 = 1U;
	int32_t t91 = 2;

	t91 = (x401&(x402<(x403+x404)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x405 = 2U;
	int16_t x406 = INT16_MIN;
	static int8_t x407 = INT8_MIN;
	int8_t x408 = INT8_MIN;
	volatile int32_t t92 = 59588692;

	t92 = (x405&(x406<(x407+x408)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x409 = 45U;
	volatile uint8_t x410 = 2U;
	volatile uint64_t x412 = UINT64_MAX;

	t93 = (x409&(x410<(x411+x412)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x413 = INT64_MIN;
	int32_t x415 = INT32_MIN;
	uint32_t x416 = 2667581U;
	volatile int64_t t94 = 4LL;

	t94 = (x413&(x414<(x415+x416)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x417 = INT8_MIN;
	volatile int8_t x418 = INT8_MAX;
	uint64_t x419 = 22492124LLU;
	uint32_t x420 = 22872735U;
	int32_t t95 = -111124;

	t95 = (x417&(x418<(x419+x420)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x421 = 1781U;
	uint32_t x424 = 14U;
	int32_t t96 = 2676933;

	t96 = (x421&(x422<(x423+x424)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x425 = -22;
	static uint32_t x428 = UINT32_MAX;
	volatile int32_t t97 = -2134;

	t97 = (x425&(x426<(x427+x428)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x430 = -1;
	int8_t x432 = INT8_MIN;
	static int32_t t98 = 6626;

	t98 = (x429&(x430<(x431+x432)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint16_t x433 = 166U;
	static uint64_t x434 = 226274LLU;
	static volatile int64_t x435 = INT64_MIN;
	int16_t x436 = INT16_MAX;
	int32_t t99 = 112;

	t99 = (x433&(x434<(x435+x436)));

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

