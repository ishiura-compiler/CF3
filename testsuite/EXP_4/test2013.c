#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MAX;
uint32_t t2 = 1937U;
int8_t x14 = 9;
int16_t x16 = INT16_MIN;
static int64_t x19 = INT64_MIN;
volatile int32_t x21 = INT32_MIN;
static uint16_t x22 = 1U;
int32_t x32 = INT32_MIN;
static int16_t x38 = INT16_MAX;
int16_t x40 = INT16_MAX;
volatile int8_t x47 = INT8_MIN;
volatile uint64_t x52 = 27317LLU;
int16_t x57 = -1;
volatile int16_t x61 = 26;
int32_t x62 = 6165;
int8_t x65 = -1;
int8_t x66 = INT8_MAX;
int8_t x68 = INT8_MIN;
uint32_t t19 = 27U;
static uint32_t x84 = UINT32_MAX;
int8_t x85 = INT8_MAX;
uint64_t x88 = 56015975LLU;
static uint64_t t21 = 269869714406938127LLU;
int16_t x89 = -12619;
volatile int64_t x90 = INT64_MAX;
int8_t x91 = INT8_MAX;
volatile int64_t t22 = 3114602759754328LL;
uint16_t x94 = 170U;
static int16_t x96 = 122;
volatile int32_t t23 = -64366532;
int64_t x97 = 1LL;
int32_t x98 = -1;
static uint64_t x100 = 1797914678LLU;
uint64_t t24 = 7563LLU;
static uint8_t x106 = 10U;
int16_t x107 = INT16_MAX;
int32_t x108 = INT32_MIN;
volatile int32_t t26 = -60914208;
volatile uint64_t x111 = UINT64_MAX;
uint64_t x117 = UINT64_MAX;
int16_t x124 = INT16_MIN;
int8_t x128 = INT8_MIN;
int8_t x129 = -7;
int8_t x130 = -36;
int32_t x133 = INT32_MIN;
int32_t x136 = -163022;
int16_t x143 = 100;
static int64_t x145 = -1059049515337LL;
volatile int32_t x154 = 5;
int8_t x155 = INT8_MIN;
uint64_t x159 = 9616LLU;
uint32_t t41 = 2070063U;
uint32_t x174 = 95U;
int8_t x179 = INT8_MIN;
volatile int32_t t45 = -502335;
int32_t x185 = 9;
int16_t x187 = INT16_MAX;
int16_t x191 = INT16_MAX;
int32_t x202 = INT32_MAX;
volatile int64_t x204 = -1LL;
volatile int64_t x205 = INT64_MAX;
int16_t x208 = -1;
int64_t x212 = INT64_MIN;
int32_t t54 = 3149967;
uint64_t x224 = UINT64_MAX;
volatile uint64_t t55 = 378516824LLU;
uint8_t x228 = 26U;
int32_t x231 = INT32_MAX;
static uint32_t x232 = 447867U;
int8_t x244 = INT8_MAX;
int64_t t60 = -7774854844LL;
static uint8_t x245 = 11U;
static uint16_t x256 = 13U;
volatile int64_t t63 = -352939135373954798LL;
uint32_t t64 = UINT32_MAX;
uint32_t x264 = UINT32_MAX;
static volatile uint64_t t65 = 10454LLU;
uint16_t x267 = 11U;
int16_t x268 = INT16_MIN;
uint64_t t68 = 1526424704326666733LLU;
int32_t x277 = -35843839;
uint64_t x282 = 36166LLU;
volatile uint8_t x284 = 7U;
int8_t x290 = INT8_MIN;
int64_t x291 = -29120185587LL;
int8_t x297 = 1;
volatile int32_t t75 = 32060;
int32_t x315 = -1;
uint16_t x316 = 1058U;
volatile int16_t x317 = -50;
int64_t x319 = -4422LL;
volatile int64_t x324 = 96900LL;
static volatile uint64_t t80 = 7241366247892LLU;
int64_t x328 = -1LL;
static volatile int64_t x329 = -1LL;
int64_t x330 = -1LL;
volatile uint8_t x332 = 110U;
int16_t x335 = INT16_MIN;
volatile int32_t t83 = 1938509;
int64_t x338 = -2265145346862247LL;
volatile int64_t t84 = -41866510LL;
uint8_t x344 = UINT8_MAX;
int16_t x357 = INT16_MIN;
volatile int32_t x358 = -16555843;
static volatile int32_t t89 = -1510823;
uint8_t x363 = 24U;
static volatile uint16_t x364 = 2911U;
static uint32_t x365 = 18475618U;
int32_t x368 = INT32_MAX;
volatile uint32_t t91 = 2U;
volatile int8_t x372 = 0;
uint64_t x374 = UINT64_MAX;
static uint64_t x379 = UINT64_MAX;
int64_t x383 = INT64_MIN;
int16_t x387 = INT16_MIN;
volatile int64_t t96 = -3506LL;
static uint8_t x389 = UINT8_MAX;
int16_t x393 = 3;
uint64_t x397 = 102721652995979209LLU;
uint16_t x400 = UINT16_MAX;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	uint8_t x3 = 19U;
	static uint16_t x4 = UINT16_MAX;
	int32_t t0 = 475132094;

	t0 = (x1&(x2|(x3|x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -14270;
	int64_t x6 = INT64_MIN;
	uint8_t x7 = 62U;
	uint64_t x8 = UINT64_MAX;
	uint64_t t1 = 53991851913073LLU;

	t1 = (x5&(x6|(x7|x8)));

	if (t1 != 18446744073709537346LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = UINT32_MAX;
	int16_t x10 = -950;
	uint8_t x11 = 107U;
	uint8_t x12 = 1U;

	t2 = (x9&(x10|(x11|x12)));

	if (t2 != 4294966379U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 2397U;
	int32_t x15 = INT32_MAX;
	volatile int32_t t3 = -71955;

	t3 = (x13&(x14|(x15|x16)));

	if (t3 != 2397) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	uint32_t x18 = 747884329U;
	uint16_t x20 = UINT16_MAX;
	volatile int64_t t4 = -12378597101LL;

	t4 = (x17&(x18|(x19|x20)));

	if (t4 != -9223372036106878977LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x23 = UINT8_MAX;
	uint32_t x24 = UINT32_MAX;
	uint32_t t5 = 1798572953U;

	t5 = (x21&(x22|(x23|x24)));

	if (t5 != 2147483648U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MIN;
	volatile int64_t x26 = INT64_MAX;
	uint32_t x27 = UINT32_MAX;
	static uint8_t x28 = 111U;
	int64_t t6 = 3155LL;

	t6 = (x25&(x26|(x27|x28)));

	if (t6 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	uint16_t x30 = UINT16_MAX;
	uint32_t x31 = UINT32_MAX;
	volatile uint32_t t7 = UINT32_MAX;

	t7 = (x29&(x30|(x31|x32)));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x33 = 10U;
	uint32_t x34 = UINT32_MAX;
	volatile int8_t x35 = INT8_MAX;
	static int32_t x36 = -1;
	uint32_t t8 = 52963661U;

	t8 = (x33&(x34|(x35|x36)));

	if (t8 != 10U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -80;
	int8_t x39 = INT8_MIN;
	int32_t t9 = -1;

	t9 = (x37&(x38|(x39|x40)));

	if (t9 != -80) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = -1;
	uint32_t x42 = 451U;
	int64_t x43 = INT64_MAX;
	int16_t x44 = 7775;
	volatile int64_t t10 = INT64_MAX;

	t10 = (x41&(x42|(x43|x44)));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 21014567LLU;
	uint16_t x46 = 1343U;
	int64_t x48 = INT64_MIN;
	volatile uint64_t t11 = 31629LLU;

	t11 = (x45&(x46|(x47|x48)));

	if (t11 != 21014567LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -12711315646LL;
	volatile uint16_t x50 = UINT16_MAX;
	static int8_t x51 = 28;
	static uint64_t t12 = 28LLU;

	t12 = (x49&(x50|(x51|x52)));

	if (t12 != 46914LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = -1LL;
	uint8_t x54 = UINT8_MAX;
	int8_t x55 = -1;
	int64_t x56 = INT64_MAX;
	volatile int64_t t13 = 20LL;

	t13 = (x53&(x54|(x55|x56)));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = 4881235;
	uint32_t x59 = 283844U;
	uint64_t x60 = 1058271265530980013LLU;
	uint64_t t14 = 116LLU;

	t14 = (x57&(x58|(x59|x60)));

	if (t14 != 1058271265531265023LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x63 = INT16_MIN;
	uint64_t x64 = 1LLU;
	volatile uint64_t t15 = 106973100061LLU;

	t15 = (x61&(x62|(x63|x64)));

	if (t15 != 16LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x67 = INT32_MIN;
	volatile int32_t t16 = -6520;

	t16 = (x65&(x66|(x67|x68)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 25U;
	int64_t x70 = INT64_MIN;
	int8_t x71 = -1;
	static volatile uint32_t x72 = 4495951U;
	volatile int64_t t17 = -28469640957710LL;

	t17 = (x69&(x70|(x71|x72)));

	if (t17 != 25LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = 1;
	volatile uint64_t x74 = 14654914944LLU;
	int32_t x75 = -1;
	int16_t x76 = -19;
	uint64_t t18 = 2LLU;

	t18 = (x73&(x74|(x75|x76)));

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 12U;
	uint16_t x78 = 0U;
	uint32_t x79 = UINT32_MAX;
	int16_t x80 = 7;

	t19 = (x77&(x78|(x79|x80)));

	if (t19 != 12U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = INT16_MIN;
	volatile int8_t x82 = -1;
	uint16_t x83 = 0U;
	static uint32_t t20 = 2931289U;

	t20 = (x81&(x82|(x83|x84)));

	if (t20 != 4294934528U) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint16_t x86 = 13U;
	int16_t x87 = INT16_MAX;

	t21 = (x85&(x86|(x87|x88)));

	if (t21 != 127LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x92 = INT16_MIN;

	t22 = (x89&(x90|(x91|x92)));

	if (t22 != -12619LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	uint16_t x95 = UINT16_MAX;

	t23 = (x93&(x94|(x95|x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x99 = UINT8_MAX;

	t24 = (x97&(x98|(x99|x100)));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = 18167;
	uint16_t x102 = UINT16_MAX;
	int8_t x103 = 6;
	uint8_t x104 = 3U;
	int32_t t25 = 50725643;

	t25 = (x101&(x102|(x103|x104)));

	if (t25 != 18167) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;

	t26 = (x105&(x106|(x107|x108)));

	if (t26 != -2147451008) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = INT8_MIN;
	static uint32_t x110 = UINT32_MAX;
	int32_t x112 = -14;
	volatile uint64_t t27 = 129046656LLU;

	t27 = (x109&(x110|(x111|x112)));

	if (t27 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = 14743;
	int32_t x114 = -1;
	uint32_t x115 = 201U;
	uint32_t x116 = 14158U;
	volatile uint32_t t28 = 1U;

	t28 = (x113&(x114|(x115|x116)));

	if (t28 != 14743U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = INT8_MIN;
	static int8_t x119 = INT8_MAX;
	uint16_t x120 = UINT16_MAX;
	volatile uint64_t t29 = UINT64_MAX;

	t29 = (x117&(x118|(x119|x120)));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 79U;
	static int8_t x122 = INT8_MAX;
	int32_t x123 = 14760947;
	int32_t t30 = -48;

	t30 = (x121&(x122|(x123|x124)));

	if (t30 != 79) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = INT32_MAX;
	uint64_t x126 = 798882578458770255LLU;
	int16_t x127 = INT16_MAX;
	uint64_t t31 = 10322458098LLU;

	t31 = (x125&(x126|(x127|x128)));

	if (t31 != 2147483647LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x131 = 141189197LLU;
	static volatile int32_t x132 = INT32_MAX;
	volatile uint64_t t32 = 51LLU;

	t32 = (x129&(x130|(x131|x132)));

	if (t32 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = -1;
	uint16_t x135 = 25U;
	int32_t t33 = INT32_MIN;

	t33 = (x133&(x134|(x135|x136)));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	uint16_t x138 = UINT16_MAX;
	static int8_t x139 = INT8_MIN;
	int64_t x140 = -1LL;
	int64_t t34 = INT64_MAX;

	t34 = (x137&(x138|(x139|x140)));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x141 = 7U;
	volatile int8_t x142 = INT8_MAX;
	int64_t x144 = 511163868489693039LL;
	static int64_t t35 = -3195960LL;

	t35 = (x141&(x142|(x143|x144)));

	if (t35 != 7LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x146 = -1LL;
	int8_t x147 = INT8_MIN;
	volatile int8_t x148 = INT8_MAX;
	int64_t t36 = 0LL;

	t36 = (x145&(x146|(x147|x148)));

	if (t36 != -1059049515337LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	static uint8_t x150 = UINT8_MAX;
	uint64_t x151 = UINT64_MAX;
	static volatile int16_t x152 = INT16_MAX;
	volatile uint64_t t37 = 1589287265295645LLU;

	t37 = (x149&(x150|(x151|x152)));

	if (t37 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = INT64_MIN;
	int8_t x156 = INT8_MAX;
	int64_t t38 = INT64_MIN;

	t38 = (x153&(x154|(x155|x156)));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = INT64_MIN;
	volatile int8_t x158 = INT8_MIN;
	uint16_t x160 = 6363U;
	volatile uint64_t t39 = 2LLU;

	t39 = (x157&(x158|(x159|x160)));

	if (t39 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	int32_t x162 = INT32_MIN;
	static int64_t x163 = -3403LL;
	int8_t x164 = INT8_MAX;
	static volatile int64_t t40 = -4249736284732876LL;

	t40 = (x161&(x162|(x163|x164)));

	if (t40 != -32768LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	uint8_t x166 = 1U;
	uint32_t x167 = 6953850U;
	static uint8_t x168 = 41U;

	t41 = (x165&(x166|(x167|x168)));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	static volatile uint32_t x170 = 2087486867U;
	uint32_t x171 = 62684436U;
	int64_t x172 = -5882171179998271LL;
	static volatile int64_t t42 = INT64_MIN;

	t42 = (x169&(x170|(x171|x172)));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 6373387587563LLU;
	static uint16_t x175 = 16165U;
	int16_t x176 = 18;
	uint64_t t43 = 255322768851636511LLU;

	t43 = (x173&(x174|(x175|x176)));

	if (t43 != 3947LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -6;
	volatile int16_t x178 = INT16_MIN;
	int64_t x180 = -19410708457LL;
	static volatile int64_t t44 = 139391LL;

	t44 = (x177&(x178|(x179|x180)));

	if (t44 != -110LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x181 = 2U;
	static int32_t x182 = INT32_MIN;
	int8_t x183 = -1;
	int8_t x184 = INT8_MAX;

	t45 = (x181&(x182|(x183|x184)));

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x186 = 4U;
	int8_t x188 = -1;
	int32_t t46 = 62;

	t46 = (x185&(x186|(x187|x188)));

	if (t46 != 9) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x189 = 13U;
	static int32_t x190 = -709283366;
	int16_t x192 = 1;
	volatile int32_t t47 = 95;

	t47 = (x189&(x190|(x191|x192)));

	if (t47 != 13) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	int16_t x194 = INT16_MAX;
	int16_t x195 = -1;
	static int16_t x196 = 248;
	volatile uint64_t t48 = UINT64_MAX;

	t48 = (x193&(x194|(x195|x196)));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 14832224U;
	uint16_t x198 = 10953U;
	uint64_t x199 = 1919LLU;
	int64_t x200 = -1LL;
	volatile uint64_t t49 = 28757473416964LLU;

	t49 = (x197&(x198|(x199|x200)));

	if (t49 != 14832224LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = INT8_MAX;
	volatile int32_t x203 = INT32_MIN;
	int64_t t50 = -1580042635180852275LL;

	t50 = (x201&(x202|(x203|x204)));

	if (t50 != 127LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x206 = -1LL;
	static int8_t x207 = 0;
	int64_t t51 = INT64_MAX;

	t51 = (x205&(x206|(x207|x208)));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = INT8_MIN;
	int64_t x210 = -52LL;
	int8_t x211 = INT8_MIN;
	int64_t t52 = 1LL;

	t52 = (x209&(x210|(x211|x212)));

	if (t52 != -128LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = UINT32_MAX;
	int16_t x214 = INT16_MAX;
	volatile int64_t x215 = -1LL;
	int32_t x216 = INT32_MIN;
	volatile int64_t t53 = 130254073LL;

	t53 = (x213&(x214|(x215|x216)));

	if (t53 != 4294967295LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = 2;
	int32_t x218 = -159;
	uint16_t x219 = 0U;
	int8_t x220 = INT8_MAX;

	t54 = (x217&(x218|(x219|x220)));

	if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	int8_t x222 = 14;
	int32_t x223 = -1;

	t55 = (x221&(x222|(x223|x224)));

	if (t55 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x225 = INT8_MAX;
	uint8_t x226 = 0U;
	uint8_t x227 = 0U;
	static int32_t t56 = -131443013;

	t56 = (x225&(x226|(x227|x228)));

	if (t56 != 26) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -1LL;
	int16_t x230 = INT16_MAX;
	int64_t t57 = 647980150016892LL;

	t57 = (x229&(x230|(x231|x232)));

	if (t57 != 2147483647LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x233 = -130;
	int16_t x234 = INT16_MAX;
	volatile int64_t x235 = INT64_MIN;
	int32_t x236 = INT32_MIN;
	static volatile int64_t t58 = -50LL;

	t58 = (x233&(x234|(x235|x236)));

	if (t58 != -2147451010LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = INT64_MIN;
	uint16_t x238 = 2376U;
	int8_t x239 = INT8_MIN;
	int8_t x240 = INT8_MIN;
	volatile int64_t t59 = INT64_MIN;

	t59 = (x237&(x238|(x239|x240)));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = INT16_MIN;
	volatile int16_t x242 = -4388;
	int64_t x243 = -1LL;

	t60 = (x241&(x242|(x243|x244)));

	if (t60 != -32768LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x246 = -1;
	int32_t x247 = 3211416;
	static int16_t x248 = INT16_MAX;
	int32_t t61 = 987603;

	t61 = (x245&(x246|(x247|x248)));

	if (t61 != 11) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	int64_t x250 = -1565977887446883853LL;
	int32_t x251 = 125;
	static int8_t x252 = INT8_MAX;
	volatile int64_t t62 = INT64_MIN;

	t62 = (x249&(x250|(x251|x252)));

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = 1315683;
	int32_t x254 = -1;
	int64_t x255 = INT64_MAX;

	t63 = (x253&(x254|(x255|x256)));

	if (t63 != 1315683LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = UINT32_MAX;
	uint32_t x258 = UINT32_MAX;
	int16_t x259 = INT16_MIN;
	uint32_t x260 = 20827412U;

	t64 = (x257&(x258|(x259|x260)));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = UINT64_MAX;
	volatile int16_t x262 = 555;
	volatile int32_t x263 = INT32_MIN;

	t65 = (x261&(x262|(x263|x264)));

	if (t65 != 4294967295LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 17U;
	int16_t x266 = 0;
	uint32_t t66 = 2945918U;

	t66 = (x265&(x266|(x267|x268)));

	if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x269 = 33730028288046LLU;
	volatile uint32_t x270 = 78943433U;
	static int64_t x271 = INT64_MIN;
	int16_t x272 = 7339;
	uint64_t t67 = 723614048171LLU;

	t67 = (x269&(x270|(x271|x272)));

	if (t67 != 1087530LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x273 = UINT64_MAX;
	int32_t x274 = INT32_MIN;
	int64_t x275 = -102LL;
	int32_t x276 = INT32_MIN;

	t68 = (x273&(x274|(x275|x276)));

	if (t68 != 18446744073709551514LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x278 = INT8_MIN;
	volatile int32_t x279 = INT32_MIN;
	int32_t x280 = -11812697;
	volatile int32_t t69 = -30042435;

	t69 = (x277&(x278|(x279|x280)));

	if (t69 != -35843839) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -441;
	uint8_t x283 = UINT8_MAX;
	uint64_t t70 = 195325827869005876LLU;

	t70 = (x281&(x282|(x283|x284)));

	if (t70 != 35911LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	int64_t x286 = -177029370026946577LL;
	volatile uint8_t x287 = UINT8_MAX;
	int8_t x288 = 1;
	volatile int64_t t71 = INT64_MIN;

	t71 = (x285&(x286|(x287|x288)));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -72809LL;
	volatile uint64_t x292 = UINT64_MAX;
	volatile uint64_t t72 = 152164633715484LLU;

	t72 = (x289&(x290|(x291|x292)));

	if (t72 != 18446744073709478807LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x293 = INT32_MIN;
	volatile int32_t x294 = INT32_MIN;
	int8_t x295 = 30;
	volatile int64_t x296 = INT64_MAX;
	volatile int64_t t73 = -2LL;

	t73 = (x293&(x294|(x295|x296)));

	if (t73 != -2147483648LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x298 = INT8_MIN;
	int32_t x299 = INT32_MIN;
	volatile uint64_t x300 = 14586LLU;
	uint64_t t74 = 30LLU;

	t74 = (x297&(x298|(x299|x300)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = 1;
	static int8_t x302 = -42;
	int32_t x303 = INT32_MIN;
	int8_t x304 = INT8_MIN;

	t75 = (x301&(x302|(x303|x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	int8_t x306 = -1;
	volatile int64_t x307 = INT64_MIN;
	int32_t x308 = -1;
	volatile int64_t t76 = -133316LL;

	t76 = (x305&(x306|(x307|x308)));

	if (t76 != -2147483648LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = -1;
	int32_t x310 = INT32_MIN;
	int8_t x311 = INT8_MIN;
	int16_t x312 = INT16_MIN;
	int32_t t77 = 515280;

	t77 = (x309&(x310|(x311|x312)));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 7U;
	uint64_t x314 = UINT64_MAX;
	static uint64_t t78 = 6326577112090LLU;

	t78 = (x313&(x314|(x315|x316)));

	if (t78 != 7LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x318 = 257007LL;
	int8_t x320 = INT8_MIN;
	volatile int64_t t79 = -121891517133732LL;

	t79 = (x317&(x318|(x319|x320)));

	if (t79 != -50LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = -1;
	volatile int64_t x322 = INT64_MIN;
	volatile uint64_t x323 = 9496014868839LLU;

	t80 = (x321&(x322|(x323|x324)));

	if (t80 != 9223381532869655527LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 20748422943717LLU;
	int64_t x326 = -852333220LL;
	int16_t x327 = INT16_MAX;
	volatile uint64_t t81 = 28711532517001LLU;

	t81 = (x325&(x326|(x327|x328)));

	if (t81 != 20748422943717LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x331 = INT8_MAX;
	int64_t t82 = 268583326823642LL;

	t82 = (x329&(x330|(x331|x332)));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x333 = -60;
	volatile int8_t x334 = 0;
	int32_t x336 = -1;

	t83 = (x333&(x334|(x335|x336)));

	if (t83 != -60) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = 0;
	static uint32_t x339 = 2426756U;
	int64_t x340 = -1LL;

	t84 = (x337&(x338|(x339|x340)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x341 = INT16_MAX;
	int16_t x342 = INT16_MIN;
	int64_t x343 = INT64_MIN;
	static int64_t t85 = -106651067LL;

	t85 = (x341&(x342|(x343|x344)));

	if (t85 != 255LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	volatile int32_t x346 = -1;
	int8_t x347 = 0;
	uint16_t x348 = UINT16_MAX;
	volatile int64_t t86 = INT64_MIN;

	t86 = (x345&(x346|(x347|x348)));

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MAX;
	static int32_t x350 = INT32_MIN;
	static int16_t x351 = 6415;
	int32_t x352 = INT32_MIN;
	volatile int64_t t87 = -6828353LL;

	t87 = (x349&(x350|(x351|x352)));

	if (t87 != 9223372034707298575LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x353 = -7LL;
	int64_t x354 = INT64_MAX;
	volatile int16_t x355 = INT16_MIN;
	int16_t x356 = -11;
	volatile int64_t t88 = -217585LL;

	t88 = (x353&(x354|(x355|x356)));

	if (t88 != -7LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x359 = -1;
	uint8_t x360 = 4U;

	t89 = (x357&(x358|(x359|x360)));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 297836666630849LLU;
	int16_t x362 = INT16_MIN;
	uint64_t t90 = 47707LLU;

	t90 = (x361&(x362|(x363|x364)));

	if (t90 != 297836666618433LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x366 = INT32_MIN;
	int8_t x367 = INT8_MIN;

	t91 = (x365&(x366|(x367|x368)));

	if (t91 != 18475618U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	uint32_t x370 = 7510599U;
	uint8_t x371 = UINT8_MAX;
	static volatile uint32_t t92 = 391U;

	t92 = (x369&(x370|(x371|x372)));

	if (t92 != 7510656U) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = 5;
	volatile uint8_t x375 = UINT8_MAX;
	uint32_t x376 = 92U;
	volatile uint64_t t93 = 936442313675871339LLU;

	t93 = (x373&(x374|(x375|x376)));

	if (t93 != 5LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	static int32_t x378 = 4;
	static uint32_t x380 = 1095U;
	uint64_t t94 = 2LLU;

	t94 = (x377&(x378|(x379|x380)));

	if (t94 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = UINT8_MAX;
	uint32_t x382 = UINT32_MAX;
	volatile uint64_t x384 = UINT64_MAX;
	static volatile uint64_t t95 = 2013862801315LLU;

	t95 = (x381&(x382|(x383|x384)));

	if (t95 != 255LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = UINT8_MAX;
	static int16_t x386 = INT16_MAX;
	static int64_t x388 = -272LL;

	t96 = (x385&(x386|(x387|x388)));

	if (t96 != 255LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x390 = 1U;
	volatile uint16_t x391 = UINT16_MAX;
	static uint64_t x392 = 26898132LLU;
	volatile uint64_t t97 = 190LLU;

	t97 = (x389&(x390|(x391|x392)));

	if (t97 != 255LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x394 = 16U;
	volatile int16_t x395 = -50;
	int8_t x396 = INT8_MIN;
	volatile int32_t t98 = -14;

	t98 = (x393&(x394|(x395|x396)));

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x398 = INT32_MIN;
	volatile int16_t x399 = -1;
	uint64_t t99 = 26148LLU;

	t99 = (x397&(x398|(x399|x400)));

	if (t99 != 102721652995979209LLU) { NG(); } else { ; }
	
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

