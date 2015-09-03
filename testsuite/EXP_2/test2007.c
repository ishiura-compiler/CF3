#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = -1LL;
int16_t x6 = INT16_MIN;
int64_t x7 = -10909LL;
int16_t x20 = INT16_MIN;
int64_t x26 = 37LL;
int16_t x36 = INT16_MIN;
int64_t t8 = 81141296334300398LL;
int8_t x51 = -42;
int64_t x56 = -1068LL;
static uint32_t x81 = 1879872439U;
int8_t x87 = INT8_MIN;
volatile int64_t t21 = 133745428466679049LL;
int64_t x92 = -1097590748408521466LL;
static volatile int8_t x96 = 35;
int64_t x97 = 3949603660623227234LL;
volatile int16_t x104 = -46;
uint8_t x105 = UINT8_MAX;
static uint8_t x109 = UINT8_MAX;
int8_t x110 = -11;
int16_t x119 = INT16_MAX;
uint32_t x125 = 523281042U;
volatile int32_t x128 = INT32_MAX;
int8_t x132 = -1;
int64_t x133 = INT64_MIN;
volatile int8_t x135 = -33;
static int32_t t34 = 7158;
uint8_t x141 = 5U;
static volatile uint32_t x147 = 14366U;
int16_t x149 = -1294;
int32_t x159 = INT32_MIN;
volatile int64_t t39 = 21554LL;
int16_t x164 = -1670;
int8_t x167 = INT8_MAX;
int8_t x168 = -1;
uint8_t x173 = 0U;
uint8_t x178 = 20U;
int64_t x180 = -1318312619LL;
volatile int8_t x182 = 1;
uint16_t x185 = 7599U;
volatile int32_t t48 = 1;
uint8_t x198 = 55U;
uint64_t x199 = 4208569131671LLU;
uint64_t t49 = 31793647935LLU;
static uint8_t x201 = UINT8_MAX;
int16_t x202 = INT16_MIN;
volatile int32_t t50 = 12501;
static int8_t x206 = INT8_MAX;
uint64_t x208 = 1004873LLU;
uint64_t t51 = 162223449LLU;
int16_t x215 = INT16_MIN;
uint64_t x216 = UINT64_MAX;
int64_t x223 = -21227LL;
volatile int64_t t55 = 1159075026215LL;
volatile uint64_t x225 = UINT64_MAX;
volatile int64_t x229 = INT64_MAX;
uint64_t x238 = 1562305364LLU;
volatile uint32_t x245 = 1191114U;
static volatile int16_t x249 = INT16_MIN;
volatile int32_t x252 = INT32_MIN;
uint32_t t64 = 3U;
uint16_t x266 = UINT16_MAX;
uint8_t x268 = 1U;
volatile uint8_t x270 = 0U;
static volatile int16_t x274 = INT16_MAX;
static int8_t x279 = INT8_MAX;
volatile uint32_t t69 = 3U;
static volatile uint64_t t70 = 46898961982LLU;
int16_t x290 = INT16_MIN;
uint32_t t72 = 15417U;
static int32_t x295 = INT32_MIN;
uint8_t x299 = 7U;
static int16_t x304 = INT16_MIN;
volatile int64_t t75 = -1495099925461864199LL;
uint8_t x308 = UINT8_MAX;
volatile int8_t x316 = 22;
static volatile uint64_t x323 = UINT64_MAX;
int8_t x326 = -1;
int32_t x334 = -4947378;
int16_t x339 = INT16_MAX;
uint64_t x341 = UINT64_MAX;
int64_t t86 = 396609032207292356LL;
int64_t x356 = -1LL;
int32_t x358 = INT32_MIN;
int16_t x366 = INT16_MAX;
uint32_t x369 = 2064484U;
static volatile uint64_t t92 = 7383LLU;
int8_t x373 = INT8_MIN;
uint16_t x376 = 3563U;
int64_t x386 = INT64_MAX;
uint32_t x387 = 1367737U;
static volatile int32_t t97 = 546;
volatile uint32_t t99 = 0U;


void f0(void) {
	int8_t x1 = INT8_MIN;
	volatile int16_t x2 = -1;
	uint8_t x3 = 99U;
	int16_t x4 = -1;
	volatile int32_t t0 = -40;

	t0 = ((x1|(x2|x3))%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x8 = -1592448099LL;
	int64_t t1 = 4865464516003548LL;

	t1 = ((x5|(x6|x7))%x8);

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 21416621951886818LL;
	int16_t x10 = INT16_MIN;
	int64_t x11 = 28LL;
	volatile int16_t x12 = INT16_MIN;
	volatile int64_t t2 = -501LL;

	t2 = ((x9|(x10|x11))%x12);

	if (t2 != -23042LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int16_t x14 = INT16_MIN;
	int64_t x15 = INT64_MIN;
	volatile int16_t x16 = -1;
	int64_t t3 = 184986244229LL;

	t3 = ((x13|(x14|x15))%x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 0;
	volatile uint8_t x18 = 28U;
	uint8_t x19 = UINT8_MAX;
	static int32_t t4 = 200258149;

	t4 = ((x17|(x18|x19))%x20);

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	uint8_t x22 = 1U;
	int8_t x23 = 20;
	uint8_t x24 = UINT8_MAX;
	static volatile int32_t t5 = 4067;

	t5 = ((x21|(x22|x23))%x24);

	if (t5 != -107) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 1098720941351LLU;
	int16_t x27 = -1;
	int32_t x28 = 31712;
	uint64_t t6 = 23947828LLU;

	t6 = ((x25|(x26|x27))%x28);

	if (t6 != 27583LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 4U;
	int64_t x30 = INT64_MIN;
	uint8_t x31 = UINT8_MAX;
	uint8_t x32 = 26U;
	int64_t t7 = 2199528826923839389LL;

	t7 = ((x29|(x30|x31))%x32);

	if (t7 != -13LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	volatile int64_t x34 = -1LL;
	static int32_t x35 = 11461;

	t8 = ((x33|(x34|x35))%x36);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MIN;
	int32_t x38 = INT32_MIN;
	int32_t x39 = INT32_MIN;
	int64_t x40 = -1LL;
	volatile int64_t t9 = 57650187143625LL;

	t9 = ((x37|(x38|x39))%x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x41 = INT8_MAX;
	uint16_t x42 = UINT16_MAX;
	int8_t x43 = -21;
	uint8_t x44 = UINT8_MAX;
	int32_t t10 = -770700984;

	t10 = ((x41|(x42|x43))%x44);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = INT32_MIN;
	int16_t x46 = -2;
	int16_t x47 = INT16_MIN;
	uint16_t x48 = 60U;
	int32_t t11 = -110158;

	t11 = ((x45|(x46|x47))%x48);

	if (t11 != -2) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -105;
	int8_t x50 = 59;
	int64_t x52 = -1LL;
	static volatile int64_t t12 = -678155084161563LL;

	t12 = ((x49|(x50|x51))%x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = INT32_MIN;
	int32_t x54 = -1;
	uint16_t x55 = 210U;
	int64_t t13 = 536LL;

	t13 = ((x53|(x54|x55))%x56);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = INT64_MIN;
	uint32_t x58 = UINT32_MAX;
	volatile int32_t x59 = INT32_MIN;
	volatile uint8_t x60 = UINT8_MAX;
	int64_t t14 = -118LL;

	t14 = ((x57|(x58|x59))%x60);

	if (t14 != -128LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x61 = 1308498LLU;
	static int16_t x62 = INT16_MAX;
	uint32_t x63 = UINT32_MAX;
	int64_t x64 = INT64_MIN;
	uint64_t t15 = 1375429800147LLU;

	t15 = ((x61|(x62|x63))%x64);

	if (t15 != 4294967295LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 3245LLU;
	static volatile uint32_t x66 = UINT32_MAX;
	int32_t x67 = -1448;
	int64_t x68 = 3342320235396243LL;
	static volatile uint64_t t16 = 2736717582LLU;

	t16 = ((x65|(x66|x67))%x68);

	if (t16 != 4294967295LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x69 = 0LLU;
	static int8_t x70 = -1;
	static uint64_t x71 = UINT64_MAX;
	uint32_t x72 = 127177U;
	volatile uint64_t t17 = 717LLU;

	t17 = ((x69|(x70|x71))%x72);

	if (t17 != 19278LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = 2;
	uint16_t x74 = UINT16_MAX;
	static volatile int32_t x75 = INT32_MIN;
	int32_t x76 = -1;
	int32_t t18 = 1;

	t18 = ((x73|(x74|x75))%x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 3521U;
	uint64_t x78 = 41958057135459556LLU;
	static uint16_t x79 = 991U;
	int16_t x80 = INT16_MIN;
	volatile uint64_t t19 = 13695576592423LLU;

	t19 = ((x77|(x78|x79))%x80);

	if (t19 != 41958057135460351LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x82 = INT32_MIN;
	volatile int8_t x83 = -1;
	int16_t x84 = INT16_MIN;
	uint32_t t20 = 5705U;

	t20 = ((x81|(x82|x83))%x84);

	if (t20 != 32767U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x85 = 3U;
	uint8_t x86 = UINT8_MAX;
	int64_t x88 = INT64_MAX;

	t21 = ((x85|(x86|x87))%x88);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MAX;
	volatile int64_t x90 = -1LL;
	int64_t x91 = INT64_MIN;
	static int64_t t22 = -4207040562642LL;

	t22 = ((x89|(x90|x91))%x92);

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	uint64_t x94 = 15459040271556LLU;
	uint8_t x95 = UINT8_MAX;
	volatile uint64_t t23 = 3452228728LLU;

	t23 = ((x93|(x94|x95))%x96);

	if (t23 != 14LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x98 = 492057888U;
	int16_t x99 = 1;
	volatile int32_t x100 = INT32_MIN;
	static int64_t t24 = 60361352639LL;

	t24 = ((x97|(x98|x99))%x100);

	if (t24 != 2136456547LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	uint8_t x102 = 2U;
	uint16_t x103 = 222U;
	volatile uint64_t t25 = 1301598LLU;

	t25 = ((x101|(x102|x103))%x104);

	if (t25 != 45LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = 48;
	uint16_t x107 = 9U;
	static volatile int64_t x108 = 23LL;
	volatile int64_t t26 = 167185504LL;

	t26 = ((x105|(x106|x107))%x108);

	if (t26 != 2LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x111 = -1;
	static uint32_t x112 = 597460U;
	uint32_t t27 = 1502U;

	t27 = ((x109|(x110|x111))%x112);

	if (t27 != 424815U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	uint64_t x114 = 43008LLU;
	static int64_t x115 = -2076783181522LL;
	static int64_t x116 = -1LL;
	uint64_t t28 = 94748LLU;

	t28 = ((x113|(x114|x115))%x116);

	if (t28 != 18446744073709551534LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 96U;
	int64_t x118 = INT64_MIN;
	int64_t x120 = -1LL;
	volatile int64_t t29 = -580300593787574LL;

	t29 = ((x117|(x118|x119))%x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = UINT16_MAX;
	uint32_t x122 = 32722U;
	int8_t x123 = 33;
	volatile int32_t x124 = -199;
	volatile uint32_t t30 = 2033U;

	t30 = ((x121|(x122|x123))%x124);

	if (t30 != 65535U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x126 = -49958LL;
	int16_t x127 = 1;
	static volatile int64_t t31 = 50852LL;

	t31 = ((x125|(x126|x127))%x128);

	if (t31 != -16677LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x129 = UINT16_MAX;
	int32_t x130 = INT32_MAX;
	static int32_t x131 = INT32_MIN;
	volatile int32_t t32 = -1327731;

	t32 = ((x129|(x130|x131))%x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x134 = 73806141LL;
	static uint8_t x136 = 3U;
	volatile int64_t t33 = 2232282089281007577LL;

	t33 = ((x133|(x134|x135))%x136);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MAX;
	static int16_t x138 = INT16_MAX;
	int16_t x139 = -1;
	int16_t x140 = -1751;

	t34 = ((x137|(x138|x139))%x140);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x142 = 1U;
	int64_t x143 = -1LL;
	uint32_t x144 = 62566551U;
	static int64_t t35 = -16190876814LL;

	t35 = ((x141|(x142|x143))%x144);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x145 = 17892309625539235LLU;
	volatile uint32_t x146 = 561U;
	uint16_t x148 = 1U;
	static uint64_t t36 = 9LLU;

	t36 = ((x145|(x146|x147))%x148);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x150 = 2U;
	int64_t x151 = INT64_MIN;
	int16_t x152 = -1;
	static volatile int64_t t37 = 11792420844937462LL;

	t37 = ((x149|(x150|x151))%x152);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 30U;
	volatile int64_t x154 = -1LL;
	int64_t x155 = -334LL;
	int8_t x156 = INT8_MIN;
	static int64_t t38 = 1200207695LL;

	t38 = ((x153|(x154|x155))%x156);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = INT64_MIN;
	int8_t x158 = 0;
	int32_t x160 = -1;

	t39 = ((x157|(x158|x159))%x160);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x161 = UINT64_MAX;
	int64_t x162 = -1LL;
	volatile int32_t x163 = INT32_MAX;
	static uint64_t t40 = 13389048279LLU;

	t40 = ((x161|(x162|x163))%x164);

	if (t40 != 1669LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x165 = 2LLU;
	int64_t x166 = INT64_MIN;
	static volatile uint64_t t41 = 923LLU;

	t41 = ((x165|(x166|x167))%x168);

	if (t41 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x169 = INT32_MIN;
	int8_t x170 = INT8_MIN;
	int8_t x171 = 35;
	volatile int16_t x172 = INT16_MIN;
	int32_t t42 = 478723;

	t42 = ((x169|(x170|x171))%x172);

	if (t42 != -93) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = -1;
	static uint64_t x175 = 4048LLU;
	int64_t x176 = 1276390486728334921LL;
	volatile uint64_t t43 = 84726121LLU;

	t43 = ((x173|(x174|x175))%x176);

	if (t43 != 577277259512862721LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	volatile int16_t x179 = INT16_MAX;
	int64_t t44 = 22555641058572637LL;

	t44 = ((x177|(x178|x179))%x180);

	if (t44 != -829138262LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = -15;
	uint32_t x183 = 3957065U;
	static volatile int64_t x184 = -1LL;
	volatile int64_t t45 = -13541387584574119LL;

	t45 = ((x181|(x182|x183))%x184);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x186 = INT32_MIN;
	int64_t x187 = 1977542LL;
	static int8_t x188 = INT8_MAX;
	volatile int64_t t46 = -95192196287220LL;

	t46 = ((x185|(x186|x187))%x188);

	if (t46 != -35LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = -1;
	static int32_t x190 = INT32_MIN;
	static int64_t x191 = -1LL;
	volatile int8_t x192 = INT8_MIN;
	volatile int64_t t47 = -1944LL;

	t47 = ((x189|(x190|x191))%x192);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	uint8_t x194 = 6U;
	int32_t x195 = INT32_MAX;
	int16_t x196 = -13;

	t48 = ((x193|(x194|x195))%x196);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -61;
	static volatile uint64_t x200 = 1LLU;

	t49 = ((x197|(x198|x199))%x200);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x203 = -1;
	int16_t x204 = INT16_MIN;

	t50 = ((x201|(x202|x203))%x204);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	static volatile int16_t x207 = 147;

	t51 = ((x205|(x206|x207))%x208);

	if (t51 != 121760LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x209 = 96876696563000971LL;
	static int64_t x210 = INT64_MAX;
	int64_t x211 = -256270LL;
	uint64_t x212 = UINT64_MAX;
	uint64_t t52 = 45876LLU;

	t52 = ((x209|(x210|x211))%x212);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -34573516;
	uint8_t x214 = UINT8_MAX;
	uint64_t t53 = 161359744896LLU;

	t53 = ((x213|(x214|x215))%x216);

	if (t53 != 18446744073709548543LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 1U;
	volatile int32_t x218 = INT32_MIN;
	uint8_t x219 = UINT8_MAX;
	int8_t x220 = INT8_MAX;
	static int32_t t54 = -525758;

	t54 = ((x217|(x218|x219))%x220);

	if (t54 != -7) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = 18555863714LL;
	uint8_t x222 = 3U;
	volatile int32_t x224 = INT32_MIN;

	t55 = ((x221|(x222|x223))%x224);

	if (t55 != -20553LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x226 = 4U;
	int64_t x227 = INT64_MAX;
	volatile uint16_t x228 = UINT16_MAX;
	uint64_t t56 = 71LLU;

	t56 = ((x225|(x226|x227))%x228);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x230 = UINT32_MAX;
	static uint32_t x231 = 164194U;
	uint64_t x232 = 5153863LLU;
	uint64_t t57 = 315772LLU;

	t57 = ((x229|(x230|x231))%x232);

	if (t57 != 1285863LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = -182655;
	int16_t x234 = 53;
	volatile int8_t x235 = -48;
	static int64_t x236 = -1LL;
	volatile int64_t t58 = 93LL;

	t58 = ((x233|(x234|x235))%x236);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MAX;
	static uint64_t x239 = 6LLU;
	int32_t x240 = INT32_MAX;
	volatile uint64_t t59 = 2986LLU;

	t59 = ((x237|(x238|x239))%x240);

	if (t59 != 1562305407LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = INT8_MIN;
	int16_t x242 = INT16_MIN;
	uint16_t x243 = UINT16_MAX;
	static int8_t x244 = INT8_MIN;
	volatile int32_t t60 = -479562074;

	t60 = ((x241|(x242|x243))%x244);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x246 = INT32_MAX;
	int16_t x247 = INT16_MIN;
	int64_t x248 = -1066962775554536LL;
	volatile int64_t t61 = -193489LL;

	t61 = ((x245|(x246|x247))%x248);

	if (t61 != 4294967295LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x250 = -1;
	static int8_t x251 = INT8_MAX;
	static int32_t t62 = 13;

	t62 = ((x249|(x250|x251))%x252);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = INT32_MIN;
	int64_t x254 = -1LL;
	uint16_t x255 = 3U;
	uint32_t x256 = UINT32_MAX;
	int64_t t63 = 106608438025343LL;

	t63 = ((x253|(x254|x255))%x256);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x257 = 1U;
	int32_t x258 = INT32_MIN;
	uint16_t x259 = UINT16_MAX;
	uint8_t x260 = 1U;

	t64 = ((x257|(x258|x259))%x260);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -1LL;
	volatile int64_t x262 = INT64_MAX;
	volatile int8_t x263 = -1;
	static int32_t x264 = -1;
	int64_t t65 = -936LL;

	t65 = ((x261|(x262|x263))%x264);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x265 = 148LL;
	static volatile uint64_t x267 = 545150229363282329LLU;
	static uint64_t t66 = 50LLU;

	t66 = ((x265|(x266|x267))%x268);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = 20U;
	int16_t x271 = -1;
	static int32_t x272 = 651189;
	int32_t t67 = -8;

	t67 = ((x269|(x270|x271))%x272);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x273 = -3LL;
	uint32_t x275 = 831327U;
	int16_t x276 = 56;
	volatile int64_t t68 = -48158690730126638LL;

	t68 = ((x273|(x274|x275))%x276);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	uint32_t x278 = 13154U;
	volatile int16_t x280 = -476;

	t69 = ((x277|(x278|x279))%x280);

	if (t69 != 475U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x281 = -1LL;
	uint8_t x282 = 14U;
	uint64_t x283 = 2313122LLU;
	int8_t x284 = INT8_MAX;

	t70 = ((x281|(x282|x283))%x284);

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = -460889602;
	volatile int16_t x286 = INT16_MIN;
	volatile int32_t x287 = -1;
	int16_t x288 = -1;
	int32_t t71 = -195852;

	t71 = ((x285|(x286|x287))%x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	int16_t x291 = INT16_MIN;
	volatile uint32_t x292 = 58620U;

	t72 = ((x289|(x290|x291))%x292);

	if (t72 != 22988U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x293 = 1LLU;
	volatile int8_t x294 = -11;
	uint8_t x296 = UINT8_MAX;
	uint64_t t73 = 840807735042701LLU;

	t73 = ((x293|(x294|x295))%x296);

	if (t73 != 245LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 1U;
	int16_t x298 = INT16_MAX;
	static volatile int16_t x300 = INT16_MAX;
	static volatile int32_t t74 = 9;

	t74 = ((x297|(x298|x299))%x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = UINT8_MAX;
	int32_t x302 = INT32_MIN;
	int64_t x303 = INT64_MAX;

	t75 = ((x301|(x302|x303))%x304);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MAX;
	int8_t x306 = INT8_MIN;
	static int8_t x307 = -1;
	volatile int32_t t76 = -22;

	t76 = ((x305|(x306|x307))%x308);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x309 = 30U;
	int32_t x310 = -1;
	uint32_t x311 = UINT32_MAX;
	uint16_t x312 = 49U;
	uint32_t t77 = 306U;

	t77 = ((x309|(x310|x311))%x312);

	if (t77 != 38U) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x313 = -1;
	int8_t x314 = 52;
	uint32_t x315 = 11U;
	volatile uint32_t t78 = 2417923U;

	t78 = ((x313|(x314|x315))%x316);

	if (t78 != 3U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	int16_t x318 = INT16_MAX;
	static int32_t x319 = -8180111;
	int8_t x320 = -1;
	int32_t t79 = -10;

	t79 = ((x317|(x318|x319))%x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MAX;
	int64_t x322 = -1LL;
	int8_t x324 = -12;
	static volatile uint64_t t80 = 1980899LLU;

	t80 = ((x321|(x322|x323))%x324);

	if (t80 != 11LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = -3297;
	int64_t x327 = -579208677582LL;
	int8_t x328 = -28;
	int64_t t81 = 802831395LL;

	t81 = ((x325|(x326|x327))%x328);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 456U;
	volatile uint16_t x330 = 5607U;
	static volatile int32_t x331 = INT32_MAX;
	int32_t x332 = INT32_MIN;
	volatile uint32_t t82 = 30672U;

	t82 = ((x329|(x330|x331))%x332);

	if (t82 != 2147483647U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -53;
	int32_t x335 = INT32_MIN;
	uint8_t x336 = UINT8_MAX;
	static volatile int32_t t83 = 137401;

	t83 = ((x333|(x334|x335))%x336);

	if (t83 != -49) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = UINT32_MAX;
	int8_t x338 = 3;
	static int16_t x340 = INT16_MAX;
	uint32_t t84 = 3216U;

	t84 = ((x337|(x338|x339))%x340);

	if (t84 != 3U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x342 = INT32_MIN;
	volatile uint16_t x343 = 1599U;
	static int64_t x344 = INT64_MAX;
	uint64_t t85 = 604387LLU;

	t85 = ((x341|(x342|x343))%x344);

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x345 = INT32_MIN;
	volatile int64_t x346 = -1LL;
	static int32_t x347 = INT32_MIN;
	volatile int32_t x348 = INT32_MIN;

	t86 = ((x345|(x346|x347))%x348);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = 0;
	volatile uint64_t x350 = 6969255LLU;
	int16_t x351 = 2;
	volatile int8_t x352 = -1;
	volatile uint64_t t87 = 41LLU;

	t87 = ((x349|(x350|x351))%x352);

	if (t87 != 6969255LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x353 = -1;
	int64_t x354 = -139585329744816LL;
	static volatile uint32_t x355 = 223912357U;
	int64_t t88 = -211266647LL;

	t88 = ((x353|(x354|x355))%x356);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x357 = INT64_MIN;
	int32_t x359 = 29267634;
	int64_t x360 = INT64_MIN;
	int64_t t89 = -5648LL;

	t89 = ((x357|(x358|x359))%x360);

	if (t89 != -2118216014LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	volatile int64_t x362 = -267717243434626070LL;
	uint16_t x363 = 0U;
	int64_t x364 = INT64_MAX;
	int64_t t90 = -260753523027828960LL;

	t90 = ((x361|(x362|x363))%x364);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x365 = INT32_MIN;
	volatile uint16_t x367 = 0U;
	int16_t x368 = INT16_MAX;
	volatile int32_t t91 = -367;

	t91 = ((x365|(x366|x367))%x368);

	if (t91 != -2) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x370 = 3517659017LLU;
	static uint32_t x371 = 307228U;
	int8_t x372 = INT8_MAX;

	t92 = ((x369|(x370|x371))%x372);

	if (t92 != 7LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x374 = -1;
	int32_t x375 = INT32_MIN;
	int32_t t93 = 450906;

	t93 = ((x373|(x374|x375))%x376);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 6047008774LLU;
	static uint64_t x378 = 57650723839LLU;
	int64_t x379 = INT64_MIN;
	uint16_t x380 = 26U;
	volatile uint64_t t94 = 1362629235948186581LLU;

	t94 = ((x377|(x378|x379))%x380);

	if (t94 != 23LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = 1;
	int32_t x382 = INT32_MIN;
	volatile uint8_t x383 = 8U;
	static int32_t x384 = INT32_MAX;
	static volatile int32_t t95 = -698533;

	t95 = ((x381|(x382|x383))%x384);

	if (t95 != -2147483639) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = UINT64_MAX;
	int8_t x388 = INT8_MIN;
	volatile uint64_t t96 = 6LLU;

	t96 = ((x385|(x386|x387))%x388);

	if (t96 != 127LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 15182U;
	uint8_t x390 = 7U;
	static int16_t x391 = INT16_MIN;
	int8_t x392 = -1;

	t97 = ((x389|(x390|x391))%x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 6U;
	uint32_t x394 = 24507961U;
	static int16_t x395 = 142;
	uint64_t x396 = UINT64_MAX;
	volatile uint64_t t98 = 253719333LLU;

	t98 = ((x393|(x394|x395))%x396);

	if (t98 != 24508095LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x397 = 1U;
	int16_t x398 = INT16_MIN;
	uint32_t x399 = UINT32_MAX;
	uint8_t x400 = 3U;

	t99 = ((x397|(x398|x399))%x400);

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

