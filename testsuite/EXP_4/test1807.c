#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x23 = 17318358LLU;
volatile int32_t x24 = 7;
int32_t x31 = INT32_MIN;
volatile int8_t x33 = INT8_MAX;
int32_t x39 = INT32_MIN;
int32_t x42 = INT32_MAX;
static int64_t x44 = INT64_MIN;
static uint8_t x45 = 5U;
int8_t x52 = INT8_MAX;
uint16_t x57 = 176U;
int32_t t14 = 364;
uint16_t x69 = UINT16_MAX;
volatile int32_t t17 = 337;
uint64_t x75 = 6209275616333775011LLU;
static int16_t x95 = -1;
int64_t x96 = -1LL;
uint32_t x101 = UINT32_MAX;
volatile uint16_t x102 = 1U;
int16_t x103 = INT16_MIN;
uint32_t x106 = UINT32_MAX;
volatile uint32_t x113 = 3160U;
volatile int16_t x116 = INT16_MIN;
volatile uint32_t t28 = 2740781U;
uint16_t x120 = 10485U;
static uint64_t x124 = UINT64_MAX;
int32_t x126 = INT32_MIN;
int16_t x129 = INT16_MIN;
uint8_t x132 = 26U;
static int32_t t32 = -5;
static uint64_t x134 = UINT64_MAX;
uint32_t x135 = UINT32_MAX;
static volatile uint16_t x140 = 5U;
int32_t t35 = 0;
uint64_t x151 = 1300LLU;
int32_t x154 = -1;
volatile int16_t x163 = -6;
int16_t x164 = INT16_MIN;
int32_t t41 = -940;
int8_t x176 = -1;
static int8_t x183 = -1;
volatile int32_t t45 = 55927;
uint16_t x196 = 6749U;
volatile int16_t x197 = -33;
int64_t x213 = -1LL;
volatile int64_t t53 = 455147212LL;
volatile int32_t t54 = -340244069;
static int16_t x221 = INT16_MAX;
uint16_t x223 = UINT16_MAX;
volatile int32_t t55 = -852529109;
int8_t x235 = -1;
volatile uint8_t x240 = UINT8_MAX;
int8_t x242 = INT8_MAX;
uint64_t x249 = UINT64_MAX;
uint64_t x254 = UINT64_MAX;
static uint8_t x256 = 105U;
volatile int8_t x258 = INT8_MAX;
int16_t x260 = INT16_MIN;
volatile uint8_t x261 = 11U;
static volatile int32_t t65 = 1334732;
int16_t x269 = INT16_MIN;
volatile int32_t t67 = 1876520;
uint32_t x279 = UINT32_MAX;
static volatile int32_t x281 = 779415506;
int64_t x284 = INT64_MAX;
int16_t x288 = 5;
volatile uint64_t x297 = 0LLU;
int32_t t76 = 55;
int8_t x311 = INT8_MAX;
volatile int32_t t79 = 732;
int16_t x335 = INT16_MAX;
int32_t x338 = INT32_MIN;
int32_t x346 = -1;
volatile int64_t x350 = -1005385864274LL;
volatile int64_t t88 = -1239508LL;
static uint64_t t89 = 426190055437LLU;
static uint32_t x366 = UINT32_MAX;
volatile int64_t x367 = INT64_MAX;
int32_t t92 = -168302121;
uint16_t x373 = 56U;
volatile uint16_t x376 = UINT16_MAX;
int64_t x382 = -3023438746198854LL;
int8_t x393 = -22;


void f0(void) {
	int64_t x1 = 2013432LL;
	volatile uint64_t x2 = 3423807612148866239LLU;
	volatile int16_t x3 = INT16_MIN;
	volatile int16_t x4 = INT16_MAX;
	volatile int64_t t0 = -2050066687037LL;

	t0 = (x1^(x2<(x3&x4)));

	if (t0 != 2013432LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	volatile int16_t x6 = -1;
	volatile uint64_t x7 = UINT64_MAX;
	uint16_t x8 = UINT16_MAX;
	volatile uint64_t t1 = UINT64_MAX;

	t1 = (x5^(x6<(x7&x8)));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 3522U;
	uint64_t x10 = UINT64_MAX;
	uint64_t x11 = 790LLU;
	uint8_t x12 = 65U;
	static volatile int32_t t2 = -84711;

	t2 = (x9^(x10<(x11&x12)));

	if (t2 != 3522) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MIN;
	int64_t x14 = 20850097955LL;
	int8_t x15 = INT8_MIN;
	static int32_t x16 = INT32_MAX;
	volatile int32_t t3 = -4913320;

	t3 = (x13^(x14<(x15&x16)));

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	uint32_t x18 = 62080742U;
	uint8_t x19 = 1U;
	uint64_t x20 = 737LLU;
	static int64_t t4 = INT64_MIN;

	t4 = (x17^(x18<(x19&x20)));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x21 = UINT16_MAX;
	uint8_t x22 = 40U;
	static volatile int32_t t5 = -80667;

	t5 = (x21^(x22<(x23&x24)));

	if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = -1;
	int32_t x26 = INT32_MAX;
	volatile int8_t x27 = INT8_MAX;
	static int16_t x28 = INT16_MIN;
	int32_t t6 = -230132538;

	t6 = (x25^(x26<(x27&x28)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = 3LL;
	int16_t x30 = 31;
	int64_t x32 = INT64_MIN;
	static int64_t t7 = 315242423495LL;

	t7 = (x29^(x30<(x31&x32)));

	if (t7 != 3LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = INT64_MAX;
	static int8_t x35 = 2;
	int8_t x36 = INT8_MAX;
	volatile int32_t t8 = 63616288;

	t8 = (x33^(x34<(x35&x36)));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	int16_t x38 = INT16_MAX;
	uint8_t x40 = 52U;
	volatile int32_t t9 = -128;

	t9 = (x37^(x38<(x39&x40)));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	static int8_t x43 = -1;
	int32_t t10 = INT32_MIN;

	t10 = (x41^(x42<(x43&x44)));

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x46 = -1;
	int16_t x47 = -1;
	static volatile uint16_t x48 = UINT16_MAX;
	static int32_t t11 = -16491637;

	t11 = (x45^(x46<(x47&x48)));

	if (t11 != 4) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = 194397136LL;
	int64_t x50 = INT64_MAX;
	int64_t x51 = -5840639085371LL;
	volatile int64_t t12 = -4LL;

	t12 = (x49^(x50<(x51&x52)));

	if (t12 != 194397136LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 0;
	uint8_t x54 = 0U;
	uint16_t x55 = 223U;
	int32_t x56 = INT32_MIN;
	volatile int32_t t13 = -4;

	t13 = (x53^(x54<(x55&x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x58 = 15U;
	int32_t x59 = INT32_MAX;
	static uint8_t x60 = 119U;

	t14 = (x57^(x58<(x59&x60)));

	if (t14 != 177) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x61 = INT64_MIN;
	volatile uint8_t x62 = 11U;
	volatile uint64_t x63 = 10882294278943299LLU;
	uint64_t x64 = 393859467212LLU;
	int64_t t15 = -967794947681825LL;

	t15 = (x61^(x62<(x63&x64)));

	if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = 69976729180016278LL;
	static int8_t x66 = INT8_MIN;
	int64_t x67 = INT64_MIN;
	int64_t x68 = INT64_MAX;
	volatile int64_t t16 = -3383201491735748520LL;

	t16 = (x65^(x66<(x67&x68)));

	if (t16 != 69976729180016279LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = INT8_MAX;
	uint64_t x71 = 85769384LLU;
	uint64_t x72 = 228LLU;

	t17 = (x69^(x70<(x71&x72)));

	if (t17 != 65534) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x73 = 5477;
	uint32_t x74 = 64U;
	static volatile int8_t x76 = -1;
	volatile int32_t t18 = 2336;

	t18 = (x73^(x74<(x75&x76)));

	if (t18 != 5476) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 99952U;
	uint16_t x78 = UINT16_MAX;
	uint32_t x79 = 31376U;
	volatile int8_t x80 = INT8_MIN;
	volatile uint32_t t19 = 4156150U;

	t19 = (x77^(x78<(x79&x80)));

	if (t19 != 99952U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = INT32_MIN;
	int8_t x82 = INT8_MIN;
	int8_t x83 = INT8_MIN;
	uint8_t x84 = UINT8_MAX;
	volatile int32_t t20 = 1;

	t20 = (x81^(x82<(x83&x84)));

	if (t20 != -2147483647) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 2;
	volatile uint32_t x86 = 3U;
	static uint8_t x87 = UINT8_MAX;
	int64_t x88 = INT64_MIN;
	int32_t t21 = 6137023;

	t21 = (x85^(x86<(x87&x88)));

	if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	int16_t x90 = INT16_MIN;
	int32_t x91 = INT32_MIN;
	uint8_t x92 = 0U;
	volatile int32_t t22 = 94620;

	t22 = (x89^(x90<(x91&x92)));

	if (t22 != -2) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = INT16_MIN;
	int64_t x94 = INT64_MIN;
	static volatile int32_t t23 = 711590761;

	t23 = (x93^(x94<(x95&x96)));

	if (t23 != -32767) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x97 = 326LLU;
	static volatile int16_t x98 = INT16_MIN;
	int32_t x99 = 67580;
	static int32_t x100 = INT32_MIN;
	volatile uint64_t t24 = 2628652LLU;

	t24 = (x97^(x98<(x99&x100)));

	if (t24 != 327LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x104 = INT8_MAX;
	uint32_t t25 = UINT32_MAX;

	t25 = (x101^(x102<(x103&x104)));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 7U;
	int32_t x107 = -590347;
	int32_t x108 = INT32_MIN;
	int32_t t26 = 26471;

	t26 = (x105^(x106<(x107&x108)));

	if (t26 != 7) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	uint64_t x110 = UINT64_MAX;
	uint8_t x111 = 26U;
	uint32_t x112 = 397481U;
	static uint64_t t27 = UINT64_MAX;

	t27 = (x109^(x110<(x111&x112)));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = INT32_MIN;
	volatile int16_t x115 = -1;

	t28 = (x113^(x114<(x115&x116)));

	if (t28 != 3161U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MAX;
	int16_t x118 = INT16_MIN;
	volatile uint32_t x119 = UINT32_MAX;
	int32_t t29 = 320;

	t29 = (x117^(x118<(x119&x120)));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x121 = INT8_MAX;
	uint8_t x122 = UINT8_MAX;
	int32_t x123 = INT32_MAX;
	int32_t t30 = -1;

	t30 = (x121^(x122<(x123&x124)));

	if (t30 != 126) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x125 = -1;
	volatile uint8_t x127 = 66U;
	uint64_t x128 = UINT64_MAX;
	int32_t t31 = 472;

	t31 = (x125^(x126<(x127&x128)));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x130 = -3135;
	static uint32_t x131 = UINT32_MAX;

	t32 = (x129^(x130<(x131&x132)));

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x133 = -1;
	int8_t x136 = -1;
	int32_t t33 = 0;

	t33 = (x133^(x134<(x135&x136)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	volatile int64_t x138 = INT64_MIN;
	uint8_t x139 = 0U;
	static volatile int64_t t34 = -3564783412LL;

	t34 = (x137^(x138<(x139&x140)));

	if (t34 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -5;
	int8_t x142 = 1;
	static volatile int8_t x143 = -1;
	volatile uint64_t x144 = 895220237375LLU;

	t35 = (x141^(x142<(x143&x144)));

	if (t35 != -6) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = -1;
	uint32_t x146 = 2202U;
	uint16_t x147 = 358U;
	int16_t x148 = -1;
	int32_t t36 = 6979129;

	t36 = (x145^(x146<(x147&x148)));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 2U;
	static int64_t x150 = 2031LL;
	int8_t x152 = -1;
	volatile int32_t t37 = 6307727;

	t37 = (x149^(x150<(x151&x152)));

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -1;
	int64_t x155 = 424532LL;
	volatile int16_t x156 = 595;
	volatile int32_t t38 = -21230;

	t38 = (x153^(x154<(x155&x156)));

	if (t38 != -2) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = INT64_MAX;
	static int16_t x158 = INT16_MIN;
	int64_t x159 = INT64_MAX;
	int64_t x160 = -1LL;
	volatile int64_t t39 = 115407028806724351LL;

	t39 = (x157^(x158<(x159&x160)));

	if (t39 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 10268U;
	int8_t x162 = INT8_MIN;
	int32_t t40 = -16683;

	t40 = (x161^(x162<(x163&x164)));

	if (t40 != 10268) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = -1;
	int64_t x166 = -103769460450LL;
	volatile int32_t x167 = -342370527;
	int32_t x168 = 130509;

	t41 = (x165^(x166<(x167&x168)));

	if (t41 != -2) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x169 = UINT32_MAX;
	int64_t x170 = INT64_MAX;
	volatile uint8_t x171 = UINT8_MAX;
	volatile uint8_t x172 = UINT8_MAX;
	volatile uint32_t t42 = UINT32_MAX;

	t42 = (x169^(x170<(x171&x172)));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = INT64_MAX;
	static uint8_t x174 = 2U;
	uint32_t x175 = 3167U;
	volatile int64_t t43 = -196429208231595596LL;

	t43 = (x173^(x174<(x175&x176)));

	if (t43 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x177 = 29LLU;
	static int64_t x178 = 13144LL;
	static volatile int64_t x179 = INT64_MIN;
	int32_t x180 = -20;
	volatile uint64_t t44 = 7667LLU;

	t44 = (x177^(x178<(x179&x180)));

	if (t44 != 29LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -1;
	int64_t x182 = INT64_MAX;
	int32_t x184 = INT32_MIN;

	t45 = (x181^(x182<(x183&x184)));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = 0;
	static int32_t x186 = INT32_MIN;
	uint16_t x187 = 7U;
	uint32_t x188 = 418013168U;
	int32_t t46 = 25;

	t46 = (x185^(x186<(x187&x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = -1;
	int16_t x190 = 87;
	int64_t x191 = INT64_MIN;
	static volatile uint16_t x192 = 704U;
	int32_t t47 = 3410585;

	t47 = (x189^(x190<(x191&x192)));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	static int64_t x194 = 2795327329219703979LL;
	int32_t x195 = -11;
	int32_t t48 = -1;

	t48 = (x193^(x194<(x195&x196)));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x198 = -1;
	static int16_t x199 = 1;
	int8_t x200 = INT8_MIN;
	int32_t t49 = 6500;

	t49 = (x197^(x198<(x199&x200)));

	if (t49 != -34) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x201 = -14;
	uint8_t x202 = 7U;
	static uint16_t x203 = UINT16_MAX;
	volatile int16_t x204 = INT16_MIN;
	volatile int32_t t50 = -10;

	t50 = (x201^(x202<(x203&x204)));

	if (t50 != -13) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	uint64_t x206 = UINT64_MAX;
	int16_t x207 = -806;
	volatile int16_t x208 = 14250;
	static volatile int64_t t51 = INT64_MIN;

	t51 = (x205^(x206<(x207&x208)));

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MAX;
	int16_t x210 = 0;
	static int16_t x211 = INT16_MIN;
	volatile int32_t x212 = -1;
	int32_t t52 = -1031914936;

	t52 = (x209^(x210<(x211&x212)));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x214 = UINT32_MAX;
	int16_t x215 = 354;
	uint64_t x216 = 7792190058LLU;

	t53 = (x213^(x214<(x215&x216)));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x217 = INT8_MIN;
	int8_t x218 = INT8_MIN;
	int32_t x219 = -1;
	int32_t x220 = -650104;

	t54 = (x217^(x218<(x219&x220)));

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x222 = -1;
	int16_t x224 = INT16_MIN;

	t55 = (x221^(x222<(x223&x224)));

	if (t55 != 32766) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -1LL;
	int16_t x226 = -1;
	static volatile uint32_t x227 = UINT32_MAX;
	static int32_t x228 = -1;
	int64_t t56 = 2261744910457757099LL;

	t56 = (x225^(x226<(x227&x228)));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x229 = -1;
	static volatile uint32_t x230 = 1626997338U;
	static int64_t x231 = -1LL;
	volatile uint32_t x232 = 3U;
	int32_t t57 = 346535;

	t57 = (x229^(x230<(x231&x232)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MIN;
	volatile int8_t x234 = INT8_MIN;
	uint16_t x236 = 959U;
	volatile int32_t t58 = 47433;

	t58 = (x233^(x234<(x235&x236)));

	if (t58 != -2147483647) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 22U;
	volatile uint16_t x238 = 1U;
	volatile uint64_t x239 = UINT64_MAX;
	volatile int32_t t59 = 2;

	t59 = (x237^(x238<(x239&x240)));

	if (t59 != 23) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = UINT8_MAX;
	int64_t x243 = INT64_MIN;
	int32_t x244 = -2060512;
	int32_t t60 = -823;

	t60 = (x241^(x242<(x243&x244)));

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x245 = UINT64_MAX;
	int8_t x246 = INT8_MIN;
	int16_t x247 = INT16_MIN;
	int32_t x248 = 63;
	uint64_t t61 = 2027016469LLU;

	t61 = (x245^(x246<(x247&x248)));

	if (t61 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = INT64_MIN;
	uint16_t x251 = 3U;
	static volatile int32_t x252 = INT32_MIN;
	uint64_t t62 = 516144LLU;

	t62 = (x249^(x250<(x251&x252)));

	if (t62 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	static int32_t x255 = -1;
	int32_t t63 = INT32_MIN;

	t63 = (x253^(x254<(x255&x256)));

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -358;
	volatile int16_t x259 = INT16_MIN;
	static int32_t t64 = 62901;

	t64 = (x257^(x258<(x259&x260)));

	if (t64 != -358) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x262 = UINT32_MAX;
	int64_t x263 = -1LL;
	volatile int64_t x264 = INT64_MIN;

	t65 = (x261^(x262<(x263&x264)));

	if (t65 != 11) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x265 = INT64_MAX;
	static int16_t x266 = 13083;
	uint32_t x267 = 3U;
	static int8_t x268 = -12;
	int64_t t66 = INT64_MAX;

	t66 = (x265^(x266<(x267&x268)));

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x270 = 50;
	int64_t x271 = 121028558356400076LL;
	static uint32_t x272 = 263U;

	t67 = (x269^(x270<(x271&x272)));

	if (t67 != -32767) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -254;
	int16_t x274 = INT16_MAX;
	uint16_t x275 = UINT16_MAX;
	int32_t x276 = 239183400;
	static int32_t t68 = -99225;

	t68 = (x273^(x274<(x275&x276)));

	if (t68 != -253) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	static uint64_t x278 = 40287614305996LLU;
	uint16_t x280 = 1302U;
	int32_t t69 = -12399810;

	t69 = (x277^(x278<(x279&x280)));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x282 = 353287899LL;
	volatile uint8_t x283 = 0U;
	int32_t t70 = 2812907;

	t70 = (x281^(x282<(x283&x284)));

	if (t70 != 779415506) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = UINT32_MAX;
	uint32_t x286 = 135852208U;
	int8_t x287 = -1;
	uint32_t t71 = UINT32_MAX;

	t71 = (x285^(x286<(x287&x288)));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x289 = 27LL;
	int64_t x290 = INT64_MIN;
	static uint64_t x291 = 14211776258LLU;
	volatile uint32_t x292 = 8248141U;
	int64_t t72 = 566876649330213628LL;

	t72 = (x289^(x290<(x291&x292)));

	if (t72 != 27LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = UINT16_MAX;
	int8_t x294 = INT8_MAX;
	uint64_t x295 = 243888LLU;
	int16_t x296 = -1;
	volatile int32_t t73 = 15976011;

	t73 = (x293^(x294<(x295&x296)));

	if (t73 != 65534) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x298 = INT32_MIN;
	uint16_t x299 = 6766U;
	int64_t x300 = -1LL;
	uint64_t t74 = 387353LLU;

	t74 = (x297^(x298<(x299&x300)));

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x301 = 30743643952666299LLU;
	int16_t x302 = INT16_MAX;
	int8_t x303 = INT8_MAX;
	static int8_t x304 = INT8_MIN;
	volatile uint64_t t75 = 59536677081619636LLU;

	t75 = (x301^(x302<(x303&x304)));

	if (t75 != 30743643952666299LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint16_t x305 = 157U;
	uint64_t x306 = 32409324505407608LLU;
	uint8_t x307 = 113U;
	int16_t x308 = INT16_MIN;

	t76 = (x305^(x306<(x307&x308)));

	if (t76 != 157) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = 2;
	int16_t x310 = 1048;
	int64_t x312 = INT64_MIN;
	int32_t t77 = 0;

	t77 = (x309^(x310<(x311&x312)));

	if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -148;
	int32_t x314 = INT32_MIN;
	volatile int8_t x315 = INT8_MAX;
	int32_t x316 = INT32_MIN;
	volatile int32_t t78 = 404804;

	t78 = (x313^(x314<(x315&x316)));

	if (t78 != -147) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 2221U;
	static volatile uint8_t x318 = 45U;
	volatile int32_t x319 = 0;
	int64_t x320 = INT64_MIN;

	t79 = (x317^(x318<(x319&x320)));

	if (t79 != 2221) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	static volatile uint32_t x322 = 125U;
	uint64_t x323 = UINT64_MAX;
	volatile int32_t x324 = -872251;
	volatile int32_t t80 = 45264;

	t80 = (x321^(x322<(x323&x324)));

	if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	uint32_t x326 = UINT32_MAX;
	volatile int8_t x327 = -15;
	int16_t x328 = INT16_MAX;
	int32_t t81 = 0;

	t81 = (x325^(x326<(x327&x328)));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x329 = INT64_MAX;
	static int64_t x330 = -1LL;
	static int32_t x331 = INT32_MIN;
	volatile uint16_t x332 = 7U;
	int64_t t82 = 205633799735009262LL;

	t82 = (x329^(x330<(x331&x332)));

	if (t82 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = UINT16_MAX;
	int16_t x334 = INT16_MAX;
	static volatile int16_t x336 = INT16_MIN;
	volatile int32_t t83 = -149;

	t83 = (x333^(x334<(x335&x336)));

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = 0;
	int16_t x339 = -1;
	static uint16_t x340 = 652U;
	volatile int32_t t84 = -7206141;

	t84 = (x337^(x338<(x339&x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	volatile uint32_t x342 = 923529883U;
	int32_t x343 = INT32_MAX;
	static int16_t x344 = INT16_MIN;
	int32_t t85 = -13;

	t85 = (x341^(x342<(x343&x344)));

	if (t85 != -127) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -1;
	uint64_t x347 = UINT64_MAX;
	uint8_t x348 = 23U;
	static int32_t t86 = -5;

	t86 = (x345^(x346<(x347&x348)));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x349 = INT32_MAX;
	int64_t x351 = 550904LL;
	volatile uint32_t x352 = 1491558U;
	volatile int32_t t87 = -1;

	t87 = (x349^(x350<(x351&x352)));

	if (t87 != 2147483646) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1LL;
	uint16_t x354 = UINT16_MAX;
	static int16_t x355 = INT16_MIN;
	volatile int32_t x356 = 3087;

	t88 = (x353^(x354<(x355&x356)));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 24643611LLU;
	int32_t x358 = INT32_MAX;
	uint16_t x359 = UINT16_MAX;
	int64_t x360 = INT64_MAX;

	t89 = (x357^(x358<(x359&x360)));

	if (t89 != 24643611LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x361 = INT32_MIN;
	volatile uint8_t x362 = 5U;
	uint16_t x363 = 13U;
	volatile int32_t x364 = -1;
	volatile int32_t t90 = -803077;

	t90 = (x361^(x362<(x363&x364)));

	if (t90 != -2147483647) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MAX;
	int16_t x368 = 1874;
	volatile int32_t t91 = -913754690;

	t91 = (x365^(x366<(x367&x368)));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x369 = -19;
	int64_t x370 = INT64_MAX;
	uint16_t x371 = 1775U;
	int8_t x372 = INT8_MIN;

	t92 = (x369^(x370<(x371&x372)));

	if (t92 != -19) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x374 = -1;
	static int8_t x375 = INT8_MIN;
	int32_t t93 = -30;

	t93 = (x373^(x374<(x375&x376)));

	if (t93 != 57) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	int64_t x378 = INT64_MIN;
	uint16_t x379 = 2984U;
	uint32_t x380 = UINT32_MAX;
	int32_t t94 = -4818;

	t94 = (x377^(x378<(x379&x380)));

	if (t94 != -32767) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = 0;
	int32_t x383 = 206208927;
	int8_t x384 = 20;
	volatile int32_t t95 = 3;

	t95 = (x381^(x382<(x383&x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x385 = INT64_MIN;
	static int32_t x386 = INT32_MIN;
	static uint64_t x387 = UINT64_MAX;
	static uint16_t x388 = 1U;
	int64_t t96 = INT64_MIN;

	t96 = (x385^(x386<(x387&x388)));

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x389 = -15;
	int16_t x390 = INT16_MIN;
	static volatile int32_t x391 = INT32_MIN;
	volatile int16_t x392 = INT16_MIN;
	volatile int32_t t97 = 87779;

	t97 = (x389^(x390<(x391&x392)));

	if (t97 != -15) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x394 = 4071;
	int8_t x395 = INT8_MIN;
	uint16_t x396 = 14126U;
	static int32_t t98 = 7;

	t98 = (x393^(x394<(x395&x396)));

	if (t98 != -21) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x397 = 2;
	int32_t x398 = -85570;
	int32_t x399 = -14;
	volatile int16_t x400 = INT16_MAX;
	volatile int32_t t99 = 51;

	t99 = (x397^(x398<(x399&x400)));

	if (t99 != 3) { NG(); } else { ; }
	
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

