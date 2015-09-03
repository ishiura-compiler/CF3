#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t1 = -130923990191LL;
int8_t x10 = -1;
volatile uint32_t t2 = 95814063U;
uint32_t x20 = 7364751U;
uint64_t x22 = UINT64_MAX;
int16_t x30 = INT16_MIN;
int64_t x37 = -1LL;
static volatile uint32_t x53 = 4739U;
volatile uint32_t t13 = 2076213U;
uint32_t x63 = 526099U;
int32_t x64 = 1;
int64_t t15 = 125011324385658348LL;
static int8_t x66 = 3;
uint32_t t16 = 16197616U;
int64_t x75 = -1LL;
int16_t x78 = INT16_MIN;
int64_t t20 = -167171LL;
volatile int16_t x94 = 484;
int64_t x101 = 1629867LL;
static int8_t x106 = INT8_MAX;
int8_t x111 = 7;
uint64_t t25 = 1044127LLU;
static int32_t x117 = -1;
volatile int8_t x125 = -1;
int64_t x126 = INT64_MIN;
static uint16_t x133 = 70U;
volatile int32_t x135 = 146289;
int16_t x142 = -1;
volatile uint32_t t30 = 89642488U;
volatile int32_t x148 = -1;
volatile int32_t x149 = INT32_MAX;
int8_t x164 = INT8_MAX;
int32_t x168 = INT32_MIN;
int64_t t36 = 10195421323LL;
int32_t x170 = -1;
int32_t x178 = -1;
static int64_t x195 = 179783956LL;
volatile int16_t x198 = INT16_MIN;
int8_t x209 = 49;
int16_t x212 = INT16_MIN;
volatile int32_t t45 = -14699;
uint8_t x214 = 47U;
static int64_t t47 = -1002320205066404LL;
static uint32_t x222 = 6736355U;
volatile int64_t x224 = -1820073254754187245LL;
uint64_t x228 = 63597184234090LLU;
static int8_t x231 = INT8_MAX;
uint32_t x232 = 25338136U;
int64_t x238 = 2729LL;
volatile int32_t x246 = INT32_MIN;
static int8_t x250 = INT8_MAX;
int64_t x252 = 1714LL;
static volatile uint32_t x258 = 23632807U;
static uint32_t x266 = UINT32_MAX;
uint64_t x268 = 110152536473445LLU;
volatile int16_t x280 = -1;
int16_t x281 = INT16_MIN;
volatile int16_t x284 = 29;
uint16_t x285 = UINT16_MAX;
int8_t x297 = -1;
int32_t x303 = -175836728;
uint64_t x307 = 1482928149906LLU;
int16_t x312 = INT16_MAX;
volatile uint32_t t68 = 0U;
int64_t t69 = 93576LL;
int8_t x317 = INT8_MIN;
static uint64_t x318 = 584565989942398990LLU;
uint64_t x319 = 33529748769563558LLU;
int16_t x320 = -14275;
static volatile uint32_t t71 = 1035U;
uint8_t x336 = 42U;
int16_t x340 = INT16_MAX;
int8_t x353 = -1;
uint64_t x366 = UINT64_MAX;
static volatile int16_t x367 = -1;
static int32_t x372 = INT32_MAX;
volatile uint64_t t81 = 7543LLU;
int32_t x384 = INT32_MAX;
static uint16_t x387 = 1U;
volatile int64_t t84 = 2111343720504LL;
static int16_t x394 = -1;
uint32_t x396 = UINT32_MAX;
int8_t x397 = -3;
int64_t x398 = INT64_MAX;
static int64_t x402 = 597LL;
static uint64_t x403 = 270LLU;
uint64_t t88 = 54374LLU;
volatile int32_t t89 = 289;
volatile uint64_t x412 = 8055392271712LLU;
uint64_t t90 = 1LLU;
int16_t x417 = 2;
int32_t x433 = INT32_MIN;
static uint64_t x434 = UINT64_MAX;
static int8_t x436 = -1;
int8_t x439 = INT8_MAX;
int16_t x443 = 7745;
static int32_t x445 = 917734085;
volatile int32_t t96 = 28;
uint16_t x449 = 198U;
int8_t x456 = INT8_MIN;
uint64_t x457 = 11476004LLU;
int16_t x458 = INT16_MIN;
volatile uint64_t t99 = 3410846254198444LLU;


void f0(void) {
	uint8_t x1 = 93U;
	volatile int32_t x2 = INT32_MAX;
	int16_t x3 = INT16_MAX;
	int32_t x4 = 14989870;
	int32_t t0 = 44;

	t0 = (x1*(x2/(x3+x4)));

	if (t0 != 13206) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	int64_t x6 = INT64_MIN;
	uint16_t x7 = 16389U;
	uint16_t x8 = UINT16_MAX;

	t1 = (x5*(x6/(x7+x8)));

	if (t1 != -28709045815608975LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 30U;
	volatile uint32_t x11 = 6468U;
	uint8_t x12 = 106U;

	t2 = (x9*(x10/(x11+x12)));

	if (t2 != 19599780U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int8_t x14 = 1;
	uint16_t x15 = 11U;
	uint64_t x16 = 13960189840523436LLU;
	static volatile uint64_t t3 = 16354914673LLU;

	t3 = (x13*(x14/(x15+x16)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 62814516253575705LLU;
	int32_t x18 = -1;
	int16_t x19 = 647;
	volatile uint64_t t4 = 13611883LLU;

	t4 = (x17*(x18/(x19+x20)));

	if (t4 != 18174118902125084399LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 0;
	volatile uint32_t x23 = 499U;
	uint32_t x24 = 3957U;
	static uint64_t t5 = 1088775426LLU;

	t5 = (x21*(x22/(x23+x24)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 1174LLU;
	static uint64_t x26 = 1927804LLU;
	uint8_t x27 = 68U;
	int16_t x28 = INT16_MIN;
	static uint64_t t6 = 1709343511587LLU;

	t6 = (x25*(x26/(x27+x28)));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = UINT64_MAX;
	int8_t x31 = 48;
	int64_t x32 = 493740081534LL;
	uint64_t t7 = 155793LLU;

	t7 = (x29*(x30/(x31+x32)));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	static int8_t x34 = -1;
	static int16_t x35 = 1;
	static int16_t x36 = -509;
	volatile int64_t t8 = -258439456183LL;

	t8 = (x33*(x34/(x35+x36)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x38 = INT64_MIN;
	int8_t x39 = INT8_MIN;
	volatile uint32_t x40 = UINT32_MAX;
	volatile int64_t t9 = -2LL;

	t9 = (x37*(x38/(x39+x40)));

	if (t9 != 2147483712LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = 102601LLU;
	int64_t x42 = INT64_MIN;
	uint32_t x43 = 860U;
	static volatile int16_t x44 = 15329;
	static volatile uint64_t t10 = 3944580102LLU;

	t10 = (x41*(x42/(x43+x44)));

	if (t10 != 15332025751053174030LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	volatile int32_t x46 = INT32_MAX;
	static int64_t x47 = INT64_MIN;
	volatile int64_t x48 = INT64_MAX;
	static int64_t t11 = 98083315LL;

	t11 = (x45*(x46/(x47+x48)));

	if (t11 != 2147483647LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int32_t x50 = -1;
	uint8_t x51 = 12U;
	int32_t x52 = INT32_MIN;
	volatile int64_t t12 = -886242752634936LL;

	t12 = (x49*(x50/(x51+x52)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x54 = 28850;
	static int32_t x55 = INT32_MIN;
	uint32_t x56 = 3U;

	t13 = (x53*(x54/(x55+x56)));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 1U;
	static int64_t x58 = INT64_MAX;
	uint8_t x59 = 4U;
	static uint16_t x60 = 3U;
	volatile int64_t t14 = 215873024LL;

	t14 = (x57*(x58/(x59+x60)));

	if (t14 != 1317624576693539401LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = INT8_MAX;
	volatile int64_t x62 = INT64_MIN;

	t15 = (x61*(x62/(x63+x64)));

	if (t15 != -2226512542635427LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 1U;
	uint32_t x67 = UINT32_MAX;
	static volatile int8_t x68 = INT8_MAX;

	t16 = (x65*(x66/(x67+x68)));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = -1;
	uint16_t x74 = 2U;
	int16_t x76 = -1748;
	int64_t t17 = -413775LL;

	t17 = (x73*(x74/(x75+x76)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MIN;
	uint32_t x79 = UINT32_MAX;
	uint16_t x80 = 1424U;
	volatile uint32_t t18 = 3552U;

	t18 = (x77*(x78/(x79+x80)));

	if (t18 != 3908634496U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x81 = INT32_MIN;
	int16_t x82 = -3197;
	static int64_t x83 = INT64_MIN;
	static int64_t x84 = INT64_MAX;
	int64_t t19 = 298974174LL;

	t19 = (x81*(x82/(x83+x84)));

	if (t19 != -6865505222656LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MIN;
	int32_t x86 = INT32_MAX;
	int64_t x87 = INT64_MIN;
	uint16_t x88 = 0U;

	t20 = (x85*(x86/(x87+x88)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x93 = 5784987776848272295LLU;
	int32_t x95 = INT32_MAX;
	uint64_t x96 = 20535119592830752LLU;
	volatile uint64_t t21 = 1442108LLU;

	t21 = (x93*(x94/(x95+x96)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x102 = UINT8_MAX;
	int16_t x103 = -2611;
	int8_t x104 = 1;
	static int64_t t22 = -172141786363418LL;

	t22 = (x101*(x102/(x103+x104)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = INT64_MIN;
	int8_t x107 = INT8_MAX;
	int16_t x108 = -494;
	int64_t t23 = 1834846LL;

	t23 = (x105*(x106/(x107+x108)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x109 = -1;
	uint8_t x110 = 2U;
	int8_t x112 = INT8_MIN;
	volatile int32_t t24 = 229;

	t24 = (x109*(x110/(x111+x112)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = INT8_MIN;
	int16_t x114 = 1;
	uint64_t x115 = 21LLU;
	int16_t x116 = INT16_MIN;

	t25 = (x113*(x114/(x115+x116)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x118 = INT64_MIN;
	int8_t x119 = 52;
	volatile int32_t x120 = INT32_MIN;
	int64_t t26 = 20041888LL;

	t26 = (x117*(x118/(x119+x120)));

	if (t26 != -4294967400LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = 20088239;
	int32_t x122 = INT32_MIN;
	uint32_t x123 = 10169U;
	uint64_t x124 = UINT64_MAX;
	static volatile uint64_t t27 = 81265LLU;

	t27 = (x121*(x122/(x123+x124)));

	if (t27 != 11681603260354798911LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint64_t x127 = 117558547LLU;
	static volatile uint8_t x128 = 14U;
	volatile uint64_t t28 = 57LLU;

	t28 = (x125*(x126/(x127+x128)));

	if (t28 != 18446743995251870964LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x134 = -6463;
	volatile int64_t x136 = -1LL;
	volatile int64_t t29 = 327LL;

	t29 = (x133*(x134/(x135+x136)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x141 = UINT16_MAX;
	uint32_t x143 = 995737U;
	volatile uint32_t x144 = UINT32_MAX;

	t30 = (x141*(x142/(x143+x144)));

	if (t30 != 282652455U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x145 = INT32_MAX;
	int8_t x146 = -24;
	volatile uint8_t x147 = 99U;
	volatile int32_t t31 = -157981036;

	t31 = (x145*(x146/(x147+x148)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x150 = -2;
	uint16_t x151 = 32U;
	static int32_t x152 = 14777350;
	volatile int32_t t32 = -11;

	t32 = (x149*(x150/(x151+x152)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x153 = INT32_MAX;
	uint8_t x154 = 14U;
	int64_t x155 = -1LL;
	volatile int8_t x156 = INT8_MIN;
	int64_t t33 = 683421758605144LL;

	t33 = (x153*(x154/(x155+x156)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x157 = 18684497055686814LL;
	static int16_t x158 = INT16_MIN;
	uint64_t x159 = 1545LLU;
	volatile uint16_t x160 = UINT16_MAX;
	static volatile uint64_t t34 = 1513749163733011LLU;

	t34 = (x157*(x158/(x159+x160)));

	if (t34 != 2264438786340334110LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x161 = INT64_MIN;
	uint8_t x162 = UINT8_MAX;
	volatile int32_t x163 = INT32_MIN;
	int64_t t35 = -39LL;

	t35 = (x161*(x162/(x163+x164)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x165 = 53U;
	static int8_t x166 = INT8_MIN;
	int64_t x167 = 225455520LL;

	t36 = (x165*(x166/(x167+x168)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x169 = 7;
	int16_t x171 = -206;
	uint64_t x172 = 747136712380977876LLU;
	volatile uint64_t t37 = 331713127727LLU;

	t37 = (x169*(x170/(x171+x172)));

	if (t37 != 168LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x177 = INT16_MAX;
	uint8_t x179 = UINT8_MAX;
	uint8_t x180 = UINT8_MAX;
	volatile int32_t t38 = -95614;

	t38 = (x177*(x178/(x179+x180)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x181 = -6505023LL;
	int16_t x182 = INT16_MIN;
	volatile int64_t x183 = -1LL;
	static volatile uint32_t x184 = UINT32_MAX;
	int64_t t39 = -3826020119263270733LL;

	t39 = (x181*(x182/(x183+x184)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x185 = 1;
	uint16_t x186 = UINT16_MAX;
	uint64_t x187 = 1347906592LLU;
	int8_t x188 = -1;
	volatile uint64_t t40 = 43446LLU;

	t40 = (x185*(x186/(x187+x188)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x189 = -7;
	uint64_t x190 = 1573497127LLU;
	uint64_t x191 = UINT64_MAX;
	static volatile int64_t x192 = INT64_MIN;
	uint64_t t41 = 252350329614851LLU;

	t41 = (x189*(x190/(x191+x192)));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x193 = 985;
	uint64_t x194 = UINT64_MAX;
	static int8_t x196 = INT8_MAX;
	uint64_t t42 = 1LLU;

	t42 = (x193*(x194/(x195+x196)));

	if (t42 != 101065915343060LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x197 = INT16_MIN;
	int32_t x199 = 121974;
	static int32_t x200 = -1;
	int32_t t43 = -4;

	t43 = (x197*(x198/(x199+x200)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x205 = -4183LL;
	static volatile int32_t x206 = INT32_MAX;
	int32_t x207 = -12841;
	volatile int8_t x208 = INT8_MAX;
	static int64_t t44 = -606378252668276665LL;

	t44 = (x205*(x206/(x207+x208)));

	if (t44 != 706537981LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x210 = INT16_MIN;
	int16_t x211 = INT16_MIN;

	t45 = (x209*(x210/(x211+x212)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x213 = 0;
	int8_t x215 = INT8_MAX;
	uint8_t x216 = UINT8_MAX;
	int32_t t46 = -718879534;

	t46 = (x213*(x214/(x215+x216)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x217 = 0U;
	int64_t x218 = INT64_MIN;
	int32_t x219 = INT32_MAX;
	static int8_t x220 = -1;

	t47 = (x217*(x218/(x219+x220)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x221 = -1;
	volatile int64_t x223 = INT64_MAX;
	int64_t t48 = -136695270062729LL;

	t48 = (x221*(x222/(x223+x224)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x225 = INT8_MIN;
	int8_t x226 = INT8_MAX;
	uint32_t x227 = 2622U;
	uint64_t t49 = 65663153462078697LLU;

	t49 = (x225*(x226/(x227+x228)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x229 = INT16_MAX;
	static volatile int64_t x230 = INT64_MIN;
	int64_t t50 = 112LL;

	t50 = (x229*(x230/(x231+x232)));

	if (t50 != -11927503930763512LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x233 = 1452U;
	int32_t x234 = INT32_MIN;
	volatile int64_t x235 = 15822628965019982LL;
	static uint16_t x236 = UINT16_MAX;
	volatile int64_t t51 = -11483006LL;

	t51 = (x233*(x234/(x235+x236)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x237 = -1;
	volatile int32_t x239 = INT32_MAX;
	int8_t x240 = INT8_MIN;
	static int64_t t52 = -1451227LL;

	t52 = (x237*(x238/(x239+x240)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x241 = 3974U;
	static volatile int8_t x242 = INT8_MIN;
	int8_t x243 = 0;
	int16_t x244 = INT16_MAX;
	int32_t t53 = -10821;

	t53 = (x241*(x242/(x243+x244)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x245 = 3;
	volatile int64_t x247 = 3779650484986397816LL;
	int16_t x248 = -14;
	volatile int64_t t54 = -1896228847010864LL;

	t54 = (x245*(x246/(x247+x248)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x249 = -4996;
	static int64_t x251 = 2694084LL;
	volatile int64_t t55 = 129778LL;

	t55 = (x249*(x250/(x251+x252)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x253 = INT16_MAX;
	int8_t x254 = 1;
	int32_t x255 = INT32_MIN;
	volatile uint64_t x256 = 11390651LLU;
	volatile uint64_t t56 = 58LLU;

	t56 = (x253*(x254/(x255+x256)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x257 = INT32_MIN;
	int32_t x259 = 6064853;
	int64_t x260 = INT64_MIN;
	int64_t t57 = -57930731274730LL;

	t57 = (x257*(x258/(x259+x260)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x261 = 1;
	int16_t x262 = 1;
	static int8_t x263 = INT8_MIN;
	volatile uint64_t x264 = UINT64_MAX;
	uint64_t t58 = 851355LLU;

	t58 = (x261*(x262/(x263+x264)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x265 = 40024845U;
	int16_t x267 = INT16_MIN;
	uint64_t t59 = 4550535665047LLU;

	t59 = (x265*(x266/(x267+x268)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x269 = UINT64_MAX;
	int16_t x270 = INT16_MIN;
	int64_t x271 = INT64_MIN;
	int64_t x272 = INT64_MAX;
	uint64_t t60 = 249981436483LLU;

	t60 = (x269*(x270/(x271+x272)));

	if (t60 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x277 = -1619903037184460749LL;
	uint64_t x278 = UINT64_MAX;
	int16_t x279 = INT16_MIN;
	uint64_t t61 = 137260989989459051LLU;

	t61 = (x277*(x278/(x279+x280)));

	if (t61 != 16826841036525090867LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x282 = INT32_MIN;
	uint16_t x283 = UINT16_MAX;
	int32_t t62 = -7904;

	t62 = (x281*(x282/(x283+x284)));

	if (t62 != 1073283072) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x286 = INT64_MAX;
	volatile uint32_t x287 = 69255997U;
	static int32_t x288 = INT32_MIN;
	static int64_t t63 = -2623171339392321LL;

	t63 = (x285*(x286/(x287+x288)));

	if (t63 != 272676896341620LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x293 = -1;
	int64_t x294 = INT64_MIN;
	uint8_t x295 = 10U;
	static uint64_t x296 = UINT64_MAX;
	uint64_t t64 = 3LLU;

	t64 = (x293*(x294/(x295+x296)));

	if (t64 != 17421924958503465416LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x298 = -1;
	int64_t x299 = INT64_MAX;
	volatile int32_t x300 = -416509;
	int64_t t65 = -254660323008106LL;

	t65 = (x297*(x298/(x299+x300)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x301 = -1;
	uint16_t x302 = UINT16_MAX;
	volatile int8_t x304 = INT8_MIN;
	volatile int32_t t66 = 143442454;

	t66 = (x301*(x302/(x303+x304)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x305 = INT16_MIN;
	static int64_t x306 = INT64_MAX;
	uint8_t x308 = 1U;
	volatile uint64_t t67 = 1731LLU;

	t67 = (x305*(x306/(x307+x308)));

	if (t67 != 18446743869902356480LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x309 = 3841U;
	volatile uint32_t x310 = 203070U;
	volatile int16_t x311 = INT16_MIN;

	t68 = (x309*(x310/(x311+x312)));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x313 = -181;
	int32_t x314 = -223;
	volatile int16_t x315 = INT16_MIN;
	int64_t x316 = INT64_MAX;

	t69 = (x313*(x314/(x315+x316)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t t70 = 114690617LLU;

	t70 = (x317*(x318/(x319+x320)));

	if (t70 != 18446744073709549440LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x321 = -1;
	uint32_t x322 = 13018527U;
	static int16_t x323 = INT16_MAX;
	uint16_t x324 = 83U;

	t71 = (x321*(x322/(x323+x324)));

	if (t71 != 4294966900U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x333 = -164;
	static int64_t x334 = INT64_MAX;
	volatile int16_t x335 = INT16_MIN;
	volatile int64_t t72 = -45LL;

	t72 = (x333*(x334/(x335+x336)));

	if (t72 != 46221139584556000LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x337 = UINT8_MAX;
	int64_t x338 = -24923793302LL;
	int32_t x339 = INT32_MIN;
	int64_t t73 = -5530391272280LL;

	t73 = (x337*(x338/(x339+x340)));

	if (t73 != 2805LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x341 = 7;
	static int8_t x342 = 22;
	static volatile uint16_t x343 = 2U;
	uint64_t x344 = UINT64_MAX;
	uint64_t t74 = 967383309138175LLU;

	t74 = (x341*(x342/(x343+x344)));

	if (t74 != 154LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x345 = INT16_MIN;
	static uint32_t x346 = 0U;
	uint64_t x347 = 621280924307299775LLU;
	int8_t x348 = INT8_MIN;
	volatile uint64_t t75 = 20853061233691LLU;

	t75 = (x345*(x346/(x347+x348)));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x349 = -1;
	uint64_t x350 = 59371286668409LLU;
	static int8_t x351 = INT8_MIN;
	int8_t x352 = -42;
	uint64_t t76 = 397LLU;

	t76 = (x349*(x350/(x351+x352)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x354 = 6;
	int32_t x355 = INT32_MAX;
	int8_t x356 = INT8_MIN;
	int32_t t77 = -54;

	t77 = (x353*(x354/(x355+x356)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x357 = UINT64_MAX;
	int32_t x358 = INT32_MAX;
	volatile int32_t x359 = -1;
	int8_t x360 = 11;
	volatile uint64_t t78 = 292807666952337LLU;

	t78 = (x357*(x358/(x359+x360)));

	if (t78 != 18446744073494803252LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x361 = -1;
	static uint8_t x362 = 7U;
	static int16_t x363 = INT16_MIN;
	int64_t x364 = -1LL;
	volatile int64_t t79 = -9624364277339530LL;

	t79 = (x361*(x362/(x363+x364)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint16_t x365 = 26572U;
	static volatile int16_t x368 = INT16_MIN;
	volatile uint64_t t80 = 807930869LLU;

	t80 = (x365*(x366/(x367+x368)));

	if (t80 != 26572LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x369 = -1;
	uint8_t x370 = 2U;
	uint64_t x371 = UINT64_MAX;

	t81 = (x369*(x370/(x371+x372)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x377 = -1;
	uint16_t x378 = UINT16_MAX;
	int32_t x379 = 1017766494;
	volatile int8_t x380 = 2;
	int32_t t82 = -2544004;

	t82 = (x377*(x378/(x379+x380)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x381 = -1;
	uint16_t x382 = 8U;
	int64_t x383 = INT64_MIN;
	volatile int64_t t83 = 10910401LL;

	t83 = (x381*(x382/(x383+x384)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x385 = -1;
	int32_t x386 = INT32_MIN;
	static int64_t x388 = INT64_MIN;

	t84 = (x385*(x386/(x387+x388)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x389 = INT8_MIN;
	int64_t x390 = INT64_MAX;
	int8_t x391 = -3;
	int16_t x392 = INT16_MAX;
	volatile int64_t t85 = -599108LL;

	t85 = (x389*(x390/(x391+x392)));

	if (t85 != -36033195602411520LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x393 = 6U;
	static uint64_t x395 = 721882184541LLU;
	volatile uint64_t t86 = 356240211408654460LLU;

	t86 = (x393*(x394/(x395+x396)));

	if (t86 != 152415234LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x399 = INT16_MAX;
	int32_t x400 = -50561;
	int64_t t87 = 79639175163LL;

	t87 = (x397*(x398/(x399+x400)));

	if (t87 != 1555025070842100LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x401 = 192U;
	uint32_t x404 = UINT32_MAX;

	t88 = (x401*(x402/(x403+x404)));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x405 = 1;
	static int8_t x406 = INT8_MIN;
	static int32_t x407 = INT32_MIN;
	volatile int32_t x408 = INT32_MAX;

	t89 = (x405*(x406/(x407+x408)));

	if (t89 != 128) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x409 = INT64_MIN;
	uint32_t x410 = UINT32_MAX;
	uint8_t x411 = 1U;

	t90 = (x409*(x410/(x411+x412)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x418 = UINT16_MAX;
	uint8_t x419 = 12U;
	static uint8_t x420 = UINT8_MAX;
	int32_t t91 = -131817;

	t91 = (x417*(x418/(x419+x420)));

	if (t91 != 490) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x429 = 18667256356286LLU;
	int16_t x430 = INT16_MIN;
	int16_t x431 = 3602;
	volatile int16_t x432 = 95;
	volatile uint64_t t92 = 57LLU;

	t92 = (x429*(x430/(x431+x432)));

	if (t92 != 18446594735658701328LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x435 = 4895U;
	volatile uint64_t t93 = 172545145134262530LLU;

	t93 = (x433*(x434/(x435+x436)));

	if (t93 != 13388401095236124672LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x437 = INT16_MIN;
	static volatile uint8_t x438 = 45U;
	int64_t x440 = -54038219802814LL;
	int64_t t94 = -131786075747635576LL;

	t94 = (x437*(x438/(x439+x440)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x441 = INT8_MIN;
	uint16_t x442 = UINT16_MAX;
	static int64_t x444 = -1LL;
	int64_t t95 = -1994213925018LL;

	t95 = (x441*(x442/(x443+x444)));

	if (t95 != -1024LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x446 = -1;
	int32_t x447 = -28481035;
	volatile int8_t x448 = -1;

	t96 = (x445*(x446/(x447+x448)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x450 = -1;
	uint8_t x451 = UINT8_MAX;
	int16_t x452 = 5428;
	volatile int32_t t97 = 223;

	t97 = (x449*(x450/(x451+x452)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x453 = -199;
	int16_t x454 = INT16_MAX;
	volatile int64_t x455 = -5LL;
	int64_t t98 = 2978LL;

	t98 = (x453*(x454/(x455+x456)));

	if (t98 != 48954LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x459 = 1U;
	uint64_t x460 = 4555188633068169LLU;

	t99 = (x457*(x458/(x459+x460)));

	if (t99 != 46466340196LLU) { NG(); } else { ; }
	
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

