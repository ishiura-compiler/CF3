#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x4 = 29U;
int16_t x8 = -36;
uint64_t x21 = 67709611000LLU;
int64_t x25 = INT64_MIN;
int32_t x31 = -1;
uint16_t x36 = 7791U;
int32_t x41 = INT32_MIN;
uint32_t x47 = 757487943U;
volatile uint32_t t12 = 3000U;
volatile uint64_t t13 = 29002441LLU;
volatile uint16_t x62 = 3561U;
volatile uint8_t x64 = 4U;
uint64_t x68 = UINT64_MAX;
static int64_t x75 = INT64_MAX;
volatile int8_t x81 = INT8_MIN;
volatile uint32_t x82 = 320U;
uint16_t x90 = UINT16_MAX;
static uint64_t t24 = 50LLU;
static volatile int64_t t25 = 857583476035249764LL;
int8_t x129 = -1;
int8_t x130 = 1;
int16_t x132 = INT16_MAX;
int64_t x134 = 1238218521676935LL;
int64_t x137 = -469511923592LL;
uint32_t x138 = UINT32_MAX;
static uint16_t x144 = 651U;
int16_t x147 = INT16_MIN;
uint16_t x153 = 24U;
int64_t t38 = -24022905924LL;
uint16_t x157 = UINT16_MAX;
int64_t t40 = 0LL;
int32_t x167 = -754134692;
uint32_t x179 = 880282U;
uint16_t x181 = UINT16_MAX;
static volatile uint32_t x185 = UINT32_MAX;
int64_t x186 = 313LL;
volatile int64_t t46 = 956364453LL;
int64_t t47 = 1594505770939729LL;
volatile int16_t x198 = INT16_MIN;
int64_t x200 = INT64_MAX;
int8_t x201 = 7;
static volatile int32_t t51 = -412469377;
int16_t x213 = INT16_MIN;
volatile int64_t x216 = 22LL;
int32_t x217 = INT32_MIN;
int16_t x218 = INT16_MIN;
int32_t x225 = -131428;
volatile uint16_t x230 = 81U;
static int64_t x240 = INT64_MAX;
uint8_t x245 = UINT8_MAX;
int64_t x252 = INT64_MIN;
int64_t t62 = -305957LL;
int32_t x254 = INT32_MAX;
volatile int64_t x256 = 29363166217003538LL;
uint64_t x258 = 812345770425121965LLU;
volatile int64_t x261 = INT64_MAX;
int16_t x273 = INT16_MIN;
static volatile int8_t x277 = INT8_MIN;
uint32_t x281 = UINT32_MAX;
int64_t x282 = -2289708739935158LL;
volatile int8_t x287 = -1;
int16_t x292 = 2;
uint8_t x294 = UINT8_MAX;
static int16_t x296 = 1;
int8_t x298 = INT8_MAX;
volatile int32_t t75 = 0;
int8_t x305 = 4;
int32_t x307 = -3875;
uint16_t x315 = UINT16_MAX;
uint64_t x320 = UINT64_MAX;
static uint16_t x332 = UINT16_MAX;
uint16_t x334 = 152U;
int32_t x335 = -1;
uint8_t x339 = UINT8_MAX;
static int64_t t88 = 10034641923565LL;
uint8_t x359 = 4U;
volatile int16_t x364 = -360;
int64_t t91 = 53643547LL;
uint32_t x372 = 444587U;
volatile int8_t x375 = INT8_MAX;
uint32_t x390 = UINT32_MAX;
volatile uint32_t t97 = 304U;
volatile int16_t x394 = -1;
volatile int8_t x397 = INT8_MAX;
int64_t x398 = -217085336287731LL;


void f0(void) {
	int64_t x1 = -1LL;
	int8_t x2 = INT8_MAX;
	int32_t x3 = INT32_MAX;
	volatile int64_t t0 = 2LL;

	t0 = (x1&(x2^(x3|x4)));

	if (t0 != 2147483520LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	uint8_t x6 = UINT8_MAX;
	uint32_t x7 = 1803904048U;
	int64_t t1 = -551756401806113295LL;

	t1 = (x5&(x6^(x7|x8)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	uint8_t x10 = 7U;
	int16_t x11 = INT16_MIN;
	uint8_t x12 = 28U;
	static int32_t t2 = 69639;

	t2 = (x9&(x10^(x11|x12)));

	if (t2 != 32795) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 81175U;
	int16_t x14 = INT16_MIN;
	static int16_t x15 = INT16_MIN;
	int16_t x16 = INT16_MIN;
	volatile uint32_t t3 = 144613U;

	t3 = (x13&(x14^(x15|x16)));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 22U;
	uint32_t x18 = UINT32_MAX;
	int16_t x19 = -8581;
	int32_t x20 = -1;
	uint32_t t4 = 61344016U;

	t4 = (x17&(x18^(x19|x20)));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = -1;
	int32_t x23 = -1;
	int32_t x24 = -50;
	uint64_t t5 = 6434LLU;

	t5 = (x21&(x22^(x23|x24)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x26 = -1;
	int32_t x27 = -114475;
	int64_t x28 = INT64_MIN;
	static int64_t t6 = -380LL;

	t6 = (x25&(x26^(x27|x28)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = 1011;
	uint64_t x30 = 449LLU;
	int32_t x32 = INT32_MIN;
	uint64_t t7 = 0LLU;

	t7 = (x29&(x30^(x31|x32)));

	if (t7 != 562LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = 110U;
	int16_t x34 = -1;
	int32_t x35 = 0;
	int32_t t8 = -2840556;

	t8 = (x33&(x34^(x35|x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = 1;
	int16_t x38 = 8;
	int32_t x39 = -1;
	volatile uint32_t x40 = UINT32_MAX;
	uint32_t t9 = 94435060U;

	t9 = (x37&(x38^(x39|x40)));

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = INT64_MIN;
	static int32_t x43 = -119978607;
	int32_t x44 = INT32_MIN;
	int64_t t10 = -81567402924786737LL;

	t10 = (x41&(x42^(x43|x44)));

	if (t10 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = -1;
	volatile int32_t x46 = INT32_MIN;
	uint64_t x48 = 1468558229840677LLU;
	uint64_t t11 = 530551009332186756LLU;

	t11 = (x45&(x46^(x47|x48)));

	if (t11 != 18445275517012638567LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 864215U;
	int32_t x50 = -1;
	volatile int32_t x51 = -50710;
	static volatile int8_t x52 = -1;

	t12 = (x49&(x50^(x51|x52)));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1;
	volatile uint64_t x54 = 478183428387426LLU;
	int16_t x55 = INT16_MIN;
	uint16_t x56 = 2U;

	t13 = (x53&(x54^(x55|x56)));

	if (t13 != 18446265890281189984LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x57 = 12U;
	static int64_t x58 = -1529117LL;
	int16_t x59 = INT16_MIN;
	static uint16_t x60 = 1007U;
	volatile int64_t t14 = -232062852669410399LL;

	t14 = (x57&(x58^(x59|x60)));

	if (t14 != 12LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -23;
	static volatile uint64_t x63 = 19889233LLU;
	volatile uint64_t t15 = 1LLU;

	t15 = (x61&(x62^(x63|x64)));

	if (t15 != 19886504LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	int16_t x66 = INT16_MIN;
	volatile uint16_t x67 = 6U;
	uint64_t t16 = 198034590LLU;

	t16 = (x65&(x66^(x67|x68)));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 311U;
	static int16_t x70 = INT16_MAX;
	int8_t x71 = -1;
	static int64_t x72 = 110LL;
	int64_t t17 = 3680665022768542LL;

	t17 = (x69&(x70^(x71|x72)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = UINT32_MAX;
	uint32_t x74 = UINT32_MAX;
	volatile int8_t x76 = 1;
	volatile int64_t t18 = -15244LL;

	t18 = (x73&(x74^(x75|x76)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	uint32_t x78 = UINT32_MAX;
	static int64_t x79 = INT64_MIN;
	volatile uint16_t x80 = 329U;
	static volatile int64_t t19 = 316642LL;

	t19 = (x77&(x78^(x79|x80)));

	if (t19 != -9223372032559808896LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x83 = 1024LL;
	static int8_t x84 = -7;
	volatile int64_t t20 = -824949LL;

	t20 = (x81&(x82^(x83|x84)));

	if (t20 != -384LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 84897U;
	uint64_t x86 = 72966654LLU;
	uint8_t x87 = 2U;
	static uint16_t x88 = 999U;
	uint64_t t21 = 5892677288LLU;

	t21 = (x85&(x86^(x87|x88)));

	if (t21 != 82433LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x89 = UINT64_MAX;
	int64_t x91 = INT64_MAX;
	volatile int8_t x92 = 0;
	volatile uint64_t t22 = 1951342764471208507LLU;

	t22 = (x89&(x90^(x91|x92)));

	if (t22 != 9223372036854710272LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -5;
	int32_t x94 = 6693036;
	uint8_t x95 = UINT8_MAX;
	static volatile uint8_t x96 = UINT8_MAX;
	int32_t t23 = -1833082;

	t23 = (x93&(x94^(x95|x96)));

	if (t23 != 6692947) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 111U;
	volatile int64_t x98 = -1LL;
	static uint64_t x99 = 3LLU;
	int64_t x100 = INT64_MAX;

	t24 = (x97&(x98^(x99|x100)));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	int8_t x102 = INT8_MIN;
	int16_t x103 = -1;
	int64_t x104 = INT64_MIN;

	t25 = (x101&(x102^(x103|x104)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MAX;
	int16_t x106 = -181;
	uint16_t x107 = 194U;
	int16_t x108 = INT16_MAX;
	volatile int32_t t26 = 15255;

	t26 = (x105&(x106^(x107|x108)));

	if (t26 != 52) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -1;
	uint32_t x110 = 174567098U;
	volatile int8_t x111 = INT8_MIN;
	uint32_t x112 = 72523581U;
	static uint32_t t27 = 1009252908U;

	t27 = (x109&(x110^(x111|x112)));

	if (t27 != 4120400135U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = INT64_MAX;
	int8_t x114 = -1;
	uint64_t x115 = 72277347LLU;
	volatile int64_t x116 = INT64_MAX;
	volatile uint64_t t28 = 11888741LLU;

	t28 = (x113&(x114^(x115|x116)));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x117 = INT16_MAX;
	int8_t x118 = INT8_MAX;
	int8_t x119 = INT8_MIN;
	uint64_t x120 = 11703238365LLU;
	uint64_t t29 = 30560606LLU;

	t29 = (x117&(x118^(x119|x120)));

	if (t29 != 32674LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x121 = -1;
	uint32_t x122 = 1521761581U;
	static int32_t x123 = -38;
	static uint32_t x124 = 166595753U;
	volatile uint32_t t30 = 6759U;

	t30 = (x121&(x122^(x123|x124)));

	if (t30 != 2773205718U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x125 = 7LLU;
	volatile int64_t x126 = -2227816980340018042LL;
	static uint8_t x127 = UINT8_MAX;
	int32_t x128 = 380930;
	uint64_t t31 = 69592LLU;

	t31 = (x125&(x126^(x127|x128)));

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x131 = -1;
	static volatile int32_t t32 = 27;

	t32 = (x129&(x130^(x131|x132)));

	if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = -263;
	static volatile uint32_t x135 = UINT32_MAX;
	int8_t x136 = INT8_MIN;
	static int64_t t33 = 800913162399058076LL;

	t33 = (x133&(x134^(x135|x136)));

	if (t33 != 1238220966490744LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x139 = -1;
	volatile uint32_t x140 = UINT32_MAX;
	static volatile int64_t t34 = 8935982LL;

	t34 = (x137&(x138^(x139|x140)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 67U;
	static uint64_t x142 = 9899237858171LLU;
	volatile int64_t x143 = 102927716698422LL;
	uint64_t t35 = 370LLU;

	t35 = (x141&(x142^(x143|x144)));

	if (t35 != 64LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = INT8_MIN;
	int16_t x146 = INT16_MIN;
	uint64_t x148 = UINT64_MAX;
	volatile uint64_t t36 = 10LLU;

	t36 = (x145&(x146^(x147|x148)));

	if (t36 != 32640LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 4U;
	int16_t x150 = INT16_MIN;
	int32_t x151 = 978405355;
	int32_t x152 = INT32_MIN;
	int32_t t37 = 2606207;

	t37 = (x149&(x150^(x151|x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x154 = UINT8_MAX;
	uint32_t x155 = 789490U;
	int64_t x156 = 498LL;

	t38 = (x153&(x154^(x155|x156)));

	if (t38 != 8LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x158 = -1LL;
	volatile int16_t x159 = INT16_MIN;
	int16_t x160 = 11297;
	volatile int64_t t39 = -131LL;

	t39 = (x157&(x158^(x159|x160)));

	if (t39 != 21470LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 1U;
	int8_t x162 = INT8_MAX;
	int16_t x163 = -1;
	int64_t x164 = -591LL;

	t40 = (x161&(x162^(x163|x164)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x165 = 0U;
	int32_t x166 = -170170172;
	int16_t x168 = 3516;
	volatile uint32_t t41 = 6772U;

	t41 = (x165&(x166^(x167|x168)));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MAX;
	uint64_t x170 = 91776198439662LLU;
	int16_t x171 = INT16_MIN;
	int32_t x172 = INT32_MIN;
	uint64_t t42 = 1148757888394516844LLU;

	t42 = (x169&(x170^(x171|x172)));

	if (t42 != 110LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = INT64_MAX;
	volatile int32_t x174 = INT32_MIN;
	static volatile int16_t x175 = -174;
	int32_t x176 = -90;
	int64_t t43 = 2873633442434930470LL;

	t43 = (x173&(x174^(x175|x176)));

	if (t43 != 2147483638LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x177 = 55763514346LLU;
	volatile uint32_t x178 = UINT32_MAX;
	uint8_t x180 = 4U;
	uint64_t t44 = 1610LLU;

	t44 = (x177&(x178^(x179|x180)));

	if (t44 != 4223832416LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x182 = 46U;
	int32_t x183 = -219237968;
	volatile int16_t x184 = INT16_MIN;
	static uint32_t t45 = 4U;

	t45 = (x181&(x182^(x183|x184)));

	if (t45 != 45470U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x187 = INT32_MIN;
	int8_t x188 = -1;

	t46 = (x185&(x186^(x187|x188)));

	if (t46 != 4294966982LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	static volatile int8_t x190 = INT8_MIN;
	int64_t x191 = INT64_MAX;
	static int64_t x192 = INT64_MIN;

	t47 = (x189&(x190^(x191|x192)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 72885LLU;
	static volatile int64_t x194 = 575848LL;
	int64_t x195 = -2570LL;
	int64_t x196 = INT64_MIN;
	volatile uint64_t t48 = 22113LLU;

	t48 = (x193&(x194^(x195|x196)));

	if (t48 != 72852LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 645457U;
	int8_t x199 = INT8_MIN;
	volatile int64_t t49 = 639LL;

	t49 = (x197&(x198^(x199|x200)));

	if (t49 != 22865LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x202 = 1U;
	int32_t x203 = -1;
	volatile int64_t x204 = -1LL;
	int64_t t50 = 2982120LL;

	t50 = (x201&(x202^(x203|x204)));

	if (t50 != 6LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x205 = UINT8_MAX;
	int8_t x206 = INT8_MIN;
	int16_t x207 = -1;
	int32_t x208 = INT32_MIN;

	t51 = (x205&(x206^(x207|x208)));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x209 = UINT32_MAX;
	uint16_t x210 = UINT16_MAX;
	int32_t x211 = INT32_MIN;
	uint32_t x212 = 963596749U;
	volatile uint32_t t52 = 7495U;

	t52 = (x209&(x210^(x211|x212)));

	if (t52 != 3111104050U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x214 = 302;
	static volatile int8_t x215 = -1;
	volatile int64_t t53 = 5317LL;

	t53 = (x213&(x214^(x215|x216)));

	if (t53 != -32768LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x219 = INT16_MIN;
	volatile int32_t x220 = INT32_MAX;
	volatile int32_t t54 = -1;

	t54 = (x217&(x218^(x219|x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x221 = 35U;
	int8_t x222 = -23;
	static int64_t x223 = 451913232613249LL;
	int16_t x224 = INT16_MAX;
	int64_t t55 = -1LL;

	t55 = (x221&(x222^(x223|x224)));

	if (t55 != 2LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = INT32_MIN;
	volatile int64_t x227 = INT64_MIN;
	int64_t x228 = INT64_MIN;
	volatile int64_t t56 = -5674156LL;

	t56 = (x225&(x226^(x227|x228)));

	if (t56 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = INT64_MIN;
	static uint64_t x231 = 16231220028932784LLU;
	volatile int64_t x232 = -104012LL;
	static uint64_t t57 = 3822080915012565067LLU;

	t57 = (x229&(x230^(x231|x232)));

	if (t57 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -4;
	uint8_t x234 = 5U;
	uint64_t x235 = UINT64_MAX;
	static volatile int32_t x236 = 89080;
	uint64_t t58 = 67122897983LLU;

	t58 = (x233&(x234^(x235|x236)));

	if (t58 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MAX;
	uint64_t x238 = 3LLU;
	uint64_t x239 = 38155116003LLU;
	uint64_t t59 = 18903761103130044LLU;

	t59 = (x237&(x238^(x239|x240)));

	if (t59 != 2147483644LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -1;
	int16_t x242 = -1;
	uint32_t x243 = 1U;
	int16_t x244 = -1;
	uint32_t t60 = 286U;

	t60 = (x241&(x242^(x243|x244)));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x246 = 27;
	uint32_t x247 = 86U;
	static volatile uint16_t x248 = UINT16_MAX;
	volatile uint32_t t61 = 10U;

	t61 = (x245&(x246^(x247|x248)));

	if (t61 != 228U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	int64_t x250 = 4564179383568LL;
	int64_t x251 = -305600LL;

	t62 = (x249&(x250^(x251|x252)));

	if (t62 != -4564179681280LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x253 = -1;
	int32_t x255 = -172621;
	int64_t t63 = 3LL;

	t63 = (x253&(x254^(x255|x256)));

	if (t63 != -2147319732LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = 958;
	volatile int64_t x259 = INT64_MIN;
	uint8_t x260 = UINT8_MAX;
	volatile uint64_t t64 = 97548044LLU;

	t64 = (x257&(x258^(x259|x260)));

	if (t64 != 18LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x262 = -1;
	static int16_t x263 = INT16_MIN;
	volatile int64_t x264 = -8201902886844587LL;
	static int64_t t65 = -142603LL;

	t65 = (x261&(x262^(x263|x264)));

	if (t65 != 30890LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	volatile int32_t x266 = INT32_MAX;
	int64_t x267 = -1LL;
	uint8_t x268 = 26U;
	static int64_t t66 = -88LL;

	t66 = (x265&(x266^(x267|x268)));

	if (t66 != -2147483648LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 24160U;
	uint64_t x270 = 22LLU;
	int8_t x271 = INT8_MAX;
	int16_t x272 = INT16_MIN;
	volatile uint64_t t67 = 104686433LLU;

	t67 = (x269&(x270^(x271|x272)));

	if (t67 != 96LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x274 = UINT8_MAX;
	uint16_t x275 = 7093U;
	int8_t x276 = INT8_MIN;
	static int32_t t68 = -3;

	t68 = (x273&(x274^(x275|x276)));

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x278 = 1;
	static volatile uint8_t x279 = 102U;
	volatile int64_t x280 = INT64_MAX;
	int64_t t69 = -16756000574221917LL;

	t69 = (x277&(x278^(x279|x280)));

	if (t69 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x283 = -26;
	int16_t x284 = 167;
	int64_t t70 = -149451LL;

	t70 = (x281&(x282^(x283|x284)));

	if (t70 != 1544895405LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x285 = INT64_MIN;
	uint16_t x286 = 1U;
	int8_t x288 = INT8_MAX;
	volatile int64_t t71 = INT64_MIN;

	t71 = (x285&(x286^(x287|x288)));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	uint8_t x290 = 26U;
	int64_t x291 = INT64_MAX;
	volatile int64_t t72 = -55976396565377LL;

	t72 = (x289&(x290^(x291|x292)));

	if (t72 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x293 = 307U;
	int64_t x295 = INT64_MIN;
	int64_t t73 = -6000594LL;

	t73 = (x293&(x294^(x295|x296)));

	if (t73 != 50LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	int8_t x299 = -1;
	volatile int16_t x300 = -1;
	int32_t t74 = -251563;

	t74 = (x297&(x298^(x299|x300)));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = -1;
	static uint16_t x302 = 33U;
	static uint8_t x303 = UINT8_MAX;
	volatile uint8_t x304 = 0U;

	t75 = (x301&(x302^(x303|x304)));

	if (t75 != 222) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x306 = UINT64_MAX;
	uint64_t x308 = 2163061293638433LLU;
	volatile uint64_t t76 = 39009LLU;

	t76 = (x305&(x306^(x307|x308)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x309 = 3U;
	int8_t x310 = 46;
	static int64_t x311 = INT64_MIN;
	volatile uint64_t x312 = 56752072574LLU;
	static volatile uint64_t t77 = 4476872604978937LLU;

	t77 = (x309&(x310^(x311|x312)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 691U;
	uint8_t x314 = 58U;
	static int8_t x316 = 2;
	int32_t t78 = -50022;

	t78 = (x313&(x314^(x315|x316)));

	if (t78 != 641) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 96866009LLU;
	int32_t x318 = INT32_MIN;
	static int8_t x319 = -1;
	uint64_t t79 = 109910166610LLU;

	t79 = (x317&(x318^(x319|x320)));

	if (t79 != 96866009LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x321 = 586119U;
	int32_t x322 = INT32_MIN;
	uint16_t x323 = 869U;
	int32_t x324 = INT32_MIN;
	volatile uint32_t t80 = 23U;

	t80 = (x321&(x322^(x323|x324)));

	if (t80 != 261U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	volatile int64_t x326 = -54575429508035732LL;
	static int32_t x327 = -1;
	int32_t x328 = INT32_MIN;
	int64_t t81 = -45707918LL;

	t81 = (x325&(x326^(x327|x328)));

	if (t81 != 54575429508035731LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x329 = INT32_MIN;
	volatile int64_t x330 = INT64_MIN;
	int64_t x331 = -154463182094187LL;
	int64_t t82 = 4207759LL;

	t82 = (x329&(x330^(x331|x332)));

	if (t82 != 9223217572650942464LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -834;
	static int8_t x336 = INT8_MIN;
	int32_t t83 = -56;

	t83 = (x333&(x334^(x335|x336)));

	if (t83 != -986) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 4115903313778966LLU;
	int8_t x338 = INT8_MIN;
	int32_t x340 = -1;
	static volatile uint64_t t84 = 90994LLU;

	t84 = (x337&(x338^(x339|x340)));

	if (t84 != 22LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	int32_t x342 = INT32_MIN;
	static int32_t x343 = INT32_MAX;
	static uint16_t x344 = UINT16_MAX;
	volatile int64_t t85 = INT64_MIN;

	t85 = (x341&(x342^(x343|x344)));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -1;
	volatile int64_t x346 = INT64_MIN;
	volatile int64_t x347 = 1358834LL;
	int16_t x348 = INT16_MIN;
	int64_t t86 = -899662LL;

	t86 = (x345&(x346^(x347|x348)));

	if (t86 != 9223372036854758386LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x349 = INT32_MIN;
	volatile uint32_t x350 = 22U;
	int64_t x351 = INT64_MAX;
	volatile int16_t x352 = -120;
	static int64_t t87 = 4839915LL;

	t87 = (x349&(x350^(x351|x352)));

	if (t87 != -2147483648LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = -38;
	static int64_t x354 = -1LL;
	int8_t x355 = INT8_MIN;
	int16_t x356 = INT16_MIN;

	t88 = (x353&(x354^(x355|x356)));

	if (t88 != 90LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 169671U;
	volatile int64_t x358 = 716808LL;
	static int8_t x360 = INT8_MIN;
	static volatile int64_t t89 = -8529653652767648LL;

	t89 = (x357&(x358^(x359|x360)));

	if (t89 != 1668LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MAX;
	static int32_t x362 = -1;
	static uint32_t x363 = UINT32_MAX;
	static volatile uint32_t t90 = 60891U;

	t90 = (x361&(x362^(x363|x364)));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MAX;
	volatile uint16_t x366 = 134U;
	int64_t x367 = -400475335984LL;
	volatile int8_t x368 = -1;

	t91 = (x365&(x366^(x367|x368)));

	if (t91 != 9223372036854775673LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = UINT8_MAX;
	uint16_t x370 = 49U;
	uint8_t x371 = 13U;
	uint32_t t92 = 11U;

	t92 = (x369&(x370^(x371|x372)));

	if (t92 != 158U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = -12069905971LL;
	int16_t x374 = INT16_MIN;
	int16_t x376 = -1;
	static volatile int64_t t93 = 6260764098394588LL;

	t93 = (x373&(x374^(x375|x376)));

	if (t93 != 22989LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x377 = INT64_MIN;
	uint32_t x378 = 24455426U;
	static uint64_t x379 = 2458332000454489114LLU;
	uint64_t x380 = 199LLU;
	uint64_t t94 = 5464LLU;

	t94 = (x377&(x378^(x379|x380)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = UINT8_MAX;
	uint8_t x382 = UINT8_MAX;
	int32_t x383 = INT32_MAX;
	int8_t x384 = -1;
	volatile int32_t t95 = 31850145;

	t95 = (x381&(x382^(x383|x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	int64_t x386 = INT64_MIN;
	int8_t x387 = INT8_MAX;
	int16_t x388 = INT16_MIN;
	volatile int64_t t96 = 0LL;

	t96 = (x385&(x386^(x387|x388)));

	if (t96 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = 1046;
	int8_t x391 = INT8_MAX;
	int16_t x392 = INT16_MIN;

	t97 = (x389&(x390^(x391|x392)));

	if (t97 != 1024U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = 150725091438108LL;
	int16_t x395 = -1;
	int8_t x396 = -1;
	int64_t t98 = 20872LL;

	t98 = (x393&(x394^(x395|x396)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x399 = INT32_MIN;
	volatile int64_t x400 = -1LL;
	volatile int64_t t99 = -52345079797LL;

	t99 = (x397&(x398^(x399|x400)));

	if (t99 != 114LL) { NG(); } else { ; }
	
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

