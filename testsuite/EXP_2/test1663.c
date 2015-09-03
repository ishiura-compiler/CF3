#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = UINT64_MAX;
int16_t x7 = -11;
int16_t x10 = INT16_MIN;
int8_t x11 = 1;
int8_t x18 = INT8_MAX;
volatile uint64_t x36 = 8349553935398332133LLU;
int16_t x38 = INT16_MAX;
uint32_t x39 = UINT32_MAX;
static int16_t x42 = INT16_MIN;
volatile int32_t t10 = 1;
volatile int32_t x47 = -1;
volatile int16_t x54 = INT16_MAX;
uint64_t x61 = 856LLU;
int8_t x66 = INT8_MIN;
static uint16_t x68 = 1U;
uint64_t t16 = 2057713094LLU;
int32_t t17 = 61;
static int16_t x76 = INT16_MAX;
uint32_t x82 = 5693854U;
volatile uint64_t t20 = UINT64_MAX;
static uint32_t t21 = 100685U;
static volatile int64_t x96 = INT64_MIN;
volatile int64_t t23 = INT64_MIN;
int16_t x99 = INT16_MIN;
uint8_t x100 = UINT8_MAX;
int32_t x104 = INT32_MAX;
volatile int32_t t25 = INT32_MAX;
uint16_t x109 = 231U;
int32_t t27 = -856007344;
static int16_t x121 = 240;
uint32_t x126 = UINT32_MAX;
volatile uint32_t x127 = 25615U;
volatile int8_t x130 = 1;
uint32_t x131 = UINT32_MAX;
int16_t x137 = -1;
int32_t x140 = INT32_MIN;
int32_t t34 = -62;
int16_t x145 = -1;
volatile uint8_t x148 = 8U;
volatile int16_t x150 = INT16_MIN;
uint64_t x152 = 512957LLU;
uint64_t x154 = UINT64_MAX;
uint32_t x157 = UINT32_MAX;
int32_t x163 = -1;
int32_t t40 = 7700;
static int32_t x171 = INT32_MAX;
volatile int64_t x175 = 40504568LL;
volatile int8_t x176 = INT8_MAX;
static volatile uint64_t t43 = 235LLU;
int8_t x193 = INT8_MAX;
int32_t x195 = INT32_MIN;
int8_t x197 = INT8_MIN;
volatile int32_t x198 = -231;
int32_t t49 = 11;
uint32_t x201 = UINT32_MAX;
static volatile uint32_t t50 = 82397U;
int8_t x211 = 6;
static int16_t x214 = 3;
int16_t x215 = 1;
static int64_t x223 = INT64_MIN;
static int64_t x228 = INT64_MIN;
int32_t x232 = INT32_MIN;
int64_t t58 = 8139115LL;
int64_t x237 = INT64_MAX;
static int64_t t59 = 0LL;
static volatile uint32_t t61 = 29951U;
int8_t x254 = -1;
volatile int16_t x257 = INT16_MIN;
static volatile int64_t x261 = INT64_MIN;
uint32_t x266 = UINT32_MAX;
uint8_t x268 = 59U;
int16_t x270 = INT16_MIN;
int64_t x271 = -1LL;
volatile int32_t x282 = -389677687;
int32_t t70 = -58440550;
volatile int16_t x287 = INT16_MAX;
volatile int16_t x293 = INT16_MIN;
volatile uint64_t x299 = 12551273LLU;
int16_t x303 = -1;
int32_t x306 = 52905135;
uint32_t t76 = 2685U;
int16_t x315 = INT16_MIN;
volatile uint32_t x317 = 116989U;
uint64_t x318 = 170650655507LLU;
int16_t x322 = INT16_MIN;
static int8_t x331 = 4;
volatile int8_t x333 = -1;
uint32_t x339 = 1017635U;
volatile uint16_t x347 = 2139U;
volatile uint64_t t86 = 52478LLU;
uint8_t x351 = 3U;
int32_t x355 = -1713795;
static volatile int32_t x356 = INT32_MIN;
uint64_t x359 = 1892862LLU;
volatile int32_t x372 = INT32_MIN;
static volatile int32_t t92 = 3;
volatile uint64_t x373 = 5222505144886014LLU;
int8_t x375 = INT8_MIN;
volatile int64_t x384 = INT64_MAX;
uint64_t x385 = 38103343520LLU;
volatile uint64_t t96 = 8105404496948LLU;
uint64_t x393 = 2516578LLU;
int16_t x398 = -701;
static int16_t x400 = INT16_MIN;


void f0(void) {
	volatile int32_t x1 = -1;
	int16_t x2 = INT16_MIN;
	int16_t x3 = -1556;
	static uint64_t x4 = UINT64_MAX;

	t0 = ((x1&(x2<=x3))|x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	volatile int16_t x6 = -1;
	static int64_t x8 = -7315595338LL;
	volatile uint64_t t1 = 13LLU;

	t1 = ((x5&(x6<=x7))|x8);

	if (t1 != 18446744066393956278LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	volatile uint64_t x12 = 104023717LLU;
	volatile uint64_t t2 = 2844LLU;

	t2 = ((x9&(x10<=x11))|x12);

	if (t2 != 104023717LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MIN;
	volatile int32_t x14 = INT32_MAX;
	int64_t x15 = -1115946502533021LL;
	volatile uint32_t x16 = UINT32_MAX;
	uint32_t t3 = UINT32_MAX;

	t3 = ((x13&(x14<=x15))|x16);

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = 129478U;
	static uint8_t x19 = 1U;
	int64_t x20 = INT64_MIN;
	static int64_t t4 = INT64_MIN;

	t4 = ((x17&(x18<=x19))|x20);

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = UINT8_MAX;
	static int64_t x22 = INT64_MIN;
	static int16_t x23 = INT16_MIN;
	volatile int32_t x24 = 62909;
	int32_t t5 = 0;

	t5 = ((x21&(x22<=x23))|x24);

	if (t5 != 62909) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	int32_t x26 = 118726900;
	static uint32_t x27 = 140307331U;
	int64_t x28 = INT64_MAX;
	int64_t t6 = INT64_MAX;

	t6 = ((x25&(x26<=x27))|x28);

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	volatile int32_t x30 = INT32_MAX;
	volatile int32_t x31 = INT32_MIN;
	int64_t x32 = -1373374276247946LL;
	volatile int64_t t7 = 511900652253110065LL;

	t7 = ((x29&(x30<=x31))|x32);

	if (t7 != -1373374276247946LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int8_t x34 = -27;
	int64_t x35 = INT64_MAX;
	volatile uint64_t t8 = 20361077349680492LLU;

	t8 = ((x33&(x34<=x35))|x36);

	if (t8 != 8349553935398332133LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	uint16_t x40 = 13007U;
	static volatile int32_t t9 = -6208;

	t9 = ((x37&(x38<=x39))|x40);

	if (t9 != 13007) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 2;
	uint8_t x43 = 25U;
	static int32_t x44 = 18769690;

	t10 = ((x41&(x42<=x43))|x44);

	if (t10 != 18769690) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	uint8_t x46 = 11U;
	uint32_t x48 = 2691U;
	static volatile int64_t t11 = -254936314064381LL;

	t11 = ((x45&(x46<=x47))|x48);

	if (t11 != 2691LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 54819LLU;
	static int16_t x50 = -1;
	int8_t x51 = -1;
	static int8_t x52 = 0;
	volatile uint64_t t12 = 1650022478561795LLU;

	t12 = ((x49&(x50<=x51))|x52);

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 0;
	static uint16_t x55 = UINT16_MAX;
	volatile int8_t x56 = INT8_MIN;
	static int32_t t13 = -2328286;

	t13 = ((x53&(x54<=x55))|x56);

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MAX;
	static uint8_t x58 = 46U;
	volatile uint64_t x59 = 147613741273644LLU;
	int8_t x60 = INT8_MIN;
	volatile int32_t t14 = -53713052;

	t14 = ((x57&(x58<=x59))|x60);

	if (t14 != -127) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x62 = UINT16_MAX;
	int32_t x63 = -787955316;
	static volatile int32_t x64 = 189233;
	uint64_t t15 = 1332148LLU;

	t15 = ((x61&(x62<=x63))|x64);

	if (t15 != 189233LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 59600922221LLU;
	int64_t x67 = -3504313795206165LL;

	t16 = ((x65&(x66<=x67))|x68);

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	static volatile int16_t x70 = INT16_MIN;
	int8_t x71 = INT8_MIN;
	volatile uint16_t x72 = UINT16_MAX;

	t17 = ((x69&(x70<=x71))|x72);

	if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 0U;
	volatile uint32_t x74 = UINT32_MAX;
	int64_t x75 = INT64_MIN;
	static volatile int32_t t18 = 2595;

	t18 = ((x73&(x74<=x75))|x76);

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = INT16_MAX;
	uint8_t x78 = UINT8_MAX;
	int16_t x79 = -139;
	int64_t x80 = INT64_MIN;
	int64_t t19 = INT64_MIN;

	t19 = ((x77&(x78<=x79))|x80);

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -33;
	int64_t x83 = INT64_MIN;
	uint64_t x84 = UINT64_MAX;

	t20 = ((x81&(x82<=x83))|x84);

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x85 = UINT32_MAX;
	volatile int16_t x86 = INT16_MIN;
	volatile int64_t x87 = INT64_MAX;
	int8_t x88 = INT8_MIN;

	t21 = ((x85&(x86<=x87))|x88);

	if (t21 != 4294967169U) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = INT8_MAX;
	static volatile int8_t x90 = INT8_MIN;
	int64_t x91 = 793336LL;
	int64_t x92 = -1LL;
	volatile int64_t t22 = 19058LL;

	t22 = ((x89&(x90<=x91))|x92);

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = INT16_MIN;
	int8_t x94 = INT8_MIN;
	volatile int16_t x95 = -1;

	t23 = ((x93&(x94<=x95))|x96);

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = 5;
	int32_t x98 = -2;
	int32_t t24 = 5;

	t24 = ((x97&(x98<=x99))|x100);

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -21;
	volatile int16_t x102 = -1500;
	int8_t x103 = INT8_MIN;

	t25 = ((x101&(x102<=x103))|x104);

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -1;
	static int32_t x106 = -33186;
	int8_t x107 = -1;
	volatile int32_t x108 = INT32_MAX;
	volatile int32_t t26 = INT32_MAX;

	t26 = ((x105&(x106<=x107))|x108);

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = INT64_MIN;
	int64_t x111 = 20994762694877LL;
	uint8_t x112 = 87U;

	t27 = ((x109&(x110<=x111))|x112);

	if (t27 != 87) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = UINT64_MAX;
	uint32_t x114 = 2035569779U;
	int8_t x115 = INT8_MAX;
	int8_t x116 = INT8_MIN;
	static uint64_t t28 = 83LLU;

	t28 = ((x113&(x114<=x115))|x116);

	if (t28 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 14U;
	int32_t x118 = -418476;
	volatile uint64_t x119 = UINT64_MAX;
	int32_t x120 = INT32_MIN;
	uint32_t t29 = 61U;

	t29 = ((x117&(x118<=x119))|x120);

	if (t29 != 2147483648U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = -1;
	static int64_t x123 = -6312LL;
	volatile uint64_t x124 = 7219229685491LLU;
	volatile uint64_t t30 = 5611635377LLU;

	t30 = ((x121&(x122<=x123))|x124);

	if (t30 != 7219229685491LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 12U;
	uint64_t x128 = UINT64_MAX;
	static uint64_t t31 = UINT64_MAX;

	t31 = ((x125&(x126<=x127))|x128);

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x129 = UINT8_MAX;
	int16_t x132 = -1;
	volatile int32_t t32 = -1555174;

	t32 = ((x129&(x130<=x131))|x132);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 8U;
	volatile int32_t x134 = -1;
	int8_t x135 = INT8_MAX;
	uint64_t x136 = 3LLU;
	volatile uint64_t t33 = 146559390LLU;

	t33 = ((x133&(x134<=x135))|x136);

	if (t33 != 3LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x138 = 1357;
	static volatile uint64_t x139 = 404855291LLU;

	t34 = ((x137&(x138<=x139))|x140);

	if (t34 != -2147483647) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	static volatile int16_t x142 = 0;
	int64_t x143 = INT64_MAX;
	static uint8_t x144 = UINT8_MAX;
	volatile int32_t t35 = 1217100;

	t35 = ((x141&(x142<=x143))|x144);

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x146 = 49U;
	int16_t x147 = -1;
	static volatile int32_t t36 = -107520085;

	t36 = ((x145&(x146<=x147))|x148);

	if (t36 != 8) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x149 = UINT16_MAX;
	static int64_t x151 = 15559067489256LL;
	static uint64_t t37 = 720LLU;

	t37 = ((x149&(x150<=x151))|x152);

	if (t37 != 512957LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -223057851LL;
	volatile uint8_t x155 = 16U;
	uint8_t x156 = 60U;
	static int64_t t38 = -96LL;

	t38 = ((x153&(x154<=x155))|x156);

	if (t38 != 60LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x158 = INT32_MAX;
	int32_t x159 = INT32_MAX;
	uint32_t x160 = UINT32_MAX;
	static volatile uint32_t t39 = UINT32_MAX;

	t39 = ((x157&(x158<=x159))|x160);

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = INT32_MIN;
	int8_t x162 = 19;
	uint8_t x164 = UINT8_MAX;

	t40 = ((x161&(x162<=x163))|x164);

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MAX;
	int64_t x166 = INT64_MIN;
	int16_t x167 = INT16_MIN;
	static uint32_t x168 = 134927U;
	volatile uint32_t t41 = 0U;

	t41 = ((x165&(x166<=x167))|x168);

	if (t41 != 134927U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	static int16_t x170 = -2172;
	uint16_t x172 = 246U;
	static volatile int32_t t42 = -250;

	t42 = ((x169&(x170<=x171))|x172);

	if (t42 != 246) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = UINT64_MAX;
	static int16_t x174 = INT16_MIN;

	t43 = ((x173&(x174<=x175))|x176);

	if (t43 != 127LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MAX;
	uint8_t x178 = UINT8_MAX;
	uint8_t x179 = 50U;
	static int32_t x180 = INT32_MAX;
	int32_t t44 = INT32_MAX;

	t44 = ((x177&(x178<=x179))|x180);

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MAX;
	int8_t x182 = 28;
	int32_t x183 = INT32_MIN;
	int16_t x184 = INT16_MIN;
	volatile int32_t t45 = -9;

	t45 = ((x181&(x182<=x183))|x184);

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = INT32_MAX;
	static int32_t x186 = INT32_MAX;
	volatile int32_t x187 = INT32_MIN;
	int8_t x188 = 1;
	int32_t t46 = 42;

	t46 = ((x185&(x186<=x187))|x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x189 = INT8_MAX;
	int32_t x190 = INT32_MAX;
	volatile uint32_t x191 = UINT32_MAX;
	volatile int8_t x192 = INT8_MAX;
	int32_t t47 = -504607;

	t47 = ((x189&(x190<=x191))|x192);

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x194 = INT32_MIN;
	static int16_t x196 = INT16_MAX;
	int32_t t48 = 13167640;

	t48 = ((x193&(x194<=x195))|x196);

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x199 = INT8_MIN;
	static uint16_t x200 = UINT16_MAX;

	t49 = ((x197&(x198<=x199))|x200);

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x202 = UINT8_MAX;
	int32_t x203 = -1;
	int16_t x204 = INT16_MIN;

	t50 = ((x201&(x202<=x203))|x204);

	if (t50 != 4294934528U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 4053168855LLU;
	volatile int64_t x206 = INT64_MIN;
	static uint16_t x207 = 0U;
	int16_t x208 = INT16_MIN;
	volatile uint64_t t51 = 252589LLU;

	t51 = ((x205&(x206<=x207))|x208);

	if (t51 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = UINT64_MAX;
	static int16_t x210 = -5;
	int8_t x212 = -1;
	uint64_t t52 = UINT64_MAX;

	t52 = ((x209&(x210<=x211))|x212);

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = UINT8_MAX;
	static int64_t x216 = -273069LL;
	int64_t t53 = -12934450LL;

	t53 = ((x213&(x214<=x215))|x216);

	if (t53 != -273069LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x217 = UINT16_MAX;
	int16_t x218 = 7;
	volatile uint16_t x219 = 735U;
	int64_t x220 = -111839305494213789LL;
	static volatile int64_t t54 = -36448LL;

	t54 = ((x217&(x218<=x219))|x220);

	if (t54 != -111839305494213789LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -12;
	static int64_t x222 = INT64_MIN;
	int64_t x224 = INT64_MIN;
	int64_t t55 = INT64_MIN;

	t55 = ((x221&(x222<=x223))|x224);

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 1U;
	static volatile int32_t x226 = INT32_MIN;
	static uint32_t x227 = UINT32_MAX;
	static int64_t t56 = 55974528370235382LL;

	t56 = ((x225&(x226<=x227))|x228);

	if (t56 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint8_t x229 = 12U;
	static int64_t x230 = 1LL;
	int64_t x231 = INT64_MAX;
	int32_t t57 = INT32_MIN;

	t57 = ((x229&(x230<=x231))|x232);

	if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	int8_t x234 = 1;
	int8_t x235 = -1;
	uint32_t x236 = 647900803U;

	t58 = ((x233&(x234<=x235))|x236);

	if (t58 != 647900803LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x238 = 23U;
	int32_t x239 = INT32_MIN;
	volatile int8_t x240 = INT8_MIN;

	t59 = ((x237&(x238<=x239))|x240);

	if (t59 != -127LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -1;
	uint32_t x242 = 41215910U;
	int32_t x243 = -342;
	static uint32_t x244 = 55U;
	static uint32_t t60 = 3469U;

	t60 = ((x241&(x242<=x243))|x244);

	if (t60 != 55U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = UINT32_MAX;
	volatile int16_t x246 = INT16_MIN;
	uint32_t x247 = 2U;
	volatile int8_t x248 = INT8_MIN;

	t61 = ((x245&(x246<=x247))|x248);

	if (t61 != 4294967168U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = INT32_MIN;
	static volatile int16_t x250 = -2;
	int32_t x251 = INT32_MIN;
	static volatile int8_t x252 = INT8_MAX;
	static int32_t t62 = 53;

	t62 = ((x249&(x250<=x251))|x252);

	if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x253 = UINT8_MAX;
	int16_t x255 = -112;
	int64_t x256 = -1LL;
	int64_t t63 = -32065163LL;

	t63 = ((x253&(x254<=x255))|x256);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x258 = -1;
	volatile uint8_t x259 = UINT8_MAX;
	uint32_t x260 = UINT32_MAX;
	uint32_t t64 = UINT32_MAX;

	t64 = ((x257&(x258<=x259))|x260);

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x262 = 429091135LLU;
	int16_t x263 = -1;
	static int32_t x264 = INT32_MIN;
	static int64_t t65 = -9358446LL;

	t65 = ((x261&(x262<=x263))|x264);

	if (t65 != -2147483648LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	uint8_t x267 = UINT8_MAX;
	static int64_t t66 = 3LL;

	t66 = ((x265&(x266<=x267))|x268);

	if (t66 != 59LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -1;
	uint8_t x272 = 83U;
	int32_t t67 = 353337919;

	t67 = ((x269&(x270<=x271))|x272);

	if (t67 != 83) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x273 = INT8_MIN;
	int16_t x274 = 7;
	int16_t x275 = -1;
	uint16_t x276 = UINT16_MAX;
	volatile int32_t t68 = 188168748;

	t68 = ((x273&(x274<=x275))|x276);

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	volatile uint16_t x278 = 1657U;
	int64_t x279 = INT64_MIN;
	int32_t x280 = INT32_MIN;
	int32_t t69 = INT32_MIN;

	t69 = ((x277&(x278<=x279))|x280);

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x281 = 0;
	volatile int16_t x283 = 1740;
	uint16_t x284 = UINT16_MAX;

	t70 = ((x281&(x282<=x283))|x284);

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x285 = 60U;
	volatile int64_t x286 = INT64_MIN;
	static int64_t x288 = -1LL;
	volatile int64_t t71 = -5524738737505LL;

	t71 = ((x285&(x286<=x287))|x288);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint32_t x289 = 26670589U;
	int32_t x290 = 1704;
	int64_t x291 = INT64_MAX;
	int32_t x292 = 76618;
	volatile uint32_t t72 = 806901655U;

	t72 = ((x289&(x290<=x291))|x292);

	if (t72 != 76619U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x294 = -24;
	volatile int16_t x295 = INT16_MIN;
	volatile uint16_t x296 = UINT16_MAX;
	static int32_t t73 = -1031;

	t73 = ((x293&(x294<=x295))|x296);

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	int16_t x298 = 0;
	static uint64_t x300 = UINT64_MAX;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = ((x297&(x298<=x299))|x300);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x301 = UINT16_MAX;
	int32_t x302 = 1;
	int8_t x304 = -1;
	static int32_t t75 = -4521650;

	t75 = ((x301&(x302<=x303))|x304);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MAX;
	static int8_t x307 = INT8_MIN;
	uint32_t x308 = 1011338U;

	t76 = ((x305&(x306<=x307))|x308);

	if (t76 != 1011338U) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint8_t x309 = 5U;
	static uint32_t x310 = UINT32_MAX;
	int32_t x311 = 233836907;
	int64_t x312 = -1LL;
	volatile int64_t t77 = -398773509121866626LL;

	t77 = ((x309&(x310<=x311))|x312);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = 0;
	uint8_t x314 = 1U;
	uint32_t x316 = UINT32_MAX;
	volatile uint32_t t78 = UINT32_MAX;

	t78 = ((x313&(x314<=x315))|x316);

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint16_t x319 = UINT16_MAX;
	volatile int8_t x320 = INT8_MIN;
	uint32_t t79 = 13931U;

	t79 = ((x317&(x318<=x319))|x320);

	if (t79 != 4294967168U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -1LL;
	int16_t x323 = -1;
	volatile uint8_t x324 = UINT8_MAX;
	static int64_t t80 = 4723105025LL;

	t80 = ((x321&(x322<=x323))|x324);

	if (t80 != 255LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = INT64_MIN;
	volatile int8_t x326 = -28;
	int32_t x327 = -238204;
	int8_t x328 = INT8_MIN;
	static volatile int64_t t81 = 208LL;

	t81 = ((x325&(x326<=x327))|x328);

	if (t81 != -128LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = UINT16_MAX;
	int16_t x330 = -1;
	volatile int64_t x332 = -105657LL;
	volatile int64_t t82 = 1LL;

	t82 = ((x329&(x330<=x331))|x332);

	if (t82 != -105657LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x334 = INT64_MIN;
	int8_t x335 = -3;
	volatile uint16_t x336 = UINT16_MAX;
	volatile int32_t t83 = 244684;

	t83 = ((x333&(x334<=x335))|x336);

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x337 = 0U;
	volatile int8_t x338 = INT8_MIN;
	static int8_t x340 = INT8_MIN;
	int32_t t84 = 781;

	t84 = ((x337&(x338<=x339))|x340);

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 3959794526639098548LLU;
	int16_t x342 = INT16_MIN;
	volatile int64_t x343 = -1LL;
	volatile int32_t x344 = 15986;
	static volatile uint64_t t85 = 1235LLU;

	t85 = ((x341&(x342<=x343))|x344);

	if (t85 != 15986LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MAX;
	static int64_t x346 = -1LL;
	uint64_t x348 = 704560LLU;

	t86 = ((x345&(x346<=x347))|x348);

	if (t86 != 704561LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x349 = -1;
	static volatile uint64_t x350 = 6LLU;
	static uint32_t x352 = 392U;
	volatile uint32_t t87 = 122414318U;

	t87 = ((x349&(x350<=x351))|x352);

	if (t87 != 392U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = 55;
	int32_t x354 = -1;
	volatile int32_t t88 = INT32_MIN;

	t88 = ((x353&(x354<=x355))|x356);

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -75440579LL;
	int64_t x358 = INT64_MIN;
	uint64_t x360 = 79582483864LLU;
	volatile uint64_t t89 = 27707LLU;

	t89 = ((x357&(x358<=x359))|x360);

	if (t89 != 79582483864LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = UINT32_MAX;
	uint16_t x362 = 2U;
	int16_t x363 = -2;
	int64_t x364 = INT64_MIN;
	int64_t t90 = INT64_MIN;

	t90 = ((x361&(x362<=x363))|x364);

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	static int64_t x366 = INT64_MIN;
	int8_t x367 = -1;
	int32_t x368 = -51277051;
	volatile int32_t t91 = 24471;

	t91 = ((x365&(x366<=x367))|x368);

	if (t91 != -51277051) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = 3311U;
	int64_t x370 = INT64_MIN;
	int8_t x371 = 0;

	t92 = ((x369&(x370<=x371))|x372);

	if (t92 != -2147483647) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x374 = 93U;
	static int16_t x376 = -3;
	uint64_t t93 = 941LLU;

	t93 = ((x373&(x374<=x375))|x376);

	if (t93 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = UINT32_MAX;
	int32_t x378 = INT32_MIN;
	int64_t x379 = 642LL;
	static int8_t x380 = INT8_MIN;
	static volatile uint32_t t94 = 7U;

	t94 = ((x377&(x378<=x379))|x380);

	if (t94 != 4294967169U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	volatile uint32_t x382 = UINT32_MAX;
	int32_t x383 = INT32_MIN;
	volatile int64_t t95 = INT64_MAX;

	t95 = ((x381&(x382<=x383))|x384);

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x386 = 2U;
	static int16_t x387 = -13;
	int32_t x388 = -6241731;

	t96 = ((x385&(x386<=x387))|x388);

	if (t96 != 18446744073703309885LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MAX;
	int16_t x390 = INT16_MIN;
	int16_t x391 = INT16_MIN;
	volatile int8_t x392 = INT8_MIN;
	int32_t t97 = -3;

	t97 = ((x389&(x390<=x391))|x392);

	if (t97 != -127) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x394 = 362LLU;
	volatile uint16_t x395 = 0U;
	int32_t x396 = INT32_MIN;
	static volatile uint64_t t98 = 83818LLU;

	t98 = ((x393&(x394<=x395))|x396);

	if (t98 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = UINT16_MAX;
	int64_t x399 = INT64_MAX;
	volatile int32_t t99 = 1722701;

	t99 = ((x397&(x398<=x399))|x400);

	if (t99 != -32767) { NG(); } else { ; }
	
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

