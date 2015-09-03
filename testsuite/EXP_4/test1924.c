#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x2 = 1U;
int64_t t2 = -1LL;
static int32_t x17 = 6966;
volatile int16_t x18 = 186;
int64_t x19 = INT64_MIN;
static uint32_t x21 = 1719166U;
static uint8_t x25 = 13U;
volatile int64_t t6 = 8556095264181LL;
volatile int8_t x30 = -9;
int32_t t7 = 743731;
static int32_t x33 = -1;
int64_t t9 = -38536153391287LL;
static int8_t x44 = INT8_MIN;
volatile int32_t t11 = 1;
int16_t x52 = INT16_MIN;
volatile uint16_t x57 = 23103U;
static uint8_t x58 = 2U;
static volatile int32_t x59 = INT32_MAX;
volatile uint64_t x76 = 6337088645941LLU;
int64_t x80 = INT64_MIN;
uint8_t x85 = 53U;
volatile uint16_t x90 = UINT16_MAX;
uint32_t t23 = 18U;
volatile int32_t x98 = -1;
uint16_t x100 = 3298U;
int16_t x101 = 683;
static int16_t x104 = INT16_MAX;
int16_t x108 = INT16_MIN;
volatile int64_t t32 = 13LL;
uint64_t t33 = 711349110346273226LLU;
volatile int64_t x153 = INT64_MIN;
uint8_t x164 = 1U;
int8_t x167 = INT8_MIN;
volatile uint64_t x171 = UINT64_MAX;
volatile int16_t x172 = INT16_MIN;
static volatile int64_t x177 = -2291478357LL;
int64_t x181 = INT64_MIN;
static volatile int64_t t45 = -400380148LL;
int32_t x191 = 6;
volatile uint16_t x193 = UINT16_MAX;
static int16_t x206 = INT16_MAX;
volatile uint64_t x207 = 1059086681715173292LLU;
int32_t x209 = INT32_MIN;
static uint8_t x213 = 122U;
volatile int64_t t53 = -31LL;
int64_t x224 = INT64_MIN;
int32_t t56 = -2;
uint8_t x229 = UINT8_MAX;
int8_t x231 = INT8_MAX;
static uint64_t x234 = 252764864LLU;
int64_t x239 = -3629268LL;
volatile uint64_t t60 = 205LLU;
volatile uint8_t x250 = UINT8_MAX;
uint16_t x256 = UINT16_MAX;
int8_t x269 = INT8_MIN;
volatile int64_t t68 = 17569374LL;
int16_t x285 = INT16_MIN;
uint32_t x290 = 1368381201U;
volatile uint64_t t73 = 71785061832419925LLU;
volatile int8_t x298 = 1;
int64_t x300 = 849644797899066LL;
static uint8_t x303 = 2U;
static volatile int32_t t75 = -81;
uint64_t x305 = UINT64_MAX;
static volatile int32_t x306 = 139;
uint8_t x313 = UINT8_MAX;
uint32_t x316 = 1208084U;
int32_t t79 = -2;
uint64_t x324 = 4097260LLU;
volatile uint64_t t80 = 1LLU;
uint64_t x325 = 1219146LLU;
int64_t x327 = -1LL;
uint64_t t83 = 92387LLU;
int64_t x338 = -1LL;
int32_t x345 = 1;
int64_t x351 = INT64_MAX;
int32_t x359 = INT32_MIN;
int32_t x362 = 0;
uint16_t x368 = UINT16_MAX;
volatile int64_t t91 = 2061081384LL;
volatile uint32_t x371 = 3U;
static int32_t x372 = -1;
volatile int8_t x374 = INT8_MIN;
volatile int8_t x376 = -1;
int64_t x378 = INT64_MIN;
static int8_t x379 = INT8_MIN;
int64_t x385 = -1LL;
static int64_t x386 = INT64_MIN;
int64_t t97 = -1635890910358656105LL;
int16_t x393 = INT16_MIN;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	uint16_t x3 = 5348U;
	uint8_t x4 = UINT8_MAX;
	uint32_t t0 = 320U;

	t0 = (x1^(x2%(x3|x4)));

	if (t0 != 4294967294U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 2980257071LLU;
	volatile uint8_t x6 = UINT8_MAX;
	int8_t x7 = INT8_MIN;
	static int8_t x8 = INT8_MIN;
	volatile uint64_t t1 = 14260197114LLU;

	t1 = (x5^(x6%(x7|x8)));

	if (t1 != 2980257104LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	static int32_t x10 = 148967727;
	int64_t x11 = 2042747538LL;
	volatile int64_t x12 = INT64_MIN;

	t2 = (x9^(x10%(x11|x12)));

	if (t2 != -1998515921LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = 95136206;
	uint8_t x14 = 103U;
	static volatile int8_t x15 = 1;
	uint32_t x16 = UINT32_MAX;
	static volatile uint32_t t3 = 109U;

	t3 = (x13^(x14%(x15|x16)));

	if (t3 != 95136169U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x20 = UINT64_MAX;
	uint64_t t4 = 38LLU;

	t4 = (x17^(x18%(x19|x20)));

	if (t4 != 7052LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = 2975;
	uint64_t x23 = 556767929572225LLU;
	uint8_t x24 = UINT8_MAX;
	volatile uint64_t t5 = 18901585182941790LLU;

	t5 = (x21^(x22%(x23|x24)));

	if (t5 != 1716449LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = INT64_MIN;
	uint16_t x27 = UINT16_MAX;
	static int16_t x28 = -17;

	t6 = (x25^(x26%(x27|x28)));

	if (t6 != 13LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	int8_t x31 = 2;
	volatile uint8_t x32 = 1U;

	t7 = (x29^(x30%(x31|x32)));

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = 1;
	int32_t x35 = -1;
	static volatile uint16_t x36 = UINT16_MAX;
	volatile int32_t t8 = 3;

	t8 = (x33^(x34%(x35|x36)));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	int8_t x38 = 29;
	volatile int16_t x39 = INT16_MIN;
	int64_t x40 = INT64_MIN;

	t9 = (x37^(x38%(x39|x40)));

	if (t9 != -9223372036854775779LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = INT32_MIN;
	static int16_t x42 = INT16_MAX;
	static uint16_t x43 = 10U;
	volatile int32_t t10 = 245568582;

	t10 = (x41^(x42%(x43|x44)));

	if (t10 != -2147483567) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	volatile uint8_t x46 = UINT8_MAX;
	static int16_t x47 = INT16_MIN;
	int16_t x48 = INT16_MAX;

	t11 = (x45^(x46%(x47|x48)));

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	int8_t x50 = -1;
	int8_t x51 = -28;
	volatile uint64_t t12 = 477034862694278LLU;

	t12 = (x49^(x50%(x51|x52)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 41087LLU;
	int64_t x54 = -10915833757264LL;
	static int8_t x55 = 26;
	uint16_t x56 = 3419U;
	volatile uint64_t t13 = 159067LLU;

	t13 = (x53^(x54%(x55|x56)));

	if (t13 != 18446744073709507636LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x60 = UINT32_MAX;
	static volatile uint32_t t14 = 26U;

	t14 = (x57^(x58%(x59|x60)));

	if (t14 != 23101U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 3U;
	int8_t x62 = INT8_MIN;
	int32_t x63 = INT32_MAX;
	volatile uint16_t x64 = 55U;
	static int32_t t15 = 59283361;

	t15 = (x61^(x62%(x63|x64)));

	if (t15 != -125) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	volatile uint8_t x66 = UINT8_MAX;
	int64_t x67 = INT64_MAX;
	int16_t x68 = 0;
	static volatile int64_t t16 = -1669LL;

	t16 = (x65^(x66%(x67|x68)));

	if (t16 != -32513LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int32_t x70 = -1;
	int32_t x71 = INT32_MIN;
	uint32_t x72 = 855973736U;
	uint32_t t17 = 1U;

	t17 = (x69^(x70%(x71|x72)));

	if (t17 != 3003457303U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x73 = 229406587742378LLU;
	volatile int8_t x74 = -50;
	uint16_t x75 = 52U;
	static uint64_t t18 = 13798684446855LLU;

	t18 = (x73^(x74%(x75|x76)));

	if (t18 != 233276443911855LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 6218972737376LLU;
	int8_t x78 = INT8_MIN;
	uint8_t x79 = 1U;
	uint64_t t19 = 8010526LLU;

	t19 = (x77^(x78%(x79|x80)));

	if (t19 != 18446737854736814304LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = UINT64_MAX;
	volatile int64_t x82 = INT64_MAX;
	static int32_t x83 = INT32_MIN;
	uint64_t x84 = 207LLU;
	static volatile uint64_t t20 = 216228269128LLU;

	t20 = (x81^(x82%(x83|x84)));

	if (t20 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x86 = INT64_MIN;
	int16_t x87 = INT16_MIN;
	int64_t x88 = -765573168LL;
	int64_t t21 = 5315487LL;

	t21 = (x85^(x86%(x87|x88)));

	if (t21 != -12635LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = -16LL;
	int8_t x91 = -13;
	static int8_t x92 = INT8_MIN;
	static volatile int64_t t22 = -2703127823LL;

	t22 = (x89^(x90%(x91|x92)));

	if (t22 != -14LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x93 = 677859886U;
	int32_t x94 = 493374678;
	uint32_t x95 = 113U;
	int16_t x96 = 1;

	t23 = (x93^(x94%(x95|x96)));

	if (t23 != 677859949U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x97 = INT32_MIN;
	int64_t x99 = 64108433966393791LL;
	int64_t t24 = -2139457151115760460LL;

	t24 = (x97^(x98%(x99|x100)));

	if (t24 != 2147483647LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x102 = INT64_MIN;
	static int64_t x103 = 40968432027919480LL;
	int64_t t25 = 426155422116119LL;

	t25 = (x101^(x102%(x103|x104)));

	if (t25 != -5474830571307596LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x105 = UINT32_MAX;
	int32_t x106 = 742766;
	int64_t x107 = INT64_MAX;
	volatile int64_t t26 = 1077064688LL;

	t26 = (x105^(x106%(x107|x108)));

	if (t26 != 4294967295LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = INT32_MIN;
	uint64_t x110 = UINT64_MAX;
	int64_t x111 = -18235LL;
	uint8_t x112 = 27U;
	volatile uint64_t t27 = 192036068136675LLU;

	t27 = (x109^(x110%(x111|x112)));

	if (t27 != 18446744071562086176LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 78U;
	int8_t x114 = -14;
	static uint16_t x115 = 0U;
	int32_t x116 = INT32_MAX;
	int32_t t28 = -4701;

	t28 = (x113^(x114%(x115|x116)));

	if (t28 != -68) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = INT16_MAX;
	static volatile uint8_t x118 = 0U;
	static uint16_t x119 = 1633U;
	uint8_t x120 = 7U;
	volatile int32_t t29 = 1;

	t29 = (x117^(x118%(x119|x120)));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	uint64_t x122 = 8822LLU;
	int32_t x123 = INT32_MIN;
	int64_t x124 = 53LL;
	volatile uint64_t t30 = 3563LLU;

	t30 = (x121^(x122%(x123|x124)));

	if (t30 != 23945LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x125 = 170U;
	static int32_t x126 = -1;
	static int16_t x127 = INT16_MAX;
	uint16_t x128 = UINT16_MAX;
	int32_t t31 = 1;

	t31 = (x125^(x126%(x127|x128)));

	if (t31 != -171) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = INT32_MIN;
	volatile int16_t x130 = -1;
	static volatile int64_t x131 = -51605196LL;
	static uint16_t x132 = UINT16_MAX;

	t32 = (x129^(x130%(x131|x132)));

	if (t32 != 2147483647LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MAX;
	int64_t x134 = INT64_MAX;
	uint64_t x135 = 84469582338308153LLU;
	int32_t x136 = 14120337;

	t33 = (x133^(x134%(x135|x136)));

	if (t33 != 16187561477179333LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 4U;
	int16_t x138 = -1;
	volatile int64_t x139 = INT64_MIN;
	uint32_t x140 = UINT32_MAX;
	int64_t t34 = -6432516LL;

	t34 = (x137^(x138%(x139|x140)));

	if (t34 != -5LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	int16_t x142 = INT16_MIN;
	volatile int32_t x143 = INT32_MAX;
	volatile int8_t x144 = -30;
	static volatile int32_t t35 = -7;

	t35 = (x141^(x142%(x143|x144)));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1;
	static volatile int16_t x146 = -2;
	volatile int64_t x147 = INT64_MIN;
	int8_t x148 = -1;
	volatile int64_t t36 = -216876623161861237LL;

	t36 = (x145^(x146%(x147|x148)));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = INT64_MAX;
	int16_t x150 = INT16_MAX;
	static uint8_t x151 = 63U;
	static int8_t x152 = -1;
	volatile int64_t t37 = INT64_MAX;

	t37 = (x149^(x150%(x151|x152)));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x154 = UINT32_MAX;
	uint16_t x155 = 9859U;
	volatile uint8_t x156 = UINT8_MAX;
	volatile int64_t t38 = 76894428LL;

	t38 = (x153^(x154%(x155|x156)));

	if (t38 != -9223372036854774637LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = 46LL;
	int32_t x158 = -1;
	static uint16_t x159 = 24U;
	static int64_t x160 = 8075852748163LL;
	int64_t t39 = 370851LL;

	t39 = (x157^(x158%(x159|x160)));

	if (t39 != -47LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = UINT8_MAX;
	int16_t x162 = INT16_MIN;
	int8_t x163 = -1;
	volatile int32_t t40 = -499490;

	t40 = (x161^(x162%(x163|x164)));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = UINT16_MAX;
	int64_t x166 = 380352LL;
	uint64_t x168 = 1041LLU;
	static volatile uint64_t t41 = 88277958419003316LLU;

	t41 = (x165^(x166%(x167|x168)));

	if (t41 != 340543LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = INT8_MAX;
	volatile int32_t x170 = 512;
	volatile uint64_t t42 = 4281729210672LLU;

	t42 = (x169^(x170%(x171|x172)));

	if (t42 != 639LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = INT64_MIN;
	int8_t x174 = INT8_MAX;
	int32_t x175 = INT32_MAX;
	volatile int64_t x176 = 1265759245775927062LL;
	int64_t t43 = -3723450590809LL;

	t43 = (x173^(x174%(x175|x176)));

	if (t43 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x178 = INT8_MAX;
	int64_t x179 = INT64_MIN;
	int8_t x180 = 7;
	volatile int64_t t44 = -70LL;

	t44 = (x177^(x178%(x179|x180)));

	if (t44 != -2291478316LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x182 = INT16_MAX;
	uint16_t x183 = 6U;
	volatile uint16_t x184 = 2U;

	t45 = (x181^(x182%(x183|x184)));

	if (t45 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x185 = INT64_MIN;
	uint64_t x186 = UINT64_MAX;
	int16_t x187 = -1;
	volatile uint8_t x188 = 39U;
	volatile uint64_t t46 = 24030LLU;

	t46 = (x185^(x186%(x187|x188)));

	if (t46 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 73U;
	volatile uint64_t x190 = UINT64_MAX;
	volatile int64_t x192 = -1LL;
	static uint64_t t47 = 16207606LLU;

	t47 = (x189^(x190%(x191|x192)));

	if (t47 != 73LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x194 = 188U;
	uint32_t x195 = 76U;
	int8_t x196 = INT8_MIN;
	uint32_t t48 = 53571299U;

	t48 = (x193^(x194%(x195|x196)));

	if (t48 != 65347U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 0;
	int32_t x198 = -5;
	volatile uint32_t x199 = 2U;
	int32_t x200 = 1003686;
	volatile uint32_t t49 = 416U;

	t49 = (x197^(x198%(x199|x200)));

	if (t49 != 194897U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = 5;
	int8_t x202 = 61;
	uint16_t x203 = 0U;
	int64_t x204 = -1LL;
	int64_t t50 = -536736599404LL;

	t50 = (x201^(x202%(x203|x204)));

	if (t50 != 5LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 8948U;
	int64_t x208 = -60395602470LL;
	static uint64_t t51 = 46208845123LLU;

	t51 = (x205^(x206%(x207|x208)));

	if (t51 != 23819LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x210 = 3;
	uint64_t x211 = 6907408LLU;
	static int8_t x212 = INT8_MIN;
	volatile uint64_t t52 = 32043058244946LLU;

	t52 = (x209^(x210%(x211|x212)));

	if (t52 != 18446744071562067971LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x214 = -1LL;
	volatile int16_t x215 = INT16_MAX;
	int16_t x216 = INT16_MIN;

	t53 = (x213^(x214%(x215|x216)));

	if (t53 != 122LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	volatile int8_t x218 = INT8_MIN;
	int32_t x219 = -4008;
	int64_t x220 = -1LL;
	int64_t t54 = 124LL;

	t54 = (x217^(x218%(x219|x220)));

	if (t54 != -2147483648LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = -8472323;
	uint16_t x222 = 17843U;
	volatile int64_t x223 = 44LL;
	int64_t t55 = 20432631789LL;

	t55 = (x221^(x222%(x223|x224)));

	if (t55 != -8454834LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x225 = 7U;
	int8_t x226 = 12;
	uint8_t x227 = 1U;
	int8_t x228 = INT8_MIN;

	t56 = (x225^(x226%(x227|x228)));

	if (t56 != 11) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x230 = UINT16_MAX;
	uint16_t x232 = UINT16_MAX;
	volatile int32_t t57 = 3226179;

	t57 = (x229^(x230%(x231|x232)));

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = UINT64_MAX;
	int8_t x235 = INT8_MIN;
	static int64_t x236 = -1LL;
	volatile uint64_t t58 = 416326076419LLU;

	t58 = (x233^(x234%(x235|x236)));

	if (t58 != 18446744073456786751LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x237 = UINT8_MAX;
	uint16_t x238 = 780U;
	int8_t x240 = INT8_MAX;
	int64_t t59 = -1107237114753969LL;

	t59 = (x237^(x238%(x239|x240)));

	if (t59 != 1011LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -21;
	uint32_t x242 = 90474U;
	volatile uint64_t x243 = 378359301LLU;
	int32_t x244 = -215512;

	t60 = (x241^(x242%(x243|x244)));

	if (t60 != 18446744073709461121LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -1LL;
	static int64_t x246 = -1332LL;
	volatile int64_t x247 = 56292121LL;
	uint16_t x248 = UINT16_MAX;
	static volatile int64_t t61 = 1754452539LL;

	t61 = (x245^(x246%(x247|x248)));

	if (t61 != 1331LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1;
	static int8_t x251 = INT8_MIN;
	uint8_t x252 = 1U;
	int32_t t62 = 3;

	t62 = (x249^(x250%(x251|x252)));

	if (t62 != -2) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x253 = INT32_MIN;
	static int32_t x254 = -1;
	int8_t x255 = -1;
	static volatile int32_t t63 = INT32_MIN;

	t63 = (x253^(x254%(x255|x256)));

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = INT16_MAX;
	uint32_t x258 = UINT32_MAX;
	int8_t x259 = INT8_MIN;
	int32_t x260 = INT32_MIN;
	uint32_t t64 = 4913914U;

	t64 = (x257^(x258%(x259|x260)));

	if (t64 != 32640U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -5;
	static volatile int32_t x262 = 1009235;
	volatile uint32_t x263 = UINT32_MAX;
	static volatile int16_t x264 = -1;
	volatile uint32_t t65 = 96977628U;

	t65 = (x261^(x262%(x263|x264)));

	if (t65 != 4293958056U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	int32_t x266 = -128318;
	int16_t x267 = INT16_MAX;
	int8_t x268 = -15;
	int32_t t66 = INT32_MIN;

	t66 = (x265^(x266%(x267|x268)));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x270 = 2U;
	static int16_t x271 = 2288;
	int64_t x272 = 2718LL;
	volatile int64_t t67 = 3LL;

	t67 = (x269^(x270%(x271|x272)));

	if (t67 != -126LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x273 = -1687560251761676LL;
	volatile int8_t x274 = -1;
	volatile int64_t x275 = INT64_MIN;
	uint16_t x276 = 5848U;

	t68 = (x273^(x274%(x275|x276)));

	if (t68 != 1687560251761675LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = INT64_MIN;
	int64_t x278 = INT64_MIN;
	int16_t x279 = -1;
	int32_t x280 = INT32_MIN;
	int64_t t69 = INT64_MIN;

	t69 = (x277^(x278%(x279|x280)));

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = UINT8_MAX;
	int16_t x282 = -1;
	uint16_t x283 = 1264U;
	uint8_t x284 = 59U;
	static volatile int32_t t70 = 0;

	t70 = (x281^(x282%(x283|x284)));

	if (t70 != -256) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x286 = INT64_MIN;
	int64_t x287 = -1LL;
	static uint32_t x288 = 394109882U;
	int64_t t71 = 9926805422298LL;

	t71 = (x285^(x286%(x287|x288)));

	if (t71 != -32768LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x289 = 4U;
	volatile int64_t x291 = -1LL;
	uint32_t x292 = 12647U;
	int64_t t72 = -1049LL;

	t72 = (x289^(x290%(x291|x292)));

	if (t72 != 4LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -20826884LL;
	int32_t x294 = INT32_MIN;
	volatile uint32_t x295 = 47228U;
	uint64_t x296 = 455962LLU;

	t73 = (x293^(x294%(x295|x296)));

	if (t73 != 18446744073688990800LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = 1836;
	int32_t x299 = INT32_MAX;
	int64_t t74 = 35LL;

	t74 = (x297^(x298%(x299|x300)));

	if (t74 != 1837LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -150;
	uint8_t x302 = 107U;
	int32_t x304 = -1;

	t75 = (x301^(x302%(x303|x304)));

	if (t75 != -150) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x307 = INT32_MAX;
	int64_t x308 = 11LL;
	static volatile uint64_t t76 = 5LLU;

	t76 = (x305^(x306%(x307|x308)));

	if (t76 != 18446744073709551476LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = 1;
	volatile int64_t x310 = INT64_MIN;
	volatile int8_t x311 = INT8_MIN;
	static volatile int16_t x312 = INT16_MIN;
	volatile int64_t t77 = -29819579954183166LL;

	t77 = (x309^(x310%(x311|x312)));

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x314 = INT16_MIN;
	int32_t x315 = INT32_MIN;
	static volatile uint32_t t78 = 26349654U;

	t78 = (x313^(x314%(x315|x316)));

	if (t78 != 2146242579U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = UINT8_MAX;
	int8_t x318 = INT8_MIN;
	static int16_t x319 = INT16_MIN;
	int16_t x320 = -2778;

	t79 = (x317^(x318%(x319|x320)));

	if (t79 != -129) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = UINT32_MAX;
	static uint32_t x322 = UINT32_MAX;
	static uint16_t x323 = 155U;

	t80 = (x321^(x322%(x323|x324)));

	if (t80 != 4293948392LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x326 = 0;
	int8_t x328 = INT8_MIN;
	uint64_t t81 = 66934290LLU;

	t81 = (x325^(x326%(x327|x328)));

	if (t81 != 1219146LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x329 = 6670432LL;
	int8_t x330 = 0;
	int8_t x331 = INT8_MAX;
	uint8_t x332 = 27U;
	volatile int64_t t82 = -5LL;

	t82 = (x329^(x330%(x331|x332)));

	if (t82 != 6670432LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -127249284LL;
	uint16_t x334 = 7U;
	static int64_t x335 = INT64_MIN;
	uint64_t x336 = UINT64_MAX;

	t83 = (x333^(x334%(x335|x336)));

	if (t83 != 18446744073582302331LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 329498LLU;
	uint8_t x339 = 5U;
	volatile uint32_t x340 = 46U;
	volatile uint64_t t84 = 4989234LLU;

	t84 = (x337^(x338%(x339|x340)));

	if (t84 != 18446744073709222117LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -1;
	uint16_t x342 = UINT16_MAX;
	int8_t x343 = -1;
	volatile int64_t x344 = INT64_MAX;
	int64_t t85 = 63772LL;

	t85 = (x341^(x342%(x343|x344)));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = INT8_MAX;
	int8_t x347 = -1;
	uint16_t x348 = 436U;
	volatile int32_t t86 = -2385883;

	t86 = (x345^(x346%(x347|x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 269314180U;
	volatile int16_t x350 = INT16_MIN;
	volatile uint32_t x352 = 23U;
	volatile int64_t t87 = -3743LL;

	t87 = (x349^(x350%(x351|x352)));

	if (t87 != -269293436LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	int8_t x354 = INT8_MIN;
	int64_t x355 = -52850116832LL;
	uint8_t x356 = UINT8_MAX;
	volatile int64_t t88 = 15789946323573291LL;

	t88 = (x353^(x354%(x355|x356)));

	if (t88 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x357 = INT64_MIN;
	int16_t x358 = 3307;
	int8_t x360 = INT8_MIN;
	static volatile int64_t t89 = -3747342491134323LL;

	t89 = (x357^(x358%(x359|x360)));

	if (t89 != -9223372036854775701LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 1662U;
	static int32_t x363 = -1;
	uint64_t x364 = UINT64_MAX;
	volatile uint64_t t90 = 446571874LLU;

	t90 = (x361^(x362%(x363|x364)));

	if (t90 != 1662LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -1LL;
	static int64_t x366 = INT64_MAX;
	int32_t x367 = INT32_MIN;

	t91 = (x365^(x366%(x367|x368)));

	if (t91 != -2147418111LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -1LL;
	uint32_t x370 = 119985088U;
	int64_t t92 = -39282633911LL;

	t92 = (x369^(x370%(x371|x372)));

	if (t92 != -119985089LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 2U;
	static int64_t x375 = -1LL;
	volatile int64_t t93 = -1556752554586149LL;

	t93 = (x373^(x374%(x375|x376)));

	if (t93 != 2LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x377 = INT32_MAX;
	int16_t x380 = -1;
	volatile int64_t t94 = 459928LL;

	t94 = (x377^(x378%(x379|x380)));

	if (t94 != 2147483647LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x381 = INT8_MAX;
	volatile int16_t x382 = INT16_MIN;
	volatile int8_t x383 = INT8_MIN;
	int64_t x384 = INT64_MIN;
	volatile int64_t t95 = -4281562230557530LL;

	t95 = (x381^(x382%(x383|x384)));

	if (t95 != 127LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x387 = INT8_MIN;
	int64_t x388 = -243LL;
	volatile int64_t t96 = 29LL;

	t96 = (x385^(x386%(x387|x388)));

	if (t96 != 2LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x389 = UINT32_MAX;
	int64_t x390 = INT64_MIN;
	static int16_t x391 = INT16_MIN;
	int64_t x392 = INT64_MIN;

	t97 = (x389^(x390%(x391|x392)));

	if (t97 != 4294967295LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x394 = INT8_MIN;
	int8_t x395 = -1;
	uint16_t x396 = 180U;
	volatile int32_t t98 = -965;

	t98 = (x393^(x394%(x395|x396)));

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = 479;
	volatile int16_t x398 = -101;
	static uint16_t x399 = UINT16_MAX;
	static volatile uint32_t x400 = 260285845U;
	volatile uint32_t t99 = 249690U;

	t99 = (x397^(x398%(x399|x400)));

	if (t99 != 130023028U) { NG(); } else { ; }
	
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

