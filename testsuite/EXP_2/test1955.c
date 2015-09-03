#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = INT32_MIN;
static int8_t x10 = 1;
uint32_t t2 = 11244U;
int16_t x13 = INT16_MAX;
static volatile int64_t t4 = 1LL;
static int64_t x27 = -1LL;
static int16_t x28 = INT16_MIN;
volatile int32_t x40 = INT32_MAX;
volatile int32_t t10 = 6;
static uint8_t x45 = 12U;
volatile uint8_t x46 = 29U;
int32_t t12 = -8976;
uint16_t x55 = 0U;
int16_t x56 = -186;
volatile int32_t x59 = -6959;
uint32_t x63 = UINT32_MAX;
volatile uint8_t x68 = 13U;
volatile int32_t t16 = 10;
uint16_t x70 = 32656U;
int8_t x73 = -1;
static int8_t x75 = INT8_MIN;
static uint64_t x77 = 142302849593947LLU;
volatile uint8_t x80 = 17U;
static int64_t x81 = INT64_MIN;
volatile uint8_t x83 = 23U;
int64_t t20 = -1107004252254175LL;
static int32_t x90 = INT32_MIN;
volatile int16_t x93 = INT16_MAX;
static uint64_t x98 = 1339LLU;
int8_t x102 = INT8_MAX;
volatile uint64_t x103 = 565370562280LLU;
int32_t x106 = INT32_MAX;
int8_t x112 = 58;
volatile int32_t t27 = 604;
volatile int64_t x116 = -6218583539LL;
uint8_t x121 = UINT8_MAX;
static int8_t x122 = -6;
int8_t x123 = INT8_MIN;
int16_t x127 = INT16_MAX;
int64_t t32 = -46365594LL;
static volatile int64_t x143 = 900419200943085LL;
int8_t x165 = -9;
int16_t x168 = -1;
volatile uint64_t x169 = UINT64_MAX;
static uint8_t x170 = UINT8_MAX;
volatile uint16_t x173 = 4922U;
static uint8_t x174 = 1U;
static int32_t x177 = INT32_MIN;
uint64_t x178 = 3LLU;
volatile uint16_t x183 = 1U;
uint64_t t44 = 55810507142LLU;
int64_t x196 = -243227622LL;
static int64_t x198 = 19100299496480LL;
static volatile uint64_t x205 = UINT64_MAX;
int8_t x206 = INT8_MAX;
static uint32_t x207 = 947U;
int16_t x212 = INT16_MIN;
uint16_t x213 = 0U;
static uint8_t x215 = 6U;
uint16_t x216 = 449U;
int32_t t52 = 19;
int32_t t54 = 534832;
volatile int64_t x226 = INT64_MAX;
static int16_t x229 = INT16_MIN;
int32_t t56 = 1;
volatile uint64_t t58 = 1LLU;
int16_t x241 = -1;
uint16_t x250 = UINT16_MAX;
static volatile int8_t x251 = 0;
volatile int16_t x252 = -1;
volatile int64_t t63 = 3609659762722742133LL;
int64_t x261 = INT64_MIN;
static uint16_t x262 = 10123U;
int16_t x266 = -2;
static int64_t x268 = INT64_MIN;
uint16_t x272 = UINT16_MAX;
volatile int32_t t66 = 804;
int16_t x279 = INT16_MIN;
uint64_t x281 = UINT64_MAX;
volatile int8_t x288 = 41;
static uint64_t x290 = 6LLU;
volatile int16_t x294 = INT16_MAX;
static int64_t x296 = INT64_MIN;
volatile int64_t t72 = -80803420502469LL;
int32_t x301 = -1;
int32_t t74 = 622;
static int8_t x320 = -33;
volatile uint64_t t78 = 411LLU;
volatile int64_t x328 = INT64_MAX;
volatile int64_t t79 = -31659LL;
volatile int32_t t80 = -1;
int32_t t82 = -22748664;
uint8_t x344 = 9U;
int32_t x346 = INT32_MIN;
volatile uint32_t x356 = UINT32_MAX;
uint8_t x360 = 2U;
int32_t x363 = -436742;
volatile int32_t t88 = -355633;
uint64_t t91 = 157LLU;
uint64_t x379 = 19526LLU;
int32_t x381 = INT32_MIN;
static int16_t x385 = 5781;
int8_t x386 = -1;
static uint8_t x387 = 3U;
int64_t x388 = 6662318442528LL;
volatile int64_t t94 = -166LL;
static int16_t x389 = INT16_MIN;
static uint64_t x392 = 20906305120LLU;
uint64_t t95 = 13800004883LLU;
int16_t x398 = 0;
volatile int16_t x400 = -1;
int8_t x402 = -1;
static int8_t x403 = INT8_MIN;
uint32_t x408 = UINT32_MAX;
uint32_t t99 = 3570U;


void f0(void) {
	uint64_t x1 = 23477278368LLU;
	static volatile int32_t x2 = INT32_MIN;
	volatile int16_t x3 = -1;
	int8_t x4 = INT8_MIN;
	static volatile int32_t t0 = -28;

	t0 = ((x1==(x2|x3))%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 282206614115448LLU;
	static int64_t x6 = -1LL;
	uint32_t x8 = 21231477U;
	uint32_t t1 = 21440U;

	t1 = ((x5==(x6|x7))%x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 16U;
	uint8_t x11 = 1U;
	uint32_t x12 = UINT32_MAX;

	t2 = ((x9==(x10|x11))%x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x14 = 10LL;
	int64_t x15 = -1320726705847273LL;
	static volatile uint16_t x16 = 1816U;
	volatile int32_t t3 = -1;

	t3 = ((x13==(x14|x15))%x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = -1;
	int32_t x18 = INT32_MAX;
	volatile int8_t x19 = -3;
	static int64_t x20 = INT64_MAX;

	t4 = ((x17==(x18|x19))%x20);

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 33444;
	uint64_t x22 = UINT64_MAX;
	int64_t x23 = INT64_MIN;
	int16_t x24 = INT16_MIN;
	int32_t t5 = 2639;

	t5 = ((x21==(x22|x23))%x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	int8_t x26 = INT8_MIN;
	volatile int32_t t6 = 183;

	t6 = ((x25==(x26|x27))%x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 3LLU;
	uint16_t x30 = UINT16_MAX;
	uint32_t x31 = 4529U;
	volatile uint32_t x32 = 8611U;
	uint32_t t7 = 16U;

	t7 = ((x29==(x30|x31))%x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MIN;
	int32_t x34 = INT32_MIN;
	uint16_t x35 = UINT16_MAX;
	int64_t x36 = 1887626739LL;
	static int64_t t8 = 59LL;

	t8 = ((x33==(x34|x35))%x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int16_t x38 = INT16_MAX;
	uint16_t x39 = 1232U;
	int32_t t9 = -29878;

	t9 = ((x37==(x38|x39))%x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x41 = INT64_MAX;
	static volatile int8_t x42 = -38;
	volatile uint32_t x43 = UINT32_MAX;
	volatile int32_t x44 = 378240;

	t10 = ((x41==(x42|x43))%x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x47 = UINT16_MAX;
	static int64_t x48 = -15220LL;
	static volatile int64_t t11 = -9507679650149LL;

	t11 = ((x45==(x46|x47))%x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = 0LLU;
	static int32_t x50 = INT32_MIN;
	uint16_t x51 = 6635U;
	int32_t x52 = -838298;

	t12 = ((x49==(x50|x51))%x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 2U;
	static uint32_t x54 = 1U;
	int32_t t13 = 48778627;

	t13 = ((x53==(x54|x55))%x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	uint16_t x58 = 268U;
	static volatile int16_t x60 = 15809;
	volatile int32_t t14 = 90;

	t14 = ((x57==(x58|x59))%x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 1LLU;
	int64_t x62 = INT64_MAX;
	int64_t x64 = 994044997571050LL;
	static volatile int64_t t15 = -4162606902LL;

	t15 = ((x61==(x62|x63))%x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	int8_t x66 = -1;
	int16_t x67 = INT16_MIN;

	t16 = ((x65==(x66|x67))%x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MAX;
	int16_t x71 = INT16_MIN;
	static volatile int64_t x72 = -1LL;
	int64_t t17 = -222953088386LL;

	t17 = ((x69==(x70|x71))%x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x74 = 1833970603566LLU;
	uint16_t x76 = 57U;
	static volatile int32_t t18 = 2216309;

	t18 = ((x73==(x74|x75))%x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x78 = 22U;
	volatile uint32_t x79 = UINT32_MAX;
	static int32_t t19 = 44677375;

	t19 = ((x77==(x78|x79))%x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x82 = 88LLU;
	int64_t x84 = INT64_MIN;

	t20 = ((x81==(x82|x83))%x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -1LL;
	int16_t x86 = 1;
	static uint64_t x87 = 163491620LLU;
	int8_t x88 = -1;
	int32_t t21 = -2312661;

	t21 = ((x85==(x86|x87))%x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	int32_t x91 = -19538;
	static int8_t x92 = INT8_MAX;
	volatile int32_t t22 = 141627;

	t22 = ((x89==(x90|x91))%x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x94 = -1;
	int16_t x95 = INT16_MIN;
	int8_t x96 = -1;
	volatile int32_t t23 = 3115007;

	t23 = ((x93==(x94|x95))%x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MAX;
	static volatile int32_t x99 = -1;
	int32_t x100 = INT32_MIN;
	int32_t t24 = -100;

	t24 = ((x97==(x98|x99))%x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	int16_t x104 = INT16_MAX;
	static int32_t t25 = 46;

	t25 = ((x101==(x102|x103))%x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = 85694;
	uint32_t x107 = 401U;
	uint32_t x108 = UINT32_MAX;
	static volatile uint32_t t26 = 251859143U;

	t26 = ((x105==(x106|x107))%x108);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	volatile int16_t x110 = INT16_MAX;
	int16_t x111 = INT16_MIN;

	t27 = ((x109==(x110|x111))%x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x113 = 17U;
	uint32_t x114 = UINT32_MAX;
	int8_t x115 = INT8_MAX;
	volatile int64_t t28 = -46LL;

	t28 = ((x113==(x114|x115))%x116);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -36;
	int16_t x118 = 73;
	int16_t x119 = INT16_MIN;
	int16_t x120 = INT16_MIN;
	volatile int32_t t29 = 38984;

	t29 = ((x117==(x118|x119))%x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x124 = INT32_MIN;
	int32_t t30 = 8;

	t30 = ((x121==(x122|x123))%x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x125 = INT8_MIN;
	volatile int64_t x126 = INT64_MIN;
	static int64_t x128 = -1LL;
	volatile int64_t t31 = -1LL;

	t31 = ((x125==(x126|x127))%x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = 11LL;
	int64_t x134 = -1555LL;
	int32_t x135 = INT32_MAX;
	static int64_t x136 = -1LL;

	t32 = ((x133==(x134|x135))%x136);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MIN;
	int8_t x138 = INT8_MAX;
	volatile uint64_t x139 = UINT64_MAX;
	uint8_t x140 = 7U;
	volatile int32_t t33 = -1020;

	t33 = ((x137==(x138|x139))%x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x141 = INT8_MIN;
	volatile int32_t x142 = 16461;
	volatile int64_t x144 = INT64_MIN;
	static int64_t t34 = 22023580073180466LL;

	t34 = ((x141==(x142|x143))%x144);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x145 = UINT64_MAX;
	int32_t x146 = -64;
	uint8_t x147 = UINT8_MAX;
	int8_t x148 = -1;
	volatile int32_t t35 = 99447;

	t35 = ((x145==(x146|x147))%x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x149 = 113U;
	uint32_t x150 = UINT32_MAX;
	int8_t x151 = INT8_MIN;
	int64_t x152 = INT64_MAX;
	int64_t t36 = -198051184366535LL;

	t36 = ((x149==(x150|x151))%x152);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = INT32_MAX;
	volatile int8_t x154 = 0;
	static int32_t x155 = INT32_MIN;
	static int64_t x156 = 2589103379681858950LL;
	int64_t t37 = -1427823322290997LL;

	t37 = ((x153==(x154|x155))%x156);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x157 = UINT32_MAX;
	uint64_t x158 = 2047LLU;
	int64_t x159 = INT64_MIN;
	uint64_t x160 = 16LLU;
	static volatile uint64_t t38 = 29622LLU;

	t38 = ((x157==(x158|x159))%x160);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x161 = UINT64_MAX;
	static uint64_t x162 = UINT64_MAX;
	int8_t x163 = 4;
	int8_t x164 = INT8_MAX;
	int32_t t39 = 2385;

	t39 = ((x161==(x162|x163))%x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x166 = 416068LLU;
	int32_t x167 = INT32_MIN;
	int32_t t40 = -19;

	t40 = ((x165==(x166|x167))%x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x171 = 9U;
	static uint16_t x172 = 67U;
	static int32_t t41 = 181;

	t41 = ((x169==(x170|x171))%x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x175 = 40687644300089221LLU;
	volatile uint64_t x176 = UINT64_MAX;
	uint64_t t42 = 10676355193LLU;

	t42 = ((x173==(x174|x175))%x176);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x179 = INT32_MIN;
	int64_t x180 = 41176966579914503LL;
	int64_t t43 = 41946584LL;

	t43 = ((x177==(x178|x179))%x180);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = INT16_MAX;
	uint64_t x182 = UINT64_MAX;
	uint64_t x184 = UINT64_MAX;

	t44 = ((x181==(x182|x183))%x184);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = -1;
	int32_t x186 = INT32_MIN;
	int64_t x187 = INT64_MAX;
	volatile int32_t x188 = INT32_MIN;
	volatile int32_t t45 = 926776574;

	t45 = ((x185==(x186|x187))%x188);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = -15480943;
	uint64_t x190 = UINT64_MAX;
	static volatile int16_t x191 = -1;
	volatile uint32_t x192 = UINT32_MAX;
	uint32_t t46 = 147341U;

	t46 = ((x189==(x190|x191))%x192);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = INT32_MIN;
	volatile int64_t x194 = 24505821110969175LL;
	int64_t x195 = 1621LL;
	int64_t t47 = 61692409595693970LL;

	t47 = ((x193==(x194|x195))%x196);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x197 = INT32_MIN;
	volatile uint64_t x199 = 15864139404457912LLU;
	uint32_t x200 = 1200U;
	volatile uint32_t t48 = 1502U;

	t48 = ((x197==(x198|x199))%x200);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x201 = UINT64_MAX;
	uint64_t x202 = 12707838425934336LLU;
	int64_t x203 = -1LL;
	int16_t x204 = INT16_MIN;
	int32_t t49 = 3;

	t49 = ((x201==(x202|x203))%x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x208 = 261U;
	uint32_t t50 = 21U;

	t50 = ((x205==(x206|x207))%x208);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = INT8_MAX;
	uint64_t x210 = UINT64_MAX;
	volatile uint64_t x211 = 720749504559242366LLU;
	int32_t t51 = -4835;

	t51 = ((x209==(x210|x211))%x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x214 = -1;

	t52 = ((x213==(x214|x215))%x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x217 = INT64_MIN;
	volatile uint32_t x218 = UINT32_MAX;
	uint16_t x219 = 9946U;
	static int8_t x220 = INT8_MAX;
	static volatile int32_t t53 = -516286228;

	t53 = ((x217==(x218|x219))%x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = 4205;
	volatile uint32_t x222 = UINT32_MAX;
	uint32_t x223 = UINT32_MAX;
	uint8_t x224 = 11U;

	t54 = ((x221==(x222|x223))%x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x225 = 23;
	int32_t x227 = -8574;
	uint32_t x228 = UINT32_MAX;
	uint32_t t55 = 5218623U;

	t55 = ((x225==(x226|x227))%x228);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x230 = -2157743133LL;
	int32_t x231 = 1;
	static int16_t x232 = 1;

	t56 = ((x229==(x230|x231))%x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = INT32_MIN;
	int64_t x234 = INT64_MIN;
	static uint32_t x235 = 5U;
	int16_t x236 = -1;
	volatile int32_t t57 = -167203333;

	t57 = ((x233==(x234|x235))%x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = INT8_MIN;
	int8_t x238 = -1;
	static volatile int16_t x239 = 91;
	volatile uint64_t x240 = UINT64_MAX;

	t58 = ((x237==(x238|x239))%x240);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x242 = INT32_MIN;
	static int16_t x243 = INT16_MIN;
	volatile int16_t x244 = -1;
	static int32_t t59 = 1;

	t59 = ((x241==(x242|x243))%x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x245 = -1LL;
	static int64_t x246 = INT64_MIN;
	static uint16_t x247 = 7367U;
	int32_t x248 = INT32_MIN;
	volatile int32_t t60 = 28959494;

	t60 = ((x245==(x246|x247))%x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x249 = INT8_MAX;
	int32_t t61 = 254;

	t61 = ((x249==(x250|x251))%x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x253 = -82;
	static uint32_t x254 = 92U;
	static int64_t x255 = INT64_MAX;
	int16_t x256 = INT16_MIN;
	int32_t t62 = -1693865;

	t62 = ((x253==(x254|x255))%x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = INT64_MIN;
	int32_t x258 = -274240;
	volatile uint32_t x259 = 5786796U;
	volatile int64_t x260 = -1LL;

	t63 = ((x257==(x258|x259))%x260);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x263 = 0;
	int16_t x264 = -15;
	int32_t t64 = -428469;

	t64 = ((x261==(x262|x263))%x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x265 = INT64_MIN;
	volatile uint16_t x267 = UINT16_MAX;
	int64_t t65 = -933427035LL;

	t65 = ((x265==(x266|x267))%x268);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x269 = INT16_MAX;
	volatile uint64_t x270 = 1670695377607232694LLU;
	static int16_t x271 = INT16_MIN;

	t66 = ((x269==(x270|x271))%x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x273 = 187066804;
	volatile uint64_t x274 = 17300645190327LLU;
	static volatile int16_t x275 = -1;
	static int8_t x276 = INT8_MIN;
	int32_t t67 = -418;

	t67 = ((x273==(x274|x275))%x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = -1;
	uint64_t x278 = UINT64_MAX;
	volatile uint64_t x280 = UINT64_MAX;
	volatile uint64_t t68 = 1LLU;

	t68 = ((x277==(x278|x279))%x280);

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x282 = UINT64_MAX;
	uint8_t x283 = 89U;
	int64_t x284 = INT64_MAX;
	int64_t t69 = 129233080LL;

	t69 = ((x281==(x282|x283))%x284);

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x285 = UINT32_MAX;
	int16_t x286 = INT16_MAX;
	uint16_t x287 = UINT16_MAX;
	int32_t t70 = 1;

	t70 = ((x285==(x286|x287))%x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x289 = 17793267123LLU;
	int8_t x291 = INT8_MIN;
	uint16_t x292 = 2689U;
	volatile int32_t t71 = -45108;

	t71 = ((x289==(x290|x291))%x292);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x293 = INT32_MIN;
	uint32_t x295 = 890U;

	t72 = ((x293==(x294|x295))%x296);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x297 = 105U;
	uint32_t x298 = 98288402U;
	int8_t x299 = -1;
	static uint64_t x300 = 112939823850390LLU;
	static uint64_t t73 = 3568413091214823LLU;

	t73 = ((x297==(x298|x299))%x300);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x302 = 35U;
	int16_t x303 = INT16_MIN;
	int32_t x304 = INT32_MIN;

	t74 = ((x301==(x302|x303))%x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x305 = 2087077618199752435LLU;
	volatile int32_t x306 = INT32_MAX;
	int32_t x307 = -1;
	int64_t x308 = INT64_MIN;
	volatile int64_t t75 = -1911419063LL;

	t75 = ((x305==(x306|x307))%x308);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x309 = INT16_MIN;
	uint64_t x310 = UINT64_MAX;
	uint8_t x311 = 0U;
	int64_t x312 = -1LL;
	volatile int64_t t76 = 1619864033262326103LL;

	t76 = ((x309==(x310|x311))%x312);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x317 = INT16_MIN;
	uint8_t x318 = UINT8_MAX;
	int8_t x319 = INT8_MIN;
	int32_t t77 = 513;

	t77 = ((x317==(x318|x319))%x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x321 = -1LL;
	int64_t x322 = INT64_MIN;
	uint64_t x323 = UINT64_MAX;
	uint64_t x324 = UINT64_MAX;

	t78 = ((x321==(x322|x323))%x324);

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x325 = 4;
	int16_t x326 = -1;
	static volatile uint64_t x327 = 32637542536552226LLU;

	t79 = ((x325==(x326|x327))%x328);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x329 = -153LL;
	static int16_t x330 = INT16_MAX;
	volatile int8_t x331 = INT8_MAX;
	int32_t x332 = INT32_MIN;

	t80 = ((x329==(x330|x331))%x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x333 = 775331738191LLU;
	int16_t x334 = -1;
	static int16_t x335 = INT16_MAX;
	uint16_t x336 = 9023U;
	int32_t t81 = -25;

	t81 = ((x333==(x334|x335))%x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x337 = -1;
	volatile int8_t x338 = -31;
	int64_t x339 = INT64_MIN;
	int32_t x340 = -2;

	t82 = ((x337==(x338|x339))%x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x341 = INT16_MIN;
	volatile uint64_t x342 = 620675LLU;
	uint64_t x343 = 185704342LLU;
	int32_t t83 = 0;

	t83 = ((x341==(x342|x343))%x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x345 = UINT8_MAX;
	int32_t x347 = -1;
	int8_t x348 = INT8_MIN;
	volatile int32_t t84 = 124;

	t84 = ((x345==(x346|x347))%x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x349 = -21;
	uint16_t x350 = 3U;
	volatile uint16_t x351 = UINT16_MAX;
	uint32_t x352 = UINT32_MAX;
	uint32_t t85 = 9U;

	t85 = ((x349==(x350|x351))%x352);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x353 = INT8_MAX;
	volatile uint64_t x354 = 69249563493413336LLU;
	uint64_t x355 = 395959585470LLU;
	uint32_t t86 = 6349U;

	t86 = ((x353==(x354|x355))%x356);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x357 = -1;
	int32_t x358 = 131973218;
	volatile int8_t x359 = -1;
	volatile int32_t t87 = 9553427;

	t87 = ((x357==(x358|x359))%x360);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x361 = 28966357LL;
	static uint16_t x362 = 32U;
	static uint8_t x364 = UINT8_MAX;

	t88 = ((x361==(x362|x363))%x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x365 = -223619241032LL;
	int16_t x366 = -1;
	int16_t x367 = INT16_MAX;
	int16_t x368 = -227;
	static int32_t t89 = -393730358;

	t89 = ((x365==(x366|x367))%x368);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x369 = INT32_MAX;
	static int64_t x370 = -461025897528440LL;
	uint8_t x371 = UINT8_MAX;
	int32_t x372 = -1;
	int32_t t90 = -257218;

	t90 = ((x369==(x370|x371))%x372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x373 = -1;
	int16_t x374 = -10;
	uint16_t x375 = UINT16_MAX;
	uint64_t x376 = 943432417048LLU;

	t91 = ((x373==(x374|x375))%x376);

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x377 = UINT8_MAX;
	int8_t x378 = -1;
	uint8_t x380 = UINT8_MAX;
	int32_t t92 = -523337107;

	t92 = ((x377==(x378|x379))%x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x382 = 129196;
	int8_t x383 = -27;
	int8_t x384 = INT8_MAX;
	volatile int32_t t93 = -976489;

	t93 = ((x381==(x382|x383))%x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {


	t94 = ((x385==(x386|x387))%x388);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x390 = -1LL;
	static int16_t x391 = INT16_MIN;

	t95 = ((x389==(x390|x391))%x392);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x393 = 55U;
	uint32_t x394 = UINT32_MAX;
	int16_t x395 = -258;
	uint64_t x396 = 3502725998LLU;
	volatile uint64_t t96 = 14698LLU;

	t96 = ((x393==(x394|x395))%x396);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x397 = INT64_MIN;
	static volatile uint8_t x399 = UINT8_MAX;
	volatile int32_t t97 = -149;

	t97 = ((x397==(x398|x399))%x400);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x401 = 3;
	int64_t x404 = INT64_MAX;
	int64_t t98 = 5708027013811106LL;

	t98 = ((x401==(x402|x403))%x404);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x405 = -1;
	static int64_t x406 = INT64_MIN;
	static int32_t x407 = INT32_MIN;

	t99 = ((x405==(x406|x407))%x408);

	if (t99 != 0U) { NG(); } else { ; }
	
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

