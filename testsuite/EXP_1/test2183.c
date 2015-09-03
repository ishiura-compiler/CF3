#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x8 = UINT32_MAX;
int8_t x12 = INT8_MAX;
static volatile uint16_t x13 = UINT16_MAX;
uint8_t x18 = 5U;
volatile uint64_t x22 = 85145668273LLU;
int32_t x25 = 5136216;
volatile int32_t x26 = -1;
uint8_t x32 = 1U;
int16_t x33 = 9;
volatile uint32_t t8 = UINT32_MAX;
static int32_t x39 = -1;
volatile int32_t x42 = INT32_MIN;
volatile uint8_t x44 = UINT8_MAX;
static int8_t x45 = INT8_MIN;
int8_t x49 = -1;
int16_t x55 = 3678;
static int32_t x56 = 69155803;
static int8_t x58 = INT8_MIN;
int64_t t14 = INT64_MIN;
uint16_t x80 = UINT16_MAX;
static volatile int8_t x81 = INT8_MIN;
static int16_t x83 = -7867;
volatile int16_t x85 = -10330;
int32_t x87 = INT32_MIN;
static volatile uint16_t x92 = UINT16_MAX;
volatile int8_t x98 = INT8_MIN;
int16_t x100 = INT16_MAX;
int8_t x108 = INT8_MAX;
int16_t x109 = INT16_MIN;
static uint32_t x112 = 12744692U;
int64_t x113 = INT64_MIN;
volatile uint32_t x115 = 860U;
volatile uint32_t x118 = 44339704U;
uint16_t x122 = UINT16_MAX;
int16_t x128 = INT16_MIN;
volatile int8_t x136 = INT8_MAX;
volatile uint32_t t33 = 1U;
volatile uint64_t x138 = 4772294028618LLU;
volatile uint64_t t34 = 24915547435LLU;
int64_t x143 = -2389207237147LL;
volatile int64_t t35 = 9976012798516458LL;
int64_t x152 = INT64_MIN;
int64_t x155 = INT64_MAX;
static volatile int32_t x158 = -1;
int32_t x159 = 391;
int16_t x162 = -1;
volatile int64_t t40 = 441LL;
uint8_t x168 = 1U;
static int32_t x176 = INT32_MIN;
int32_t x181 = -1;
uint16_t x184 = 6322U;
volatile uint64_t t45 = 19738870295504827LLU;
int64_t x191 = INT64_MIN;
volatile int64_t x199 = INT64_MAX;
volatile int16_t x211 = INT16_MIN;
static uint32_t x217 = 2023U;
uint64_t x224 = UINT64_MAX;
volatile int32_t x225 = 47;
volatile uint16_t x227 = UINT16_MAX;
int32_t t56 = INT32_MAX;
static int64_t x232 = INT64_MIN;
int16_t x233 = INT16_MIN;
volatile uint32_t t58 = UINT32_MAX;
uint64_t x244 = 69289006957LLU;
volatile uint64_t x247 = UINT64_MAX;
volatile int64_t x248 = INT64_MAX;
uint16_t x252 = 5614U;
uint32_t t62 = UINT32_MAX;
uint8_t x254 = UINT8_MAX;
uint8_t x255 = UINT8_MAX;
int32_t x270 = -1;
uint32_t x274 = 26290U;
volatile int16_t x278 = INT16_MIN;
int8_t x285 = 2;
static int8_t x286 = 61;
static volatile int16_t x287 = 1;
static int64_t x288 = 5028908531LL;
int16_t x291 = INT16_MIN;
int64_t t72 = -6162066921LL;
int8_t x300 = INT8_MIN;
volatile uint8_t x304 = 0U;
static uint16_t x307 = 5U;
int16_t x312 = -1;
int8_t x319 = INT8_MAX;
volatile int16_t x320 = -1;
volatile uint32_t t82 = 29323340U;
uint64_t t85 = 1LLU;
int8_t x348 = -1;
static uint16_t x352 = UINT16_MAX;
int64_t t87 = 14669813315LL;
int8_t x354 = -1;
uint8_t x360 = 0U;
volatile uint16_t x362 = 3173U;
volatile int32_t t90 = -66944;
int8_t x366 = -1;
int32_t t91 = 31184;
int64_t x374 = INT64_MAX;
static volatile int8_t x376 = -6;
static int64_t x384 = -263884075314090699LL;
uint64_t t96 = UINT64_MAX;
static volatile uint64_t t97 = 4230745434036130LLU;
volatile int8_t x397 = INT8_MAX;
volatile int64_t x399 = INT64_MIN;


void f0(void) {
	int16_t x1 = -1;
	static volatile int64_t x2 = -1LL;
	static int32_t x3 = 4394;
	volatile uint64_t x4 = 11LLU;
	volatile uint64_t t0 = 17163978415679LLU;

	t0 = (((x1^x2)|x3)|x4);

	if (t0 != 4395LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	volatile uint32_t x6 = UINT32_MAX;
	int32_t x7 = INT32_MIN;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = (((x5^x6)|x7)|x8);

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 0;
	int16_t x10 = INT16_MAX;
	volatile uint16_t x11 = UINT16_MAX;
	volatile int32_t t2 = 910092486;

	t2 = (((x9^x10)|x11)|x12);

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x14 = -2754;
	uint8_t x15 = 52U;
	int8_t x16 = INT8_MIN;
	int32_t t3 = -1646235;

	t3 = (((x13^x14)|x15)|x16);

	if (t3 != -11) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 377LL;
	uint64_t x19 = 12041162520087932LLU;
	uint8_t x20 = 3U;
	uint64_t t4 = 411906464249LLU;

	t4 = (((x17^x18)|x19)|x20);

	if (t4 != 12041162520087935LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x21 = INT16_MIN;
	int16_t x23 = -1515;
	int32_t x24 = -1;
	uint64_t t5 = UINT64_MAX;

	t5 = (((x21^x22)|x23)|x24);

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x27 = UINT8_MAX;
	static int32_t x28 = INT32_MIN;
	volatile int32_t t6 = 35036448;

	t6 = (((x25^x26)|x27)|x28);

	if (t6 != -5136129) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	static volatile int16_t x30 = -304;
	volatile int32_t x31 = -1;
	int64_t t7 = -120978LL;

	t7 = (((x29^x30)|x31)|x32);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x34 = INT32_MIN;
	static int16_t x35 = 3;
	uint32_t x36 = UINT32_MAX;

	t8 = (((x33^x34)|x35)|x36);

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint8_t x37 = UINT8_MAX;
	uint64_t x38 = 116362464880408134LLU;
	int16_t x40 = -523;
	uint64_t t9 = UINT64_MAX;

	t9 = (((x37^x38)|x39)|x40);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = 1464373147201LL;
	int32_t x43 = 394370400;
	static int64_t t10 = 2130744250546LL;

	t10 = (((x41^x42)|x43)|x44);

	if (t10 != -1462571499521LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = INT8_MIN;
	static int64_t x47 = INT64_MAX;
	int32_t x48 = INT32_MAX;
	volatile int64_t t11 = INT64_MAX;

	t11 = (((x45^x46)|x47)|x48);

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = UINT32_MAX;
	static uint8_t x51 = UINT8_MAX;
	uint16_t x52 = 3U;
	volatile uint32_t t12 = 27278U;

	t12 = (((x49^x50)|x51)|x52);

	if (t12 != 255U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = UINT64_MAX;
	static volatile uint64_t x54 = 7079LLU;
	volatile uint64_t t13 = 10LLU;

	t13 = (((x53^x54)|x55)|x56);

	if (t13 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	int64_t x59 = INT64_MIN;
	int64_t x60 = INT64_MIN;

	t14 = (((x57^x58)|x59)|x60);

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x61 = 31U;
	static int64_t x62 = INT64_MIN;
	static int64_t x63 = INT64_MIN;
	int8_t x64 = -1;
	volatile int64_t t15 = 301LL;

	t15 = (((x61^x62)|x63)|x64);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	int8_t x66 = INT8_MIN;
	volatile int16_t x67 = INT16_MIN;
	int8_t x68 = -3;
	static volatile int32_t t16 = -51017439;

	t16 = (((x65^x66)|x67)|x68);

	if (t16 != -3) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = -1LL;
	uint64_t x70 = 51802122411791643LLU;
	int8_t x71 = -13;
	static uint64_t x72 = 83628272137944007LLU;
	volatile uint64_t t17 = 195273LLU;

	t17 = (((x69^x70)|x71)|x72);

	if (t17 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = INT32_MIN;
	volatile int64_t x74 = INT64_MAX;
	uint8_t x75 = UINT8_MAX;
	uint64_t x76 = 4LLU;
	uint64_t t18 = 4977262LLU;

	t18 = (((x73^x74)|x75)|x76);

	if (t18 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MAX;
	int64_t x78 = -1LL;
	volatile int32_t x79 = -187785321;
	int64_t t19 = 8706817122387LL;

	t19 = (((x77^x78)|x79)|x80);

	if (t19 != -187760641LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x82 = INT32_MAX;
	int8_t x84 = -1;
	int32_t t20 = -238;

	t20 = (((x81^x82)|x83)|x84);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x86 = INT8_MIN;
	int64_t x88 = INT64_MIN;
	int64_t t21 = 48273716685782331LL;

	t21 = (((x85^x86)|x87)|x88);

	if (t21 != -2147473370LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x89 = INT8_MIN;
	int16_t x90 = -1;
	int32_t x91 = 2105;
	int32_t t22 = 2;

	t22 = (((x89^x90)|x91)|x92);

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	uint8_t x94 = 4U;
	int64_t x95 = INT64_MAX;
	int64_t x96 = INT64_MAX;
	volatile int64_t t23 = 92855138LL;

	t23 = (((x93^x94)|x95)|x96);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = 0;
	uint8_t x99 = 4U;
	volatile int32_t t24 = -998324;

	t24 = (((x97^x98)|x99)|x100);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 1399539199821204779LLU;
	int16_t x102 = 1;
	uint32_t x103 = 1677273U;
	uint32_t x104 = 1062804516U;
	uint64_t t25 = 4689210564301403LLU;

	t25 = (((x101^x102)|x103)|x104);

	if (t25 != 1399539199976923135LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MAX;
	static int16_t x106 = INT16_MIN;
	int64_t x107 = INT64_MAX;
	int64_t t26 = -53051286LL;

	t26 = (((x105^x106)|x107)|x108);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x110 = 5LLU;
	int16_t x111 = -44;
	uint64_t t27 = 1048185746376510948LLU;

	t27 = (((x109^x110)|x111)|x112);

	if (t27 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x114 = INT16_MIN;
	int8_t x116 = -14;
	int64_t t28 = 811294LL;

	t28 = (((x113^x114)|x115)|x116);

	if (t28 != -2LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = 57;
	static uint8_t x119 = UINT8_MAX;
	uint64_t x120 = 73928794888399LLU;
	static uint64_t t29 = 85LLU;

	t29 = (((x117^x118)|x119)|x120);

	if (t29 != 73928796985855LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x121 = INT8_MIN;
	int16_t x123 = INT16_MIN;
	static int32_t x124 = INT32_MAX;
	volatile int32_t t30 = -1194803;

	t30 = (((x121^x122)|x123)|x124);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x125 = INT16_MIN;
	static volatile int8_t x126 = INT8_MIN;
	uint16_t x127 = 76U;
	volatile int32_t t31 = -1484;

	t31 = (((x125^x126)|x127)|x128);

	if (t31 != -52) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 57U;
	uint32_t x130 = 993U;
	static int16_t x131 = INT16_MIN;
	uint64_t x132 = 81617980688907496LLU;
	uint64_t t32 = 246563LLU;

	t32 = (((x129^x130)|x131)|x132);

	if (t32 != 81617980785410040LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 16U;
	uint8_t x134 = 2U;
	uint32_t x135 = 42951592U;

	t33 = (((x133^x134)|x135)|x136);

	if (t33 != 42951679U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 12U;
	int32_t x139 = INT32_MIN;
	uint8_t x140 = 47U;

	t34 = (((x137^x138)|x139)|x140);

	if (t34 != 18446744072147430767LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -5;
	uint32_t x142 = UINT32_MAX;
	int16_t x144 = INT16_MAX;

	t35 = (((x141^x142)|x143)|x144);

	if (t35 != -2389207220225LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 0U;
	int32_t x146 = -1;
	volatile uint64_t x147 = 1LLU;
	int32_t x148 = 6;
	volatile uint64_t t36 = UINT64_MAX;

	t36 = (((x145^x146)|x147)|x148);

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	int16_t x150 = INT16_MAX;
	int16_t x151 = -1;
	int64_t t37 = -2104380816730919714LL;

	t37 = (((x149^x150)|x151)|x152);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	int8_t x154 = 0;
	int64_t x156 = -18294339LL;
	volatile int64_t t38 = -19645138LL;

	t38 = (((x153^x154)|x155)|x156);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MAX;
	static int32_t x160 = 1089;
	volatile int32_t t39 = -6786072;

	t39 = (((x157^x158)|x159)|x160);

	if (t39 != -2147482169) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	volatile int32_t x163 = INT32_MIN;
	volatile int64_t x164 = -1LL;

	t40 = (((x161^x162)|x163)|x164);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	int64_t x166 = INT64_MIN;
	int64_t x167 = INT64_MIN;
	volatile int64_t t41 = 105880621909452LL;

	t41 = (((x165^x166)|x167)|x168);

	if (t41 != -32767LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 1599U;
	static int32_t x170 = INT32_MIN;
	int32_t x171 = INT32_MIN;
	uint8_t x172 = 0U;
	int32_t t42 = -12;

	t42 = (((x169^x170)|x171)|x172);

	if (t42 != -2147482049) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = 0;
	int32_t x174 = 6164348;
	uint16_t x175 = 9907U;
	volatile int32_t t43 = 29239602;

	t43 = (((x173^x174)|x175)|x176);

	if (t43 != -2141310977) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	volatile int8_t x178 = INT8_MIN;
	int8_t x179 = INT8_MIN;
	int8_t x180 = INT8_MIN;
	int32_t t44 = -8;

	t44 = (((x177^x178)|x179)|x180);

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x182 = UINT32_MAX;
	static uint64_t x183 = 1067531644931017LLU;

	t45 = (((x181^x182)|x183)|x184);

	if (t45 != 1067531644935163LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x185 = 7U;
	uint16_t x186 = UINT16_MAX;
	uint16_t x187 = UINT16_MAX;
	static int32_t x188 = INT32_MAX;
	volatile int32_t t46 = INT32_MAX;

	t46 = (((x185^x186)|x187)|x188);

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = -1;
	int64_t x190 = INT64_MAX;
	int32_t x192 = INT32_MIN;
	volatile int64_t t47 = -1LL;

	t47 = (((x189^x190)|x191)|x192);

	if (t47 != -2147483648LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x193 = INT32_MIN;
	static int64_t x194 = INT64_MAX;
	volatile uint64_t x195 = 6651LLU;
	uint16_t x196 = 8U;
	uint64_t t48 = 635800799275974LLU;

	t48 = (((x193^x194)|x195)|x196);

	if (t48 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MAX;
	int64_t x198 = -1LL;
	static int8_t x200 = -3;
	static int64_t t49 = -13LL;

	t49 = (((x197^x198)|x199)|x200);

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = 463;
	int16_t x202 = 1;
	static int16_t x203 = INT16_MAX;
	int32_t x204 = INT32_MIN;
	volatile int32_t t50 = 7;

	t50 = (((x201^x202)|x203)|x204);

	if (t50 != -2147450881) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = 122;
	uint8_t x206 = 0U;
	uint32_t x207 = UINT32_MAX;
	static int64_t x208 = INT64_MIN;
	volatile int64_t t51 = -495700LL;

	t51 = (((x205^x206)|x207)|x208);

	if (t51 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x209 = -1;
	static volatile int32_t x210 = INT32_MAX;
	int64_t x212 = -1LL;
	static volatile int64_t t52 = -2069309LL;

	t52 = (((x209^x210)|x211)|x212);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	static int16_t x214 = INT16_MAX;
	int32_t x215 = -45887;
	uint32_t x216 = 579012U;
	static volatile uint32_t t53 = 79U;

	t53 = (((x213^x214)|x215)|x216);

	if (t53 != 4294958533U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x218 = INT32_MAX;
	int32_t x219 = INT32_MAX;
	static int64_t x220 = INT64_MAX;
	volatile int64_t t54 = INT64_MAX;

	t54 = (((x217^x218)|x219)|x220);

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 86U;
	static int64_t x222 = -2320773LL;
	volatile int32_t x223 = 3111;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = (((x221^x222)|x223)|x224);

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x226 = INT8_MAX;
	int32_t x228 = INT32_MAX;

	t56 = (((x225^x226)|x227)|x228);

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = -39597546LL;
	int8_t x230 = INT8_MIN;
	int32_t x231 = -1;
	volatile int64_t t57 = -1022LL;

	t57 = (((x229^x230)|x231)|x232);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x234 = INT32_MAX;
	static uint32_t x235 = 44801193U;
	int32_t x236 = INT32_MAX;

	t58 = (((x233^x234)|x235)|x236);

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MAX;
	static uint64_t x238 = UINT64_MAX;
	int64_t x239 = INT64_MAX;
	uint32_t x240 = 923705821U;
	uint64_t t59 = UINT64_MAX;

	t59 = (((x237^x238)|x239)|x240);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -1;
	int16_t x242 = -1;
	int8_t x243 = INT8_MIN;
	volatile uint64_t t60 = 13976391202167LLU;

	t60 = (((x241^x242)|x243)|x244);

	if (t60 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x245 = 25U;
	static int8_t x246 = INT8_MAX;
	uint64_t t61 = UINT64_MAX;

	t61 = (((x245^x246)|x247)|x248);

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 5983U;
	int8_t x250 = 0;
	uint32_t x251 = UINT32_MAX;

	t62 = (((x249^x250)|x251)|x252);

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -1LL;
	uint64_t x256 = 4024613429LLU;
	uint64_t t63 = UINT64_MAX;

	t63 = (((x253^x254)|x255)|x256);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	uint8_t x258 = 1U;
	int32_t x259 = -1;
	static int32_t x260 = -9997045;
	int32_t t64 = 155;

	t64 = (((x257^x258)|x259)|x260);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = 637;
	int64_t x262 = 65897LL;
	volatile uint64_t x263 = 12467821875599LLU;
	volatile int16_t x264 = INT16_MIN;
	uint64_t t65 = 26729620727LLU;

	t65 = (((x261^x262)|x263)|x264);

	if (t65 != 18446744073709523871LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MAX;
	static int32_t x266 = -6295;
	uint8_t x267 = UINT8_MAX;
	int16_t x268 = -1;
	volatile int64_t t66 = -14791739558LL;

	t66 = (((x265^x266)|x267)|x268);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -1;
	static int16_t x271 = INT16_MAX;
	volatile int32_t x272 = -1;
	volatile int32_t t67 = 2655;

	t67 = (((x269^x270)|x271)|x272);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MIN;
	static volatile int32_t x275 = 129;
	uint8_t x276 = 2U;
	uint32_t t68 = 80610U;

	t68 = (((x273^x274)|x275)|x276);

	if (t68 != 2147509939U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -82738357LL;
	volatile uint64_t x279 = UINT64_MAX;
	uint8_t x280 = 0U;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = (((x277^x278)|x279)|x280);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x281 = UINT64_MAX;
	uint64_t x282 = UINT64_MAX;
	int16_t x283 = -1;
	uint64_t x284 = 408013LLU;
	uint64_t t70 = UINT64_MAX;

	t70 = (((x281^x282)|x283)|x284);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t t71 = -190886408706100LL;

	t71 = (((x285^x286)|x287)|x288);

	if (t71 != 5028908543LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	static int64_t x290 = -54LL;
	volatile int16_t x292 = -1;

	t72 = (((x289^x290)|x291)|x292);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MAX;
	uint16_t x294 = UINT16_MAX;
	uint8_t x295 = 0U;
	volatile int32_t x296 = -1;
	int64_t t73 = 625299LL;

	t73 = (((x293^x294)|x295)|x296);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -1862044;
	int32_t x298 = INT32_MAX;
	static uint8_t x299 = UINT8_MAX;
	int32_t t74 = -457219347;

	t74 = (((x297^x298)|x299)|x300);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MAX;
	volatile int64_t x302 = INT64_MIN;
	volatile int64_t x303 = INT64_MIN;
	int64_t t75 = -153036698LL;

	t75 = (((x301^x302)|x303)|x304);

	if (t75 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = 33493821LLU;
	static volatile int16_t x306 = 11970;
	int8_t x308 = -1;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = (((x305^x306)|x307)|x308);

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x309 = UINT8_MAX;
	int64_t x310 = INT64_MIN;
	int8_t x311 = 15;
	int64_t t77 = 92933217971365LL;

	t77 = (((x309^x310)|x311)|x312);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	int8_t x314 = INT8_MIN;
	int32_t x315 = -1;
	uint64_t x316 = 11LLU;
	uint64_t t78 = UINT64_MAX;

	t78 = (((x313^x314)|x315)|x316);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 4696LLU;
	uint32_t x318 = 30201240U;
	uint64_t t79 = UINT64_MAX;

	t79 = (((x317^x318)|x319)|x320);

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -1;
	uint8_t x322 = 54U;
	static int32_t x323 = -100313;
	uint16_t x324 = 344U;
	int32_t t80 = -235695531;

	t80 = (((x321^x322)|x323)|x324);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 309813918U;
	int16_t x326 = INT16_MIN;
	uint32_t x327 = 2568320U;
	uint32_t x328 = UINT32_MAX;
	static uint32_t t81 = UINT32_MAX;

	t81 = (((x325^x326)|x327)|x328);

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = 18071;
	uint32_t x330 = 442U;
	uint16_t x331 = 54U;
	int8_t x332 = 12;

	t82 = (((x329^x330)|x331)|x332);

	if (t82 != 18239U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = INT64_MIN;
	static int16_t x334 = -1;
	int32_t x335 = -1;
	int8_t x336 = INT8_MIN;
	int64_t t83 = 1551011437848149238LL;

	t83 = (((x333^x334)|x335)|x336);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 17736LLU;
	int16_t x338 = 1213;
	int16_t x339 = 12;
	static int16_t x340 = 6304;
	uint64_t t84 = 7496474LLU;

	t84 = (((x337^x338)|x339)|x340);

	if (t84 != 23037LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x341 = -83LL;
	int32_t x342 = 744;
	static volatile int8_t x343 = INT8_MIN;
	uint64_t x344 = 7456498600LLU;

	t85 = (((x341^x342)|x343)|x344);

	if (t85 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MAX;
	static uint16_t x346 = UINT16_MAX;
	volatile int32_t x347 = INT32_MIN;
	int32_t t86 = 408;

	t86 = (((x345^x346)|x347)|x348);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	uint32_t x350 = UINT32_MAX;
	uint32_t x351 = 2U;

	t87 = (((x349^x350)|x351)|x352);

	if (t87 != -4294901761LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -142757;
	volatile int8_t x355 = INT8_MIN;
	int64_t x356 = -1LL;
	static int64_t t88 = -254065827393133LL;

	t88 = (((x353^x354)|x355)|x356);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = 46;
	int8_t x358 = -1;
	int8_t x359 = INT8_MIN;
	int32_t t89 = 80747;

	t89 = (((x357^x358)|x359)|x360);

	if (t89 != -47) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 309U;
	int16_t x363 = INT16_MIN;
	volatile int8_t x364 = INT8_MAX;

	t90 = (((x361^x362)|x363)|x364);

	if (t90 != -29313) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x365 = INT16_MIN;
	static volatile int32_t x367 = INT32_MIN;
	int16_t x368 = INT16_MAX;

	t91 = (((x365^x366)|x367)|x368);

	if (t91 != -2147450881) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	static int16_t x370 = INT16_MIN;
	volatile int16_t x371 = -1;
	int32_t x372 = INT32_MIN;
	int32_t t92 = -769217;

	t92 = (((x369^x370)|x371)|x372);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x373 = 0U;
	int16_t x375 = -1;
	volatile int64_t t93 = 5072207613129LL;

	t93 = (((x373^x374)|x375)|x376);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = UINT16_MAX;
	int64_t x378 = INT64_MIN;
	static int8_t x379 = INT8_MIN;
	static int32_t x380 = INT32_MIN;
	int64_t t94 = -46644732925043730LL;

	t94 = (((x377^x378)|x379)|x380);

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 0U;
	uint8_t x382 = UINT8_MAX;
	uint16_t x383 = UINT16_MAX;
	volatile int64_t t95 = 468615360368588LL;

	t95 = (((x381^x382)|x383)|x384);

	if (t95 != -263884075314053121LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MAX;
	int32_t x386 = INT32_MIN;
	volatile uint64_t x387 = 3LLU;
	uint16_t x388 = 848U;

	t96 = (((x385^x386)|x387)|x388);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x389 = UINT64_MAX;
	uint32_t x390 = 260393275U;
	uint8_t x391 = 56U;
	uint32_t x392 = 3U;

	t97 = (((x389^x390)|x391)|x392);

	if (t97 != 18446744073449158399LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 63834780U;
	int16_t x394 = INT16_MIN;
	volatile uint16_t x395 = 1U;
	static uint8_t x396 = UINT8_MAX;
	uint32_t t98 = 577301U;

	t98 = (((x393^x394)|x395)|x396);

	if (t98 != 4231105279U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x398 = 7U;
	int32_t x400 = -116762597;
	static int64_t t99 = 446866LL;

	t99 = (((x397^x398)|x399)|x400);

	if (t99 != -116762501LL) { NG(); } else { ; }
	
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

