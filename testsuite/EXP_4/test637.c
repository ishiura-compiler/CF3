#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x4 = 4U;
int8_t x6 = INT8_MIN;
uint16_t x16 = 6U;
int32_t t3 = INT32_MIN;
uint8_t x17 = UINT8_MAX;
volatile int8_t x26 = INT8_MIN;
int32_t t7 = 8;
int32_t x40 = 24;
int16_t x42 = -1;
int8_t x45 = -7;
static int32_t x57 = -30729518;
int64_t x60 = INT64_MIN;
volatile int32_t x61 = INT32_MIN;
int32_t x64 = -41369;
int32_t x65 = INT32_MAX;
int64_t x76 = -3381LL;
static int64_t x82 = -60137900278LL;
int8_t x86 = INT8_MIN;
uint16_t x88 = 117U;
uint64_t x90 = 25LLU;
int8_t x91 = 0;
volatile int32_t t23 = -214057;
static volatile int32_t t24 = -795809380;
static int16_t x102 = -1;
static int64_t x103 = -1462LL;
int32_t x104 = INT32_MIN;
int16_t x118 = -1;
int16_t x126 = INT16_MIN;
int16_t x135 = -1;
int16_t x140 = INT16_MAX;
volatile int32_t x143 = -9222;
int32_t x147 = INT32_MIN;
static uint32_t x150 = UINT32_MAX;
int64_t t36 = INT64_MIN;
int64_t x158 = 3033318365009129LL;
int64_t x166 = INT64_MIN;
int16_t x170 = INT16_MAX;
int32_t t42 = 2060926;
volatile int32_t x179 = -1;
int64_t t43 = -6820746LL;
int16_t x182 = INT16_MAX;
uint16_t x184 = 20U;
int8_t x196 = -1;
uint8_t x197 = 1U;
volatile int64_t x202 = -1LL;
volatile uint8_t x205 = 0U;
int32_t x211 = -1;
int32_t t50 = -402189844;
uint64_t x216 = UINT64_MAX;
volatile int32_t t51 = -122;
uint32_t x217 = 3663991U;
int8_t x224 = INT8_MAX;
int16_t x226 = INT16_MIN;
volatile uint8_t x227 = UINT8_MAX;
int64_t x232 = INT64_MAX;
int16_t x237 = -1;
volatile int32_t t56 = -1841945;
static volatile int16_t x241 = 10;
volatile uint16_t x242 = UINT16_MAX;
volatile uint16_t x257 = 0U;
int64_t x259 = 40LL;
int64_t x265 = INT64_MAX;
volatile int64_t x266 = -1LL;
int64_t t62 = -69789386130533LL;
static volatile uint32_t x274 = UINT32_MAX;
int32_t x293 = INT32_MIN;
int8_t x294 = -1;
uint8_t x299 = UINT8_MAX;
int32_t t70 = -40711;
int8_t x308 = -3;
static int16_t x312 = -4;
int8_t x313 = INT8_MIN;
int64_t x314 = -1LL;
int16_t x316 = -1;
static volatile int32_t t73 = -17284111;
int16_t x325 = INT16_MIN;
int8_t x344 = INT8_MAX;
int16_t x351 = 5;
uint16_t x353 = UINT16_MAX;
volatile int32_t t83 = -9674;
volatile uint8_t x362 = UINT8_MAX;
volatile uint32_t x363 = 35379U;
int32_t x367 = -95454;
uint64_t x368 = UINT64_MAX;
int32_t x369 = INT32_MAX;
int8_t x372 = -9;
int32_t x376 = -32621297;
int32_t t88 = -10512222;
int32_t t89 = 22853;
uint64_t x383 = 3194619240495LLU;
int16_t x388 = -147;
int16_t x402 = INT16_MAX;
uint64_t x403 = 15635382696750374LLU;
int64_t x407 = INT64_MIN;
volatile int32_t t96 = 553;
int8_t x409 = 4;


void f0(void) {
	int16_t x1 = -104;
	static int8_t x2 = INT8_MIN;
	uint32_t x3 = UINT32_MAX;
	static int32_t t0 = 850087;

	t0 = (x1^(x2<=(x3/x4)));

	if (t0 != -104) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MAX;
	static uint64_t x7 = UINT64_MAX;
	static int16_t x8 = 5;
	int32_t t1 = -59557;

	t1 = (x5^(x6<=(x7/x8)));

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 13674U;
	volatile int8_t x10 = -1;
	volatile int32_t x11 = -1;
	volatile int16_t x12 = INT16_MAX;
	int32_t t2 = 123385;

	t2 = (x9^(x10<=(x11/x12)));

	if (t2 != 13675) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	uint8_t x14 = UINT8_MAX;
	int8_t x15 = 5;

	t3 = (x13^(x14<=(x15/x16)));

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x18 = INT64_MIN;
	static int16_t x19 = INT16_MIN;
	int32_t x20 = INT32_MAX;
	int32_t t4 = 3;

	t4 = (x17^(x18<=(x19/x20)));

	if (t4 != 254) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	uint16_t x22 = 147U;
	volatile int16_t x23 = 95;
	volatile int32_t x24 = 425153;
	static int32_t t5 = 7464;

	t5 = (x21^(x22<=(x23/x24)));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 227802389014LLU;
	static int32_t x27 = INT32_MIN;
	int8_t x28 = -4;
	volatile uint64_t t6 = 2943LLU;

	t6 = (x25^(x26<=(x27/x28)));

	if (t6 != 227802389015LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	int16_t x30 = INT16_MIN;
	volatile int64_t x31 = -1LL;
	static int16_t x32 = -42;

	t7 = (x29^(x30<=(x31/x32)));

	if (t7 != -2) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 14114;
	int32_t x34 = 15;
	volatile int32_t x35 = -102177586;
	int32_t x36 = INT32_MIN;
	volatile int32_t t8 = 1043110;

	t8 = (x33^(x34<=(x35/x36)));

	if (t8 != 14114) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 1720223832U;
	uint8_t x38 = 33U;
	uint8_t x39 = 7U;
	uint32_t t9 = 302022U;

	t9 = (x37^(x38<=(x39/x40)));

	if (t9 != 1720223832U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int16_t x43 = INT16_MIN;
	volatile uint64_t x44 = 18LLU;
	int64_t t10 = INT64_MIN;

	t10 = (x41^(x42<=(x43/x44)));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = -178721923724LL;
	uint32_t x47 = UINT32_MAX;
	int16_t x48 = 3592;
	volatile int32_t t11 = -30235;

	t11 = (x45^(x46<=(x47/x48)));

	if (t11 != -8) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = UINT32_MAX;
	int16_t x50 = -220;
	volatile int64_t x51 = INT64_MIN;
	static uint64_t x52 = 1LLU;
	uint32_t t12 = UINT32_MAX;

	t12 = (x49^(x50<=(x51/x52)));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	volatile int8_t x54 = 1;
	uint64_t x55 = UINT64_MAX;
	int8_t x56 = INT8_MAX;
	volatile int32_t t13 = -146769671;

	t13 = (x53^(x54<=(x55/x56)));

	if (t13 != -32767) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = 38;
	int64_t x59 = INT64_MAX;
	volatile int32_t t14 = 0;

	t14 = (x57^(x58<=(x59/x60)));

	if (t14 != -30729518) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x62 = 11U;
	uint16_t x63 = 0U;
	volatile int32_t t15 = INT32_MIN;

	t15 = (x61^(x62<=(x63/x64)));

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x66 = 329;
	int64_t x67 = -24961201LL;
	static int16_t x68 = INT16_MIN;
	static int32_t t16 = -2071934;

	t16 = (x65^(x66<=(x67/x68)));

	if (t16 != 2147483646) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 1LLU;
	volatile int32_t x70 = INT32_MAX;
	int64_t x71 = INT64_MIN;
	uint32_t x72 = UINT32_MAX;
	volatile uint64_t t17 = 885607293241775LLU;

	t17 = (x69^(x70<=(x71/x72)));

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = 1;
	static volatile int16_t x74 = -49;
	volatile int64_t x75 = 71LL;
	int32_t t18 = 125435;

	t18 = (x73^(x74<=(x75/x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	static int64_t x78 = -445815877LL;
	volatile int16_t x79 = INT16_MIN;
	int8_t x80 = INT8_MAX;
	volatile uint32_t t19 = 84887450U;

	t19 = (x77^(x78<=(x79/x80)));

	if (t19 != 4294967294U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	static uint32_t x83 = UINT32_MAX;
	int64_t x84 = -1LL;
	int32_t t20 = 1;

	t20 = (x81^(x82<=(x83/x84)));

	if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x85 = UINT16_MAX;
	int64_t x87 = -1LL;
	int32_t t21 = 5274489;

	t21 = (x85^(x86<=(x87/x88)));

	if (t21 != 65534) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	volatile int32_t x92 = INT32_MIN;
	static int64_t t22 = INT64_MIN;

	t22 = (x89^(x90<=(x91/x92)));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x93 = UINT16_MAX;
	int8_t x94 = INT8_MIN;
	static int8_t x95 = 1;
	volatile uint64_t x96 = UINT64_MAX;

	t23 = (x93^(x94<=(x95/x96)));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = 197;
	static uint32_t x98 = 24039U;
	static int64_t x99 = INT64_MIN;
	volatile int8_t x100 = INT8_MIN;

	t24 = (x97^(x98<=(x99/x100)));

	if (t24 != 196) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 44U;
	volatile uint32_t t25 = 144433624U;

	t25 = (x101^(x102<=(x103/x104)));

	if (t25 != 45U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = UINT64_MAX;
	static int8_t x106 = 4;
	int16_t x107 = INT16_MIN;
	static volatile int16_t x108 = 67;
	static volatile uint64_t t26 = UINT64_MAX;

	t26 = (x105^(x106<=(x107/x108)));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	int64_t x110 = 1485LL;
	static volatile int64_t x111 = INT64_MAX;
	int32_t x112 = INT32_MAX;
	int32_t t27 = -33953;

	t27 = (x109^(x110<=(x111/x112)));

	if (t27 != -2147483647) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = 30U;
	uint64_t x119 = 322056417882124LLU;
	volatile int16_t x120 = 9;
	volatile uint32_t t28 = 2050438U;

	t28 = (x117^(x118<=(x119/x120)));

	if (t28 != 30U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = INT32_MIN;
	int64_t x122 = INT64_MAX;
	uint64_t x123 = 1074211500627829970LLU;
	volatile uint8_t x124 = UINT8_MAX;
	volatile int32_t t29 = INT32_MIN;

	t29 = (x121^(x122<=(x123/x124)));

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = -50809710902073067LL;
	int8_t x127 = INT8_MAX;
	static int32_t x128 = -1;
	static int64_t t30 = 157883004766431898LL;

	t30 = (x125^(x126<=(x127/x128)));

	if (t30 != -50809710902073068LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x129 = 12512673U;
	static int16_t x130 = 415;
	static int16_t x131 = -1;
	int32_t x132 = INT32_MIN;
	volatile uint32_t t31 = 242852435U;

	t31 = (x129^(x130<=(x131/x132)));

	if (t31 != 12512673U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = -5914;
	int16_t x134 = INT16_MIN;
	int32_t x136 = -1;
	int32_t t32 = 0;

	t32 = (x133^(x134<=(x135/x136)));

	if (t32 != -5913) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = INT8_MIN;
	uint16_t x138 = 125U;
	uint64_t x139 = UINT64_MAX;
	int32_t t33 = 1;

	t33 = (x137^(x138<=(x139/x140)));

	if (t33 != -127) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x141 = 144U;
	static uint32_t x142 = 723U;
	static uint8_t x144 = UINT8_MAX;
	int32_t t34 = 4493;

	t34 = (x141^(x142<=(x143/x144)));

	if (t34 != 145) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x145 = 2147027819405028LLU;
	static int64_t x146 = INT64_MIN;
	static int32_t x148 = INT32_MIN;
	volatile uint64_t t35 = 32729669595LLU;

	t35 = (x145^(x146<=(x147/x148)));

	if (t35 != 2147027819405029LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = INT64_MIN;
	int16_t x151 = -48;
	volatile int16_t x152 = INT16_MIN;

	t36 = (x149^(x150<=(x151/x152)));

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x153 = UINT32_MAX;
	static uint64_t x154 = 295238131421749LLU;
	uint32_t x155 = 3560U;
	int8_t x156 = INT8_MAX;
	static volatile uint32_t t37 = UINT32_MAX;

	t37 = (x153^(x154<=(x155/x156)));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x157 = UINT8_MAX;
	static uint64_t x159 = 4765763402861106502LLU;
	int64_t x160 = 182794LL;
	volatile int32_t t38 = 6872;

	t38 = (x157^(x158<=(x159/x160)));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = INT8_MAX;
	static volatile int8_t x162 = 0;
	int16_t x163 = INT16_MAX;
	int32_t x164 = INT32_MIN;
	volatile int32_t t39 = -245398339;

	t39 = (x161^(x162<=(x163/x164)));

	if (t39 != 126) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x165 = INT32_MIN;
	volatile int8_t x167 = INT8_MIN;
	volatile uint8_t x168 = 1U;
	static volatile int32_t t40 = 427123825;

	t40 = (x165^(x166<=(x167/x168)));

	if (t40 != -2147483647) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = INT8_MIN;
	uint32_t x171 = 92226285U;
	volatile uint32_t x172 = 30676U;
	static volatile int32_t t41 = -3;

	t41 = (x169^(x170<=(x171/x172)));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x173 = 13;
	static volatile int64_t x174 = -982107LL;
	uint16_t x175 = 1U;
	uint32_t x176 = 47U;

	t42 = (x173^(x174<=(x175/x176)));

	if (t42 != 12) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = INT64_MIN;
	static uint32_t x178 = 165U;
	uint32_t x180 = 414U;

	t43 = (x177^(x178<=(x179/x180)));

	if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x181 = INT64_MAX;
	uint16_t x183 = 0U;
	volatile int64_t t44 = INT64_MAX;

	t44 = (x181^(x182<=(x183/x184)));

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x185 = 184858146LLU;
	int16_t x186 = 2;
	volatile int8_t x187 = -28;
	uint8_t x188 = 67U;
	uint64_t t45 = 903LLU;

	t45 = (x185^(x186<=(x187/x188)));

	if (t45 != 184858146LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x193 = -1LL;
	int32_t x194 = -1;
	volatile uint32_t x195 = 70556U;
	static volatile int64_t t46 = 2074319295LL;

	t46 = (x193^(x194<=(x195/x196)));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x198 = -103687LL;
	static int16_t x199 = INT16_MIN;
	volatile int16_t x200 = INT16_MIN;
	volatile int32_t t47 = 1064992;

	t47 = (x197^(x198<=(x199/x200)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = INT32_MAX;
	int64_t x203 = 8665650LL;
	int32_t x204 = 44;
	static int32_t t48 = 66;

	t48 = (x201^(x202<=(x203/x204)));

	if (t48 != 2147483646) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x206 = UINT16_MAX;
	uint16_t x207 = 884U;
	int16_t x208 = INT16_MAX;
	int32_t t49 = 22;

	t49 = (x205^(x206<=(x207/x208)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x209 = UINT16_MAX;
	static int8_t x210 = INT8_MIN;
	uint64_t x212 = UINT64_MAX;

	t50 = (x209^(x210<=(x211/x212)));

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x213 = 18U;
	static uint8_t x214 = 87U;
	int8_t x215 = INT8_MIN;

	t51 = (x213^(x214<=(x215/x216)));

	if (t51 != 18) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x218 = INT32_MAX;
	volatile int16_t x219 = INT16_MAX;
	int32_t x220 = 5;
	volatile uint32_t t52 = 1510627598U;

	t52 = (x217^(x218<=(x219/x220)));

	if (t52 != 3663991U) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x221 = -1;
	int64_t x222 = 0LL;
	int64_t x223 = INT64_MAX;
	int32_t t53 = 7;

	t53 = (x221^(x222<=(x223/x224)));

	if (t53 != -2) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x225 = -35564964;
	volatile int8_t x228 = 1;
	int32_t t54 = 5;

	t54 = (x225^(x226<=(x227/x228)));

	if (t54 != -35564963) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x229 = 0U;
	int16_t x230 = INT16_MIN;
	int16_t x231 = -1;
	static volatile int32_t t55 = -232;

	t55 = (x229^(x230<=(x231/x232)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x238 = INT64_MIN;
	int64_t x239 = -1LL;
	int8_t x240 = INT8_MAX;

	t56 = (x237^(x238<=(x239/x240)));

	if (t56 != -2) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x243 = 12U;
	int32_t x244 = 76448;
	int32_t t57 = -15;

	t57 = (x241^(x242<=(x243/x244)));

	if (t57 != 10) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint16_t x245 = UINT16_MAX;
	int8_t x246 = -7;
	volatile uint32_t x247 = 0U;
	int8_t x248 = 19;
	int32_t t58 = -3;

	t58 = (x245^(x246<=(x247/x248)));

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x249 = INT64_MAX;
	static int64_t x250 = INT64_MIN;
	volatile int64_t x251 = -1LL;
	int32_t x252 = INT32_MAX;
	static volatile int64_t t59 = 15LL;

	t59 = (x249^(x250<=(x251/x252)));

	if (t59 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x253 = -1;
	int32_t x254 = INT32_MAX;
	static uint8_t x255 = 7U;
	int32_t x256 = -1;
	volatile int32_t t60 = 108;

	t60 = (x253^(x254<=(x255/x256)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x258 = 8506758900LLU;
	int8_t x260 = -15;
	volatile int32_t t61 = -24434;

	t61 = (x257^(x258<=(x259/x260)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x267 = -1;
	uint8_t x268 = UINT8_MAX;

	t62 = (x265^(x266<=(x267/x268)));

	if (t62 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = INT64_MIN;
	volatile uint64_t x270 = UINT64_MAX;
	static volatile int64_t x271 = -1LL;
	int64_t x272 = INT64_MIN;
	static volatile int64_t t63 = INT64_MIN;

	t63 = (x269^(x270<=(x271/x272)));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x273 = INT32_MIN;
	int32_t x275 = -1;
	volatile int32_t x276 = -1;
	static volatile int32_t t64 = INT32_MIN;

	t64 = (x273^(x274<=(x275/x276)));

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x281 = UINT16_MAX;
	uint16_t x282 = 1U;
	int32_t x283 = -2882392;
	volatile int32_t x284 = -4;
	volatile int32_t t65 = 422719039;

	t65 = (x281^(x282<=(x283/x284)));

	if (t65 != 65534) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x285 = 86U;
	int32_t x286 = 0;
	volatile uint32_t x287 = 1U;
	int32_t x288 = INT32_MAX;
	int32_t t66 = -54634861;

	t66 = (x285^(x286<=(x287/x288)));

	if (t66 != 87) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x289 = INT8_MAX;
	int8_t x290 = INT8_MAX;
	volatile int16_t x291 = INT16_MIN;
	int8_t x292 = INT8_MIN;
	volatile int32_t t67 = -356248;

	t67 = (x289^(x290<=(x291/x292)));

	if (t67 != 126) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x295 = INT64_MAX;
	volatile uint64_t x296 = 225185394551033LLU;
	int32_t t68 = INT32_MIN;

	t68 = (x293^(x294<=(x295/x296)));

	if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x297 = -1LL;
	volatile uint64_t x298 = UINT64_MAX;
	static int8_t x300 = INT8_MAX;
	int64_t t69 = 2705930LL;

	t69 = (x297^(x298<=(x299/x300)));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x301 = -82644630;
	uint32_t x302 = UINT32_MAX;
	volatile int8_t x303 = -5;
	static int64_t x304 = -1LL;

	t70 = (x301^(x302<=(x303/x304)));

	if (t70 != -82644630) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x305 = 0;
	uint64_t x306 = UINT64_MAX;
	uint8_t x307 = UINT8_MAX;
	int32_t t71 = -1;

	t71 = (x305^(x306<=(x307/x308)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x309 = -1LL;
	int16_t x310 = INT16_MIN;
	static int16_t x311 = INT16_MAX;
	volatile int64_t t72 = 944168362LL;

	t72 = (x309^(x310<=(x311/x312)));

	if (t72 != -2LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x315 = INT64_MAX;

	t73 = (x313^(x314<=(x315/x316)));

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x317 = 3U;
	int8_t x318 = INT8_MAX;
	volatile int8_t x319 = INT8_MAX;
	int64_t x320 = INT64_MIN;
	int32_t t74 = -851;

	t74 = (x317^(x318<=(x319/x320)));

	if (t74 != 3) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x321 = INT32_MIN;
	uint32_t x322 = 1013277U;
	uint8_t x323 = UINT8_MAX;
	int8_t x324 = -1;
	volatile int32_t t75 = -167;

	t75 = (x321^(x322<=(x323/x324)));

	if (t75 != -2147483647) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x326 = 2U;
	static volatile uint64_t x327 = UINT64_MAX;
	static volatile int32_t x328 = INT32_MAX;
	volatile int32_t t76 = -901190951;

	t76 = (x325^(x326<=(x327/x328)));

	if (t76 != -32767) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x329 = -1;
	uint32_t x330 = 74233U;
	uint16_t x331 = UINT16_MAX;
	int64_t x332 = 4132178617LL;
	int32_t t77 = 0;

	t77 = (x329^(x330<=(x331/x332)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x333 = 3977U;
	volatile int8_t x334 = 1;
	static uint64_t x335 = 868097285352LLU;
	int32_t x336 = -13153;
	volatile uint32_t t78 = 330067U;

	t78 = (x333^(x334<=(x335/x336)));

	if (t78 != 3977U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x337 = -1;
	uint8_t x338 = 57U;
	uint8_t x339 = 4U;
	static uint16_t x340 = 3350U;
	static int32_t t79 = 28572;

	t79 = (x337^(x338<=(x339/x340)));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x341 = -3;
	volatile uint8_t x342 = 12U;
	int8_t x343 = -2;
	int32_t t80 = 2328654;

	t80 = (x341^(x342<=(x343/x344)));

	if (t80 != -3) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x345 = UINT32_MAX;
	static volatile int64_t x346 = -1LL;
	int8_t x347 = 60;
	int16_t x348 = -1;
	volatile uint32_t t81 = UINT32_MAX;

	t81 = (x345^(x346<=(x347/x348)));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x349 = UINT16_MAX;
	volatile int8_t x350 = INT8_MAX;
	int16_t x352 = INT16_MIN;
	int32_t t82 = -457415;

	t82 = (x349^(x350<=(x351/x352)));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x354 = -1;
	int32_t x355 = INT32_MAX;
	int32_t x356 = -1;

	t83 = (x353^(x354<=(x355/x356)));

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x357 = INT16_MAX;
	static int8_t x358 = INT8_MIN;
	static uint32_t x359 = 252595541U;
	static int8_t x360 = -16;
	volatile int32_t t84 = 1;

	t84 = (x357^(x358<=(x359/x360)));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x361 = -3626;
	int16_t x364 = 195;
	int32_t t85 = -2371;

	t85 = (x361^(x362<=(x363/x364)));

	if (t85 != -3626) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x365 = 14138U;
	volatile uint8_t x366 = 4U;
	volatile uint32_t t86 = 289U;

	t86 = (x365^(x366<=(x367/x368)));

	if (t86 != 14138U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x370 = 1U;
	volatile uint16_t x371 = UINT16_MAX;
	int32_t t87 = INT32_MAX;

	t87 = (x369^(x370<=(x371/x372)));

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x373 = 1U;
	uint8_t x374 = 0U;
	static int32_t x375 = -12847;

	t88 = (x373^(x374<=(x375/x376)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x377 = -276;
	volatile int64_t x378 = INT64_MIN;
	int32_t x379 = INT32_MIN;
	int64_t x380 = 11673445348550024LL;

	t89 = (x377^(x378<=(x379/x380)));

	if (t89 != -275) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x381 = 10028377601120LL;
	volatile int8_t x382 = 34;
	int8_t x384 = INT8_MAX;
	volatile int64_t t90 = 87LL;

	t90 = (x381^(x382<=(x383/x384)));

	if (t90 != 10028377601121LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x385 = 3328008813LLU;
	int16_t x386 = INT16_MIN;
	int16_t x387 = INT16_MIN;
	static volatile uint64_t t91 = 16706753487834151LLU;

	t91 = (x385^(x386<=(x387/x388)));

	if (t91 != 3328008812LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x389 = 1416U;
	static uint8_t x390 = 2U;
	volatile uint64_t x391 = UINT64_MAX;
	int16_t x392 = INT16_MIN;
	uint32_t t92 = 1743U;

	t92 = (x389^(x390<=(x391/x392)));

	if (t92 != 1416U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x393 = INT8_MIN;
	uint32_t x394 = UINT32_MAX;
	uint16_t x395 = 23922U;
	uint16_t x396 = UINT16_MAX;
	volatile int32_t t93 = -114163291;

	t93 = (x393^(x394<=(x395/x396)));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x397 = -173106;
	static int32_t x398 = INT32_MIN;
	int32_t x399 = INT32_MAX;
	uint16_t x400 = UINT16_MAX;
	volatile int32_t t94 = -7839;

	t94 = (x397^(x398<=(x399/x400)));

	if (t94 != -173105) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x401 = INT64_MIN;
	uint8_t x404 = UINT8_MAX;
	volatile int64_t t95 = -1LL;

	t95 = (x401^(x402<=(x403/x404)));

	if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x405 = -30;
	volatile uint16_t x406 = 1U;
	int64_t x408 = INT64_MAX;

	t96 = (x405^(x406<=(x407/x408)));

	if (t96 != -30) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x410 = INT32_MIN;
	int32_t x411 = 477;
	static uint32_t x412 = 18340U;
	int32_t t97 = 48327688;

	t97 = (x409^(x410<=(x411/x412)));

	if (t97 != 4) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x413 = -1;
	int64_t x414 = -1LL;
	uint64_t x415 = 0LLU;
	int8_t x416 = -10;
	static volatile int32_t t98 = -8123;

	t98 = (x413^(x414<=(x415/x416)));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x417 = 245989269U;
	int8_t x418 = -1;
	uint16_t x419 = UINT16_MAX;
	int32_t x420 = INT32_MAX;
	static uint32_t t99 = 7059U;

	t99 = (x417^(x418<=(x419/x420)));

	if (t99 != 245989268U) { NG(); } else { ; }
	
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

