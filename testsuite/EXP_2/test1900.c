#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = -1;
static int32_t x13 = INT32_MAX;
static int64_t x15 = -1LL;
static volatile int64_t t3 = -8339184LL;
volatile int32_t t4 = 38379;
volatile int32_t t5 = 213;
int8_t x30 = -1;
int8_t x31 = INT8_MIN;
int8_t x44 = INT8_MIN;
static volatile int32_t t9 = 64;
uint64_t t10 = 99413LLU;
int16_t x49 = INT16_MIN;
int32_t x50 = INT32_MAX;
int16_t x58 = INT16_MIN;
int16_t x60 = -118;
volatile uint32_t x61 = 3952U;
static int8_t x66 = INT8_MAX;
volatile uint64_t t17 = 35428293305701426LLU;
volatile int8_t x77 = INT8_MIN;
static int64_t x78 = INT64_MIN;
int64_t x81 = -1LL;
int64_t t20 = -1LL;
uint64_t t21 = 2111538564LLU;
int8_t x103 = INT8_MIN;
int32_t t22 = -792;
int64_t x105 = INT64_MIN;
static uint8_t x108 = 1U;
volatile uint64_t t23 = UINT64_MAX;
int32_t x114 = INT32_MIN;
static int16_t x121 = INT16_MIN;
int32_t x122 = INT32_MIN;
int16_t x123 = -93;
uint32_t x126 = 10U;
static int16_t x134 = INT16_MIN;
int32_t x143 = INT32_MIN;
int64_t x147 = -50066427459695688LL;
uint64_t x152 = 798299057580176LLU;
int64_t x153 = INT64_MIN;
int16_t x155 = -1691;
volatile int64_t t35 = -1LL;
volatile int32_t x157 = -1;
volatile int64_t t36 = 395559LL;
int64_t x165 = 78LL;
volatile int64_t x171 = INT64_MAX;
static uint32_t x179 = 15172572U;
int8_t x183 = INT8_MIN;
static int16_t x186 = 2508;
volatile uint64_t t47 = 765626LLU;
int16_t x205 = INT16_MAX;
int32_t x211 = INT32_MIN;
static volatile int8_t x219 = INT8_MIN;
static uint32_t x223 = UINT32_MAX;
volatile int8_t x224 = INT8_MAX;
volatile uint32_t x234 = 1902694989U;
uint64_t t54 = 66216LLU;
uint8_t x241 = UINT8_MAX;
uint8_t x242 = 119U;
static volatile uint32_t x243 = 111434U;
uint32_t x244 = 56104U;
static uint64_t x250 = 294881155642782716LLU;
int16_t x258 = INT16_MIN;
int32_t x261 = -375887;
static uint16_t x264 = 706U;
int32_t x267 = -1206;
volatile int64_t x268 = INT64_MAX;
uint64_t x286 = UINT64_MAX;
int32_t x290 = 65005;
static uint64_t x297 = 28107887865916LLU;
int8_t x308 = 4;
volatile uint32_t t70 = 5U;
int16_t x313 = INT16_MIN;
uint64_t t71 = 5568LLU;
uint8_t x317 = UINT8_MAX;
int16_t x320 = -1;
int32_t x323 = 4041;
int16_t x333 = -1;
int32_t x334 = -1;
int64_t t76 = 259110664708734LL;
static volatile uint64_t t77 = UINT64_MAX;
int64_t x348 = INT64_MIN;
volatile int32_t x360 = INT32_MIN;
static uint64_t x364 = UINT64_MAX;
int64_t x366 = INT64_MIN;
uint32_t x373 = 27070U;
int64_t x379 = -1LL;
int32_t x383 = INT32_MIN;
int64_t x384 = INT64_MAX;
int64_t x385 = 1LL;
int64_t t88 = -93114934926784LL;
int64_t x391 = INT64_MAX;
volatile int16_t x406 = -1;
static uint32_t x412 = 111U;
int16_t x417 = -4;
int32_t t95 = 904639;
int8_t x425 = INT8_MIN;
int32_t t97 = 21;


void f0(void) {
	uint64_t x2 = 10019030852483LLU;
	uint32_t x3 = UINT32_MAX;
	static int16_t x4 = INT16_MAX;
	static uint64_t t0 = 133725393430LLU;

	t0 = ((x1/(x2|x3))-x4);

	if (t0 != 1808196LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 3U;
	static uint32_t x6 = 1543U;
	volatile int16_t x7 = INT16_MIN;
	static int32_t x8 = INT32_MAX;
	volatile uint32_t t1 = 14176255U;

	t1 = ((x5/(x6|x7))-x8);

	if (t1 != 2147483649U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	static uint64_t x10 = 359LLU;
	static int16_t x11 = INT16_MIN;
	static int64_t x12 = INT64_MAX;
	uint64_t t2 = 38259LLU;

	t2 = ((x9/(x10|x11))-x12);

	if (t2 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = 1U;
	volatile uint32_t x16 = 4185347U;

	t3 = ((x13/(x14|x15))-x16);

	if (t3 != -2151668994LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	uint8_t x18 = 20U;
	int16_t x19 = INT16_MIN;
	uint16_t x20 = 4912U;

	t4 = ((x17/(x18|x19))-x20);

	if (t4 != -4912) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	uint16_t x22 = 10136U;
	volatile int8_t x23 = INT8_MIN;
	static int32_t x24 = INT32_MIN;

	t5 = ((x21/(x22|x23))-x24);

	if (t5 != 2147483333) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	int8_t x26 = -1;
	int8_t x27 = INT8_MIN;
	uint8_t x28 = UINT8_MAX;
	int32_t t6 = 398;

	t6 = ((x25/(x26|x27))-x28);

	if (t6 != -65790) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 56938U;
	volatile int32_t x32 = INT32_MIN;
	volatile uint32_t t7 = 4U;

	t7 = ((x29/(x30|x31))-x32);

	if (t7 != 2147483648U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 1362877U;
	int8_t x34 = -50;
	volatile int32_t x35 = -1;
	int16_t x36 = INT16_MIN;
	static volatile uint32_t t8 = 0U;

	t8 = ((x33/(x34|x35))-x36);

	if (t8 != 32768U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x41 = 6U;
	static int16_t x42 = -89;
	static int32_t x43 = 988419087;

	t9 = ((x41/(x42|x43))-x44);

	if (t9 != 128) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = UINT32_MAX;
	volatile uint32_t x46 = 196U;
	volatile uint64_t x47 = 938526891LLU;
	static int16_t x48 = INT16_MIN;

	t10 = ((x45/(x46|x47))-x48);

	if (t10 != 32772LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint32_t x51 = 254112758U;
	static volatile uint64_t x52 = 315749592850LLU;
	volatile uint64_t t11 = 142648LLU;

	t11 = ((x49/(x50|x51))-x52);

	if (t11 != 18446743757959958767LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = UINT16_MAX;
	int16_t x54 = -1492;
	int8_t x55 = INT8_MIN;
	int32_t x56 = -467343836;
	static int32_t t12 = -365369;

	t12 = ((x53/(x54|x55))-x56);

	if (t12 != 467343056) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x57 = 2U;
	static int8_t x59 = 1;
	volatile int32_t t13 = 91;

	t13 = ((x57/(x58|x59))-x60);

	if (t13 != 118) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x62 = 365LLU;
	volatile int32_t x63 = INT32_MIN;
	uint8_t x64 = 3U;
	volatile uint64_t t14 = 795397063754751359LLU;

	t14 = ((x61/(x62|x63))-x64);

	if (t14 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x65 = INT32_MIN;
	uint64_t x67 = UINT64_MAX;
	int32_t x68 = INT32_MIN;
	volatile uint64_t t15 = 88LLU;

	t15 = ((x65/(x66|x67))-x68);

	if (t15 != 2147483648LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x69 = INT8_MIN;
	static volatile int32_t x70 = -1;
	int32_t x71 = INT32_MIN;
	static volatile uint32_t x72 = 2U;
	volatile uint32_t t16 = 3103707U;

	t16 = ((x69/(x70|x71))-x72);

	if (t16 != 126U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x73 = 12699LLU;
	int16_t x74 = INT16_MIN;
	static volatile int8_t x75 = -1;
	int64_t x76 = INT64_MIN;

	t17 = ((x73/(x74|x75))-x76);

	if (t17 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x79 = 9U;
	int64_t x80 = -2386365002799658337LL;
	volatile int64_t t18 = -2624038539LL;

	t18 = ((x77/(x78|x79))-x80);

	if (t18 != 2386365002799658337LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x82 = INT16_MIN;
	uint32_t x83 = 4339U;
	int16_t x84 = -1;
	volatile int64_t t19 = 7758628513044LL;

	t19 = ((x81/(x82|x83))-x84);

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x89 = 2497LL;
	int16_t x90 = INT16_MAX;
	uint32_t x91 = UINT32_MAX;
	uint32_t x92 = 1008U;

	t20 = ((x89/(x90|x91))-x92);

	if (t20 != -1008LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = INT8_MIN;
	volatile int64_t x98 = INT64_MIN;
	int32_t x99 = INT32_MAX;
	uint64_t x100 = UINT64_MAX;

	t21 = ((x97/(x98|x99))-x100);

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = INT32_MAX;
	int32_t x102 = INT32_MIN;
	int16_t x104 = 2;

	t22 = ((x101/(x102|x103))-x104);

	if (t22 != -16777217) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x106 = -50996329731837943LL;
	uint64_t x107 = 39496253667LLU;

	t23 = ((x105/(x106|x107))-x108);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x109 = 16116565U;
	int64_t x110 = 7418LL;
	int32_t x111 = 1428561;
	uint32_t x112 = 2815U;
	int64_t t24 = 3067529350LL;

	t24 = ((x109/(x110|x111))-x112);

	if (t24 != -2804LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x113 = 0LLU;
	uint64_t x115 = 5382085240379LLU;
	uint8_t x116 = 30U;
	volatile uint64_t t25 = 32542084274790257LLU;

	t25 = ((x113/(x114|x115))-x116);

	if (t25 != 18446744073709551586LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = INT16_MIN;
	volatile int8_t x118 = INT8_MAX;
	static int64_t x119 = -53683148695516848LL;
	uint64_t x120 = 4076331284121LLU;
	volatile uint64_t t26 = 1621287976164783LLU;

	t26 = ((x117/(x118|x119))-x120);

	if (t26 != 18446739997378267495LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x124 = -77;
	int32_t t27 = -195;

	t27 = ((x121/(x122|x123))-x124);

	if (t27 != 429) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x125 = UINT16_MAX;
	volatile int64_t x127 = -1LL;
	int16_t x128 = -1;
	static int64_t t28 = -137499047048120133LL;

	t28 = ((x125/(x126|x127))-x128);

	if (t28 != -65534LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x129 = -3;
	int32_t x130 = -1;
	static int32_t x131 = INT32_MIN;
	int8_t x132 = -1;
	volatile int32_t t29 = -469;

	t29 = ((x129/(x130|x131))-x132);

	if (t29 != 4) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = INT8_MIN;
	volatile uint64_t x135 = UINT64_MAX;
	static uint16_t x136 = 461U;
	uint64_t t30 = 117150368081747228LLU;

	t30 = ((x133/(x134|x135))-x136);

	if (t30 != 18446744073709551155LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x137 = 1LLU;
	int8_t x138 = INT8_MIN;
	int64_t x139 = 6287846LL;
	int32_t x140 = 1940749;
	volatile uint64_t t31 = 4704570197286478LLU;

	t31 = ((x137/(x138|x139))-x140);

	if (t31 != 18446744073707610867LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x141 = -4891508;
	int64_t x142 = -1LL;
	int8_t x144 = 2;
	int64_t t32 = -117721122707519LL;

	t32 = ((x141/(x142|x143))-x144);

	if (t32 != 4891506LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x145 = 0U;
	volatile int16_t x146 = INT16_MIN;
	int16_t x148 = INT16_MIN;
	int64_t t33 = 1018875439LL;

	t33 = ((x145/(x146|x147))-x148);

	if (t33 != 32768LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x149 = INT8_MAX;
	static volatile uint8_t x150 = 91U;
	volatile int8_t x151 = INT8_MIN;
	uint64_t t34 = 99770557083449LLU;

	t34 = ((x149/(x150|x151))-x152);

	if (t34 != 18445945774651971437LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x154 = INT64_MIN;
	int64_t x156 = 38LL;

	t35 = ((x153/(x154|x155))-x156);

	if (t35 != 5454389140659202LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x158 = INT64_MIN;
	static uint8_t x159 = 5U;
	volatile int8_t x160 = -10;

	t36 = ((x157/(x158|x159))-x160);

	if (t36 != 10LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x161 = 2U;
	int32_t x162 = INT32_MAX;
	int64_t x163 = INT64_MIN;
	volatile int64_t x164 = 57679018904061698LL;
	static int64_t t37 = 6284LL;

	t37 = ((x161/(x162|x163))-x164);

	if (t37 != -57679018904061698LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x166 = 0U;
	volatile uint64_t x167 = 269981370459387877LLU;
	int16_t x168 = -1767;
	uint64_t t38 = 32262467921997412LLU;

	t38 = ((x165/(x166|x167))-x168);

	if (t38 != 1767LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x169 = -529983;
	volatile int8_t x170 = -6;
	int16_t x172 = -141;
	int64_t t39 = -198249091LL;

	t39 = ((x169/(x170|x171))-x172);

	if (t39 != 530124LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x173 = 8742380064411571093LLU;
	int32_t x174 = INT32_MIN;
	static volatile int16_t x175 = 123;
	uint64_t x176 = 4454837838668515LLU;
	volatile uint64_t t40 = 977168LLU;

	t40 = ((x173/(x174|x175))-x176);

	if (t40 != 18442289235870883101LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x177 = INT16_MAX;
	int32_t x178 = INT32_MAX;
	uint64_t x180 = UINT64_MAX;
	volatile uint64_t t41 = 435399399960LLU;

	t41 = ((x177/(x178|x179))-x180);

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = INT16_MAX;
	int16_t x182 = 14006;
	static int16_t x184 = INT16_MIN;
	static int32_t t42 = 65135489;

	t42 = ((x181/(x182|x183))-x184);

	if (t42 != 32326) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x185 = -1;
	int16_t x187 = -4056;
	int16_t x188 = INT16_MIN;
	int32_t t43 = 2380;

	t43 = ((x185/(x186|x187))-x188);

	if (t43 != 32768) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = INT16_MAX;
	static int32_t x190 = INT32_MAX;
	int64_t x191 = -1LL;
	int64_t x192 = 509638051LL;
	static int64_t t44 = 461322963159645LL;

	t44 = ((x189/(x190|x191))-x192);

	if (t44 != -509670818LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x193 = 18U;
	static int8_t x194 = INT8_MAX;
	static int32_t x195 = INT32_MAX;
	static volatile int8_t x196 = INT8_MIN;
	volatile uint32_t t45 = 24495U;

	t45 = ((x193/(x194|x195))-x196);

	if (t45 != 128U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x197 = INT64_MAX;
	uint64_t x198 = 69103252LLU;
	volatile int8_t x199 = 0;
	int64_t x200 = 2072736669965713LL;
	uint64_t t46 = 2411912348827603232LLU;

	t46 = ((x197/(x198|x199))-x200);

	if (t46 != 18444671470511915640LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x201 = 5U;
	volatile int16_t x202 = INT16_MIN;
	volatile int32_t x203 = INT32_MIN;
	uint64_t x204 = UINT64_MAX;

	t47 = ((x201/(x202|x203))-x204);

	if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x206 = 95U;
	volatile int16_t x207 = -1;
	static volatile int32_t x208 = -1;
	int32_t t48 = -1;

	t48 = ((x205/(x206|x207))-x208);

	if (t48 != -32766) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x209 = 111006U;
	static uint32_t x210 = UINT32_MAX;
	int16_t x212 = INT16_MIN;
	volatile uint32_t t49 = 310141U;

	t49 = ((x209/(x210|x211))-x212);

	if (t49 != 32768U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x213 = INT16_MAX;
	uint8_t x214 = 1U;
	int16_t x215 = INT16_MAX;
	int8_t x216 = INT8_MAX;
	int32_t t50 = -1664;

	t50 = ((x213/(x214|x215))-x216);

	if (t50 != -126) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x217 = 2991LLU;
	volatile uint32_t x218 = 733945U;
	uint8_t x220 = UINT8_MAX;
	volatile uint64_t t51 = 1794803563872372LLU;

	t51 = ((x217/(x218|x219))-x220);

	if (t51 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x221 = INT16_MIN;
	int16_t x222 = INT16_MAX;
	volatile uint32_t t52 = 332643U;

	t52 = ((x221/(x222|x223))-x224);

	if (t52 != 4294967169U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x229 = INT16_MAX;
	int8_t x230 = INT8_MIN;
	int32_t x231 = INT32_MAX;
	static uint16_t x232 = 3U;
	int32_t t53 = 1752;

	t53 = ((x229/(x230|x231))-x232);

	if (t53 != -32770) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x233 = INT32_MIN;
	static uint64_t x235 = UINT64_MAX;
	int16_t x236 = INT16_MIN;

	t54 = ((x233/(x234|x235))-x236);

	if (t54 != 32768LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x237 = 40U;
	static uint8_t x238 = 1U;
	static int16_t x239 = INT16_MAX;
	int64_t x240 = -1LL;
	int64_t t55 = -856378372LL;

	t55 = ((x237/(x238|x239))-x240);

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t t56 = 238537814U;

	t56 = ((x241/(x242|x243))-x244);

	if (t56 != 4294911192U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x249 = 4699359;
	uint16_t x251 = UINT16_MAX;
	uint8_t x252 = UINT8_MAX;
	uint64_t t57 = 94380798666286LLU;

	t57 = ((x249/(x250|x251))-x252);

	if (t57 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x253 = -1;
	int32_t x254 = INT32_MIN;
	uint16_t x255 = 945U;
	static uint64_t x256 = UINT64_MAX;
	volatile uint64_t t58 = 35752977007857638LLU;

	t58 = ((x253/(x254|x255))-x256);

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x257 = 80U;
	int32_t x259 = -27593993;
	volatile int32_t x260 = 3;
	int32_t t59 = -222536;

	t59 = ((x257/(x258|x259))-x260);

	if (t59 != -3) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x262 = UINT32_MAX;
	uint64_t x263 = UINT64_MAX;
	volatile uint64_t t60 = 91626105402565LLU;

	t60 = ((x261/(x262|x263))-x264);

	if (t60 != 18446744073709550910LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x265 = 1487943752403662LLU;
	static volatile int32_t x266 = INT32_MIN;
	volatile uint64_t t61 = 31390014034LLU;

	t61 = ((x265/(x266|x267))-x268);

	if (t61 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x269 = INT32_MIN;
	int64_t x270 = INT64_MIN;
	uint16_t x271 = UINT16_MAX;
	uint64_t x272 = 79LLU;
	uint64_t t62 = 2024063914740755LLU;

	t62 = ((x269/(x270|x271))-x272);

	if (t62 != 18446744073709551537LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x273 = INT16_MAX;
	uint16_t x274 = UINT16_MAX;
	int32_t x275 = INT32_MIN;
	uint64_t x276 = UINT64_MAX;
	uint64_t t63 = 3954LLU;

	t63 = ((x273/(x274|x275))-x276);

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x277 = INT32_MIN;
	int32_t x278 = INT32_MIN;
	volatile int16_t x279 = 230;
	static int8_t x280 = INT8_MAX;
	volatile int32_t t64 = 1453433;

	t64 = ((x277/(x278|x279))-x280);

	if (t64 != -126) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x281 = 58;
	static uint64_t x282 = 242320735LLU;
	uint64_t x283 = 12140170079LLU;
	uint32_t x284 = 7686156U;
	static uint64_t t65 = 6285966LLU;

	t65 = ((x281/(x282|x283))-x284);

	if (t65 != 18446744073701865460LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x285 = INT16_MAX;
	int64_t x287 = INT64_MAX;
	int16_t x288 = -1;
	volatile uint64_t t66 = 2LLU;

	t66 = ((x285/(x286|x287))-x288);

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x289 = -1;
	uint32_t x291 = 2131266U;
	volatile int32_t x292 = INT32_MIN;
	volatile uint32_t t67 = 0U;

	t67 = ((x289/(x290|x291))-x292);

	if (t67 != 2147485634U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x293 = 28LL;
	uint16_t x294 = UINT16_MAX;
	int64_t x295 = INT64_MIN;
	int16_t x296 = INT16_MAX;
	int64_t t68 = -2209410194180118LL;

	t68 = ((x293/(x294|x295))-x296);

	if (t68 != -32767LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x298 = INT64_MIN;
	uint64_t x299 = 1526530758551826LLU;
	uint64_t x300 = 176477054LLU;
	static volatile uint64_t t69 = 13946LLU;

	t69 = ((x297/(x298|x299))-x300);

	if (t69 != 18446744073533074562LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x305 = 1451799;
	volatile uint32_t x306 = 1U;
	volatile uint16_t x307 = 29410U;

	t70 = ((x305/(x306|x307))-x308);

	if (t70 != 45U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint64_t x314 = UINT64_MAX;
	uint16_t x315 = 3959U;
	volatile int16_t x316 = INT16_MIN;

	t71 = ((x313/(x314|x315))-x316);

	if (t71 != 32768LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x318 = -23;
	uint8_t x319 = 1U;
	volatile int32_t t72 = 848;

	t72 = ((x317/(x318|x319))-x320);

	if (t72 != -10) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x321 = -1;
	int32_t x322 = 3191;
	int8_t x324 = 8;
	static int32_t t73 = -230;

	t73 = ((x321/(x322|x323))-x324);

	if (t73 != -8) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x325 = -1LL;
	int8_t x326 = -1;
	int32_t x327 = INT32_MIN;
	volatile int32_t x328 = -1;
	volatile int64_t t74 = 217961196LL;

	t74 = ((x325/(x326|x327))-x328);

	if (t74 != 2LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x329 = 1328020;
	uint8_t x330 = 1U;
	uint32_t x331 = 37886248U;
	static int64_t x332 = -1LL;
	int64_t t75 = -14236485788584LL;

	t75 = ((x329/(x330|x331))-x332);

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x335 = -3574990877254LL;
	volatile int8_t x336 = -63;

	t76 = ((x333/(x334|x335))-x336);

	if (t76 != 64LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x337 = INT32_MIN;
	uint64_t x338 = 49LLU;
	int16_t x339 = INT16_MIN;
	uint8_t x340 = 1U;

	t77 = ((x337/(x338|x339))-x340);

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x345 = INT8_MAX;
	volatile int8_t x346 = 0;
	int8_t x347 = -1;
	volatile int64_t t78 = 276783974066LL;

	t78 = ((x345/(x346|x347))-x348);

	if (t78 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x349 = 5;
	volatile uint64_t x350 = 5LLU;
	volatile uint32_t x351 = 167274423U;
	int64_t x352 = INT64_MIN;
	static volatile uint64_t t79 = 16547333645LLU;

	t79 = ((x349/(x350|x351))-x352);

	if (t79 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x353 = INT32_MIN;
	volatile uint32_t x354 = UINT32_MAX;
	int8_t x355 = -5;
	int32_t x356 = -1;
	volatile uint32_t t80 = 244U;

	t80 = ((x353/(x354|x355))-x356);

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x357 = 3U;
	int32_t x358 = INT32_MIN;
	int8_t x359 = -1;
	uint32_t t81 = 4939U;

	t81 = ((x357/(x358|x359))-x360);

	if (t81 != 2147483648U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x361 = -31;
	uint32_t x362 = 1815374U;
	static int16_t x363 = -1;
	uint64_t t82 = 57351LLU;

	t82 = ((x361/(x362|x363))-x364);

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x365 = 119836361973045LLU;
	uint8_t x367 = 5U;
	uint8_t x368 = 11U;
	volatile uint64_t t83 = 354506777LLU;

	t83 = ((x365/(x366|x367))-x368);

	if (t83 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x369 = -61;
	static int32_t x370 = -909;
	int32_t x371 = -1;
	static int32_t x372 = -1;
	int32_t t84 = 59;

	t84 = ((x369/(x370|x371))-x372);

	if (t84 != 62) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x374 = INT32_MIN;
	int64_t x375 = INT64_MIN;
	uint32_t x376 = 99305551U;
	int64_t t85 = -518906088502LL;

	t85 = ((x373/(x374|x375))-x376);

	if (t85 != -99305551LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x377 = 34U;
	int8_t x378 = INT8_MIN;
	uint64_t x380 = 283620997227307923LLU;
	volatile uint64_t t86 = 5258951024276LLU;

	t86 = ((x377/(x378|x379))-x380);

	if (t86 != 18163123076482243659LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint8_t x381 = UINT8_MAX;
	uint32_t x382 = UINT32_MAX;
	static volatile int64_t t87 = 132LL;

	t87 = ((x381/(x382|x383))-x384);

	if (t87 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x386 = -1;
	static volatile int32_t x387 = -1;
	volatile int8_t x388 = INT8_MIN;

	t88 = ((x385/(x386|x387))-x388);

	if (t88 != 127LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x389 = 1400U;
	volatile int64_t x390 = -32801981140145LL;
	uint64_t x392 = 31604LLU;
	static volatile uint64_t t89 = 147458595925140942LLU;

	t89 = ((x389/(x390|x391))-x392);

	if (t89 != 18446744073709518612LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x393 = INT8_MIN;
	int64_t x394 = 451772574555426LL;
	int32_t x395 = INT32_MAX;
	static volatile uint64_t x396 = 1211719LLU;
	uint64_t t90 = 9259LLU;

	t90 = ((x393/(x394|x395))-x396);

	if (t90 != 18446744073708339897LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x401 = UINT8_MAX;
	uint64_t x402 = UINT64_MAX;
	volatile uint16_t x403 = 0U;
	int32_t x404 = INT32_MIN;
	uint64_t t91 = 491135459850640LLU;

	t91 = ((x401/(x402|x403))-x404);

	if (t91 != 2147483648LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x405 = 1U;
	uint32_t x407 = 15904U;
	volatile int8_t x408 = -14;
	volatile uint32_t t92 = 664U;

	t92 = ((x405/(x406|x407))-x408);

	if (t92 != 14U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x409 = 1;
	volatile int16_t x410 = INT16_MIN;
	static int8_t x411 = INT8_MAX;
	static volatile uint32_t t93 = 434929453U;

	t93 = ((x409/(x410|x411))-x412);

	if (t93 != 4294967185U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x413 = UINT64_MAX;
	int8_t x414 = -3;
	volatile int8_t x415 = INT8_MAX;
	int32_t x416 = -2096;
	uint64_t t94 = 4564411583133332LLU;

	t94 = ((x413/(x414|x415))-x416);

	if (t94 != 2097LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x418 = INT16_MIN;
	static int8_t x419 = -1;
	uint8_t x420 = 1U;

	t95 = ((x417/(x418|x419))-x420);

	if (t95 != 3) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x421 = INT8_MIN;
	int64_t x422 = -1LL;
	int32_t x423 = -488;
	uint32_t x424 = 17500U;
	int64_t t96 = -408776911961LL;

	t96 = ((x421/(x422|x423))-x424);

	if (t96 != -17372LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x426 = 12023;
	int16_t x427 = -396;
	int32_t x428 = 17557569;

	t97 = ((x425/(x426|x427))-x428);

	if (t97 != -17557569) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x429 = UINT64_MAX;
	uint64_t x430 = 386132731LLU;
	int16_t x431 = INT16_MAX;
	static volatile int64_t x432 = 31641LL;
	volatile uint64_t t98 = 28486LLU;

	t98 = ((x429/(x430|x431))-x432);

	if (t98 != 47772367788LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x433 = 3542814442904LL;
	int16_t x434 = INT16_MIN;
	int16_t x435 = INT16_MIN;
	int16_t x436 = -1;
	int64_t t99 = -168LL;

	t99 = ((x433/(x434|x435))-x436);

	if (t99 != -108118115LL) { NG(); } else { ; }
	
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

