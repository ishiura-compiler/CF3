#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MAX;
int16_t x4 = INT16_MIN;
int32_t t0 = -10068;
uint8_t x6 = UINT8_MAX;
volatile int32_t t3 = 1;
uint16_t x18 = 15U;
uint16_t x19 = 1268U;
int32_t t4 = 22857;
static int64_t x23 = INT64_MIN;
uint16_t x26 = 1921U;
static int16_t x28 = 514;
int16_t x30 = 5651;
volatile int32_t x31 = INT32_MIN;
volatile int32_t t7 = 5499;
int64_t x35 = INT64_MIN;
static uint16_t x45 = UINT16_MAX;
int8_t x46 = 1;
volatile int16_t x51 = INT16_MIN;
static int32_t t13 = 264142503;
volatile int32_t t14 = -31897;
static uint32_t x61 = 1870866U;
int16_t x70 = -1;
uint64_t x72 = 5487294829206LLU;
int16_t x74 = -429;
uint8_t x86 = 6U;
uint16_t x90 = UINT16_MAX;
int8_t x93 = -1;
volatile int32_t x94 = INT32_MAX;
static int64_t x100 = -50001753035630LL;
volatile int32_t x101 = -805650237;
volatile int16_t x108 = INT16_MIN;
static int8_t x113 = 5;
static int32_t x115 = 38;
int16_t x116 = -1;
static int32_t x117 = 45019825;
uint64_t x118 = 826241193488004737LLU;
uint16_t x123 = 3U;
uint8_t x133 = UINT8_MAX;
static uint16_t x138 = UINT16_MAX;
volatile int32_t t37 = 6386422;
uint8_t x154 = 13U;
int32_t t38 = 112448664;
static volatile int8_t x165 = INT8_MIN;
volatile int32_t t41 = 0;
int8_t x176 = -3;
static int32_t x179 = 4135;
uint64_t t44 = 33307245118LLU;
uint16_t x183 = 393U;
int32_t x185 = INT32_MAX;
uint32_t x188 = 4453U;
int8_t x191 = INT8_MAX;
int8_t x194 = -1;
int64_t x196 = INT64_MAX;
volatile int16_t x197 = 817;
static uint64_t x213 = UINT64_MAX;
uint16_t x217 = 1U;
int8_t x224 = INT8_MAX;
uint32_t x228 = UINT32_MAX;
int8_t x236 = INT8_MIN;
int8_t x240 = -1;
int64_t t59 = -3757154737LL;
int8_t x247 = INT8_MIN;
int16_t x260 = -1;
static volatile uint64_t t64 = 22LLU;
static uint32_t x264 = 109287U;
int64_t x270 = -27361397LL;
int64_t x274 = INT64_MIN;
uint64_t x275 = 22084526094686LLU;
int64_t x277 = -322985605LL;
uint8_t x278 = UINT8_MAX;
int64_t t69 = -969LL;
int8_t x288 = -2;
int32_t x289 = INT32_MAX;
volatile int32_t t72 = INT32_MAX;
volatile int32_t x296 = INT32_MIN;
static int32_t x299 = INT32_MAX;
uint64_t x300 = 1013248064908882LLU;
static volatile uint64_t t76 = 286045LLU;
uint64_t x310 = UINT64_MAX;
volatile int32_t t81 = 3;
uint64_t x334 = 8430334969595399LLU;
int8_t x335 = -2;
int16_t x343 = INT16_MIN;
int32_t x349 = -1;
uint8_t x360 = 1U;
volatile int32_t x363 = INT32_MAX;
int16_t x365 = -1;
int16_t x367 = -1;
volatile int32_t t91 = 3381733;
uint64_t x374 = UINT64_MAX;
static int64_t x379 = INT64_MIN;
uint16_t x383 = 0U;
static int16_t x389 = 89;
int32_t x397 = 4245861;
int64_t x399 = 460136751538043LL;


void f0(void) {
	uint8_t x1 = 62U;
	int8_t x3 = -4;

	t0 = (x1^(x2<=(x3|x4)));

	if (t0 != 62) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = UINT32_MAX;
	uint64_t x7 = 311087003736925740LLU;
	volatile int8_t x8 = 7;
	uint32_t t1 = 1303676U;

	t1 = (x5^(x6<=(x7|x8)));

	if (t1 != 4294967294U) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = -1;
	int32_t x10 = -6802;
	int32_t x11 = INT32_MIN;
	volatile int32_t x12 = INT32_MAX;
	volatile int32_t t2 = -131267;

	t2 = (x9^(x10<=(x11|x12)));

	if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = -1;
	uint64_t x14 = 118584742047LLU;
	int32_t x15 = INT32_MAX;
	uint8_t x16 = 1U;

	t3 = (x13^(x14<=(x15|x16)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = -1;
	int8_t x20 = INT8_MIN;

	t4 = (x17^(x18<=(x19|x20)));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	uint64_t x22 = 374050LLU;
	uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = 1765448;

	t5 = (x21^(x22<=(x23|x24)));

	if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MIN;
	volatile uint32_t x27 = UINT32_MAX;
	int64_t t6 = -11529LL;

	t6 = (x25^(x26<=(x27|x28)));

	if (t6 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = 855U;
	uint16_t x32 = 13U;

	t7 = (x29^(x30<=(x31|x32)));

	if (t7 != 855) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	static int8_t x34 = -1;
	static int8_t x36 = 1;
	int32_t t8 = -4412020;

	t8 = (x33^(x34<=(x35|x36)));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 3842;
	int64_t x38 = INT64_MAX;
	uint16_t x39 = UINT16_MAX;
	int16_t x40 = INT16_MAX;
	int32_t t9 = -49057660;

	t9 = (x37^(x38<=(x39|x40)));

	if (t9 != 3842) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	volatile uint32_t x42 = 18640015U;
	uint64_t x43 = 5821384855806313LLU;
	uint16_t x44 = UINT16_MAX;
	volatile int32_t t10 = 0;

	t10 = (x41^(x42<=(x43|x44)));

	if (t10 != -2) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x47 = 1238;
	int16_t x48 = INT16_MIN;
	int32_t t11 = 192;

	t11 = (x45^(x46<=(x47|x48)));

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	int8_t x50 = -1;
	int16_t x52 = INT16_MIN;
	int32_t t12 = -8041158;

	t12 = (x49^(x50<=(x51|x52)));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1;
	static int32_t x54 = 43352;
	static int32_t x55 = INT32_MIN;
	volatile uint64_t x56 = UINT64_MAX;

	t13 = (x53^(x54<=(x55|x56)));

	if (t13 != -2) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = INT16_MAX;
	int32_t x58 = -1549;
	volatile uint16_t x59 = 0U;
	int32_t x60 = 0;

	t14 = (x57^(x58<=(x59|x60)));

	if (t14 != 32766) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x62 = 7U;
	uint16_t x63 = 2U;
	int32_t x64 = 219;
	volatile uint32_t t15 = 324U;

	t15 = (x61^(x62<=(x63|x64)));

	if (t15 != 1870867U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -410994280080857LL;
	int8_t x66 = -1;
	static uint8_t x67 = UINT8_MAX;
	volatile int8_t x68 = INT8_MIN;
	volatile int64_t t16 = 160188167LL;

	t16 = (x65^(x66<=(x67|x68)));

	if (t16 != -410994280080858LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint8_t x69 = UINT8_MAX;
	static int16_t x71 = INT16_MIN;
	static volatile int32_t t17 = -116;

	t17 = (x69^(x70<=(x71|x72)));

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = 7;
	int8_t x75 = INT8_MIN;
	uint16_t x76 = 9097U;
	volatile int32_t t18 = 775606;

	t18 = (x73^(x74<=(x75|x76)));

	if (t18 != 6) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = INT64_MAX;
	int32_t x78 = -1;
	static int8_t x79 = INT8_MIN;
	int32_t x80 = -1;
	int64_t t19 = -576661565LL;

	t19 = (x77^(x78<=(x79|x80)));

	if (t19 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -1;
	int8_t x82 = -31;
	uint8_t x83 = 3U;
	static uint64_t x84 = 122LLU;
	int32_t t20 = 412642;

	t20 = (x81^(x82<=(x83|x84)));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = INT16_MAX;
	int64_t x87 = INT64_MIN;
	static int16_t x88 = -3974;
	volatile int32_t t21 = 390;

	t21 = (x85^(x86<=(x87|x88)));

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = INT64_MIN;
	static int16_t x91 = -112;
	static int64_t x92 = INT64_MIN;
	int64_t t22 = INT64_MIN;

	t22 = (x89^(x90<=(x91|x92)));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x95 = -19;
	int32_t x96 = -1;
	volatile int32_t t23 = -12379425;

	t23 = (x93^(x94<=(x95|x96)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = INT16_MAX;
	int32_t x98 = -24764;
	volatile int8_t x99 = INT8_MIN;
	static int32_t t24 = 24;

	t24 = (x97^(x98<=(x99|x100)));

	if (t24 != 32766) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = -1344;
	volatile int64_t x103 = INT64_MIN;
	static volatile int64_t x104 = INT64_MAX;
	volatile int32_t t25 = -10;

	t25 = (x101^(x102<=(x103|x104)));

	if (t25 != -805650238) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	int32_t x106 = -1;
	uint32_t x107 = 1650471U;
	int32_t t26 = 40086;

	t26 = (x105^(x106<=(x107|x108)));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = INT32_MIN;
	int8_t x110 = INT8_MAX;
	volatile int8_t x111 = -5;
	volatile int16_t x112 = INT16_MIN;
	int32_t t27 = INT32_MIN;

	t27 = (x109^(x110<=(x111|x112)));

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x114 = UINT16_MAX;
	int32_t t28 = 1;

	t28 = (x113^(x114<=(x115|x116)));

	if (t28 != 5) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x119 = 0U;
	uint64_t x120 = 4049807541431900931LLU;
	volatile int32_t t29 = -957013;

	t29 = (x117^(x118<=(x119|x120)));

	if (t29 != 45019824) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 385498478LLU;
	int32_t x122 = -1;
	uint64_t x124 = 68988971LLU;
	uint64_t t30 = 2999LLU;

	t30 = (x121^(x122<=(x123|x124)));

	if (t30 != 385498478LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MAX;
	static int8_t x126 = -1;
	int64_t x127 = INT64_MAX;
	static int16_t x128 = INT16_MIN;
	int32_t t31 = -276323;

	t31 = (x125^(x126<=(x127|x128)));

	if (t31 != 2147483646) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 8697976328LLU;
	int32_t x130 = -5740;
	uint8_t x131 = 2U;
	int16_t x132 = INT16_MIN;
	volatile uint64_t t32 = 2693592596392102LLU;

	t32 = (x129^(x130<=(x131|x132)));

	if (t32 != 8697976328LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x134 = 2U;
	static volatile int32_t x135 = INT32_MIN;
	uint32_t x136 = UINT32_MAX;
	volatile int32_t t33 = -1945795;

	t33 = (x133^(x134<=(x135|x136)));

	if (t33 != 254) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 575710412804830676LL;
	volatile int8_t x139 = 30;
	uint64_t x140 = UINT64_MAX;
	volatile int64_t t34 = 204LL;

	t34 = (x137^(x138<=(x139|x140)));

	if (t34 != 575710412804830677LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x141 = -127;
	int8_t x142 = -1;
	uint32_t x143 = 0U;
	int16_t x144 = 5907;
	volatile int32_t t35 = -4766;

	t35 = (x141^(x142<=(x143|x144)));

	if (t35 != -127) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = -1;
	uint8_t x146 = UINT8_MAX;
	static int32_t x147 = 2516807;
	int8_t x148 = -1;
	int32_t t36 = 374712;

	t36 = (x145^(x146<=(x147|x148)));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -11;
	uint8_t x150 = 0U;
	static int8_t x151 = INT8_MAX;
	static int8_t x152 = -1;

	t37 = (x149^(x150<=(x151|x152)));

	if (t37 != -11) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -9634239;
	int16_t x155 = INT16_MIN;
	uint64_t x156 = UINT64_MAX;

	t38 = (x153^(x154<=(x155|x156)));

	if (t38 != -9634240) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1;
	int32_t x158 = 370943798;
	static volatile int64_t x159 = INT64_MIN;
	uint8_t x160 = 31U;
	int32_t t39 = -4058;

	t39 = (x157^(x158<=(x159|x160)));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = INT64_MIN;
	uint8_t x162 = 0U;
	int64_t x163 = INT64_MAX;
	uint16_t x164 = 325U;
	int64_t t40 = -84949510994296407LL;

	t40 = (x161^(x162<=(x163|x164)));

	if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x166 = 1U;
	int8_t x167 = 6;
	static uint32_t x168 = 625303U;

	t41 = (x165^(x166<=(x167|x168)));

	if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x169 = UINT16_MAX;
	static int8_t x170 = INT8_MAX;
	int8_t x171 = -1;
	int32_t x172 = INT32_MIN;
	int32_t t42 = 54;

	t42 = (x169^(x170<=(x171|x172)));

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MAX;
	static int16_t x174 = INT16_MIN;
	volatile int64_t x175 = -1LL;
	volatile int64_t t43 = -99353705083LL;

	t43 = (x173^(x174<=(x175|x176)));

	if (t43 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x177 = UINT64_MAX;
	int8_t x178 = -15;
	volatile int32_t x180 = 1094072;

	t44 = (x177^(x178<=(x179|x180)));

	if (t44 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 3U;
	volatile int8_t x182 = -14;
	int8_t x184 = -1;
	volatile int32_t t45 = 14;

	t45 = (x181^(x182<=(x183|x184)));

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x186 = 1U;
	uint16_t x187 = 863U;
	volatile int32_t t46 = -128;

	t46 = (x185^(x186<=(x187|x188)));

	if (t46 != 2147483646) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = UINT32_MAX;
	volatile uint8_t x190 = 2U;
	int8_t x192 = -26;
	volatile uint32_t t47 = UINT32_MAX;

	t47 = (x189^(x190<=(x191|x192)));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x193 = UINT32_MAX;
	volatile uint8_t x195 = 10U;
	static volatile uint32_t t48 = 726650797U;

	t48 = (x193^(x194<=(x195|x196)));

	if (t48 != 4294967294U) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x198 = INT64_MIN;
	volatile int32_t x199 = 4930855;
	int32_t x200 = INT32_MIN;
	int32_t t49 = 117566;

	t49 = (x197^(x198<=(x199|x200)));

	if (t49 != 816) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MAX;
	int16_t x202 = INT16_MIN;
	static int64_t x203 = INT64_MIN;
	uint32_t x204 = 32800415U;
	static int32_t t50 = INT32_MAX;

	t50 = (x201^(x202<=(x203|x204)));

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = INT8_MIN;
	int16_t x206 = -22;
	uint8_t x207 = UINT8_MAX;
	volatile int8_t x208 = INT8_MIN;
	static volatile int32_t t51 = -2687;

	t51 = (x205^(x206<=(x207|x208)));

	if (t51 != -127) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	int16_t x210 = 30;
	static int64_t x211 = INT64_MAX;
	int16_t x212 = -5161;
	volatile int32_t t52 = 18;

	t52 = (x209^(x210<=(x211|x212)));

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x214 = INT8_MAX;
	volatile int8_t x215 = -1;
	static volatile int32_t x216 = INT32_MAX;
	uint64_t t53 = UINT64_MAX;

	t53 = (x213^(x214<=(x215|x216)));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x218 = INT16_MIN;
	int64_t x219 = 2450693072LL;
	uint64_t x220 = 1280431116331633700LLU;
	int32_t t54 = 1466;

	t54 = (x217^(x218<=(x219|x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x221 = 16U;
	int16_t x222 = INT16_MAX;
	int8_t x223 = 0;
	static uint32_t t55 = 376081138U;

	t55 = (x221^(x222<=(x223|x224)));

	if (t55 != 16U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = -2;
	static int8_t x226 = -2;
	int64_t x227 = -2338473027LL;
	volatile int32_t t56 = 755438303;

	t56 = (x225^(x226<=(x227|x228)));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 0U;
	volatile int16_t x230 = INT16_MAX;
	uint16_t x231 = 2U;
	int32_t x232 = INT32_MAX;
	volatile int32_t t57 = -1062995214;

	t57 = (x229^(x230<=(x231|x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = INT32_MIN;
	volatile int8_t x234 = INT8_MIN;
	static int32_t x235 = 639691;
	volatile int32_t t58 = 1;

	t58 = (x233^(x234<=(x235|x236)));

	if (t58 != -2147483647) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	int8_t x238 = -1;
	uint8_t x239 = 3U;

	t59 = (x237^(x238<=(x239|x240)));

	if (t59 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	static volatile uint8_t x242 = 3U;
	int8_t x243 = INT8_MIN;
	static volatile uint64_t x244 = 1338124018LLU;
	static int64_t t60 = -2528256303935532LL;

	t60 = (x241^(x242<=(x243|x244)));

	if (t60 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = UINT16_MAX;
	static int64_t x246 = INT64_MIN;
	static volatile int32_t x248 = INT32_MAX;
	int32_t t61 = 57410156;

	t61 = (x245^(x246<=(x247|x248)));

	if (t61 != 65534) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 161U;
	uint16_t x250 = 117U;
	uint8_t x251 = 0U;
	uint64_t x252 = 33520060366191748LLU;
	volatile int32_t t62 = -1223379;

	t62 = (x249^(x250<=(x251|x252)));

	if (t62 != 160) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x253 = 352094303569LLU;
	uint8_t x254 = 20U;
	uint32_t x255 = 197633U;
	uint8_t x256 = 6U;
	static uint64_t t63 = 65781LLU;

	t63 = (x253^(x254<=(x255|x256)));

	if (t63 != 352094303568LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x257 = 1438223798235LLU;
	int32_t x258 = 1;
	int16_t x259 = -207;

	t64 = (x257^(x258<=(x259|x260)));

	if (t64 != 1438223798235LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = INT16_MIN;
	volatile int8_t x262 = 11;
	int8_t x263 = -1;
	volatile int32_t t65 = 3;

	t65 = (x261^(x262<=(x263|x264)));

	if (t65 != -32767) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	volatile uint32_t x266 = UINT32_MAX;
	volatile int32_t x267 = INT32_MIN;
	int32_t x268 = -1;
	volatile int32_t t66 = -3;

	t66 = (x265^(x266<=(x267|x268)));

	if (t66 != -2147483647) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -1;
	int8_t x271 = INT8_MAX;
	static volatile uint16_t x272 = UINT16_MAX;
	static volatile int32_t t67 = -235;

	t67 = (x269^(x270<=(x271|x272)));

	if (t67 != -2) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 69304772407337LLU;
	uint16_t x276 = 1U;
	static uint64_t t68 = 9899463365318713LLU;

	t68 = (x273^(x274<=(x275|x276)));

	if (t68 != 69304772407337LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x279 = -1;
	static int32_t x280 = -1;

	t69 = (x277^(x278<=(x279|x280)));

	if (t69 != -322985605LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	uint16_t x282 = UINT16_MAX;
	int64_t x283 = 55961369189352867LL;
	int16_t x284 = 0;
	int32_t t70 = 248870187;

	t70 = (x281^(x282<=(x283|x284)));

	if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -1025041108019661LL;
	int32_t x286 = INT32_MIN;
	volatile int64_t x287 = -74981521LL;
	int64_t t71 = 16530546277008878LL;

	t71 = (x285^(x286<=(x287|x288)));

	if (t71 != -1025041108019662LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x290 = -1;
	static int64_t x291 = -462772001290LL;
	volatile uint16_t x292 = 4U;

	t72 = (x289^(x290<=(x291|x292)));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -1;
	int16_t x294 = INT16_MIN;
	uint32_t x295 = 2379641U;
	int32_t t73 = -1;

	t73 = (x293^(x294<=(x295|x296)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x297 = UINT8_MAX;
	int64_t x298 = -11858515130266LL;
	int32_t t74 = -118;

	t74 = (x297^(x298<=(x299|x300)));

	if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	volatile int32_t x302 = 3142665;
	int32_t x303 = INT32_MAX;
	int8_t x304 = INT8_MAX;
	static int32_t t75 = -4;

	t75 = (x301^(x302<=(x303|x304)));

	if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = 2LLU;
	int8_t x306 = INT8_MAX;
	uint8_t x307 = 14U;
	uint8_t x308 = 4U;

	t76 = (x305^(x306<=(x307|x308)));

	if (t76 != 2LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	int16_t x311 = INT16_MIN;
	int16_t x312 = INT16_MIN;
	volatile int64_t t77 = INT64_MIN;

	t77 = (x309^(x310<=(x311|x312)));

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x313 = 4U;
	int8_t x314 = INT8_MAX;
	static int64_t x315 = INT64_MIN;
	int32_t x316 = 0;
	int32_t t78 = 70;

	t78 = (x313^(x314<=(x315|x316)));

	if (t78 != 4) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = -1;
	int64_t x318 = INT64_MIN;
	int32_t x319 = INT32_MAX;
	int64_t x320 = -36050609LL;
	volatile int32_t t79 = -496;

	t79 = (x317^(x318<=(x319|x320)));

	if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = INT8_MAX;
	int32_t x322 = -1;
	int8_t x323 = INT8_MIN;
	int64_t x324 = 10277551130LL;
	static volatile int32_t t80 = -12830240;

	t80 = (x321^(x322<=(x323|x324)));

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x325 = 11U;
	uint64_t x326 = 4360142655367581647LLU;
	volatile int16_t x327 = 52;
	int64_t x328 = -5657390LL;

	t81 = (x325^(x326<=(x327|x328)));

	if (t81 != 10) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	volatile int32_t x330 = -2;
	static volatile int8_t x331 = INT8_MIN;
	int32_t x332 = -38792;
	int32_t t82 = 16975627;

	t82 = (x329^(x330<=(x331|x332)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = UINT64_MAX;
	uint16_t x336 = UINT16_MAX;
	volatile uint64_t t83 = 230LLU;

	t83 = (x333^(x334<=(x335|x336)));

	if (t83 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x337 = 0;
	int16_t x338 = INT16_MIN;
	int16_t x339 = INT16_MIN;
	static int64_t x340 = INT64_MIN;
	int32_t t84 = -41309;

	t84 = (x337^(x338<=(x339|x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = 18904625;
	int16_t x342 = -1;
	int8_t x344 = INT8_MIN;
	int32_t t85 = 885183113;

	t85 = (x341^(x342<=(x343|x344)));

	if (t85 != 18904625) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	volatile int64_t x346 = -1LL;
	int32_t x347 = INT32_MAX;
	int16_t x348 = INT16_MAX;
	static volatile int32_t t86 = -992;

	t86 = (x345^(x346<=(x347|x348)));

	if (t86 != -2147483647) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x350 = 31189U;
	static volatile int32_t x351 = INT32_MIN;
	int16_t x352 = INT16_MIN;
	static int32_t t87 = -4466932;

	t87 = (x349^(x350<=(x351|x352)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1LL;
	int64_t x354 = -2295598388002857096LL;
	int16_t x355 = 1496;
	int16_t x356 = INT16_MIN;
	static volatile int64_t t88 = 79994793562050104LL;

	t88 = (x353^(x354<=(x355|x356)));

	if (t88 != -2LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	static uint16_t x358 = 9U;
	int64_t x359 = INT64_MAX;
	int32_t t89 = -58733067;

	t89 = (x357^(x358<=(x359|x360)));

	if (t89 != -32767) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = 51977;
	uint8_t x362 = 44U;
	int8_t x364 = INT8_MIN;
	static volatile int32_t t90 = -5;

	t90 = (x361^(x362<=(x363|x364)));

	if (t90 != 51977) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x366 = -188011972;
	uint32_t x368 = 1U;

	t91 = (x365^(x366<=(x367|x368)));

	if (t91 != -2) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x369 = -1LL;
	volatile int64_t x370 = -1LL;
	int64_t x371 = INT64_MIN;
	int64_t x372 = INT64_MIN;
	static volatile int64_t t92 = -533LL;

	t92 = (x369^(x370<=(x371|x372)));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MAX;
	int8_t x375 = INT8_MAX;
	volatile int16_t x376 = -15888;
	volatile int64_t t93 = INT64_MAX;

	t93 = (x373^(x374<=(x375|x376)));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = UINT32_MAX;
	uint16_t x378 = UINT16_MAX;
	volatile int64_t x380 = -13264716620LL;
	uint32_t t94 = UINT32_MAX;

	t94 = (x377^(x378<=(x379|x380)));

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x381 = INT64_MIN;
	int64_t x382 = INT64_MAX;
	static uint8_t x384 = UINT8_MAX;
	static volatile int64_t t95 = INT64_MIN;

	t95 = (x381^(x382<=(x383|x384)));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -1;
	int16_t x386 = INT16_MIN;
	int8_t x387 = 41;
	int8_t x388 = 2;
	static volatile int32_t t96 = -108443;

	t96 = (x385^(x386<=(x387|x388)));

	if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x390 = INT32_MIN;
	volatile uint16_t x391 = 4U;
	static uint16_t x392 = 29088U;
	volatile int32_t t97 = -642031;

	t97 = (x389^(x390<=(x391|x392)));

	if (t97 != 88) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = UINT64_MAX;
	volatile int16_t x394 = 1;
	volatile int16_t x395 = INT16_MIN;
	static int64_t x396 = INT64_MIN;
	volatile uint64_t t98 = UINT64_MAX;

	t98 = (x393^(x394<=(x395|x396)));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x398 = INT64_MIN;
	volatile int16_t x400 = -1;
	static volatile int32_t t99 = 102207;

	t99 = (x397^(x398<=(x399|x400)));

	if (t99 != 4245860) { NG(); } else { ; }
	
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

