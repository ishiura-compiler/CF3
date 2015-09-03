#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x1 = 54U;
volatile int32_t t0 = 5354975;
int64_t t2 = 2099002604LL;
static volatile int64_t x15 = 259184703453808202LL;
int32_t t4 = -1;
int32_t x21 = INT32_MIN;
int64_t x22 = INT64_MAX;
int32_t t6 = 6361103;
volatile int32_t t7 = -4;
volatile int64_t x34 = INT64_MIN;
uint32_t x35 = 755809U;
int32_t t8 = 63;
uint64_t x37 = 2059489728309LLU;
uint16_t x41 = 0U;
int32_t x43 = INT32_MAX;
static volatile int32_t t10 = 251251;
int8_t x49 = 55;
uint32_t x61 = 43U;
uint32_t x67 = UINT32_MAX;
static int64_t x69 = INT64_MIN;
int16_t x71 = INT16_MIN;
uint16_t x73 = 6097U;
int8_t x78 = 15;
int16_t x79 = INT16_MAX;
uint32_t x80 = 8476555U;
uint64_t x85 = 3598206114LLU;
volatile int32_t x91 = INT32_MIN;
uint8_t x103 = 59U;
static int32_t x104 = INT32_MIN;
uint8_t x106 = UINT8_MAX;
static int64_t x114 = -8109LL;
volatile int32_t t28 = -17230;
static uint64_t x119 = 127045065005663162LLU;
static volatile uint64_t t29 = 6736575405LLU;
uint64_t x123 = 28267LLU;
uint16_t x130 = 21836U;
uint8_t x136 = 3U;
int64_t x142 = -8245970404950520LL;
uint32_t x143 = 331U;
static int8_t x145 = 12;
volatile uint8_t x148 = UINT8_MAX;
int32_t t38 = -2;
uint32_t x158 = UINT32_MAX;
uint8_t x168 = UINT8_MAX;
int32_t t41 = -537361;
static int32_t x171 = INT32_MIN;
int32_t x176 = INT32_MIN;
volatile int8_t x178 = INT8_MIN;
volatile int32_t t47 = INT32_MIN;
int64_t x212 = 35200033961294302LL;
int32_t x214 = -1;
static int32_t x215 = INT32_MIN;
int8_t x217 = INT8_MAX;
static int8_t x225 = -33;
int64_t x226 = INT64_MAX;
int16_t x228 = INT16_MIN;
int64_t x230 = -1LL;
uint16_t x239 = 0U;
int8_t x241 = -1;
volatile int16_t x242 = 57;
volatile int32_t t61 = -49;
int8_t x254 = -1;
int8_t x256 = 3;
static uint8_t x258 = UINT8_MAX;
int8_t x263 = INT8_MAX;
volatile int32_t t65 = -4338856;
static int32_t x266 = INT32_MAX;
int32_t t67 = 19;
int64_t x274 = INT64_MIN;
int8_t x275 = 3;
volatile uint32_t t68 = 1259311240U;
int8_t x279 = INT8_MIN;
int32_t t69 = -383072531;
int32_t t70 = -2949;
int8_t x293 = INT8_MIN;
uint8_t x296 = 16U;
uint64_t x297 = 405034741310017LLU;
uint64_t x300 = 239197366699552LLU;
uint16_t x301 = UINT16_MAX;
int8_t x304 = INT8_MIN;
int32_t x310 = INT32_MIN;
int32_t t78 = 23713491;
static uint16_t x322 = 417U;
int16_t x323 = 11;
int16_t x326 = INT16_MAX;
volatile int32_t t81 = -54;
uint64_t x330 = 66610498971416592LLU;
volatile int64_t x331 = INT64_MIN;
volatile uint16_t x335 = 1949U;
int32_t x339 = INT32_MIN;
volatile int32_t t84 = -319276;
uint16_t x347 = UINT16_MAX;
uint8_t x354 = UINT8_MAX;
static volatile int64_t x358 = INT64_MIN;
int8_t x372 = INT8_MAX;
int32_t t92 = 15;
static int32_t x381 = 0;
static int16_t x386 = INT16_MIN;
int64_t x392 = INT64_MIN;
int32_t x397 = INT32_MAX;
static int8_t x398 = -1;
int32_t t99 = -1303;


void f0(void) {
	uint8_t x2 = 1U;
	int8_t x3 = -1;
	int8_t x4 = INT8_MIN;

	t0 = (x1^(x2<(x3<=x4)));

	if (t0 != 54) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 4198618289122707603LLU;
	uint16_t x6 = UINT16_MAX;
	volatile int32_t x7 = -83391;
	int16_t x8 = 7;
	volatile uint64_t t1 = 3127773175LLU;

	t1 = (x5^(x6<(x7<=x8)));

	if (t1 != 4198618289122707603LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -56101827951LL;
	int16_t x10 = INT16_MIN;
	int64_t x11 = INT64_MIN;
	volatile uint8_t x12 = UINT8_MAX;

	t2 = (x9^(x10<(x11<=x12)));

	if (t2 != -56101827952LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	uint64_t x14 = 1817818899115867977LLU;
	uint32_t x16 = 62748U;
	volatile int32_t t3 = 14;

	t3 = (x13^(x14<(x15<=x16)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = -1;
	int32_t x18 = INT32_MIN;
	volatile int8_t x19 = -1;
	int32_t x20 = -1;

	t4 = (x17^(x18<(x19<=x20)));

	if (t4 != -2) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x23 = -3077;
	int64_t x24 = INT64_MIN;
	volatile int32_t t5 = INT32_MIN;

	t5 = (x21^(x22<(x23<=x24)));

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	uint64_t x26 = UINT64_MAX;
	volatile int32_t x27 = 36;
	uint16_t x28 = 5658U;

	t6 = (x25^(x26<(x27<=x28)));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	static int8_t x30 = 0;
	int64_t x31 = -16473LL;
	int64_t x32 = INT64_MIN;

	t7 = (x29^(x30<(x31<=x32)));

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	volatile uint16_t x36 = 2U;

	t8 = (x33^(x34<(x35<=x36)));

	if (t8 != 2147483646) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x38 = -1;
	int64_t x39 = -12876727430205LL;
	int8_t x40 = INT8_MIN;
	volatile uint64_t t9 = 364613270768565LLU;

	t9 = (x37^(x38<(x39<=x40)));

	if (t9 != 2059489728308LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x42 = 36U;
	static int8_t x44 = -5;

	t10 = (x41^(x42<(x43<=x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 430665LLU;
	int64_t x46 = 19971390LL;
	uint16_t x47 = 240U;
	uint16_t x48 = 2U;
	volatile uint64_t t11 = 15839231280417521LLU;

	t11 = (x45^(x46<(x47<=x48)));

	if (t11 != 430665LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x50 = UINT64_MAX;
	uint8_t x51 = 7U;
	int64_t x52 = INT64_MIN;
	volatile int32_t t12 = -8;

	t12 = (x49^(x50<(x51<=x52)));

	if (t12 != 55) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	volatile int32_t x54 = -4992984;
	int16_t x55 = 26;
	static uint16_t x56 = UINT16_MAX;
	static int64_t t13 = -13616319060778LL;

	t13 = (x53^(x54<(x55<=x56)));

	if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = -1LL;
	static int16_t x58 = 484;
	int16_t x59 = -1;
	int32_t x60 = -1;
	volatile int64_t t14 = -87838238760753228LL;

	t14 = (x57^(x58<(x59<=x60)));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = INT8_MAX;
	static uint16_t x63 = 4483U;
	static int32_t x64 = INT32_MIN;
	volatile uint32_t t15 = 12U;

	t15 = (x61^(x62<(x63<=x64)));

	if (t15 != 43U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x65 = UINT8_MAX;
	int16_t x66 = INT16_MIN;
	volatile uint32_t x68 = UINT32_MAX;
	static volatile int32_t t16 = 189;

	t16 = (x65^(x66<(x67<=x68)));

	if (t16 != 254) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x70 = -970175LL;
	volatile int16_t x72 = INT16_MIN;
	static int64_t t17 = -3912500802LL;

	t17 = (x69^(x70<(x71<=x72)));

	if (t17 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x74 = UINT16_MAX;
	uint16_t x75 = 349U;
	static int16_t x76 = INT16_MIN;
	int32_t t18 = -757621;

	t18 = (x73^(x74<(x75<=x76)));

	if (t18 != 6097) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	volatile uint64_t t19 = UINT64_MAX;

	t19 = (x77^(x78<(x79<=x80)));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x81 = UINT32_MAX;
	int16_t x82 = INT16_MAX;
	volatile uint32_t x83 = 6U;
	volatile uint8_t x84 = 6U;
	volatile uint32_t t20 = UINT32_MAX;

	t20 = (x81^(x82<(x83<=x84)));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = INT64_MIN;
	int8_t x87 = INT8_MIN;
	int32_t x88 = -1;
	uint64_t t21 = 211048603LLU;

	t21 = (x85^(x86<(x87<=x88)));

	if (t21 != 3598206115LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	volatile int8_t x90 = INT8_MAX;
	int64_t x92 = 928LL;
	int32_t t22 = 34906854;

	t22 = (x89^(x90<(x91<=x92)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	volatile int16_t x94 = INT16_MIN;
	static volatile int16_t x95 = INT16_MIN;
	uint64_t x96 = UINT64_MAX;
	static volatile int64_t t23 = -57184750LL;

	t23 = (x93^(x94<(x95<=x96)));

	if (t23 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -1;
	uint64_t x98 = 16073868859566677LLU;
	int16_t x99 = INT16_MIN;
	int32_t x100 = INT32_MIN;
	volatile int32_t t24 = -32945341;

	t24 = (x97^(x98<(x99<=x100)));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	int16_t x102 = INT16_MAX;
	int32_t t25 = 995449;

	t25 = (x101^(x102<(x103<=x104)));

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	int32_t x107 = INT32_MIN;
	volatile int32_t x108 = -1;
	volatile int32_t t26 = INT32_MIN;

	t26 = (x105^(x106<(x107<=x108)));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x109 = UINT64_MAX;
	int64_t x110 = INT64_MIN;
	uint32_t x111 = 1202135074U;
	int32_t x112 = INT32_MIN;
	uint64_t t27 = 3302243540LLU;

	t27 = (x109^(x110<(x111<=x112)));

	if (t27 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = -1330;
	uint32_t x115 = 4U;
	int64_t x116 = INT64_MIN;

	t28 = (x113^(x114<(x115<=x116)));

	if (t28 != -1329) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x117 = 17212185830LLU;
	int8_t x118 = INT8_MAX;
	int32_t x120 = -1;

	t29 = (x117^(x118<(x119<=x120)));

	if (t29 != 17212185830LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	uint16_t x122 = UINT16_MAX;
	int64_t x124 = -314961611884084580LL;
	int64_t t30 = INT64_MAX;

	t30 = (x121^(x122<(x123<=x124)));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x125 = UINT8_MAX;
	int32_t x126 = 157102;
	static int64_t x127 = 82995252510148857LL;
	static int32_t x128 = -1;
	volatile int32_t t31 = -282765809;

	t31 = (x125^(x126<(x127<=x128)));

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	static int8_t x131 = INT8_MIN;
	int8_t x132 = -29;
	volatile int32_t t32 = 132;

	t32 = (x129^(x130<(x131<=x132)));

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = -1;
	int64_t x134 = INT64_MIN;
	uint16_t x135 = UINT16_MAX;
	static int32_t t33 = 15;

	t33 = (x133^(x134<(x135<=x136)));

	if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	uint16_t x138 = 0U;
	int32_t x139 = 33073720;
	int8_t x140 = INT8_MIN;
	int32_t t34 = INT32_MIN;

	t34 = (x137^(x138<(x139<=x140)));

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	uint16_t x144 = 81U;
	volatile int64_t t35 = 377LL;

	t35 = (x141^(x142<(x143<=x144)));

	if (t35 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x146 = 21895U;
	static uint64_t x147 = 58LLU;
	int32_t t36 = 59;

	t36 = (x145^(x146<(x147<=x148)));

	if (t36 != 12) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	static uint16_t x150 = 30U;
	int64_t x151 = INT64_MIN;
	uint8_t x152 = UINT8_MAX;
	int64_t t37 = INT64_MIN;

	t37 = (x149^(x150<(x151<=x152)));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 15U;
	int64_t x154 = 6LL;
	static uint64_t x155 = 61174LLU;
	int8_t x156 = 0;

	t38 = (x153^(x154<(x155<=x156)));

	if (t38 != 15) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x157 = 230U;
	int16_t x159 = -1;
	int16_t x160 = INT16_MIN;
	volatile uint32_t t39 = 9228U;

	t39 = (x157^(x158<(x159<=x160)));

	if (t39 != 230U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 8445U;
	int16_t x162 = INT16_MIN;
	uint8_t x163 = 7U;
	int64_t x164 = INT64_MIN;
	int32_t t40 = -684;

	t40 = (x161^(x162<(x163<=x164)));

	if (t40 != 8444) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x165 = 898U;
	uint64_t x166 = UINT64_MAX;
	int64_t x167 = 806LL;

	t41 = (x165^(x166<(x167<=x168)));

	if (t41 != 898) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = -1;
	volatile int8_t x170 = INT8_MIN;
	static int8_t x172 = INT8_MAX;
	static volatile int32_t t42 = 13645911;

	t42 = (x169^(x170<(x171<=x172)));

	if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	int64_t x174 = INT64_MIN;
	uint8_t x175 = 7U;
	int32_t t43 = -421639999;

	t43 = (x173^(x174<(x175<=x176)));

	if (t43 != -127) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = 43410579364LL;
	uint16_t x179 = 7U;
	static int32_t x180 = -1;
	int64_t t44 = 176932LL;

	t44 = (x177^(x178<(x179<=x180)));

	if (t44 != 43410579365LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	volatile int32_t x182 = -121496;
	static uint32_t x183 = 830528712U;
	uint32_t x184 = 114320420U;
	volatile int32_t t45 = 1134;

	t45 = (x181^(x182<(x183<=x184)));

	if (t45 != -127) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 26776LLU;
	uint8_t x186 = UINT8_MAX;
	uint16_t x187 = UINT16_MAX;
	int64_t x188 = -507261260322766LL;
	uint64_t t46 = 397187347LLU;

	t46 = (x185^(x186<(x187<=x188)));

	if (t46 != 26776LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = INT32_MIN;
	uint64_t x190 = 95168LLU;
	int16_t x191 = INT16_MIN;
	uint8_t x192 = UINT8_MAX;

	t47 = (x189^(x190<(x191<=x192)));

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = INT64_MIN;
	int32_t x194 = INT32_MAX;
	static int8_t x195 = -1;
	int64_t x196 = 19141571923LL;
	int64_t t48 = INT64_MIN;

	t48 = (x193^(x194<(x195<=x196)));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 0U;
	static int8_t x198 = INT8_MIN;
	uint64_t x199 = 120641106LLU;
	volatile int64_t x200 = -1LL;
	int32_t t49 = -935779;

	t49 = (x197^(x198<(x199<=x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MAX;
	static uint16_t x202 = 3U;
	int64_t x203 = INT64_MIN;
	uint16_t x204 = 578U;
	volatile int32_t t50 = INT32_MAX;

	t50 = (x201^(x202<(x203<=x204)));

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x205 = UINT16_MAX;
	int8_t x206 = INT8_MAX;
	static int32_t x207 = 6394;
	int32_t x208 = INT32_MIN;
	volatile int32_t t51 = -25975;

	t51 = (x205^(x206<(x207<=x208)));

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x209 = 518234719U;
	static int16_t x210 = INT16_MAX;
	int64_t x211 = INT64_MIN;
	static uint32_t t52 = 23U;

	t52 = (x209^(x210<(x211<=x212)));

	if (t52 != 518234719U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = UINT32_MAX;
	uint32_t x216 = 159662U;
	uint32_t t53 = 608055933U;

	t53 = (x213^(x214<(x215<=x216)));

	if (t53 != 4294967294U) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x218 = INT32_MAX;
	static volatile uint64_t x219 = 18420078671LLU;
	volatile int64_t x220 = INT64_MIN;
	int32_t t54 = -26306217;

	t54 = (x217^(x218<(x219<=x220)));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = UINT32_MAX;
	int16_t x222 = -566;
	volatile int32_t x223 = -1;
	int32_t x224 = 27;
	uint32_t t55 = 103738100U;

	t55 = (x221^(x222<(x223<=x224)));

	if (t55 != 4294967294U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x227 = INT8_MIN;
	int32_t t56 = 3;

	t56 = (x225^(x226<(x227<=x228)));

	if (t56 != -33) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = -1LL;
	int16_t x231 = -6670;
	static uint16_t x232 = 7251U;
	static volatile int64_t t57 = 3695159LL;

	t57 = (x229^(x230<(x231<=x232)));

	if (t57 != -2LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	volatile uint16_t x234 = 15U;
	static volatile uint32_t x235 = 6U;
	int16_t x236 = INT16_MIN;
	volatile int64_t t58 = INT64_MIN;

	t58 = (x233^(x234<(x235<=x236)));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MAX;
	volatile int8_t x238 = INT8_MAX;
	volatile int8_t x240 = INT8_MIN;
	static volatile int64_t t59 = INT64_MAX;

	t59 = (x237^(x238<(x239<=x240)));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x243 = 20083255672447LLU;
	int8_t x244 = -36;
	int32_t t60 = 64006061;

	t60 = (x241^(x242<(x243<=x244)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 53U;
	int16_t x246 = INT16_MIN;
	uint32_t x247 = 1739U;
	int8_t x248 = INT8_MIN;

	t61 = (x245^(x246<(x247<=x248)));

	if (t61 != 52) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 251U;
	int64_t x250 = -336687LL;
	static int16_t x251 = 1579;
	uint32_t x252 = 223395927U;
	uint32_t t62 = 2U;

	t62 = (x249^(x250<(x251<=x252)));

	if (t62 != 250U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 11349U;
	volatile int64_t x255 = INT64_MIN;
	volatile int32_t t63 = 0;

	t63 = (x253^(x254<(x255<=x256)));

	if (t63 != 11348) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = 1;
	int32_t x259 = INT32_MIN;
	volatile uint32_t x260 = 2621U;
	int32_t t64 = 619654525;

	t64 = (x257^(x258<(x259<=x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = 3;
	int64_t x262 = INT64_MIN;
	int64_t x264 = INT64_MIN;

	t65 = (x261^(x262<(x263<=x264)));

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	static volatile uint32_t x267 = UINT32_MAX;
	static int8_t x268 = -6;
	int32_t t66 = 1;

	t66 = (x265^(x266<(x267<=x268)));

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = UINT16_MAX;
	static int64_t x270 = INT64_MAX;
	uint16_t x271 = 3U;
	uint64_t x272 = UINT64_MAX;

	t67 = (x269^(x270<(x271<=x272)));

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 1794U;
	static int32_t x276 = -1;

	t68 = (x273^(x274<(x275<=x276)));

	if (t68 != 1795U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x277 = 5U;
	static int64_t x278 = INT64_MAX;
	volatile int8_t x280 = INT8_MIN;

	t69 = (x277^(x278<(x279<=x280)));

	if (t69 != 5) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -25;
	volatile uint64_t x282 = UINT64_MAX;
	static volatile uint8_t x283 = 0U;
	int32_t x284 = INT32_MIN;

	t70 = (x281^(x282<(x283<=x284)));

	if (t70 != -25) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = 194720LL;
	uint16_t x286 = 2456U;
	uint64_t x287 = 435783LLU;
	int64_t x288 = -1LL;
	int64_t t71 = 2188708424270LL;

	t71 = (x285^(x286<(x287<=x288)));

	if (t71 != 194720LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 191108883381197LLU;
	int16_t x290 = INT16_MIN;
	int32_t x291 = -88155532;
	uint16_t x292 = 1U;
	uint64_t t72 = 569581593302LLU;

	t72 = (x289^(x290<(x291<=x292)));

	if (t72 != 191108883381196LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x294 = INT32_MAX;
	static int64_t x295 = INT64_MIN;
	volatile int32_t t73 = 0;

	t73 = (x293^(x294<(x295<=x296)));

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x298 = -172218;
	uint32_t x299 = 179U;
	uint64_t t74 = 1057537790LLU;

	t74 = (x297^(x298<(x299<=x300)));

	if (t74 != 405034741310016LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x302 = UINT64_MAX;
	uint16_t x303 = UINT16_MAX;
	volatile int32_t t75 = -97715787;

	t75 = (x301^(x302<(x303<=x304)));

	if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x305 = 13U;
	int32_t x306 = -1;
	volatile int32_t x307 = -1;
	int8_t x308 = -1;
	int32_t t76 = -1102096;

	t76 = (x305^(x306<(x307<=x308)));

	if (t76 != 12) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x309 = 56;
	uint8_t x311 = UINT8_MAX;
	int32_t x312 = INT32_MAX;
	volatile int32_t t77 = -155196981;

	t77 = (x309^(x310<(x311<=x312)));

	if (t77 != 57) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = 1;
	int64_t x314 = INT64_MAX;
	int16_t x315 = -1;
	int8_t x316 = 35;

	t78 = (x313^(x314<(x315<=x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = INT8_MIN;
	int8_t x318 = INT8_MIN;
	static int16_t x319 = -1;
	static int8_t x320 = -2;
	int32_t t79 = 2149373;

	t79 = (x317^(x318<(x319<=x320)));

	if (t79 != -127) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -1;
	int32_t x324 = INT32_MIN;
	int32_t t80 = -3934334;

	t80 = (x321^(x322<(x323<=x324)));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = 7;
	int8_t x327 = INT8_MAX;
	static int64_t x328 = INT64_MIN;

	t81 = (x325^(x326<(x327<=x328)));

	if (t81 != 7) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x329 = 1805606898LLU;
	int8_t x332 = 3;
	static uint64_t t82 = 17LLU;

	t82 = (x329^(x330<(x331<=x332)));

	if (t82 != 1805606898LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MAX;
	uint32_t x334 = UINT32_MAX;
	int64_t x336 = -915674709LL;
	volatile int32_t t83 = INT32_MAX;

	t83 = (x333^(x334<(x335<=x336)));

	if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = INT8_MAX;
	static int64_t x338 = 3614559228144397LL;
	int8_t x340 = 45;

	t84 = (x337^(x338<(x339<=x340)));

	if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x341 = INT16_MAX;
	int32_t x342 = INT32_MIN;
	int32_t x343 = INT32_MIN;
	static int16_t x344 = INT16_MIN;
	volatile int32_t t85 = -63309;

	t85 = (x341^(x342<(x343<=x344)));

	if (t85 != 32766) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x345 = INT32_MIN;
	volatile uint8_t x346 = UINT8_MAX;
	volatile int32_t x348 = INT32_MIN;
	volatile int32_t t86 = INT32_MIN;

	t86 = (x345^(x346<(x347<=x348)));

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x349 = 171U;
	volatile uint64_t x350 = 3674712LLU;
	int8_t x351 = INT8_MIN;
	uint32_t x352 = 177U;
	volatile int32_t t87 = -7;

	t87 = (x349^(x350<(x351<=x352)));

	if (t87 != 171) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x353 = INT64_MIN;
	int32_t x355 = 10102;
	int8_t x356 = -1;
	static volatile int64_t t88 = INT64_MIN;

	t88 = (x353^(x354<(x355<=x356)));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = 0;
	volatile uint64_t x359 = 8LLU;
	uint64_t x360 = 51715990529640LLU;
	int32_t t89 = -77292402;

	t89 = (x357^(x358<(x359<=x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	static int16_t x362 = INT16_MIN;
	static uint64_t x363 = 6969291675LLU;
	uint32_t x364 = UINT32_MAX;
	volatile int32_t t90 = 18321565;

	t90 = (x361^(x362<(x363<=x364)));

	if (t90 != -127) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = 26872892181344219LL;
	int32_t x366 = -1;
	static int8_t x367 = INT8_MAX;
	int32_t x368 = -919614926;
	volatile int64_t t91 = 22LL;

	t91 = (x365^(x366<(x367<=x368)));

	if (t91 != 26872892181344218LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x369 = -1;
	uint8_t x370 = 37U;
	int64_t x371 = INT64_MIN;

	t92 = (x369^(x370<(x371<=x372)));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = -1LL;
	uint8_t x374 = UINT8_MAX;
	static uint16_t x375 = UINT16_MAX;
	static int8_t x376 = -1;
	static int64_t t93 = -14675514322LL;

	t93 = (x373^(x374<(x375<=x376)));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = INT32_MIN;
	int8_t x378 = INT8_MIN;
	volatile int64_t x379 = INT64_MAX;
	volatile int16_t x380 = INT16_MAX;
	volatile int32_t t94 = -31782083;

	t94 = (x377^(x378<(x379<=x380)));

	if (t94 != -2147483647) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x382 = -30;
	uint64_t x383 = UINT64_MAX;
	int64_t x384 = 7340811046089844LL;
	volatile int32_t t95 = -1600;

	t95 = (x381^(x382<(x383<=x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 25366U;
	static volatile int16_t x387 = INT16_MIN;
	int64_t x388 = 1LL;
	static volatile int32_t t96 = 1;

	t96 = (x385^(x386<(x387<=x388)));

	if (t96 != 25367) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = 34;
	uint64_t x390 = 1101121727340272145LLU;
	static volatile int16_t x391 = INT16_MAX;
	int32_t t97 = 5353;

	t97 = (x389^(x390<(x391<=x392)));

	if (t97 != 34) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x393 = -273309738;
	int64_t x394 = INT64_MIN;
	int32_t x395 = INT32_MIN;
	static int8_t x396 = INT8_MIN;
	int32_t t98 = -12273;

	t98 = (x393^(x394<(x395<=x396)));

	if (t98 != -273309737) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x399 = INT8_MIN;
	static int16_t x400 = INT16_MAX;

	t99 = (x397^(x398<(x399<=x400)));

	if (t99 != 2147483646) { NG(); } else { ; }
	
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

