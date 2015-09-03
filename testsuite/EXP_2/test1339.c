#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x1 = 137U;
static volatile uint32_t t0 = 40U;
int16_t x6 = INT16_MIN;
int16_t x11 = INT16_MAX;
int32_t x13 = INT32_MAX;
static int64_t x18 = INT64_MIN;
int32_t x35 = -122891;
int64_t t9 = -113038814759055353LL;
static volatile int16_t x43 = INT16_MIN;
int64_t x44 = -1LL;
int8_t x45 = -8;
uint16_t x46 = 3104U;
int8_t x53 = -1;
uint64_t x57 = 6685427LLU;
int64_t x59 = -1LL;
int32_t x68 = INT32_MIN;
int8_t x69 = INT8_MAX;
static int16_t x70 = -1;
volatile int32_t t17 = -1;
uint8_t x82 = 31U;
volatile int32_t t21 = -634;
int64_t x93 = INT64_MIN;
uint32_t x96 = 565391537U;
int16_t x98 = -1;
int16_t x103 = INT16_MIN;
uint16_t x108 = 12U;
volatile int32_t t26 = 20;
static int8_t x111 = INT8_MAX;
volatile int64_t x118 = INT64_MIN;
int32_t x123 = -1;
int8_t x126 = -1;
volatile int8_t x137 = INT8_MIN;
volatile int16_t x148 = 7601;
int32_t t36 = 1;
uint32_t x150 = 2U;
volatile uint16_t x151 = 12024U;
volatile int32_t x153 = INT32_MAX;
volatile int32_t x155 = INT32_MAX;
uint16_t x159 = UINT16_MAX;
static int16_t x160 = INT16_MAX;
int8_t x174 = -9;
static volatile int64_t x177 = INT64_MIN;
volatile int16_t x188 = -29;
uint32_t x192 = 460296U;
static volatile int8_t x195 = -17;
static uint8_t x196 = 1U;
volatile int64_t x209 = 1354574205LL;
static uint8_t x212 = 7U;
static int16_t x214 = INT16_MIN;
volatile int16_t x219 = -1;
int8_t x223 = INT8_MAX;
static int32_t x226 = INT32_MIN;
int32_t x233 = -1;
uint32_t x238 = UINT32_MAX;
int8_t x240 = INT8_MIN;
static int16_t x244 = INT16_MAX;
volatile int64_t x246 = INT64_MIN;
static volatile int32_t x250 = 50844;
uint32_t t62 = 28116350U;
static volatile uint16_t x257 = 31U;
int16_t x264 = -1;
int32_t x276 = INT32_MIN;
volatile int64_t t68 = 32157LL;
int64_t x282 = -77584334058693LL;
int64_t x283 = -1LL;
volatile int8_t x286 = INT8_MAX;
volatile int32_t t71 = -144906645;
int8_t x289 = 10;
uint64_t x294 = 25641900254LLU;
volatile uint32_t x295 = 2035501U;
static uint8_t x298 = UINT8_MAX;
static uint16_t x302 = 0U;
volatile uint32_t x306 = UINT32_MAX;
int16_t x307 = -1;
int32_t t80 = -223;
int32_t x326 = INT32_MAX;
static volatile int32_t t82 = -1;
uint16_t x337 = 0U;
int16_t x339 = -14094;
uint64_t x342 = 7742421945447LLU;
uint64_t t86 = 384LLU;
int8_t x354 = INT8_MAX;
uint32_t x356 = UINT32_MAX;
static int32_t x358 = INT32_MIN;
int64_t x361 = INT64_MAX;
uint8_t x362 = UINT8_MAX;
volatile int16_t x363 = 11;
volatile uint64_t t90 = 178096572531839LLU;
int64_t x368 = INT64_MIN;
volatile uint64_t x370 = 217896005499607LLU;
volatile int32_t t92 = -119212749;
int8_t x374 = INT8_MIN;
int64_t x392 = -545828LL;
static volatile int16_t x398 = INT16_MAX;


void f0(void) {
	int8_t x2 = 0;
	volatile int16_t x3 = INT16_MIN;
	uint32_t x4 = UINT32_MAX;

	t0 = ((x1|(x2==x3))^x4);

	if (t0 != 4294967158U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = 3534U;
	volatile uint64_t x7 = UINT64_MAX;
	static int16_t x8 = INT16_MIN;
	int32_t t1 = -20;

	t1 = ((x5|(x6==x7))^x8);

	if (t1 != -29234) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	static int64_t x10 = -1LL;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = 3389;

	t2 = ((x9|(x10==x11))^x12);

	if (t2 != -65409) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = 1965U;
	uint64_t x15 = 63LLU;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 7;

	t3 = ((x13|(x14==x15))^x16);

	if (t3 != -2147450881) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	volatile uint64_t x19 = 65503908317LLU;
	int64_t x20 = INT64_MIN;
	volatile int64_t t4 = 100417061LL;

	t4 = ((x17|(x18==x19))^x20);

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 27609U;
	int32_t x22 = INT32_MIN;
	static uint64_t x23 = 742422LLU;
	static volatile int64_t x24 = INT64_MAX;
	static volatile int64_t t5 = -1639266584222240LL;

	t5 = ((x21|(x22==x23))^x24);

	if (t5 != 9223372036854748198LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 830U;
	volatile int32_t x26 = INT32_MIN;
	static uint8_t x27 = 11U;
	int64_t x28 = INT64_MIN;
	int64_t t6 = 9821137047463195LL;

	t6 = ((x25|(x26==x27))^x28);

	if (t6 != -9223372036854774978LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	uint16_t x30 = 251U;
	volatile int32_t x31 = INT32_MIN;
	int16_t x32 = INT16_MIN;
	int32_t t7 = -1488422;

	t7 = ((x29|(x30==x31))^x32);

	if (t7 != 2147450880) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	static int64_t x34 = INT64_MAX;
	int8_t x36 = -1;
	volatile int32_t t8 = INT32_MAX;

	t8 = ((x33|(x34==x35))^x36);

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 4377778352091601LL;
	uint64_t x38 = UINT64_MAX;
	int8_t x39 = INT8_MIN;
	volatile int8_t x40 = INT8_MIN;

	t9 = ((x37|(x38==x39))^x40);

	if (t9 != -4377778352091567LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int64_t x42 = -651251687693775184LL;
	volatile int64_t t10 = INT64_MAX;

	t10 = ((x41|(x42==x43))^x44);

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x47 = 1;
	static int32_t x48 = INT32_MAX;
	volatile int32_t t11 = -31;

	t11 = ((x45|(x46==x47))^x48);

	if (t11 != -2147483641) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 10083U;
	int64_t x50 = -4101851LL;
	int32_t x51 = INT32_MAX;
	int32_t x52 = 3155452;
	int32_t t12 = 31451;

	t12 = ((x49|(x50==x51))^x52);

	if (t12 != 3146399) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x54 = UINT8_MAX;
	int64_t x55 = INT64_MIN;
	int32_t x56 = -1;
	volatile int32_t t13 = 277;

	t13 = ((x53|(x54==x55))^x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = 1;
	static uint16_t x60 = 6U;
	uint64_t t14 = 118LLU;

	t14 = ((x57|(x58==x59))^x60);

	if (t14 != 6685429LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 12167;
	int16_t x62 = -691;
	static int64_t x63 = 42778974291127783LL;
	static uint8_t x64 = 84U;
	int32_t t15 = -241316135;

	t15 = ((x61|(x62==x63))^x64);

	if (t15 != 12243) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 25U;
	int16_t x66 = INT16_MAX;
	static int64_t x67 = -1736226756954023LL;
	static int32_t t16 = -12;

	t16 = ((x65|(x66==x67))^x68);

	if (t16 != -2147483623) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x71 = INT16_MIN;
	uint16_t x72 = UINT16_MAX;

	t17 = ((x69|(x70==x71))^x72);

	if (t17 != 65408) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 1492850711478619LLU;
	int16_t x74 = -1;
	int8_t x75 = INT8_MAX;
	int64_t x76 = INT64_MAX;
	static uint64_t t18 = 516706LLU;

	t18 = ((x73|(x74==x75))^x76);

	if (t18 != 9221879186143297188LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	int32_t x78 = 142;
	static volatile int16_t x79 = -1;
	static int16_t x80 = -646;
	volatile int32_t t19 = 3;

	t19 = ((x77|(x78==x79))^x80);

	if (t19 != 32122) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = 22;
	uint32_t x83 = 44U;
	int64_t x84 = INT64_MIN;
	volatile int64_t t20 = -12LL;

	t20 = ((x81|(x82==x83))^x84);

	if (t20 != -9223372036854775786LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = UINT16_MAX;
	uint16_t x86 = 9U;
	static int64_t x87 = -423724681LL;
	int8_t x88 = -1;

	t21 = ((x85|(x86==x87))^x88);

	if (t21 != -65536) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = 1405;
	int16_t x90 = -1;
	static volatile uint64_t x91 = 71LLU;
	static volatile int32_t x92 = -21630;
	volatile int32_t t22 = 2;

	t22 = ((x89|(x90==x91))^x92);

	if (t22 != -20737) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x94 = UINT64_MAX;
	volatile int32_t x95 = INT32_MAX;
	volatile int64_t t23 = 2676471702804791077LL;

	t23 = ((x93|(x94==x95))^x96);

	if (t23 != -9223372036289384271LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x97 = UINT32_MAX;
	int16_t x99 = -37;
	uint16_t x100 = UINT16_MAX;
	volatile uint32_t t24 = 125U;

	t24 = ((x97|(x98==x99))^x100);

	if (t24 != 4294901760U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = 245280417LL;
	static uint32_t x102 = 55426U;
	static uint32_t x104 = 36270U;
	int64_t t25 = -7832266299LL;

	t25 = ((x101|(x102==x103))^x104);

	if (t25 != 245244687LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	static int8_t x106 = -7;
	uint8_t x107 = 113U;

	t26 = ((x105|(x106==x107))^x108);

	if (t26 != -32756) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 58U;
	int8_t x110 = 0;
	int8_t x112 = INT8_MIN;
	int32_t t27 = 1032745;

	t27 = ((x109|(x110==x111))^x112);

	if (t27 != -70) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	int8_t x114 = 2;
	uint32_t x115 = UINT32_MAX;
	uint32_t x116 = 56U;
	static volatile int64_t t28 = 590573689329578LL;

	t28 = ((x113|(x114==x115))^x116);

	if (t28 != -9223372036854775752LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 1810622488LL;
	int16_t x119 = 2;
	int64_t x120 = INT64_MAX;
	int64_t t29 = -1959684734775445667LL;

	t29 = ((x117|(x118==x119))^x120);

	if (t29 != 9223372035044153319LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x121 = -1;
	static uint64_t x122 = UINT64_MAX;
	int32_t x124 = INT32_MAX;
	volatile int32_t t30 = INT32_MIN;

	t30 = ((x121|(x122==x123))^x124);

	if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	int32_t x127 = 8085329;
	int32_t x128 = INT32_MIN;
	volatile int32_t t31 = INT32_MAX;

	t31 = ((x125|(x126==x127))^x128);

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = 10;
	int16_t x130 = -1;
	uint32_t x131 = 0U;
	static uint16_t x132 = 345U;
	volatile int32_t t32 = 310960556;

	t32 = ((x129|(x130==x131))^x132);

	if (t32 != 339) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x133 = 1547U;
	int8_t x134 = -1;
	int64_t x135 = INT64_MAX;
	volatile int64_t x136 = 27530LL;
	int64_t t33 = 127463LL;

	t33 = ((x133|(x134==x135))^x136);

	if (t33 != 28033LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x138 = 3U;
	int8_t x139 = INT8_MIN;
	uint64_t x140 = UINT64_MAX;
	volatile uint64_t t34 = 106969186353431525LLU;

	t34 = ((x137|(x138==x139))^x140);

	if (t34 != 127LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = -1LL;
	int8_t x142 = INT8_MIN;
	int8_t x143 = INT8_MIN;
	uint64_t x144 = 54635249771080634LLU;
	uint64_t t35 = 19101LLU;

	t35 = ((x141|(x142==x143))^x144);

	if (t35 != 18392108823938470981LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -6;
	int8_t x146 = -32;
	int8_t x147 = INT8_MIN;

	t36 = ((x145|(x146==x147))^x148);

	if (t36 != -7605) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -24;
	uint8_t x152 = UINT8_MAX;
	static volatile int32_t t37 = -11;

	t37 = ((x149|(x150==x151))^x152);

	if (t37 != -233) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x154 = -1;
	static int32_t x156 = INT32_MAX;
	volatile int32_t t38 = -345737595;

	t38 = ((x153|(x154==x155))^x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	volatile int32_t x158 = -1;
	volatile int64_t t39 = 812438698LL;

	t39 = ((x157|(x158==x159))^x160);

	if (t39 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = UINT8_MAX;
	int8_t x162 = INT8_MIN;
	uint8_t x163 = 7U;
	int32_t x164 = -2;
	int32_t t40 = -29886;

	t40 = ((x161|(x162==x163))^x164);

	if (t40 != -255) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = 0;
	int32_t x166 = INT32_MIN;
	int16_t x167 = -1703;
	static int64_t x168 = -1LL;
	volatile int64_t t41 = -587978LL;

	t41 = ((x165|(x166==x167))^x168);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	uint64_t x170 = 19653563281030432LLU;
	volatile int8_t x171 = -1;
	uint32_t x172 = UINT32_MAX;
	uint32_t t42 = 9730U;

	t42 = ((x169|(x170==x171))^x172);

	if (t42 != 127U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MAX;
	int8_t x175 = -1;
	int16_t x176 = -1;
	static int64_t t43 = INT64_MIN;

	t43 = ((x173|(x174==x175))^x176);

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x178 = 914693U;
	int16_t x179 = INT16_MIN;
	int64_t x180 = -13LL;
	static volatile int64_t t44 = -7LL;

	t44 = ((x177|(x178==x179))^x180);

	if (t44 != 9223372036854775795LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = INT32_MIN;
	int64_t x182 = -94822LL;
	uint64_t x183 = UINT64_MAX;
	uint64_t x184 = 12LLU;
	uint64_t t45 = 80LLU;

	t45 = ((x181|(x182==x183))^x184);

	if (t45 != 18446744071562067980LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MAX;
	int16_t x186 = -1926;
	uint8_t x187 = 29U;
	int32_t t46 = 79;

	t46 = ((x185|(x186==x187))^x188);

	if (t46 != -100) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x189 = INT8_MIN;
	int8_t x190 = INT8_MAX;
	int32_t x191 = 381287967;
	uint32_t t47 = 560568491U;

	t47 = ((x189|(x190==x191))^x192);

	if (t47 != 4294506888U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	static int16_t x194 = INT16_MIN;
	volatile int64_t t48 = 218LL;

	t48 = ((x193|(x194==x195))^x196);

	if (t48 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -1;
	static int8_t x198 = INT8_MIN;
	uint32_t x199 = UINT32_MAX;
	int8_t x200 = 20;
	static int32_t t49 = 499;

	t49 = ((x197|(x198==x199))^x200);

	if (t49 != -21) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -1;
	int8_t x202 = -36;
	static int8_t x203 = INT8_MIN;
	volatile int8_t x204 = INT8_MAX;
	int32_t t50 = -5;

	t50 = ((x201|(x202==x203))^x204);

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 6U;
	uint16_t x206 = 68U;
	int8_t x207 = INT8_MIN;
	volatile int64_t x208 = INT64_MIN;
	static volatile int64_t t51 = 5643666333837010LL;

	t51 = ((x205|(x206==x207))^x208);

	if (t51 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x210 = INT64_MIN;
	int64_t x211 = -60924377033528127LL;
	volatile int64_t t52 = 1212LL;

	t52 = ((x209|(x210==x211))^x212);

	if (t52 != 1354574202LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 61U;
	static int32_t x215 = 931718571;
	int8_t x216 = -1;
	volatile int32_t t53 = 0;

	t53 = ((x213|(x214==x215))^x216);

	if (t53 != -62) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 38711947LLU;
	volatile int16_t x218 = -1;
	static int64_t x220 = -26630602LL;
	uint64_t t54 = 592193916583206328LLU;

	t54 = ((x217|(x218==x219))^x220);

	if (t54 != 18446744073645003965LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = 1;
	static int32_t x222 = INT32_MIN;
	static uint16_t x224 = UINT16_MAX;
	volatile int32_t t55 = -60065423;

	t55 = ((x221|(x222==x223))^x224);

	if (t55 != 65534) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	uint32_t x227 = 997496U;
	uint64_t x228 = UINT64_MAX;
	uint64_t t56 = 132720655603134184LLU;

	t56 = ((x225|(x226==x227))^x228);

	if (t56 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = -1;
	static volatile int64_t x230 = INT64_MAX;
	static volatile int32_t x231 = 29784;
	int8_t x232 = INT8_MIN;
	int32_t t57 = 1;

	t57 = ((x229|(x230==x231))^x232);

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x234 = INT64_MIN;
	volatile int16_t x235 = INT16_MAX;
	static uint32_t x236 = 15U;
	volatile uint32_t t58 = 309010927U;

	t58 = ((x233|(x234==x235))^x236);

	if (t58 != 4294967280U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x237 = 1457U;
	int64_t x239 = INT64_MIN;
	volatile int32_t t59 = -14;

	t59 = ((x237|(x238==x239))^x240);

	if (t59 != -1487) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	uint32_t x242 = UINT32_MAX;
	int64_t x243 = INT64_MIN;
	int32_t t60 = 239595742;

	t60 = ((x241|(x242==x243))^x244);

	if (t60 != -2147450881) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x245 = 142;
	int8_t x247 = INT8_MAX;
	int64_t x248 = 14929843070587980LL;
	volatile int64_t t61 = -1658652599762LL;

	t61 = ((x245|(x246==x247))^x248);

	if (t61 != 14929843070588098LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 48611U;
	volatile uint64_t x251 = 38856LLU;
	int32_t x252 = INT32_MIN;

	t62 = ((x249|(x250==x251))^x252);

	if (t62 != 2147532259U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 8U;
	int32_t x254 = -1;
	uint32_t x255 = UINT32_MAX;
	int32_t x256 = INT32_MIN;
	volatile int32_t t63 = 4;

	t63 = ((x253|(x254==x255))^x256);

	if (t63 != -2147483639) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x258 = INT16_MIN;
	int8_t x259 = INT8_MIN;
	int64_t x260 = INT64_MAX;
	int64_t t64 = -30LL;

	t64 = ((x257|(x258==x259))^x260);

	if (t64 != 9223372036854775776LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 303048178894LLU;
	static uint8_t x262 = 3U;
	int64_t x263 = INT64_MAX;
	volatile uint64_t t65 = 14857123754LLU;

	t65 = ((x261|(x262==x263))^x264);

	if (t65 != 18446743770661372721LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	uint16_t x266 = 107U;
	int16_t x267 = -1;
	int16_t x268 = -1;
	static int32_t t66 = 1608649;

	t66 = ((x265|(x266==x267))^x268);

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 2U;
	uint16_t x270 = 2U;
	uint64_t x271 = 791305909365278LLU;
	uint64_t x272 = UINT64_MAX;
	uint64_t t67 = 11947LLU;

	t67 = ((x269|(x270==x271))^x272);

	if (t67 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -5705031610LL;
	static int16_t x274 = -1;
	static int8_t x275 = -1;

	t68 = ((x273|(x274==x275))^x276);

	if (t68 != 5032386631LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = UINT16_MAX;
	int8_t x278 = -1;
	int8_t x279 = INT8_MAX;
	int32_t x280 = 189019;
	volatile int32_t t69 = 5;

	t69 = ((x277|(x278==x279))^x280);

	if (t69 != 138660) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x281 = 1134030725LLU;
	volatile uint16_t x284 = 11212U;
	uint64_t t70 = 5111LLU;

	t70 = ((x281|(x282==x283))^x284);

	if (t70 != 1134019657LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	int32_t x287 = -679651694;
	int32_t x288 = 134600979;

	t71 = ((x285|(x286==x287))^x288);

	if (t71 != -134601069) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x290 = 9733;
	int64_t x291 = INT64_MAX;
	int32_t x292 = -3007;
	int32_t t72 = 914247;

	t72 = ((x289|(x290==x291))^x292);

	if (t72 != -2997) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x293 = 32477U;
	int8_t x296 = INT8_MAX;
	int32_t t73 = 0;

	t73 = ((x293|(x294==x295))^x296);

	if (t73 != 32418) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x297 = UINT16_MAX;
	volatile int8_t x299 = INT8_MAX;
	volatile int16_t x300 = 252;
	static volatile int32_t t74 = 789581;

	t74 = ((x297|(x298==x299))^x300);

	if (t74 != 65283) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x301 = INT8_MAX;
	uint32_t x303 = UINT32_MAX;
	uint16_t x304 = UINT16_MAX;
	static int32_t t75 = -13400965;

	t75 = ((x301|(x302==x303))^x304);

	if (t75 != 65408) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1;
	static uint64_t x308 = UINT64_MAX;
	volatile uint64_t t76 = 3723537693LLU;

	t76 = ((x305|(x306==x307))^x308);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x309 = 1048;
	int8_t x310 = INT8_MIN;
	static uint16_t x311 = 59U;
	int16_t x312 = INT16_MIN;
	volatile int32_t t77 = -2655;

	t77 = ((x309|(x310==x311))^x312);

	if (t77 != -31720) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -255899788LL;
	static int32_t x314 = 181727435;
	uint32_t x315 = 58211U;
	int16_t x316 = INT16_MIN;
	int64_t t78 = -13103LL;

	t78 = ((x313|(x314==x315))^x316);

	if (t78 != 255903604LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = -1LL;
	static int8_t x318 = INT8_MAX;
	int16_t x319 = INT16_MAX;
	int64_t x320 = -1LL;
	int64_t t79 = -21230LL;

	t79 = ((x317|(x318==x319))^x320);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MAX;
	int8_t x322 = INT8_MIN;
	volatile int8_t x323 = -1;
	int32_t x324 = 244;

	t80 = ((x321|(x322==x323))^x324);

	if (t80 != 2147483403) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MIN;
	static int16_t x327 = 48;
	int8_t x328 = INT8_MIN;
	static volatile int32_t t81 = -4531;

	t81 = ((x325|(x326==x327))^x328);

	if (t81 != 32640) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = INT8_MIN;
	static int32_t x330 = INT32_MIN;
	uint32_t x331 = 130U;
	int32_t x332 = INT32_MIN;

	t82 = ((x329|(x330==x331))^x332);

	if (t82 != 2147483520) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = 2;
	int32_t x334 = INT32_MIN;
	uint64_t x335 = UINT64_MAX;
	int32_t x336 = -1;
	volatile int32_t t83 = -9371;

	t83 = ((x333|(x334==x335))^x336);

	if (t83 != -3) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x338 = 14;
	volatile int8_t x340 = INT8_MAX;
	volatile int32_t t84 = 6530982;

	t84 = ((x337|(x338==x339))^x340);

	if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -1;
	static volatile uint8_t x343 = UINT8_MAX;
	static int64_t x344 = INT64_MIN;
	int64_t t85 = INT64_MAX;

	t85 = ((x341|(x342==x343))^x344);

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x345 = 4303098308LLU;
	volatile int16_t x346 = INT16_MIN;
	volatile uint32_t x347 = 437U;
	int8_t x348 = -2;

	t86 = ((x345|(x346==x347))^x348);

	if (t86 != 18446744069406453306LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = -1;
	uint32_t x350 = 1139476435U;
	int16_t x351 = INT16_MIN;
	int32_t x352 = INT32_MIN;
	volatile int32_t t87 = INT32_MAX;

	t87 = ((x349|(x350==x351))^x352);

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = 14788236U;
	int16_t x355 = INT16_MIN;
	static volatile uint32_t t88 = 2U;

	t88 = ((x353|(x354==x355))^x356);

	if (t88 != 4280179059U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 4789917184448609LLU;
	uint64_t x359 = UINT64_MAX;
	static int16_t x360 = INT16_MIN;
	uint64_t t89 = 27438695681LLU;

	t89 = ((x357|(x358==x359))^x360);

	if (t89 != 18441954156525115489LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x364 = 946899629LLU;

	t90 = ((x361|(x362==x363))^x364);

	if (t90 != 9223372035907876178LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x365 = 8366519953947LLU;
	uint8_t x366 = UINT8_MAX;
	uint8_t x367 = UINT8_MAX;
	uint64_t t91 = 114377478913LLU;

	t91 = ((x365|(x366==x367))^x368);

	if (t91 != 9223380403374729755LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = -1;
	int64_t x371 = INT64_MIN;
	volatile int16_t x372 = 14412;

	t92 = ((x369|(x370==x371))^x372);

	if (t92 != -14413) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 50U;
	int32_t x375 = -1;
	int32_t x376 = -115518549;
	int32_t t93 = -84155595;

	t93 = ((x373|(x374==x375))^x376);

	if (t93 != -115518567) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 0U;
	uint16_t x378 = 10U;
	int16_t x379 = INT16_MIN;
	int8_t x380 = -4;
	volatile int32_t t94 = 38;

	t94 = ((x377|(x378==x379))^x380);

	if (t94 != -4) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = UINT64_MAX;
	uint64_t x382 = 21386965352969LLU;
	static uint8_t x383 = 29U;
	volatile uint64_t x384 = 1313958007LLU;
	volatile uint64_t t95 = 15494240206084832LLU;

	t95 = ((x381|(x382==x383))^x384);

	if (t95 != 18446744072395593608LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x385 = 1086945678LLU;
	uint32_t x386 = 76092U;
	int32_t x387 = INT32_MIN;
	int16_t x388 = INT16_MIN;
	uint64_t t96 = 61LLU;

	t96 = ((x385|(x386==x387))^x388);

	if (t96 != 18446744072622635406LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x389 = 11378U;
	int8_t x390 = INT8_MAX;
	int16_t x391 = -1;
	volatile int64_t t97 = 781001347LL;

	t97 = ((x389|(x390==x391))^x392);

	if (t97 != -555090LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MAX;
	volatile uint16_t x394 = 109U;
	uint8_t x395 = UINT8_MAX;
	int16_t x396 = 0;
	int32_t t98 = -596820;

	t98 = ((x393|(x394==x395))^x396);

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = 1;
	static uint16_t x399 = UINT16_MAX;
	volatile int8_t x400 = INT8_MIN;
	int32_t t99 = 1029;

	t99 = ((x397|(x398==x399))^x400);

	if (t99 != -127) { NG(); } else { ; }
	
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

