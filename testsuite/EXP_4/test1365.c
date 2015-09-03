#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x1 = INT64_MIN;
uint8_t x3 = 1U;
int64_t t0 = -179LL;
volatile int32_t x12 = INT32_MIN;
volatile int32_t x16 = INT32_MIN;
volatile uint64_t x26 = 84152993LLU;
int64_t x32 = INT64_MAX;
volatile uint32_t t8 = 83311U;
volatile int8_t x39 = -5;
int64_t t9 = 216132731LL;
uint8_t x41 = 19U;
int8_t x45 = -52;
static uint64_t x49 = 644819LLU;
uint16_t x54 = 19U;
int32_t t14 = -332510;
uint16_t x64 = 52U;
uint16_t x74 = 668U;
uint32_t x75 = UINT32_MAX;
volatile uint64_t x82 = 7492755508179412LLU;
volatile int32_t x88 = INT32_MAX;
uint32_t x96 = 339742U;
int16_t x100 = -1;
static uint64_t x107 = 515603800681LLU;
int8_t x117 = INT8_MIN;
volatile int64_t x118 = INT64_MAX;
int8_t x123 = 56;
static int64_t t32 = -176556201351061LL;
int32_t x133 = INT32_MIN;
static uint32_t x135 = 2U;
int32_t t35 = -12823399;
int16_t x148 = -342;
volatile int64_t t36 = INT64_MIN;
int8_t x155 = INT8_MAX;
int32_t x162 = 32794;
int32_t x163 = 0;
uint8_t x166 = 8U;
static int8_t x167 = -3;
static volatile uint64_t x177 = 66086544532441LLU;
uint8_t x180 = 4U;
static volatile uint64_t t44 = 3872410977223050615LLU;
uint64_t t45 = 5596775389228223LLU;
int32_t x192 = -9328750;
int16_t x197 = INT16_MIN;
static int32_t t49 = 19;
volatile int32_t x201 = INT32_MIN;
int16_t x204 = INT16_MAX;
static int32_t t50 = INT32_MAX;
volatile uint8_t x207 = UINT8_MAX;
volatile int64_t x208 = 2037858437207LL;
static uint32_t t51 = 4830904U;
int32_t x209 = INT32_MIN;
uint32_t x213 = 753U;
int64_t x218 = INT64_MIN;
volatile int64_t x219 = -4011115308421705LL;
volatile int32_t t55 = 77081;
uint32_t x232 = 140852666U;
int32_t t57 = -309;
static int32_t x236 = INT32_MAX;
uint64_t x244 = 1188499801620126023LLU;
int8_t x252 = 5;
int16_t x257 = INT16_MIN;
static int32_t x259 = INT32_MAX;
static int16_t x264 = INT16_MAX;
volatile int64_t t65 = -26642722LL;
volatile uint64_t x270 = 68104051148928244LLU;
volatile uint8_t x273 = 27U;
int32_t x274 = -99635964;
static volatile int16_t x275 = 2;
int32_t x279 = INT32_MIN;
int64_t x280 = -1LL;
volatile uint64_t x281 = 2058449198622LLU;
static volatile int16_t x283 = -1;
uint64_t t70 = 3143615094178402535LLU;
uint32_t t74 = 132U;
int32_t x301 = INT32_MAX;
uint64_t t75 = 839465485LLU;
int16_t x310 = -1;
int32_t t77 = INT32_MIN;
static volatile int64_t x313 = 9832614585LL;
volatile int64_t t78 = -11017800245078713LL;
volatile uint32_t x317 = 2547695U;
static volatile int32_t x318 = -27184806;
int64_t x325 = -1LL;
static uint8_t x329 = 14U;
int64_t x331 = 264844125916431240LL;
int16_t x333 = 4345;
int32_t x341 = INT32_MIN;
int16_t x342 = INT16_MIN;
static volatile uint32_t x348 = UINT32_MAX;
int64_t x355 = -1LL;
volatile uint16_t x357 = 6U;
int8_t x360 = -1;
int8_t x364 = 0;
int32_t x365 = INT32_MIN;
static uint16_t x366 = 709U;
uint32_t x372 = 199U;
int8_t x376 = INT8_MIN;
int32_t x380 = 13;
static volatile uint32_t t94 = 3040619U;
int16_t x381 = INT16_MIN;
volatile int64_t x384 = 814330LL;
volatile int32_t t95 = -141;
int8_t x386 = INT8_MAX;
uint64_t x398 = 271298964744783929LLU;


void f0(void) {
	uint16_t x2 = 172U;
	uint16_t x4 = 6U;

	t0 = (x1^(x2+(x3<x4)));

	if (t0 != -9223372036854775635LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	static volatile int8_t x6 = INT8_MIN;
	int16_t x7 = INT16_MIN;
	int32_t x8 = INT32_MAX;
	int64_t t1 = -18275248962LL;

	t1 = (x5^(x6+(x7<x8)));

	if (t1 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 40670019007414LLU;
	uint8_t x10 = 1U;
	volatile int32_t x11 = -1;
	volatile uint64_t t2 = 2LLU;

	t2 = (x9^(x10+(x11<x12)));

	if (t2 != 40670019007415LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	static int32_t x14 = INT32_MIN;
	int16_t x15 = INT16_MAX;
	int32_t t3 = INT32_MAX;

	t3 = (x13^(x14+(x15<x16)));

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = UINT16_MAX;
	volatile uint8_t x18 = UINT8_MAX;
	static uint16_t x19 = 3408U;
	static int64_t x20 = -1LL;
	volatile int32_t t4 = -331071313;

	t4 = (x17^(x18+(x19<x20)));

	if (t4 != 65280) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	uint8_t x22 = 90U;
	static int8_t x23 = -1;
	static int32_t x24 = INT32_MAX;
	volatile int32_t t5 = 230108808;

	t5 = (x21^(x22+(x23<x24)));

	if (t5 != 36) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -374;
	volatile int64_t x27 = INT64_MIN;
	static int8_t x28 = 0;
	uint64_t t6 = 8879862898566535259LLU;

	t6 = (x25^(x26+(x27<x28)));

	if (t6 != 18446744073625398312LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 20U;
	int8_t x30 = INT8_MIN;
	uint64_t x31 = UINT64_MAX;
	volatile uint32_t t7 = 1313616325U;

	t7 = (x29^(x30+(x31<x32)));

	if (t7 != 4294967188U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	int8_t x34 = 31;
	volatile uint8_t x35 = UINT8_MAX;
	volatile uint16_t x36 = 25147U;

	t8 = (x33^(x34+(x35<x36)));

	if (t8 != 4294967263U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 20U;
	int64_t x38 = 76LL;
	uint64_t x40 = 71LLU;

	t9 = (x37^(x38+(x39<x40)));

	if (t9 != 88LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = INT32_MIN;
	static int8_t x43 = 0;
	int32_t x44 = INT32_MIN;
	static volatile int32_t t10 = 1807;

	t10 = (x41^(x42+(x43<x44)));

	if (t10 != -2147483629) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x46 = 14U;
	uint32_t x47 = 108U;
	static int32_t x48 = -1;
	volatile int32_t t11 = -910;

	t11 = (x45^(x46+(x47<x48)));

	if (t11 != -61) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x50 = UINT16_MAX;
	int8_t x51 = INT8_MIN;
	int64_t x52 = -1LL;
	uint64_t t12 = 684958489116978LLU;

	t12 = (x49^(x50+(x51<x52)));

	if (t12 != 579283LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = 169210551LL;
	int16_t x55 = INT16_MIN;
	int16_t x56 = INT16_MIN;
	volatile int64_t t13 = -6635260055129481LL;

	t13 = (x53^(x54+(x55<x56)));

	if (t13 != 169210532LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = 1U;
	uint8_t x58 = UINT8_MAX;
	int64_t x59 = 1547377LL;
	int16_t x60 = INT16_MAX;

	t14 = (x57^(x58+(x59<x60)));

	if (t14 != 254) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = INT8_MIN;
	int8_t x62 = INT8_MIN;
	int32_t x63 = INT32_MIN;
	volatile int32_t t15 = 98493;

	t15 = (x61^(x62+(x63<x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	int16_t x66 = -1;
	static volatile int64_t x67 = 103397975LL;
	volatile uint64_t x68 = UINT64_MAX;
	static int32_t t16 = 130629;

	t16 = (x65^(x66+(x67<x68)));

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x69 = 62U;
	int64_t x70 = -1LL;
	static int8_t x71 = INT8_MIN;
	static uint32_t x72 = 763U;
	int64_t t17 = -7930LL;

	t17 = (x69^(x70+(x71<x72)));

	if (t17 != -63LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	static int16_t x76 = 198;
	int32_t t18 = -1;

	t18 = (x73^(x74+(x75<x76)));

	if (t18 != -740) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	int16_t x78 = INT16_MIN;
	int32_t x79 = INT32_MIN;
	static uint32_t x80 = 498613245U;
	static volatile int32_t t19 = -74139;

	t19 = (x77^(x78+(x79<x80)));

	if (t19 != -32641) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -11756LL;
	uint32_t x83 = 7682781U;
	int8_t x84 = INT8_MIN;
	volatile uint64_t t20 = 12084788LLU;

	t20 = (x81^(x82+(x83<x84)));

	if (t20 != 18439251318201377729LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -1683LL;
	static int64_t x86 = INT64_MIN;
	volatile int64_t x87 = INT64_MAX;
	volatile int64_t t21 = -59381670LL;

	t21 = (x85^(x86+(x87<x88)));

	if (t21 != 9223372036854774125LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x89 = 11U;
	int32_t x90 = INT32_MIN;
	uint8_t x91 = 5U;
	volatile int8_t x92 = INT8_MIN;
	volatile int32_t t22 = 3092;

	t22 = (x89^(x90+(x91<x92)));

	if (t22 != -2147483637) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	int8_t x94 = 14;
	int64_t x95 = INT64_MIN;
	static int32_t t23 = 95;

	t23 = (x93^(x94+(x95<x96)));

	if (t23 != -2147483633) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x97 = 16558517907756LLU;
	volatile int64_t x98 = INT64_MIN;
	static volatile int32_t x99 = INT32_MAX;
	uint64_t t24 = 907780901940909LLU;

	t24 = (x97^(x98+(x99<x100)));

	if (t24 != 9223388595372683564LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MAX;
	uint64_t x102 = UINT64_MAX;
	int8_t x103 = -1;
	static int64_t x104 = INT64_MIN;
	uint64_t t25 = 20076046168LLU;

	t25 = (x101^(x102+(x103<x104)));

	if (t25 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x105 = 0U;
	uint16_t x106 = UINT16_MAX;
	int32_t x108 = 14180558;
	int32_t t26 = -9836;

	t26 = (x105^(x106+(x107<x108)));

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = INT32_MIN;
	int64_t x110 = INT64_MIN;
	int64_t x111 = INT64_MIN;
	static int32_t x112 = INT32_MAX;
	int64_t t27 = 11354673199LL;

	t27 = (x109^(x110+(x111<x112)));

	if (t27 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = 80LL;
	static int32_t x114 = INT32_MIN;
	int8_t x115 = INT8_MIN;
	volatile int64_t x116 = -166608473LL;
	volatile int64_t t28 = 4889LL;

	t28 = (x113^(x114+(x115<x116)));

	if (t28 != -2147483568LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x119 = -1;
	uint64_t x120 = 31LLU;
	volatile int64_t t29 = -236557155618793672LL;

	t29 = (x117^(x118+(x119<x120)));

	if (t29 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 0U;
	volatile uint32_t x122 = 674U;
	int32_t x124 = -124289048;
	static volatile uint32_t t30 = 140U;

	t30 = (x121^(x122+(x123<x124)));

	if (t30 != 674U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	static int64_t x126 = -1LL;
	int32_t x127 = INT32_MIN;
	volatile int8_t x128 = 0;
	volatile int64_t t31 = 57627298658411561LL;

	t31 = (x125^(x126+(x127<x128)));

	if (t31 != -2147483648LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	static volatile int64_t x130 = INT64_MAX;
	uint32_t x131 = UINT32_MAX;
	int32_t x132 = 6;

	t32 = (x129^(x130+(x131<x132)));

	if (t32 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x134 = 1;
	int8_t x136 = INT8_MIN;
	volatile int32_t t33 = 120788;

	t33 = (x133^(x134+(x135<x136)));

	if (t33 != -2147483646) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = UINT8_MAX;
	int8_t x138 = INT8_MIN;
	int32_t x139 = INT32_MIN;
	static volatile int64_t x140 = INT64_MIN;
	int32_t t34 = 8;

	t34 = (x137^(x138+(x139<x140)));

	if (t34 != -129) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x141 = UINT8_MAX;
	static uint8_t x142 = 8U;
	uint64_t x143 = 17300139892LLU;
	uint16_t x144 = UINT16_MAX;

	t35 = (x141^(x142+(x143<x144)));

	if (t35 != 247) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 1;
	int64_t x146 = INT64_MIN;
	uint32_t x147 = 1942U;

	t36 = (x145^(x146+(x147<x148)));

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x149 = 8343U;
	static volatile int32_t x150 = -1;
	int64_t x151 = INT64_MIN;
	uint8_t x152 = 7U;
	static int32_t t37 = -2319301;

	t37 = (x149^(x150+(x151<x152)));

	if (t37 != 8343) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x153 = 7U;
	int32_t x154 = -1;
	volatile int32_t x156 = -14331193;
	uint32_t t38 = 713784U;

	t38 = (x153^(x154+(x155<x156)));

	if (t38 != 4294967288U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x157 = 0U;
	static int8_t x158 = INT8_MIN;
	static uint16_t x159 = 2762U;
	int64_t x160 = INT64_MIN;
	int32_t t39 = -20;

	t39 = (x157^(x158+(x159<x160)));

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -2223LL;
	int64_t x164 = INT64_MIN;
	volatile int64_t t40 = -6961LL;

	t40 = (x161^(x162+(x163<x164)));

	if (t40 != -34997LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = UINT16_MAX;
	static uint16_t x168 = UINT16_MAX;
	static int32_t t41 = 1070;

	t41 = (x165^(x166+(x167<x168)));

	if (t41 != 65526) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MAX;
	volatile int16_t x170 = INT16_MIN;
	static int8_t x171 = -1;
	int16_t x172 = -25;
	volatile int32_t t42 = 12;

	t42 = (x169^(x170+(x171<x172)));

	if (t42 != -2147450881) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	uint16_t x174 = 23432U;
	int16_t x175 = -1431;
	uint8_t x176 = 33U;
	volatile int32_t t43 = -4693031;

	t43 = (x173^(x174+(x175<x176)));

	if (t43 != -9335) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = -1LL;
	static uint64_t x179 = UINT64_MAX;

	t44 = (x177^(x178+(x179<x180)));

	if (t44 != 18446677987165019174LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x181 = 0U;
	uint64_t x182 = 534984145219647LLU;
	volatile int32_t x183 = 5439;
	static uint64_t x184 = UINT64_MAX;

	t45 = (x181^(x182+(x183<x184)));

	if (t45 != 534984145219648LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = INT16_MIN;
	uint32_t x186 = 28U;
	volatile uint16_t x187 = 79U;
	int64_t x188 = INT64_MIN;
	volatile uint32_t t46 = 3U;

	t46 = (x185^(x186+(x187<x188)));

	if (t46 != 4294934556U) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = INT64_MAX;
	int64_t x190 = 23976877888416LL;
	uint8_t x191 = 15U;
	volatile int64_t t47 = -50124LL;

	t47 = (x189^(x190+(x191<x192)));

	if (t47 != 9223348059976887391LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x193 = 2U;
	int32_t x194 = -1;
	int16_t x195 = 4474;
	volatile int64_t x196 = INT64_MAX;
	volatile uint32_t t48 = 1U;

	t48 = (x193^(x194+(x195<x196)));

	if (t48 != 2U) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x198 = INT8_MIN;
	static int32_t x199 = -3955734;
	int64_t x200 = -3899118LL;

	t49 = (x197^(x198+(x199<x200)));

	if (t49 != 32641) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x202 = -1;
	static uint32_t x203 = 79177175U;

	t50 = (x201^(x202+(x203<x204)));

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x205 = 443U;
	uint8_t x206 = 0U;

	t51 = (x205^(x206+(x207<x208)));

	if (t51 != 442U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x210 = INT32_MIN;
	uint32_t x211 = 12164240U;
	int64_t x212 = -304213894342098904LL;
	static volatile int32_t t52 = 1;

	t52 = (x209^(x210+(x211<x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x214 = -1;
	int64_t x215 = INT64_MIN;
	uint64_t x216 = UINT64_MAX;
	static uint32_t t53 = 1048630506U;

	t53 = (x213^(x214+(x215<x216)));

	if (t53 != 753U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = -1;
	int16_t x220 = 22;
	volatile int64_t t54 = -153624568LL;

	t54 = (x217^(x218+(x219<x220)));

	if (t54 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = INT16_MIN;
	static int16_t x222 = -1;
	int32_t x223 = -1;
	volatile int64_t x224 = INT64_MAX;

	t55 = (x221^(x222+(x223<x224)));

	if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -1;
	volatile int64_t x226 = INT64_MIN;
	int16_t x227 = INT16_MIN;
	volatile int16_t x228 = INT16_MIN;
	int64_t t56 = INT64_MAX;

	t56 = (x225^(x226+(x227<x228)));

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 1U;
	static int8_t x230 = INT8_MAX;
	static int32_t x231 = INT32_MIN;

	t57 = (x229^(x230+(x231<x232)));

	if (t57 != 126) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -1LL;
	int16_t x234 = INT16_MIN;
	int8_t x235 = -27;
	int64_t t58 = -91730921837LL;

	t58 = (x233^(x234+(x235<x236)));

	if (t58 != 32766LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = INT16_MIN;
	int64_t x238 = INT64_MIN;
	uint32_t x239 = 9260835U;
	uint32_t x240 = 1U;
	int64_t t59 = -81776405214434187LL;

	t59 = (x237^(x238+(x239<x240)));

	if (t59 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = INT64_MAX;
	int32_t x242 = -1;
	int64_t x243 = INT64_MIN;
	int64_t t60 = INT64_MIN;

	t60 = (x241^(x242+(x243<x244)));

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 1642U;
	int64_t x246 = INT64_MIN;
	uint32_t x247 = 10U;
	static int8_t x248 = 60;
	volatile int64_t t61 = 14905937LL;

	t61 = (x245^(x246+(x247<x248)));

	if (t61 != -9223372036854774165LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x249 = 235U;
	uint32_t x250 = 29898U;
	uint32_t x251 = UINT32_MAX;
	uint32_t t62 = 1U;

	t62 = (x249^(x250+(x251<x252)));

	if (t62 != 29729U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -1;
	static uint32_t x254 = 26391U;
	static volatile uint64_t x255 = 1315LLU;
	int16_t x256 = INT16_MIN;
	uint32_t t63 = 17U;

	t63 = (x253^(x254+(x255<x256)));

	if (t63 != 4294940903U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x258 = 15U;
	static volatile int8_t x260 = -1;
	volatile int32_t t64 = 6847224;

	t64 = (x257^(x258+(x259<x260)));

	if (t64 != -32753) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x261 = INT64_MIN;
	uint16_t x262 = 1901U;
	int64_t x263 = -1LL;

	t65 = (x261^(x262+(x263<x264)));

	if (t65 != -9223372036854773906LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -367;
	uint8_t x266 = 2U;
	int16_t x267 = 6145;
	static int16_t x268 = INT16_MAX;
	int32_t t66 = 126;

	t66 = (x265^(x266+(x267<x268)));

	if (t66 != -366) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 57U;
	static volatile int8_t x271 = -1;
	uint64_t x272 = UINT64_MAX;
	static uint64_t t67 = 0LLU;

	t67 = (x269^(x270+(x271<x272)));

	if (t67 != 68104051148928205LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x276 = INT16_MAX;
	volatile int32_t t68 = -3315;

	t68 = (x273^(x274+(x275<x276)));

	if (t68 != -99635938) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = INT64_MIN;
	int8_t x278 = 6;
	static int64_t t69 = -116532798LL;

	t69 = (x277^(x278+(x279<x280)));

	if (t69 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x282 = -2009;
	volatile int32_t x284 = INT32_MAX;

	t70 = (x281^(x282+(x283<x284)));

	if (t70 != 18446742015260354102LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x285 = 6533U;
	int64_t x286 = INT64_MIN;
	int8_t x287 = -1;
	int32_t x288 = INT32_MIN;
	volatile int64_t t71 = 261732061069748LL;

	t71 = (x285^(x286+(x287<x288)));

	if (t71 != -9223372036854769275LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 5U;
	int64_t x290 = INT64_MAX;
	volatile int64_t x291 = -1LL;
	static int64_t x292 = -1LL;
	static int64_t t72 = -10LL;

	t72 = (x289^(x290+(x291<x292)));

	if (t72 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = INT64_MIN;
	static uint16_t x294 = 191U;
	int16_t x295 = -1;
	static uint32_t x296 = 2536780U;
	volatile int64_t t73 = 28075792LL;

	t73 = (x293^(x294+(x295<x296)));

	if (t73 != -9223372036854775617LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 1U;
	int16_t x298 = -2088;
	uint32_t x299 = 284072U;
	uint64_t x300 = 349895000LLU;

	t74 = (x297^(x298+(x299<x300)));

	if (t74 != 4294965208U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint64_t x302 = 1636585844227006LLU;
	volatile uint32_t x303 = 222069522U;
	int16_t x304 = INT16_MIN;

	t75 = (x301^(x302+(x303<x304)));

	if (t75 != 1636585109734464LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 624U;
	volatile int64_t x306 = INT64_MAX;
	volatile int64_t x307 = INT64_MIN;
	uint64_t x308 = 0LLU;
	int64_t t76 = -233433LL;

	t76 = (x305^(x306+(x307<x308)));

	if (t76 != 9223372036854775183LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = INT32_MIN;
	int8_t x311 = INT8_MIN;
	uint8_t x312 = 113U;

	t77 = (x309^(x310+(x311<x312)));

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x314 = INT64_MIN;
	volatile int32_t x315 = INT32_MIN;
	volatile uint16_t x316 = UINT16_MAX;

	t78 = (x313^(x314+(x315<x316)));

	if (t78 != -9223372027022161224LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x319 = 2033LL;
	static int64_t x320 = 3LL;
	volatile uint32_t t79 = 151414U;

	t79 = (x317^(x318+(x319<x320)));

	if (t79 != 4266127029U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	static int16_t x322 = -6142;
	int16_t x323 = -1;
	volatile int32_t x324 = INT32_MIN;
	int64_t t80 = 4293625134LL;

	t80 = (x321^(x322+(x323<x324)));

	if (t80 != 9223372036854769666LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x326 = 2746877LLU;
	uint64_t x327 = 946LLU;
	int64_t x328 = INT64_MIN;
	uint64_t t81 = 247701499031LLU;

	t81 = (x325^(x326+(x327<x328)));

	if (t81 != 18446744073706804737LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x330 = 2353U;
	uint8_t x332 = 44U;
	static int32_t t82 = -105448;

	t82 = (x329^(x330+(x331<x332)));

	if (t82 != 2367) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x334 = -1;
	int32_t x335 = 8152272;
	int32_t x336 = -1;
	volatile int32_t t83 = 4;

	t83 = (x333^(x334+(x335<x336)));

	if (t83 != -4346) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 20779785U;
	static int8_t x338 = INT8_MIN;
	volatile uint64_t x339 = UINT64_MAX;
	int64_t x340 = 29LL;
	volatile uint32_t t84 = 96U;

	t84 = (x337^(x338+(x339<x340)));

	if (t84 != 4274187401U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x343 = 25855098203043LL;
	int32_t x344 = -1;
	int32_t t85 = 1;

	t85 = (x341^(x342+(x343<x344)));

	if (t85 != 2147450880) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = 4;
	volatile int8_t x346 = -37;
	int16_t x347 = -1;
	volatile int32_t t86 = -3617866;

	t86 = (x345^(x346+(x347<x348)));

	if (t86 != -33) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MAX;
	int32_t x350 = -1;
	volatile int16_t x351 = INT16_MIN;
	volatile uint16_t x352 = UINT16_MAX;
	int32_t t87 = -32179;

	t87 = (x349^(x350+(x351<x352)));

	if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x353 = -1;
	int32_t x354 = -1;
	int32_t x356 = INT32_MIN;
	static int32_t t88 = -47;

	t88 = (x353^(x354+(x355<x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x358 = 5;
	static volatile int32_t x359 = INT32_MIN;
	volatile int32_t t89 = -119;

	t89 = (x357^(x358+(x359<x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 65U;
	int8_t x362 = INT8_MIN;
	static int64_t x363 = INT64_MIN;
	volatile int32_t t90 = -1287;

	t90 = (x361^(x362+(x363<x364)));

	if (t90 != -64) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x367 = INT64_MAX;
	uint8_t x368 = UINT8_MAX;
	int32_t t91 = 8907818;

	t91 = (x365^(x366+(x367<x368)));

	if (t91 != -2147482939) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = -1LL;
	volatile int64_t x370 = -1LL;
	int32_t x371 = -1;
	int64_t t92 = -36LL;

	t92 = (x369^(x370+(x371<x372)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = 4471750580186422LL;
	int32_t x374 = INT32_MIN;
	uint8_t x375 = 0U;
	int64_t t93 = 579674185LL;

	t93 = (x373^(x374+(x375<x376)));

	if (t93 != -4471752162071242LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 1018552319U;
	volatile int8_t x378 = 3;
	uint8_t x379 = 8U;

	t94 = (x377^(x378+(x379<x380)));

	if (t94 != 1018552315U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x382 = INT16_MIN;
	volatile int16_t x383 = -1;

	t95 = (x381^(x382+(x383<x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x385 = 49912419900LLU;
	int8_t x387 = INT8_MAX;
	int64_t x388 = -119200594328LL;
	static uint64_t t96 = 31044LLU;

	t96 = (x385^(x386+(x387<x388)));

	if (t96 != 49912419907LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = INT8_MIN;
	volatile uint8_t x390 = UINT8_MAX;
	uint8_t x391 = 11U;
	static uint32_t x392 = 6U;
	int32_t t97 = -883302;

	t97 = (x389^(x390+(x391<x392)));

	if (t97 != -129) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 2805957U;
	int8_t x394 = -1;
	uint32_t x395 = UINT32_MAX;
	static uint64_t x396 = 3228715240969LLU;
	volatile uint32_t t98 = 77424644U;

	t98 = (x393^(x394+(x395<x396)));

	if (t98 != 2805957U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x397 = UINT8_MAX;
	static volatile int32_t x399 = 0;
	uint16_t x400 = 71U;
	volatile uint64_t t99 = 101331404247263498LLU;

	t99 = (x397^(x398+(x399<x400)));

	if (t99 != 271298964744784069LLU) { NG(); } else { ; }
	
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

