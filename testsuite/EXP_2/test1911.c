#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x11 = 953107U;
int8_t x13 = INT8_MIN;
int8_t x15 = INT8_MIN;
uint8_t x18 = 9U;
int64_t t4 = INT64_MIN;
int32_t x24 = INT32_MIN;
int32_t x27 = -1509;
int64_t x28 = -1LL;
int8_t x30 = 0;
int32_t x31 = -1;
static volatile int64_t t9 = 2LL;
int16_t x42 = INT16_MIN;
uint32_t x43 = 1U;
static int16_t x45 = INT16_MIN;
uint32_t x51 = 165735U;
volatile int32_t t16 = -97832;
int32_t x69 = 21;
static int32_t x75 = INT32_MAX;
int32_t x77 = 49;
int16_t x78 = INT16_MIN;
volatile int8_t x80 = 2;
static int64_t t19 = -1LL;
int16_t x89 = -148;
static int8_t x91 = INT8_MIN;
volatile int32_t x97 = INT32_MIN;
int32_t t24 = 4;
int16_t x103 = INT16_MAX;
volatile int32_t t26 = -5353;
uint16_t x112 = 2U;
uint64_t x113 = 0LLU;
int8_t x115 = 45;
static volatile uint64_t t28 = UINT64_MAX;
int32_t t29 = 5721;
uint16_t x127 = 19U;
uint16_t x128 = 272U;
int64_t x130 = INT64_MIN;
int32_t x131 = INT32_MAX;
volatile int64_t x134 = INT64_MIN;
int32_t x136 = INT32_MIN;
static volatile int64_t t33 = -1LL;
int16_t x138 = 13255;
uint64_t t34 = 1394LLU;
static volatile int8_t x147 = -1;
int64_t x151 = -1LL;
int64_t t38 = 15117220LL;
volatile uint8_t x157 = 2U;
uint8_t x162 = 45U;
int8_t x164 = INT8_MAX;
static int32_t t40 = 77;
static volatile int64_t t41 = 6066LL;
uint32_t x169 = UINT32_MAX;
uint32_t x171 = 2U;
int8_t x172 = -1;
int64_t x179 = INT64_MAX;
volatile int64_t t44 = 37168296LL;
uint16_t x189 = UINT16_MAX;
static int16_t x195 = INT16_MIN;
int64_t t48 = -211201LL;
uint16_t x199 = UINT16_MAX;
uint64_t x201 = 25810303454LLU;
static uint64_t x204 = 180198092207481LLU;
static int32_t t52 = 2;
uint16_t x213 = 716U;
volatile int16_t x224 = INT16_MIN;
uint64_t x225 = UINT64_MAX;
volatile int32_t x232 = INT32_MIN;
uint16_t x241 = 2U;
volatile int8_t x242 = INT8_MIN;
static volatile int32_t t60 = -211086;
uint16_t x257 = 60U;
volatile int16_t x260 = 2;
int16_t x267 = -1;
static volatile int16_t x271 = INT16_MIN;
int8_t x273 = INT8_MIN;
int64_t x274 = -1LL;
int64_t t68 = 88765332618011117LL;
volatile int8_t x278 = INT8_MIN;
volatile int16_t x295 = 1;
uint16_t x296 = 3063U;
int32_t t73 = 249266;
int16_t x297 = INT16_MAX;
int16_t x298 = INT16_MIN;
volatile int64_t t74 = 21636970053LL;
static volatile uint32_t x305 = 1U;
uint8_t x308 = 44U;
int16_t x321 = 8;
uint64_t x327 = UINT64_MAX;
int8_t x329 = -1;
int16_t x336 = INT16_MIN;
static volatile uint64_t x338 = 2693LLU;
volatile int32_t x352 = INT32_MIN;
int32_t t87 = -3177;
int64_t x358 = INT64_MAX;
volatile int64_t t89 = -68744190351830683LL;
int8_t x361 = -1;
volatile int32_t t90 = -7;
uint32_t x366 = 713319U;
uint16_t x368 = 1U;
uint32_t x383 = UINT32_MAX;
static int64_t x385 = 2561885517LL;
uint64_t x391 = 2LLU;


void f0(void) {
	static uint64_t x1 = 31889609342LLU;
	uint8_t x2 = UINT8_MAX;
	uint16_t x3 = 238U;
	static int32_t x4 = -1;
	uint64_t t0 = 696792112073751LLU;

	t0 = ((x1/(x2|x3))^x4);

	if (t0 != 18446744073584494324LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	uint64_t x6 = 90046463LLU;
	int64_t x7 = INT64_MIN;
	int64_t x8 = 7330222LL;
	volatile uint64_t t1 = 27LLU;

	t1 = ((x5/(x6|x7))^x8);

	if (t1 != 7330222LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	uint16_t x10 = 640U;
	int32_t x12 = INT32_MIN;
	uint32_t t2 = 4064U;

	t2 = ((x9/(x10|x11))^x12);

	if (t2 != 2147488153U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = 0U;
	int32_t x16 = 13;
	volatile int32_t t3 = 243214;

	t3 = ((x13/(x14|x15))^x16);

	if (t3 != 12) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 18U;
	uint8_t x19 = UINT8_MAX;
	int64_t x20 = INT64_MIN;

	t4 = ((x17/(x18|x19))^x20);

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = 0;
	volatile uint16_t x22 = UINT16_MAX;
	static int64_t x23 = INT64_MAX;
	int64_t t5 = 1096315922775658LL;

	t5 = ((x21/(x22|x23))^x24);

	if (t5 != -2147483648LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MIN;
	static volatile uint32_t x26 = UINT32_MAX;
	int64_t t6 = -783258006LL;

	t6 = ((x25/(x26|x27))^x28);

	if (t6 != 2147483647LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 10201378172710LL;
	int32_t x32 = INT32_MAX;
	static volatile int64_t t7 = 0LL;

	t7 = ((x29/(x30|x31))^x32);

	if (t7 != -10201863966939LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = 37;
	static int64_t x34 = INT64_MIN;
	uint64_t x35 = 13602193672753LLU;
	int16_t x36 = INT16_MIN;
	static volatile uint64_t t8 = 663457002136LLU;

	t8 = ((x33/(x34|x35))^x36);

	if (t8 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int16_t x38 = INT16_MIN;
	volatile int64_t x39 = INT64_MIN;
	int16_t x40 = INT16_MAX;

	t9 = ((x37/(x38|x39))^x40);

	if (t9 != 32766LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	int16_t x44 = INT16_MIN;
	uint32_t t10 = 1170699U;

	t10 = ((x41/(x42|x43))^x44);

	if (t10 != 4294934528U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = INT8_MAX;
	int64_t x47 = -1LL;
	int64_t x48 = INT64_MAX;
	int64_t t11 = -7025040LL;

	t11 = ((x45/(x46|x47))^x48);

	if (t11 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	volatile int32_t x50 = INT32_MIN;
	int32_t x52 = -1;
	volatile uint32_t t12 = UINT32_MAX;

	t12 = ((x49/(x50|x51))^x52);

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = INT8_MAX;
	static uint16_t x54 = 206U;
	volatile int64_t x55 = INT64_MAX;
	int32_t x56 = INT32_MAX;
	volatile int64_t t13 = 17502786LL;

	t13 = ((x53/(x54|x55))^x56);

	if (t13 != 2147483647LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = 1251U;
	int64_t x58 = INT64_MIN;
	int16_t x59 = -1;
	int8_t x60 = INT8_MIN;
	int64_t t14 = -406457943711925LL;

	t14 = ((x57/(x58|x59))^x60);

	if (t14 != 1181LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	volatile int16_t x62 = INT16_MAX;
	int8_t x63 = 0;
	int64_t x64 = INT64_MAX;
	int64_t t15 = 744646382LL;

	t15 = ((x61/(x62|x63))^x64);

	if (t15 != -9223090553287868409LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	volatile int16_t x66 = INT16_MAX;
	uint16_t x67 = 1U;
	int8_t x68 = INT8_MIN;

	t16 = ((x65/(x66|x67))^x68);

	if (t16 != -126) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x70 = UINT16_MAX;
	volatile int64_t x71 = INT64_MAX;
	uint16_t x72 = 1539U;
	int64_t t17 = -790LL;

	t17 = ((x69/(x70|x71))^x72);

	if (t17 != 1539LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	static int16_t x74 = -1;
	uint16_t x76 = UINT16_MAX;
	int64_t t18 = -144285LL;

	t18 = ((x73/(x74|x75))^x76);

	if (t18 != 65534LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x79 = -70168542093531LL;

	t19 = ((x77/(x78|x79))^x80);

	if (t19 != 2LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -11;
	int8_t x82 = -1;
	uint32_t x83 = 13U;
	volatile int16_t x84 = INT16_MIN;
	volatile uint32_t t20 = 13001101U;

	t20 = ((x81/(x82|x83))^x84);

	if (t20 != 4294934528U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	static int8_t x86 = 2;
	int8_t x87 = INT8_MIN;
	int32_t x88 = INT32_MAX;
	int32_t t21 = -6122;

	t21 = ((x85/(x86|x87))^x88);

	if (t21 != 2147483387) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x90 = INT16_MAX;
	int16_t x92 = -3014;
	int32_t t22 = 33;

	t22 = ((x89/(x90|x91))^x92);

	if (t22 != -2898) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MAX;
	int32_t x94 = INT32_MAX;
	static int32_t x95 = INT32_MIN;
	volatile int16_t x96 = INT16_MIN;
	volatile int32_t t23 = -4491119;

	t23 = ((x93/(x94|x95))^x96);

	if (t23 != 2147450881) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x98 = 3;
	volatile int16_t x99 = INT16_MIN;
	uint8_t x100 = 4U;

	t24 = ((x97/(x98|x99))^x100);

	if (t24 != 65538) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x101 = -15;
	uint64_t x102 = 78741156349583371LLU;
	volatile int64_t x104 = -4322608692748288LL;
	uint64_t t25 = 15650336470346360LLU;

	t25 = ((x101/(x102|x103))^x104);

	if (t25 != 18442421465016803562LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -476;
	volatile int16_t x106 = 1;
	volatile int8_t x107 = 32;
	int16_t x108 = -154;

	t26 = ((x105/(x106|x107))^x108);

	if (t26 != 148) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MAX;
	int8_t x110 = INT8_MAX;
	uint16_t x111 = 5464U;
	static volatile int64_t t27 = 3700325805705845999LL;

	t27 = ((x109/(x110|x111))^x112);

	if (t27 != 1676062518054658LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = 1LL;
	static uint64_t x116 = UINT64_MAX;

	t28 = ((x113/(x114|x115))^x116);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x117 = -8;
	int32_t x118 = -31;
	volatile int32_t x119 = -19;
	uint8_t x120 = 19U;

	t29 = ((x117/(x118|x119))^x120);

	if (t29 != 19) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = INT16_MIN;
	int64_t x122 = -822792148154LL;
	static int64_t x123 = 85LL;
	int16_t x124 = INT16_MIN;
	static volatile int64_t t30 = 338988880713629LL;

	t30 = ((x121/(x122|x123))^x124);

	if (t30 != -32768LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x125 = 1U;
	volatile int16_t x126 = -1;
	volatile int32_t t31 = -2;

	t31 = ((x125/(x126|x127))^x128);

	if (t31 != -273) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = 312;
	int8_t x132 = INT8_MIN;
	volatile int64_t t32 = 2035082040298290184LL;

	t32 = ((x129/(x130|x131))^x132);

	if (t32 != -128LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 34651835U;
	int32_t x135 = -1;

	t33 = ((x133/(x134|x135))^x136);

	if (t33 != 2112831813LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -10;
	uint64_t x139 = 172621319200642LLU;
	uint16_t x140 = 5622U;

	t34 = ((x137/(x138|x139))^x140);

	if (t34 != 111768LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -59;
	uint16_t x142 = 712U;
	uint16_t x143 = 20U;
	uint16_t x144 = UINT16_MAX;
	int32_t t35 = -7;

	t35 = ((x141/(x142|x143))^x144);

	if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = INT64_MAX;
	uint64_t x146 = UINT64_MAX;
	int16_t x148 = INT16_MIN;
	volatile uint64_t t36 = 179LLU;

	t36 = ((x145/(x146|x147))^x148);

	if (t36 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = INT8_MAX;
	int8_t x150 = INT8_MAX;
	volatile uint16_t x152 = UINT16_MAX;
	volatile int64_t t37 = -80LL;

	t37 = ((x149/(x150|x151))^x152);

	if (t37 != -65410LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	static int64_t x154 = INT64_MIN;
	static volatile int32_t x155 = INT32_MAX;
	uint8_t x156 = 1U;

	t38 = ((x153/(x154|x155))^x156);

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x158 = 150898;
	uint32_t x159 = 1418042799U;
	int64_t x160 = -2392LL;
	int64_t t39 = -4658836652LL;

	t39 = ((x157/(x158|x159))^x160);

	if (t39 != -2392LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x161 = 6;
	int16_t x163 = 57;

	t40 = ((x161/(x162|x163))^x164);

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MAX;
	static int64_t x166 = -1LL;
	uint8_t x167 = 4U;
	static int64_t x168 = INT64_MIN;

	t41 = ((x165/(x166|x167))^x168);

	if (t41 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x170 = -1;
	uint32_t t42 = 159371059U;

	t42 = ((x169/(x170|x171))^x172);

	if (t42 != 4294967294U) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = INT32_MIN;
	int16_t x174 = INT16_MIN;
	int64_t x175 = 622695743LL;
	volatile int16_t x176 = INT16_MAX;
	volatile int64_t t43 = -4LL;

	t43 = ((x173/(x174|x175))^x176);

	if (t43 != 85261LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = 0;
	volatile int32_t x178 = 7345024;
	int32_t x180 = -38;

	t44 = ((x177/(x178|x179))^x180);

	if (t44 != -38LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	int16_t x182 = 1788;
	static int16_t x183 = INT16_MIN;
	int32_t x184 = INT32_MIN;
	static volatile int32_t t45 = -40122;

	t45 = ((x181/(x182|x183))^x184);

	if (t45 != -2147414330) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 2U;
	int32_t x186 = -1;
	int32_t x187 = INT32_MIN;
	int8_t x188 = 0;
	static volatile int32_t t46 = -71624973;

	t46 = ((x185/(x186|x187))^x188);

	if (t46 != -2) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = -1;
	static volatile int64_t x191 = 377642LL;
	uint8_t x192 = 0U;
	static volatile int64_t t47 = 58370231LL;

	t47 = ((x189/(x190|x191))^x192);

	if (t47 != -65535LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -4873291006280760LL;
	int8_t x194 = -3;
	static volatile int16_t x196 = INT16_MIN;

	t48 = ((x193/(x194|x195))^x196);

	if (t48 != -1624430335458968LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 109575185984318944LLU;
	uint16_t x198 = 551U;
	int64_t x200 = -1109LL;
	static uint64_t t49 = 63129649659175036LLU;

	t49 = ((x197/(x198|x199))^x200);

	if (t49 != 18446742401699388406LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x202 = UINT32_MAX;
	uint8_t x203 = 56U;
	uint64_t t50 = 101101054891731LLU;

	t50 = ((x201/(x202|x203))^x204);

	if (t50 != 180198092207487LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = 0;
	int16_t x206 = -1;
	static volatile uint32_t x207 = 185420U;
	uint32_t x208 = 11U;
	uint32_t t51 = 3577U;

	t51 = ((x205/(x206|x207))^x208);

	if (t51 != 11U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -15;
	int32_t x210 = -1952;
	int16_t x211 = INT16_MIN;
	static int16_t x212 = -1;

	t52 = ((x209/(x210|x211))^x212);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x214 = -40;
	int64_t x215 = 126614065129LL;
	volatile int16_t x216 = -29;
	volatile int64_t t53 = 1815590955LL;

	t53 = ((x213/(x214|x215))^x216);

	if (t53 != 121LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = INT8_MIN;
	uint64_t x218 = 2LLU;
	volatile int32_t x219 = -214131567;
	int16_t x220 = -1;
	uint64_t t54 = 44718574539LLU;

	t54 = ((x217/(x218|x219))^x220);

	if (t54 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 13U;
	static int16_t x222 = -2107;
	int8_t x223 = -1;
	volatile int32_t t55 = 3276963;

	t55 = ((x221/(x222|x223))^x224);

	if (t55 != 32755) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x226 = INT64_MAX;
	uint64_t x227 = UINT64_MAX;
	int16_t x228 = 1322;
	volatile uint64_t t56 = 9894927098LLU;

	t56 = ((x225/(x226|x227))^x228);

	if (t56 != 1323LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = 1U;
	static int32_t x230 = INT32_MIN;
	volatile uint16_t x231 = UINT16_MAX;
	uint32_t t57 = 1U;

	t57 = ((x229/(x230|x231))^x232);

	if (t57 != 2147483648U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	static uint16_t x234 = 61U;
	static volatile int64_t x235 = INT64_MIN;
	uint16_t x236 = 27044U;
	volatile int64_t t58 = 3778463219340013398LL;

	t58 = ((x233/(x234|x235))^x236);

	if (t58 != 27044LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = INT16_MIN;
	int32_t x238 = -1;
	int64_t x239 = INT64_MIN;
	volatile int16_t x240 = INT16_MAX;
	volatile int64_t t59 = 120167188445900LL;

	t59 = ((x237/(x238|x239))^x240);

	if (t59 != 65535LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x243 = -1;
	int8_t x244 = INT8_MAX;

	t60 = ((x241/(x242|x243))^x244);

	if (t60 != -127) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = 1970;
	uint64_t x246 = UINT64_MAX;
	static uint16_t x247 = 4505U;
	int8_t x248 = -21;
	static uint64_t t61 = 84039763561LLU;

	t61 = ((x245/(x246|x247))^x248);

	if (t61 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MAX;
	uint32_t x250 = UINT32_MAX;
	int64_t x251 = INT64_MAX;
	volatile int64_t x252 = -15844819390889LL;
	int64_t t62 = 55197700LL;

	t62 = ((x249/(x250|x251))^x252);

	if (t62 != -15844819390890LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 2745LLU;
	int64_t x254 = 6415099573271LL;
	int16_t x255 = 300;
	int32_t x256 = -1;
	uint64_t t63 = UINT64_MAX;

	t63 = ((x253/(x254|x255))^x256);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x258 = 13U;
	int16_t x259 = -294;
	volatile int32_t t64 = 15;

	t64 = ((x257/(x258|x259))^x260);

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 2830U;
	int8_t x262 = INT8_MIN;
	volatile int16_t x263 = 399;
	volatile int64_t x264 = INT64_MIN;
	int64_t t65 = -9780865667490LL;

	t65 = ((x261/(x262|x263))^x264);

	if (t65 != 9223372036854775783LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x265 = 1;
	volatile int16_t x266 = -1;
	uint16_t x268 = 11431U;
	volatile int32_t t66 = 243737084;

	t66 = ((x265/(x266|x267))^x268);

	if (t66 != -11432) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x269 = 30229U;
	static uint8_t x270 = UINT8_MAX;
	uint64_t x272 = 3475LLU;
	uint64_t t67 = 2064989249LLU;

	t67 = ((x269/(x270|x271))^x272);

	if (t67 != 3475LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x275 = 10U;
	int16_t x276 = INT16_MAX;

	t68 = ((x273/(x274|x275))^x276);

	if (t68 != 32639LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	int16_t x279 = INT16_MAX;
	volatile int32_t x280 = -28852611;
	volatile int32_t t69 = -11039;

	t69 = ((x277/(x278|x279))^x280);

	if (t69 != -28852483) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x281 = -183;
	int8_t x282 = INT8_MIN;
	int32_t x283 = 2661211;
	volatile int16_t x284 = INT16_MIN;
	volatile int32_t t70 = 7390;

	t70 = ((x281/(x282|x283))^x284);

	if (t70 != -32764) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x285 = 117U;
	volatile uint8_t x286 = 2U;
	int8_t x287 = -1;
	int64_t x288 = -1LL;
	volatile int64_t t71 = -1LL;

	t71 = ((x285/(x286|x287))^x288);

	if (t71 != 116LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x289 = UINT64_MAX;
	volatile uint16_t x290 = UINT16_MAX;
	int16_t x291 = 345;
	int32_t x292 = -3741;
	uint64_t t72 = 13491775885142LLU;

	t72 = ((x289/(x290|x291))^x292);

	if (t72 != 18446462594437804386LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = UINT8_MAX;
	uint8_t x294 = 10U;

	t73 = ((x293/(x294|x295))^x296);

	if (t73 != 3040) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x299 = INT64_MIN;
	static volatile uint16_t x300 = 2749U;

	t74 = ((x297/(x298|x299))^x300);

	if (t74 != 2749LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x301 = UINT64_MAX;
	int16_t x302 = 10145;
	int64_t x303 = 2785485410LL;
	int64_t x304 = INT64_MIN;
	volatile uint64_t t75 = 11371850147043LLU;

	t75 = ((x301/(x302|x303))^x304);

	if (t75 != 9223372043477224691LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x306 = 15;
	int32_t x307 = -1;
	static uint32_t t76 = 5694U;

	t76 = ((x305/(x306|x307))^x308);

	if (t76 != 44U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = UINT64_MAX;
	int8_t x310 = -1;
	static int32_t x311 = -3578602;
	static uint16_t x312 = 676U;
	uint64_t t77 = 58425LLU;

	t77 = ((x309/(x310|x311))^x312);

	if (t77 != 677LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = INT32_MIN;
	int64_t x314 = -1LL;
	int32_t x315 = -1;
	int16_t x316 = INT16_MIN;
	volatile int64_t t78 = -139532197175810LL;

	t78 = ((x313/(x314|x315))^x316);

	if (t78 != -2147516416LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x317 = 10667U;
	int32_t x318 = INT32_MAX;
	uint32_t x319 = UINT32_MAX;
	static int16_t x320 = INT16_MIN;
	uint32_t t79 = 834U;

	t79 = ((x317/(x318|x319))^x320);

	if (t79 != 4294934528U) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x322 = INT16_MIN;
	int16_t x323 = INT16_MIN;
	int8_t x324 = 48;
	int32_t t80 = 16;

	t80 = ((x321/(x322|x323))^x324);

	if (t80 != 48) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x325 = 3;
	uint8_t x326 = UINT8_MAX;
	int64_t x328 = INT64_MIN;
	volatile uint64_t t81 = 11455LLU;

	t81 = ((x325/(x326|x327))^x328);

	if (t81 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x330 = INT64_MAX;
	volatile int8_t x331 = -1;
	int64_t x332 = -1LL;
	volatile int64_t t82 = -189321732280LL;

	t82 = ((x329/(x330|x331))^x332);

	if (t82 != -2LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 1U;
	volatile int64_t x334 = -3221LL;
	int16_t x335 = -13432;
	int64_t t83 = -4543218660466451LL;

	t83 = ((x333/(x334|x335))^x336);

	if (t83 != -32768LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = UINT8_MAX;
	uint32_t x339 = 112089U;
	int64_t x340 = 3587800163566616LL;
	uint64_t t84 = 266177306160LLU;

	t84 = ((x337/(x338|x339))^x340);

	if (t84 != 3587800163566616LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x341 = INT32_MAX;
	int64_t x342 = -877696LL;
	int32_t x343 = -1;
	volatile int64_t x344 = -19901LL;
	volatile int64_t t85 = -133821896768817LL;

	t85 = ((x341/(x342|x343))^x344);

	if (t85 != 2147463746LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -99555415;
	uint8_t x346 = 30U;
	int8_t x347 = 1;
	int64_t x348 = INT64_MAX;
	volatile int64_t t86 = -2446363LL;

	t86 = ((x345/(x346|x347))^x348);

	if (t86 != -9223372036851564344LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	int8_t x350 = INT8_MIN;
	int32_t x351 = INT32_MAX;

	t87 = ((x349/(x350|x351))^x352);

	if (t87 != -2147483520) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = -1;
	int32_t x354 = -1;
	int16_t x355 = -2907;
	uint8_t x356 = 3U;
	int32_t t88 = -5340102;

	t88 = ((x353/(x354|x355))^x356);

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MAX;
	int32_t x359 = INT32_MAX;
	volatile int32_t x360 = INT32_MIN;

	t89 = ((x357/(x358|x359))^x360);

	if (t89 != -2147483647LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x362 = 4;
	int8_t x363 = INT8_MIN;
	int16_t x364 = 18;

	t90 = ((x361/(x362|x363))^x364);

	if (t90 != 18) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x365 = -1;
	int16_t x367 = -39;
	volatile uint32_t t91 = 237U;

	t91 = ((x365/(x366|x367))^x368);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x369 = -292LL;
	static int64_t x370 = -6384561964206111LL;
	static uint8_t x371 = 3U;
	int64_t x372 = 15175LL;
	volatile int64_t t92 = 1036234877051802543LL;

	t92 = ((x369/(x370|x371))^x372);

	if (t92 != 15175LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 5U;
	volatile uint16_t x374 = 21252U;
	volatile uint8_t x375 = UINT8_MAX;
	int32_t x376 = -1;
	static int32_t t93 = 244050;

	t93 = ((x373/(x374|x375))^x376);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -8191;
	int16_t x378 = INT16_MIN;
	int16_t x379 = INT16_MIN;
	static uint32_t x380 = 257048U;
	volatile uint32_t t94 = 0U;

	t94 = ((x377/(x378|x379))^x380);

	if (t94 != 257048U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 3U;
	static uint8_t x382 = UINT8_MAX;
	volatile int16_t x384 = -1;
	uint32_t t95 = UINT32_MAX;

	t95 = ((x381/(x382|x383))^x384);

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x386 = 109930184U;
	int8_t x387 = -28;
	int16_t x388 = -1;
	int64_t t96 = -4586079016940562410LL;

	t96 = ((x385/(x386|x387))^x388);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -61959570075313LL;
	int8_t x390 = INT8_MIN;
	int64_t x392 = -1049831956LL;
	uint64_t t97 = 123822802LLU;

	t97 = ((x389/(x390|x391))^x392);

	if (t97 != 18446744072659719660LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 0U;
	int64_t x394 = INT64_MIN;
	int32_t x395 = -119782;
	int16_t x396 = INT16_MIN;
	static volatile int64_t t98 = -1037353736317214881LL;

	t98 = ((x393/(x394|x395))^x396);

	if (t98 != -32768LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 7U;
	int16_t x398 = INT16_MIN;
	int32_t x399 = -1;
	volatile int32_t x400 = INT32_MIN;
	static int32_t t99 = -5;

	t99 = ((x397/(x398|x399))^x400);

	if (t99 != 2147483641) { NG(); } else { ; }
	
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

