#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MAX;
int16_t x8 = -2;
volatile int64_t x11 = INT64_MIN;
static int64_t x14 = 22042646196882LL;
int32_t t3 = 3;
volatile int16_t x24 = INT16_MAX;
uint32_t x33 = 80U;
static int16_t x47 = INT16_MAX;
uint16_t x48 = UINT16_MAX;
int64_t x50 = 1002021452786528LL;
uint16_t x53 = 761U;
static uint32_t x56 = 530U;
int64_t x58 = INT64_MIN;
uint8_t x62 = UINT8_MAX;
int32_t x67 = INT32_MIN;
static uint8_t x71 = 4U;
static int8_t x73 = INT8_MAX;
uint8_t x74 = UINT8_MAX;
int64_t x76 = INT64_MIN;
int32_t t18 = -2419207;
int8_t x79 = INT8_MAX;
uint16_t x85 = 14U;
static volatile int32_t t21 = -7;
int64_t x93 = INT64_MAX;
uint8_t x96 = 0U;
volatile int64_t t23 = INT64_MAX;
uint32_t x98 = UINT32_MAX;
int8_t x100 = 1;
int8_t x108 = INT8_MAX;
int32_t x118 = -5364611;
int8_t x119 = -41;
static int32_t t29 = 10;
uint16_t x121 = 6761U;
volatile uint64_t x122 = 15237588486537LLU;
int8_t x126 = 0;
static int32_t x128 = 66760806;
uint8_t x129 = 2U;
uint64_t x130 = 14799052797936LLU;
uint32_t x131 = 15U;
int8_t x140 = INT8_MAX;
volatile int8_t x146 = 1;
int64_t t36 = 249264761833LL;
int8_t x153 = -14;
uint16_t x154 = 1644U;
int8_t x161 = -1;
volatile uint32_t x162 = 910242U;
static volatile int8_t x163 = -1;
int32_t x184 = INT32_MIN;
volatile int32_t t48 = 5814;
volatile int8_t x199 = 1;
int16_t x206 = INT16_MAX;
static int8_t x209 = -37;
volatile int64_t x219 = INT64_MAX;
uint64_t x221 = 43026346407020825LLU;
static uint16_t x222 = 21598U;
static volatile uint32_t x225 = UINT32_MAX;
int16_t x228 = 2602;
volatile int64_t x230 = 4348208LL;
static int8_t x231 = INT8_MAX;
static int8_t x232 = -1;
int16_t x240 = INT16_MAX;
uint8_t x245 = 1U;
volatile int8_t x247 = INT8_MIN;
volatile int32_t t61 = 942482;
int32_t x250 = INT32_MIN;
int64_t x251 = 50323227LL;
int16_t x254 = INT16_MAX;
int8_t x256 = 2;
static int32_t x259 = 31093994;
int64_t x263 = 5861667002756LL;
int16_t x270 = INT16_MIN;
int32_t x272 = 804774040;
static uint16_t x276 = 106U;
uint32_t x280 = 18217080U;
uint8_t x286 = 34U;
uint64_t x289 = 9333868LLU;
volatile int32_t x307 = -1;
uint32_t x308 = UINT32_MAX;
static volatile uint16_t x316 = UINT16_MAX;
int64_t x318 = -1LL;
int16_t x320 = INT16_MIN;
volatile int16_t x327 = -1;
uint16_t x328 = 1U;
uint64_t x330 = 4890079176042391145LLU;
int64_t x337 = INT64_MAX;
uint32_t x338 = 738U;
volatile int64_t t84 = INT64_MAX;
int8_t x349 = INT8_MIN;
int32_t x357 = INT32_MIN;
uint16_t x362 = 201U;
volatile int32_t t91 = -16343331;
static uint64_t x369 = UINT64_MAX;
int16_t x372 = INT16_MIN;
static uint8_t x373 = 3U;
volatile int16_t x376 = INT16_MIN;
volatile int32_t t93 = 1642623;
int64_t t94 = -15564LL;
static int32_t x385 = INT32_MIN;
int16_t x386 = 0;
volatile int32_t t96 = INT32_MIN;
int16_t x389 = INT16_MIN;
int32_t t97 = -1022096;
uint32_t x396 = 1673U;


void f0(void) {
	static uint8_t x1 = 3U;
	int64_t x2 = -1LL;
	uint32_t x4 = 62U;
	volatile int32_t t0 = -3;

	t0 = (x1^(x2==(x3|x4)));

	if (t0 != 3) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	int16_t x6 = 0;
	static int64_t x7 = 457LL;
	static int64_t t1 = INT64_MIN;

	t1 = (x5^(x6==(x7|x8)));

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	int16_t x10 = 11;
	int64_t x12 = INT64_MIN;
	volatile int64_t t2 = -1LL;

	t2 = (x9^(x10==(x11|x12)));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = 1;
	uint8_t x15 = 1U;
	int64_t x16 = -2763391903LL;

	t3 = (x13^(x14==(x15|x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int16_t x18 = -1;
	static int8_t x19 = INT8_MIN;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -48;

	t4 = (x17^(x18==(x19|x20)));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	int8_t x22 = INT8_MIN;
	uint8_t x23 = UINT8_MAX;
	int32_t t5 = 130799244;

	t5 = (x21^(x22==(x23|x24)));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	int16_t x26 = INT16_MAX;
	int16_t x27 = INT16_MIN;
	static int16_t x28 = INT16_MAX;
	static volatile int32_t t6 = INT32_MAX;

	t6 = (x25^(x26==(x27|x28)));

	if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	static volatile int8_t x30 = INT8_MAX;
	static uint16_t x31 = 320U;
	static int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -813453;

	t7 = (x29^(x30==(x31|x32)));

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = 772513U;
	int64_t x35 = -1LL;
	int32_t x36 = INT32_MAX;
	volatile uint32_t t8 = 505U;

	t8 = (x33^(x34==(x35|x36)));

	if (t8 != 80U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	int32_t x38 = INT32_MIN;
	static int64_t x39 = -4869260LL;
	uint32_t x40 = 17U;
	volatile int64_t t9 = 261250349267359635LL;

	t9 = (x37^(x38==(x39|x40)));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 29181U;
	static uint32_t x42 = 3199U;
	static int16_t x43 = INT16_MIN;
	uint8_t x44 = 25U;
	volatile int32_t t10 = 28139726;

	t10 = (x41^(x42==(x43|x44)));

	if (t10 != 29181) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = INT8_MIN;
	uint8_t x46 = UINT8_MAX;
	volatile int32_t t11 = -175995;

	t11 = (x45^(x46==(x47|x48)));

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	static uint32_t x51 = UINT32_MAX;
	int8_t x52 = INT8_MAX;
	uint64_t t12 = UINT64_MAX;

	t12 = (x49^(x50==(x51|x52)));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x54 = -529LL;
	int16_t x55 = INT16_MAX;
	volatile int32_t t13 = 0;

	t13 = (x53^(x54==(x55|x56)));

	if (t13 != 761) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x57 = UINT16_MAX;
	static int32_t x59 = -1246;
	volatile uint8_t x60 = 4U;
	volatile int32_t t14 = 62;

	t14 = (x57^(x58==(x59|x60)));

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = 4U;
	int32_t x63 = INT32_MIN;
	uint16_t x64 = UINT16_MAX;
	volatile int32_t t15 = 1658;

	t15 = (x61^(x62==(x63|x64)));

	if (t15 != 4) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	uint64_t x66 = 543551255LLU;
	uint8_t x68 = UINT8_MAX;
	volatile int32_t t16 = 493765038;

	t16 = (x65^(x66==(x67|x68)));

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	int64_t x70 = -1LL;
	int64_t x72 = -1LL;
	int32_t t17 = 811;

	t17 = (x69^(x70==(x71|x72)));

	if (t17 != 2147483646) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x75 = INT16_MIN;

	t18 = (x73^(x74==(x75|x76)));

	if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = 8027204120855171LL;
	int64_t x78 = 1263975346709159731LL;
	int64_t x80 = -1LL;
	static int64_t t19 = 29935LL;

	t19 = (x77^(x78==(x79|x80)));

	if (t19 != 8027204120855171LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = INT32_MIN;
	int64_t x82 = 36807LL;
	int8_t x83 = INT8_MAX;
	int64_t x84 = INT64_MIN;
	volatile int32_t t20 = INT32_MIN;

	t20 = (x81^(x82==(x83|x84)));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x86 = 0;
	static int32_t x87 = INT32_MIN;
	static uint16_t x88 = 9U;

	t21 = (x85^(x86==(x87|x88)));

	if (t21 != 14) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	int32_t x90 = INT32_MAX;
	static uint32_t x91 = 912U;
	static volatile int16_t x92 = 680;
	static volatile int32_t t22 = 1;

	t22 = (x89^(x90==(x91|x92)));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x94 = INT32_MIN;
	int16_t x95 = 11;

	t23 = (x93^(x94==(x95|x96)));

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = UINT64_MAX;
	int8_t x99 = 8;
	uint64_t t24 = UINT64_MAX;

	t24 = (x97^(x98==(x99|x100)));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 0LLU;
	static int64_t x102 = INT64_MAX;
	int32_t x103 = INT32_MIN;
	volatile int16_t x104 = 3;
	static volatile uint64_t t25 = 313022634231047LLU;

	t25 = (x101^(x102==(x103|x104)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x105 = UINT32_MAX;
	volatile int8_t x106 = INT8_MIN;
	int64_t x107 = INT64_MIN;
	volatile uint32_t t26 = UINT32_MAX;

	t26 = (x105^(x106==(x107|x108)));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 0U;
	uint16_t x110 = 2U;
	int64_t x111 = -153LL;
	int8_t x112 = INT8_MIN;
	int32_t t27 = 1860;

	t27 = (x109^(x110==(x111|x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = 2;
	static int32_t x114 = INT32_MAX;
	volatile int64_t x115 = -1LL;
	static uint32_t x116 = UINT32_MAX;
	int32_t t28 = -185;

	t28 = (x113^(x114==(x115|x116)));

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	static int32_t x120 = -1;

	t29 = (x117^(x118==(x119|x120)));

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x123 = INT16_MAX;
	static volatile int16_t x124 = -3;
	volatile int32_t t30 = -11940;

	t30 = (x121^(x122==(x123|x124)));

	if (t30 != 6761) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = -6588;
	volatile uint64_t x127 = UINT64_MAX;
	static volatile int32_t t31 = 304850347;

	t31 = (x125^(x126==(x127|x128)));

	if (t31 != -6588) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x132 = -1;
	static int32_t t32 = -1439100;

	t32 = (x129^(x130==(x131|x132)));

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MAX;
	volatile uint16_t x134 = UINT16_MAX;
	volatile int64_t x135 = INT64_MIN;
	uint64_t x136 = 1LLU;
	volatile int64_t t33 = INT64_MAX;

	t33 = (x133^(x134==(x135|x136)));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	int16_t x138 = INT16_MIN;
	uint64_t x139 = 87880528926196366LLU;
	static int64_t t34 = INT64_MAX;

	t34 = (x137^(x138==(x139|x140)));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x141 = 12U;
	uint32_t x142 = 364183896U;
	static int64_t x143 = -1LL;
	uint8_t x144 = 0U;
	volatile int32_t t35 = -3;

	t35 = (x141^(x142==(x143|x144)));

	if (t35 != 12) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = 184930673043429LL;
	int32_t x147 = -1;
	volatile int16_t x148 = -1;

	t36 = (x145^(x146==(x147|x148)));

	if (t36 != 184930673043429LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	int32_t x150 = INT32_MAX;
	int8_t x151 = -1;
	static uint64_t x152 = 220271659292LLU;
	volatile int32_t t37 = 36;

	t37 = (x149^(x150==(x151|x152)));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x155 = 1730U;
	volatile int64_t x156 = 29585787184421LL;
	int32_t t38 = 32;

	t38 = (x153^(x154==(x155|x156)));

	if (t38 != -14) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 2314510288130877273LLU;
	volatile int64_t x158 = INT64_MIN;
	uint32_t x159 = UINT32_MAX;
	volatile int32_t x160 = INT32_MAX;
	static uint64_t t39 = 497303488505LLU;

	t39 = (x157^(x158==(x159|x160)));

	if (t39 != 2314510288130877273LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x164 = 2076116976469198LLU;
	volatile int32_t t40 = -212944969;

	t40 = (x161^(x162==(x163|x164)));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = -1LL;
	int64_t x166 = INT64_MIN;
	volatile int8_t x167 = -1;
	int64_t x168 = -3600LL;
	int64_t t41 = 556702281961LL;

	t41 = (x165^(x166==(x167|x168)));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MAX;
	int8_t x170 = -2;
	uint16_t x171 = UINT16_MAX;
	volatile int8_t x172 = 1;
	static int32_t t42 = INT32_MAX;

	t42 = (x169^(x170==(x171|x172)));

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MAX;
	uint16_t x174 = UINT16_MAX;
	int32_t x175 = -188656365;
	uint64_t x176 = 511572LLU;
	int32_t t43 = 253732;

	t43 = (x173^(x174==(x175|x176)));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = 425;
	static uint16_t x178 = 3508U;
	int64_t x179 = INT64_MAX;
	static int64_t x180 = 32067558465153LL;
	static int32_t t44 = -27825;

	t44 = (x177^(x178==(x179|x180)));

	if (t44 != 425) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 31U;
	static int32_t x182 = INT32_MAX;
	int32_t x183 = INT32_MIN;
	volatile int32_t t45 = 115976;

	t45 = (x181^(x182==(x183|x184)));

	if (t45 != 31) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	static int32_t x186 = INT32_MIN;
	int16_t x187 = INT16_MIN;
	int32_t x188 = -108;
	int32_t t46 = 13915;

	t46 = (x185^(x186==(x187|x188)));

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = INT8_MIN;
	int64_t x190 = INT64_MIN;
	int32_t x191 = 63195509;
	int64_t x192 = INT64_MAX;
	static int32_t t47 = -2044;

	t47 = (x189^(x190==(x191|x192)));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 17714U;
	int8_t x194 = -1;
	int16_t x195 = -4;
	int8_t x196 = INT8_MIN;

	t48 = (x193^(x194==(x195|x196)));

	if (t48 != 17714) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x197 = 915662U;
	uint16_t x198 = UINT16_MAX;
	volatile uint32_t x200 = 10113852U;
	uint32_t t49 = 561084U;

	t49 = (x197^(x198==(x199|x200)));

	if (t49 != 915662U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 42581U;
	static volatile int32_t x202 = INT32_MIN;
	uint64_t x203 = UINT64_MAX;
	uint8_t x204 = 63U;
	uint32_t t50 = 100939401U;

	t50 = (x201^(x202==(x203|x204)));

	if (t50 != 42581U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	int16_t x207 = 1;
	int8_t x208 = -1;
	volatile int32_t t51 = 453009979;

	t51 = (x205^(x206==(x207|x208)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x210 = 21;
	uint32_t x211 = 13U;
	uint16_t x212 = 2029U;
	static int32_t t52 = 178035825;

	t52 = (x209^(x210==(x211|x212)));

	if (t52 != -37) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = UINT8_MAX;
	volatile uint8_t x214 = 2U;
	int32_t x215 = INT32_MIN;
	int16_t x216 = 45;
	int32_t t53 = 28;

	t53 = (x213^(x214==(x215|x216)));

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 2032141543142627599LLU;
	int16_t x218 = 5;
	uint64_t x220 = 418LLU;
	volatile uint64_t t54 = 2051LLU;

	t54 = (x217^(x218==(x219|x220)));

	if (t54 != 2032141543142627599LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x223 = 1U;
	int16_t x224 = 489;
	volatile uint64_t t55 = 260LLU;

	t55 = (x221^(x222==(x223|x224)));

	if (t55 != 43026346407020825LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x226 = 1568228LLU;
	int32_t x227 = INT32_MIN;
	uint32_t t56 = UINT32_MAX;

	t56 = (x225^(x226==(x227|x228)));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	volatile int64_t t57 = INT64_MIN;

	t57 = (x229^(x230==(x231|x232)));

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -8;
	uint32_t x234 = 1649U;
	int64_t x235 = -1LL;
	int8_t x236 = -1;
	volatile int32_t t58 = -12702313;

	t58 = (x233^(x234==(x235|x236)));

	if (t58 != -8) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	static uint64_t x238 = UINT64_MAX;
	volatile uint8_t x239 = 1U;
	volatile int32_t t59 = INT32_MIN;

	t59 = (x237^(x238==(x239|x240)));

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x241 = -3344710;
	static volatile int16_t x242 = INT16_MIN;
	int8_t x243 = INT8_MAX;
	static volatile int64_t x244 = -6LL;
	int32_t t60 = 35;

	t60 = (x241^(x242==(x243|x244)));

	if (t60 != -3344710) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x246 = INT64_MAX;
	static int8_t x248 = 1;

	t61 = (x245^(x246==(x247|x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = INT32_MAX;
	int32_t x252 = 2373470;
	int32_t t62 = INT32_MAX;

	t62 = (x249^(x250==(x251|x252)));

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	int64_t x255 = INT64_MIN;
	volatile int32_t t63 = 1;

	t63 = (x253^(x254==(x255|x256)));

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = -1;
	int64_t x258 = INT64_MAX;
	volatile int32_t x260 = -123;
	volatile int32_t t64 = -8847389;

	t64 = (x257^(x258==(x259|x260)));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MIN;
	uint32_t x262 = 2673U;
	int8_t x264 = INT8_MIN;
	static int64_t t65 = INT64_MIN;

	t65 = (x261^(x262==(x263|x264)));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x265 = 2895544682350LLU;
	uint32_t x266 = 44750612U;
	int64_t x267 = INT64_MIN;
	volatile uint16_t x268 = UINT16_MAX;
	static uint64_t t66 = 31247LLU;

	t66 = (x265^(x266==(x267|x268)));

	if (t66 != 2895544682350LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 1146372U;
	int8_t x271 = -29;
	volatile uint32_t t67 = 13U;

	t67 = (x269^(x270==(x271|x272)));

	if (t67 != 1146372U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x273 = INT8_MAX;
	int64_t x274 = -123230269LL;
	volatile int8_t x275 = INT8_MAX;
	volatile int32_t t68 = 96441165;

	t68 = (x273^(x274==(x275|x276)));

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x277 = 440U;
	int16_t x278 = -1;
	static int64_t x279 = -547852782736471LL;
	volatile int32_t t69 = -135703;

	t69 = (x277^(x278==(x279|x280)));

	if (t69 != 440) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -1;
	static uint8_t x282 = 10U;
	int16_t x283 = -59;
	uint16_t x284 = 0U;
	volatile int32_t t70 = -2044;

	t70 = (x281^(x282==(x283|x284)));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x285 = INT32_MIN;
	int16_t x287 = INT16_MAX;
	int16_t x288 = 4;
	int32_t t71 = INT32_MIN;

	t71 = (x285^(x286==(x287|x288)));

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint32_t x290 = 67490U;
	int8_t x291 = INT8_MIN;
	uint64_t x292 = UINT64_MAX;
	volatile uint64_t t72 = 23246LLU;

	t72 = (x289^(x290==(x291|x292)));

	if (t72 != 9333868LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -62;
	int16_t x294 = -15;
	static uint16_t x295 = 7U;
	int64_t x296 = -1LL;
	volatile int32_t t73 = -26;

	t73 = (x293^(x294==(x295|x296)));

	if (t73 != -62) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -2;
	int64_t x298 = 1296337LL;
	volatile uint32_t x299 = 1U;
	uint32_t x300 = 4U;
	static volatile int32_t t74 = 509;

	t74 = (x297^(x298==(x299|x300)));

	if (t74 != -2) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -1LL;
	volatile int8_t x302 = INT8_MIN;
	volatile int8_t x303 = INT8_MIN;
	uint8_t x304 = 100U;
	int64_t t75 = 0LL;

	t75 = (x301^(x302==(x303|x304)));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x305 = 5059;
	volatile int16_t x306 = 67;
	volatile int32_t t76 = -11579;

	t76 = (x305^(x306==(x307|x308)));

	if (t76 != 5059) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x309 = -1LL;
	int64_t x310 = INT64_MIN;
	static int16_t x311 = -1;
	static int8_t x312 = INT8_MAX;
	static volatile int64_t t77 = 6599LL;

	t77 = (x309^(x310==(x311|x312)));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -1;
	static uint64_t x314 = 270189LLU;
	int8_t x315 = INT8_MIN;
	volatile int32_t t78 = -200901;

	t78 = (x313^(x314==(x315|x316)));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	static uint8_t x319 = UINT8_MAX;
	volatile int64_t t79 = INT64_MIN;

	t79 = (x317^(x318==(x319|x320)));

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 4279987LLU;
	int32_t x322 = INT32_MIN;
	volatile int16_t x323 = INT16_MAX;
	volatile int16_t x324 = -1;
	volatile uint64_t t80 = 9561LLU;

	t80 = (x321^(x322==(x323|x324)));

	if (t80 != 4279987LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x325 = 26061328031997LLU;
	int16_t x326 = INT16_MAX;
	uint64_t t81 = 36347051540LLU;

	t81 = (x325^(x326==(x327|x328)));

	if (t81 != 26061328031997LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x329 = 5576;
	uint8_t x331 = 0U;
	static uint64_t x332 = 279842375LLU;
	int32_t t82 = 716;

	t82 = (x329^(x330==(x331|x332)));

	if (t82 != 5576) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = 15124;
	volatile int32_t x334 = INT32_MAX;
	int8_t x335 = INT8_MAX;
	static volatile int8_t x336 = -1;
	volatile int32_t t83 = -3266;

	t83 = (x333^(x334==(x335|x336)));

	if (t83 != 15124) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x339 = INT8_MIN;
	int64_t x340 = INT64_MIN;

	t84 = (x337^(x338==(x339|x340)));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 496635407LLU;
	uint64_t x342 = 327731182763LLU;
	uint64_t x343 = 25870388286684293LLU;
	int16_t x344 = -1;
	static uint64_t t85 = 129532LLU;

	t85 = (x341^(x342==(x343|x344)));

	if (t85 != 496635407LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	uint8_t x346 = 7U;
	int16_t x347 = -1;
	uint16_t x348 = 2521U;
	int32_t t86 = -4790290;

	t86 = (x345^(x346==(x347|x348)));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = INT16_MAX;
	int8_t x351 = INT8_MIN;
	int16_t x352 = -1;
	int32_t t87 = -270206;

	t87 = (x349^(x350==(x351|x352)));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1LL;
	int16_t x354 = 1;
	uint16_t x355 = UINT16_MAX;
	static int32_t x356 = 234107808;
	static volatile int64_t t88 = 93533449581451LL;

	t88 = (x353^(x354==(x355|x356)));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x358 = UINT8_MAX;
	int32_t x359 = INT32_MIN;
	volatile uint8_t x360 = 6U;
	static int32_t t89 = INT32_MIN;

	t89 = (x357^(x358==(x359|x360)));

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = 441805;
	uint64_t x363 = 513884160717955LLU;
	int8_t x364 = -31;
	volatile int32_t t90 = -22;

	t90 = (x361^(x362==(x363|x364)));

	if (t90 != 441805) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x365 = INT8_MIN;
	static uint16_t x366 = UINT16_MAX;
	int32_t x367 = INT32_MIN;
	uint16_t x368 = 2135U;

	t91 = (x365^(x366==(x367|x368)));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x370 = -1;
	int8_t x371 = -1;
	volatile uint64_t t92 = 1LLU;

	t92 = (x369^(x370==(x371|x372)));

	if (t92 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x374 = -4289475501212830LL;
	int16_t x375 = INT16_MIN;

	t93 = (x373^(x374==(x375|x376)));

	if (t93 != 3) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x377 = 8234514732533513LL;
	uint64_t x378 = 95983LLU;
	int16_t x379 = -1;
	static int64_t x380 = -1LL;

	t94 = (x377^(x378==(x379|x380)));

	if (t94 != 8234514732533513LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 4LLU;
	int64_t x382 = -1LL;
	static uint64_t x383 = 6484339870457399LLU;
	static int16_t x384 = -21;
	volatile uint64_t t95 = 521182945LLU;

	t95 = (x381^(x382==(x383|x384)));

	if (t95 != 5LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x387 = UINT16_MAX;
	int32_t x388 = 0;

	t96 = (x385^(x386==(x387|x388)));

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x390 = INT16_MIN;
	int8_t x391 = -1;
	volatile int64_t x392 = INT64_MIN;

	t97 = (x389^(x390==(x391|x392)));

	if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x393 = 59;
	uint16_t x394 = 23379U;
	uint8_t x395 = UINT8_MAX;
	int32_t t98 = 227;

	t98 = (x393^(x394==(x395|x396)));

	if (t98 != 59) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 3679U;
	static volatile uint64_t x398 = 8LLU;
	int64_t x399 = INT64_MIN;
	int16_t x400 = -1;
	static int32_t t99 = -1;

	t99 = (x397^(x398==(x399|x400)));

	if (t99 != 3679) { NG(); } else { ; }
	
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

