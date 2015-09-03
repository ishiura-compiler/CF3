#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = -28LL;
static uint32_t t2 = 97069313U;
int16_t x24 = -1738;
static volatile int8_t x29 = 4;
volatile uint64_t x30 = UINT64_MAX;
int16_t x33 = INT16_MIN;
int32_t x38 = INT32_MIN;
volatile int64_t x49 = INT64_MIN;
int8_t x53 = -17;
uint32_t x60 = 432U;
int64_t t12 = -315012LL;
uint16_t x61 = 3U;
static volatile int64_t t14 = 29487758LL;
volatile int8_t x69 = -1;
int32_t x74 = 3219;
static volatile uint8_t x75 = UINT8_MAX;
static volatile int32_t t16 = -10;
uint64_t x79 = UINT64_MAX;
static int8_t x80 = INT8_MAX;
volatile int8_t x87 = INT8_MAX;
uint8_t x93 = UINT8_MAX;
int32_t x99 = -1;
int32_t t20 = -40390479;
uint16_t x106 = 5U;
volatile uint64_t t22 = 412LLU;
uint32_t x109 = 1U;
int64_t t23 = -162126279467252LL;
uint8_t x115 = UINT8_MAX;
uint64_t t26 = 455671LLU;
uint64_t x129 = 397314LLU;
volatile int32_t x140 = INT32_MIN;
int8_t x148 = 39;
int64_t x150 = -1LL;
uint8_t x153 = 1U;
volatile uint8_t x160 = 3U;
volatile uint32_t t35 = 1U;
int16_t x169 = INT16_MAX;
int64_t x175 = 469578475353LL;
static uint64_t x179 = 184047772659LLU;
int32_t x192 = 23150;
int32_t x193 = -3929;
int16_t x201 = -1;
int16_t x203 = INT16_MIN;
volatile int32_t x207 = -1;
int64_t x210 = INT64_MIN;
int32_t x211 = INT32_MIN;
static uint64_t t44 = 9647151LLU;
int64_t x224 = INT64_MIN;
int32_t x229 = -656117655;
int32_t x232 = -158142206;
uint64_t t49 = 1310521183874385692LLU;
int16_t x246 = 13;
static int32_t x253 = INT32_MIN;
int32_t t54 = 69443362;
volatile uint32_t t55 = 10942240U;
volatile uint32_t t59 = 111578927U;
static int32_t x285 = INT32_MAX;
int32_t x286 = -1;
int32_t x296 = INT32_MIN;
uint64_t x299 = UINT64_MAX;
static int64_t x313 = INT64_MAX;
uint8_t x318 = 10U;
int32_t x321 = 45619202;
uint8_t x322 = 0U;
static uint64_t x330 = 17902436356LLU;
uint32_t x331 = 13U;
static int64_t x344 = INT64_MIN;
uint16_t x348 = 5030U;
uint16_t x365 = UINT16_MAX;
volatile int16_t x376 = 6109;
volatile int64_t x385 = INT64_MIN;
static uint64_t x386 = 485073320LLU;
uint8_t x393 = 122U;
int32_t x400 = INT32_MIN;
uint64_t t82 = 17904063605745733LLU;
static uint16_t x406 = 3U;
uint64_t x411 = 182767704535409849LLU;
static uint16_t x419 = 7950U;
int64_t x425 = -1LL;
uint64_t x426 = 1471667LLU;
int16_t x429 = -1;
volatile int32_t x434 = INT32_MIN;
uint64_t x436 = 76649349601622545LLU;
volatile int64_t t92 = 3777377LL;
int16_t x445 = -32;
int32_t x451 = INT32_MAX;
volatile int64_t x452 = -1LL;
int64_t t94 = 1LL;
uint16_t x456 = 3896U;
int16_t x457 = INT16_MAX;
uint64_t x460 = UINT64_MAX;
int32_t x472 = -1632;


void f0(void) {
	static volatile int64_t x1 = 164169982695LL;
	static volatile int32_t x2 = 2059403;
	int8_t x3 = INT8_MIN;
	int16_t x4 = -8789;

	t0 = (x1-(x2/(x3-x4)));

	if (t0 != 164169982458LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 4769250387039LL;
	static int64_t x6 = INT64_MIN;
	volatile uint16_t x7 = 1U;
	uint32_t x8 = 58U;
	volatile int64_t t1 = -108320832874246LL;

	t1 = (x5-(x6/(x7-x8)));

	if (t1 != 4771397870715LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MAX;
	static uint32_t x10 = UINT32_MAX;
	uint16_t x11 = 1201U;
	uint8_t x12 = UINT8_MAX;

	t2 = (x9-(x10/(x11-x12)));

	if (t2 != 4290459929U) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MAX;
	volatile uint64_t x14 = 5087600195LLU;
	uint16_t x15 = 1424U;
	static int16_t x16 = -578;
	uint64_t t3 = 37371304338LLU;

	t3 = (x13-(x14/(x15-x16)));

	if (t3 != 18446744073707010485LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 84U;
	static int16_t x18 = INT16_MIN;
	int64_t x19 = INT64_MAX;
	static int32_t x20 = INT32_MAX;
	int64_t t4 = 1572978063859095LL;

	t4 = (x17-(x18/(x19-x20)));

	if (t4 != 84LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int64_t x22 = -1019119327153LL;
	int8_t x23 = INT8_MIN;
	int64_t t5 = 1005890LL;

	t5 = (x21-(x22/(x23-x24)));

	if (t5 != 632993242LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x31 = INT64_MAX;
	uint64_t x32 = UINT64_MAX;
	uint64_t t6 = 3305687489249273732LLU;

	t6 = (x29-(x30/(x31-x32)));

	if (t6 != 3LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x34 = -1LL;
	volatile int64_t x35 = INT64_MIN;
	volatile int32_t x36 = INT32_MIN;
	volatile int64_t t7 = -96341951638LL;

	t7 = (x33-(x34/(x35-x36)));

	if (t7 != -32768LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x37 = INT8_MAX;
	int8_t x39 = 0;
	static int64_t x40 = -1LL;
	volatile int64_t t8 = -17029003255436568LL;

	t8 = (x37-(x38/(x39-x40)));

	if (t8 != 2147483775LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x41 = -1;
	int64_t x42 = INT64_MIN;
	uint64_t x43 = 130677831LLU;
	uint32_t x44 = UINT32_MAX;
	volatile uint64_t t9 = UINT64_MAX;

	t9 = (x41-(x42/(x43-x44)));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x50 = INT32_MIN;
	int64_t x51 = 128892466LL;
	int16_t x52 = 2;
	volatile int64_t t10 = -218924018096LL;

	t10 = (x49-(x50/(x51-x52)));

	if (t10 != -9223372036854775792LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x54 = INT32_MIN;
	int64_t x55 = 2865874591684283LL;
	int8_t x56 = INT8_MIN;
	volatile int64_t t11 = 24LL;

	t11 = (x53-(x54/(x55-x56)));

	if (t11 != -17LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = 493551;
	uint16_t x58 = 10U;
	static volatile int64_t x59 = -200053721669LL;

	t12 = (x57-(x58/(x59-x60)));

	if (t12 != 493551LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x62 = UINT16_MAX;
	uint8_t x63 = 58U;
	volatile int16_t x64 = -1;
	volatile int32_t t13 = -7085446;

	t13 = (x61-(x62/(x63-x64)));

	if (t13 != -1107) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x65 = -97LL;
	int32_t x66 = -1;
	int32_t x67 = -12304485;
	int16_t x68 = INT16_MIN;

	t14 = (x65-(x66/(x67-x68)));

	if (t14 != -97LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x70 = -1260;
	uint32_t x71 = 1645773636U;
	int32_t x72 = INT32_MIN;
	uint32_t t15 = 807435U;

	t15 = (x69-(x70/(x71-x72)));

	if (t15 != 4294967294U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = -1;
	int32_t x76 = INT32_MAX;

	t16 = (x73-(x74/(x75-x76)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = 1642U;
	int8_t x78 = -1;
	uint64_t t17 = 1122522836558LLU;

	t17 = (x77-(x78/(x79-x80)));

	if (t17 != 1641LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x85 = -1LL;
	static int32_t x86 = -1;
	uint64_t x88 = UINT64_MAX;
	uint64_t t18 = 192455LLU;

	t18 = (x85-(x86/(x87-x88)));

	if (t18 != 18302628885633695744LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x94 = 1067942;
	int64_t x95 = -146LL;
	int64_t x96 = INT64_MIN;
	static int64_t t19 = -265988519LL;

	t19 = (x93-(x94/(x95-x96)));

	if (t19 != 255LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x97 = INT16_MAX;
	volatile int32_t x98 = INT32_MAX;
	int8_t x100 = 9;

	t20 = (x97-(x98/(x99-x100)));

	if (t20 != 214781131) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = 1905;
	int8_t x102 = INT8_MIN;
	static volatile uint64_t x103 = 20215955LLU;
	int8_t x104 = INT8_MAX;
	uint64_t t21 = 734LLU;

	t21 = (x101-(x102/(x103-x104)));

	if (t21 != 18446743161219396121LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = INT8_MAX;
	static volatile uint64_t x107 = 9LLU;
	uint8_t x108 = 58U;

	t22 = (x105-(x106/(x107-x108)));

	if (t22 != 127LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x110 = -34603615365474847LL;
	volatile uint16_t x111 = UINT16_MAX;
	static int8_t x112 = 0;

	t23 = (x109-(x110/(x111-x112)));

	if (t23 != 528017324567LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x113 = -15094827258662LL;
	int16_t x114 = INT16_MAX;
	int16_t x116 = INT16_MIN;
	volatile int64_t t24 = -3783LL;

	t24 = (x113-(x114/(x115-x116)));

	if (t24 != -15094827258662LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = INT64_MIN;
	static uint8_t x118 = 2U;
	int32_t x119 = INT32_MAX;
	volatile int16_t x120 = INT16_MAX;
	int64_t t25 = INT64_MIN;

	t25 = (x117-(x118/(x119-x120)));

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x121 = 4U;
	uint64_t x122 = UINT64_MAX;
	int32_t x123 = -2110267;
	int64_t x124 = 0LL;

	t26 = (x121-(x122/(x123-x124)));

	if (t26 != 3LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = INT64_MAX;
	int32_t x126 = 5;
	uint8_t x127 = UINT8_MAX;
	uint64_t x128 = UINT64_MAX;
	uint64_t t27 = 157788741LLU;

	t27 = (x125-(x126/(x127-x128)));

	if (t27 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x130 = 1;
	volatile int8_t x131 = INT8_MIN;
	int16_t x132 = INT16_MIN;
	uint64_t t28 = 64027796LLU;

	t28 = (x129-(x130/(x131-x132)));

	if (t28 != 397314LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x133 = UINT8_MAX;
	volatile int8_t x134 = 1;
	int64_t x135 = -1438807925897LL;
	int16_t x136 = -7455;
	volatile int64_t t29 = -7LL;

	t29 = (x133-(x134/(x135-x136)));

	if (t29 != 255LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x137 = 7U;
	static uint32_t x138 = UINT32_MAX;
	int8_t x139 = INT8_MIN;
	uint32_t t30 = 1111U;

	t30 = (x137-(x138/(x139-x140)));

	if (t30 != 5U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x141 = UINT32_MAX;
	uint8_t x142 = 122U;
	static uint8_t x143 = 1U;
	static int64_t x144 = INT64_MAX;
	volatile int64_t t31 = 32LL;

	t31 = (x141-(x142/(x143-x144)));

	if (t31 != 4294967295LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x145 = INT16_MIN;
	int64_t x146 = INT64_MIN;
	int8_t x147 = -1;
	int64_t t32 = -8LL;

	t32 = (x145-(x146/(x147-x148)));

	if (t32 != -230584300921402163LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = INT8_MIN;
	int8_t x151 = -1;
	int16_t x152 = 0;
	static int64_t t33 = -3844LL;

	t33 = (x149-(x150/(x151-x152)));

	if (t33 != -129LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint32_t x154 = 4568U;
	uint8_t x155 = 2U;
	static int8_t x156 = 1;
	volatile uint32_t t34 = 15U;

	t34 = (x153-(x154/(x155-x156)));

	if (t34 != 4294962729U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x157 = -2;
	uint32_t x158 = 64382279U;
	volatile uint32_t x159 = 3648U;

	t35 = (x157-(x158/(x159-x160)));

	if (t35 != 4294949631U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x170 = -1;
	uint32_t x171 = UINT32_MAX;
	static int64_t x172 = INT64_MAX;
	int64_t t36 = -1421058523304377489LL;

	t36 = (x169-(x170/(x171-x172)));

	if (t36 != 32767LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x173 = -22;
	int16_t x174 = INT16_MIN;
	uint32_t x176 = 957714912U;
	static int64_t t37 = 122816048LL;

	t37 = (x173-(x174/(x175-x176)));

	if (t37 != -22LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x177 = INT32_MIN;
	uint8_t x178 = 1U;
	int8_t x180 = INT8_MAX;
	uint64_t t38 = 3552914LLU;

	t38 = (x177-(x178/(x179-x180)));

	if (t38 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x181 = INT64_MIN;
	static volatile uint64_t x182 = UINT64_MAX;
	volatile int8_t x183 = INT8_MIN;
	uint16_t x184 = 0U;
	static volatile uint64_t t39 = 68888527LLU;

	t39 = (x181-(x182/(x183-x184)));

	if (t39 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x189 = UINT16_MAX;
	int8_t x190 = INT8_MIN;
	static uint32_t x191 = UINT32_MAX;
	uint32_t t40 = 13556U;

	t40 = (x189-(x190/(x191-x192)));

	if (t40 != 65534U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x194 = INT32_MAX;
	int64_t x195 = -668905803568LL;
	volatile int8_t x196 = 19;
	static int64_t t41 = -455883LL;

	t41 = (x193-(x194/(x195-x196)));

	if (t41 != -3929LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x202 = -1LL;
	volatile uint8_t x204 = 11U;
	volatile int64_t t42 = 101677LL;

	t42 = (x201-(x202/(x203-x204)));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x205 = INT8_MIN;
	int8_t x206 = INT8_MIN;
	volatile uint16_t x208 = 57U;
	int32_t t43 = -166393556;

	t43 = (x205-(x206/(x207-x208)));

	if (t43 != -130) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x209 = 11LLU;
	int8_t x212 = INT8_MIN;

	t44 = (x209-(x210/(x211-x212)));

	if (t44 != 18446744069414584075LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x217 = 6LL;
	int8_t x218 = INT8_MAX;
	uint8_t x219 = UINT8_MAX;
	int32_t x220 = 2499488;
	int64_t t45 = 2339029955647496279LL;

	t45 = (x217-(x218/(x219-x220)));

	if (t45 != 6LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x221 = INT32_MIN;
	int32_t x222 = -1;
	int64_t x223 = -1LL;
	volatile int64_t t46 = -410499LL;

	t46 = (x221-(x222/(x223-x224)));

	if (t46 != -2147483648LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x225 = INT16_MIN;
	static int8_t x226 = -1;
	volatile uint64_t x227 = 13223161506LLU;
	int32_t x228 = INT32_MAX;
	static uint64_t t47 = 1724120859LLU;

	t47 = (x225-(x226/(x227-x228)));

	if (t47 != 18446744072044000556LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x230 = 9493824LLU;
	volatile int8_t x231 = 0;
	volatile uint64_t t48 = 74883LLU;

	t48 = (x229-(x230/(x231-x232)));

	if (t48 != 18446744073053433961LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x233 = 1100499622LLU;
	static int8_t x234 = -1;
	uint32_t x235 = 396166U;
	int32_t x236 = 22;

	t49 = (x233-(x234/(x235-x236)));

	if (t49 != 1100488781LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x237 = INT32_MIN;
	int64_t x238 = -433LL;
	uint8_t x239 = 16U;
	int32_t x240 = INT32_MAX;
	volatile int64_t t50 = -4LL;

	t50 = (x237-(x238/(x239-x240)));

	if (t50 != -2147483648LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x241 = INT16_MAX;
	static int8_t x242 = 3;
	int32_t x243 = INT32_MIN;
	static uint64_t x244 = 69874LLU;
	uint64_t t51 = 4699522LLU;

	t51 = (x241-(x242/(x243-x244)));

	if (t51 != 32767LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x245 = INT8_MIN;
	static volatile uint32_t x247 = 40U;
	uint8_t x248 = 6U;
	uint32_t t52 = 25646333U;

	t52 = (x245-(x246/(x247-x248)));

	if (t52 != 4294967168U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x254 = 13887U;
	static int64_t x255 = -50LL;
	uint32_t x256 = 169U;
	int64_t t53 = -406408385410LL;

	t53 = (x253-(x254/(x255-x256)));

	if (t53 != -2147483585LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x257 = INT32_MAX;
	static int32_t x258 = INT32_MIN;
	int16_t x259 = -1;
	volatile int8_t x260 = 3;

	t54 = (x257-(x258/(x259-x260)));

	if (t54 != 1610612735) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x265 = INT32_MIN;
	uint32_t x266 = 1245606155U;
	static uint8_t x267 = 9U;
	static int32_t x268 = 249507;

	t55 = (x265-(x266/(x267-x268)));

	if (t55 != 2147483648U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x269 = 1U;
	int8_t x270 = -1;
	static int8_t x271 = INT8_MIN;
	int16_t x272 = 65;
	volatile int32_t t56 = 3;

	t56 = (x269-(x270/(x271-x272)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x273 = 25U;
	volatile int16_t x274 = INT16_MAX;
	volatile uint16_t x275 = 52U;
	static uint64_t x276 = 3891237360189LLU;
	volatile uint64_t t57 = 72961430435LLU;

	t57 = (x273-(x274/(x275-x276)));

	if (t57 != 25LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x277 = 0;
	int32_t x278 = 2839;
	static int8_t x279 = -12;
	int64_t x280 = INT64_MIN;
	volatile int64_t t58 = 1838681845LL;

	t58 = (x277-(x278/(x279-x280)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x281 = 1311;
	uint32_t x282 = 310972824U;
	static int16_t x283 = INT16_MIN;
	volatile uint16_t x284 = 11877U;

	t59 = (x281-(x282/(x283-x284)));

	if (t59 != 1311U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x287 = UINT64_MAX;
	volatile int8_t x288 = INT8_MIN;
	volatile uint64_t t60 = 96627LLU;

	t60 = (x285-(x286/(x287-x288)));

	if (t60 != 18301494122520739581LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x293 = 20187;
	uint64_t x294 = 7442575824902292LLU;
	int64_t x295 = 58697151691LL;
	uint64_t t61 = 496904954326LLU;

	t61 = (x293-(x294/(x295-x296)));

	if (t61 != 18446744073709449483LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x297 = INT16_MIN;
	int8_t x298 = INT8_MIN;
	uint8_t x300 = UINT8_MAX;
	volatile uint64_t t62 = 1654LLU;

	t62 = (x297-(x298/(x299-x300)));

	if (t62 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x301 = 322U;
	int8_t x302 = 61;
	volatile int8_t x303 = -1;
	int16_t x304 = INT16_MAX;
	volatile int32_t t63 = 53330556;

	t63 = (x301-(x302/(x303-x304)));

	if (t63 != 322) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x305 = 16014762;
	int32_t x306 = -1;
	static uint16_t x307 = 20U;
	int16_t x308 = -1574;
	volatile int32_t t64 = -5714;

	t64 = (x305-(x306/(x307-x308)));

	if (t64 != 16014762) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x309 = INT8_MIN;
	int64_t x310 = -174306818894316LL;
	uint64_t x311 = 34LLU;
	uint32_t x312 = UINT32_MAX;
	volatile uint64_t t65 = 5LLU;

	t65 = (x309-(x310/(x311-x312)));

	if (t65 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x314 = INT64_MAX;
	uint16_t x315 = UINT16_MAX;
	volatile uint16_t x316 = 706U;
	static int64_t t66 = -667124499165701532LL;

	t66 = (x313-(x314/(x315-x316)));

	if (t66 != 9223229764537805705LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x317 = -1;
	int8_t x319 = 5;
	int32_t x320 = 110130093;
	static volatile int32_t t67 = 3884;

	t67 = (x317-(x318/(x319-x320)));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x323 = INT32_MIN;
	volatile int16_t x324 = -1;
	int32_t t68 = -2;

	t68 = (x321-(x322/(x323-x324)));

	if (t68 != 45619202) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x325 = UINT8_MAX;
	static int32_t x326 = INT32_MIN;
	uint64_t x327 = 152LLU;
	int8_t x328 = 1;
	volatile uint64_t t69 = 440029582237056LLU;

	t69 = (x325-(x326/(x327-x328)));

	if (t69 != 18324580205685962017LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x329 = INT8_MIN;
	uint64_t x332 = 153847LLU;
	uint64_t t70 = 14844208141432LLU;

	t70 = (x329-(x330/(x331-x332)));

	if (t70 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x341 = UINT16_MAX;
	int16_t x342 = INT16_MIN;
	volatile int16_t x343 = INT16_MIN;
	volatile int64_t t71 = -28164962816861LL;

	t71 = (x341-(x342/(x343-x344)));

	if (t71 != 65535LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x345 = INT8_MIN;
	int64_t x346 = -103825017768LL;
	int8_t x347 = INT8_MIN;
	static volatile int64_t t72 = -2876604915516955LL;

	t72 = (x345-(x346/(x347-x348)));

	if (t72 != -20129057LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x349 = 6150641U;
	static int64_t x350 = -6679633188638066LL;
	uint16_t x351 = 5642U;
	int16_t x352 = 921;
	int64_t t73 = 2087191895207LL;

	t73 = (x349-(x350/(x351-x352)));

	if (t73 != 1414882911631LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x357 = INT8_MIN;
	static uint64_t x358 = UINT64_MAX;
	int16_t x359 = INT16_MAX;
	int32_t x360 = INT32_MAX;
	static volatile uint64_t t74 = 0LLU;

	t74 = (x357-(x358/(x359-x360)));

	if (t74 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x366 = -1LL;
	int64_t x367 = -2066307996003LL;
	uint8_t x368 = 7U;
	static volatile int64_t t75 = -13341LL;

	t75 = (x365-(x366/(x367-x368)));

	if (t75 != 65535LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x369 = 694606731;
	int64_t x370 = 3LL;
	uint64_t x371 = 384545455577508LLU;
	int8_t x372 = 1;
	uint64_t t76 = 598448815626LLU;

	t76 = (x369-(x370/(x371-x372)));

	if (t76 != 694606731LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x373 = -1;
	int64_t x374 = -99193236549LL;
	int64_t x375 = 4059706557LL;
	static int64_t t77 = 215074638694797LL;

	t77 = (x373-(x374/(x375-x376)));

	if (t77 != 23LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x381 = 0U;
	int32_t x382 = -198728;
	uint32_t x383 = 455U;
	int64_t x384 = INT64_MAX;
	int64_t t78 = -288090227258986952LL;

	t78 = (x381-(x382/(x383-x384)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x387 = INT8_MAX;
	uint64_t x388 = UINT64_MAX;
	volatile uint64_t t79 = 416239531035747LLU;

	t79 = (x385-(x386/(x387-x388)));

	if (t79 != 9223372036850986173LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x394 = -1;
	volatile int32_t x395 = -195787;
	static uint64_t x396 = 9230434167498LLU;
	static uint64_t t80 = 1954226974041724704LLU;

	t80 = (x393-(x394/(x395-x396)));

	if (t80 != 121LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x397 = UINT16_MAX;
	static int32_t x398 = 367380546;
	static int16_t x399 = -14;
	volatile int32_t t81 = 401547209;

	t81 = (x397-(x398/(x399-x400)));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x401 = INT64_MIN;
	static uint64_t x402 = 1761LLU;
	static int8_t x403 = 0;
	volatile uint8_t x404 = 35U;

	t82 = (x401-(x402/(x403-x404)));

	if (t82 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x405 = INT32_MAX;
	uint32_t x407 = 104980U;
	volatile uint64_t x408 = 26881875324882LLU;
	static volatile uint64_t t83 = 15819363LLU;

	t83 = (x405-(x406/(x407-x408)));

	if (t83 != 2147483647LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x409 = -1;
	uint64_t x410 = 342117988LLU;
	uint8_t x412 = UINT8_MAX;
	uint64_t t84 = UINT64_MAX;

	t84 = (x409-(x410/(x411-x412)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x413 = INT16_MIN;
	volatile int8_t x414 = 0;
	static uint64_t x415 = 112309100258137019LLU;
	uint64_t x416 = 490842878275305746LLU;
	volatile uint64_t t85 = 192LLU;

	t85 = (x413-(x414/(x415-x416)));

	if (t85 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x417 = -43282677;
	int64_t x418 = -3621232427142228LL;
	uint64_t x420 = 15LLU;
	static volatile uint64_t t86 = 1136670832489140125LLU;

	t86 = (x417-(x418/(x419-x420)));

	if (t86 != 18444419798576000205LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x421 = 5U;
	static int8_t x422 = -1;
	int8_t x423 = 25;
	int16_t x424 = -373;
	int32_t t87 = -214097216;

	t87 = (x421-(x422/(x423-x424)));

	if (t87 != 5) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x427 = -1;
	int16_t x428 = INT16_MIN;
	volatile uint64_t t88 = 710165679678671LLU;

	t88 = (x425-(x426/(x427-x428)));

	if (t88 != 18446744073709551571LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x430 = UINT32_MAX;
	uint64_t x431 = 5031613329769LLU;
	static uint32_t x432 = 194730314U;
	uint64_t t89 = UINT64_MAX;

	t89 = (x429-(x430/(x431-x432)));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x433 = INT8_MIN;
	static uint32_t x435 = UINT32_MAX;
	uint64_t t90 = 60165493LLU;

	t90 = (x433-(x434/(x435-x436)));

	if (t90 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x437 = INT8_MAX;
	static int64_t x438 = -1LL;
	static uint64_t x439 = UINT64_MAX;
	uint8_t x440 = UINT8_MAX;
	volatile uint64_t t91 = 0LLU;

	t91 = (x437-(x438/(x439-x440)));

	if (t91 != 126LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x441 = -1LL;
	uint8_t x442 = UINT8_MAX;
	int64_t x443 = 14LL;
	int32_t x444 = INT32_MAX;

	t92 = (x441-(x442/(x443-x444)));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x446 = -980439;
	static int16_t x447 = INT16_MIN;
	int16_t x448 = -15791;
	static int32_t t93 = -1;

	t93 = (x445-(x446/(x447-x448)));

	if (t93 != -89) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x449 = INT32_MAX;
	int16_t x450 = -22;

	t94 = (x449-(x450/(x451-x452)));

	if (t94 != 2147483647LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x453 = -1;
	volatile int64_t x454 = -1LL;
	volatile uint16_t x455 = UINT16_MAX;
	int64_t t95 = -68102070051229LL;

	t95 = (x453-(x454/(x455-x456)));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x458 = 1;
	int32_t x459 = INT32_MIN;
	uint64_t t96 = 41LLU;

	t96 = (x457-(x458/(x459-x460)));

	if (t96 != 32767LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x461 = -2121;
	int16_t x462 = 1;
	volatile uint64_t x463 = 1LLU;
	static uint32_t x464 = 157U;
	uint64_t t97 = 183826650845523798LLU;

	t97 = (x461-(x462/(x463-x464)));

	if (t97 != 18446744073709549495LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x465 = UINT32_MAX;
	volatile int64_t x466 = -165LL;
	uint16_t x467 = UINT16_MAX;
	volatile int8_t x468 = 16;
	int64_t t98 = 21857063LL;

	t98 = (x465-(x466/(x467-x468)));

	if (t98 != 4294967295LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x469 = UINT16_MAX;
	uint64_t x470 = 65772532162984LLU;
	int32_t x471 = 308;
	static volatile uint64_t t99 = 2779183254473LLU;

	t99 = (x469-(x470/(x471-x472)));

	if (t99 != 18446744039806250057LLU) { NG(); } else { ; }
	
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

