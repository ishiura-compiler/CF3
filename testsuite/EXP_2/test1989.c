#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = -1;
uint8_t x11 = 7U;
volatile int64_t t2 = 9846107250551LL;
static volatile int32_t t3 = 427106600;
int16_t x18 = -325;
static int64_t x28 = -1LL;
volatile int64_t t6 = -13331831154766766LL;
static volatile int32_t x29 = -1;
int16_t x43 = INT16_MAX;
static int64_t x45 = 4435336887LL;
volatile uint32_t x48 = 9772U;
uint16_t x50 = 21U;
volatile uint8_t x53 = 37U;
int8_t x58 = INT8_MAX;
static volatile int8_t x62 = 7;
uint64_t x65 = 353261370LLU;
volatile uint64_t t17 = 7980369204729LLU;
volatile int16_t x73 = 11016;
uint16_t x81 = 4409U;
static uint64_t t22 = UINT64_MAX;
int16_t x96 = -1;
int64_t x100 = -18018LL;
uint32_t x106 = UINT32_MAX;
int64_t x111 = -5005492924097LL;
static uint32_t x125 = 7U;
uint8_t x127 = 65U;
uint32_t x129 = 1125507376U;
uint64_t x131 = 68965217155161249LLU;
uint16_t x132 = 76U;
int64_t x135 = INT64_MIN;
uint16_t x137 = 211U;
int8_t x139 = INT8_MIN;
volatile int32_t t34 = -1196417;
int16_t x142 = 46;
static volatile int16_t x146 = -1;
int64_t x147 = -1LL;
volatile int8_t x151 = -3;
static int64_t x155 = 62423705184785LL;
volatile int16_t x161 = -1;
int16_t x164 = -5;
volatile int32_t t40 = 27440435;
uint64_t x174 = 5534510662137628907LLU;
int64_t x179 = -141005LL;
int16_t x180 = INT16_MIN;
static uint16_t x181 = 1669U;
static int32_t x190 = INT32_MAX;
static int32_t x193 = -53;
uint64_t x198 = 3957LLU;
static int8_t x200 = -5;
static int8_t x211 = 11;
int32_t t52 = -11706683;
volatile uint64_t t53 = 237LLU;
int16_t x218 = INT16_MAX;
volatile int32_t t57 = 1;
static volatile uint64_t x233 = UINT64_MAX;
int16_t x238 = INT16_MAX;
int16_t x239 = 15957;
volatile int64_t x250 = 78LL;
volatile int32_t t62 = 520073;
uint16_t x262 = 7U;
uint64_t x266 = UINT64_MAX;
volatile int32_t t66 = -30309362;
volatile int64_t x270 = INT64_MIN;
int8_t x276 = INT8_MIN;
volatile int32_t t68 = 13972;
int64_t x283 = INT64_MAX;
int64_t t71 = -44983429LL;
volatile int8_t x292 = INT8_MIN;
uint64_t x294 = 5468908LLU;
volatile int16_t x296 = -206;
uint16_t x303 = UINT16_MAX;
uint64_t x306 = 220LLU;
int64_t x311 = INT64_MIN;
int32_t t77 = 0;
volatile int64_t x326 = INT64_MIN;
volatile int8_t x329 = -21;
uint16_t x334 = 25464U;
volatile uint16_t x338 = UINT16_MAX;
static uint8_t x346 = UINT8_MAX;
volatile int64_t x351 = INT64_MAX;
uint8_t x352 = UINT8_MAX;
int64_t x354 = 9362783LL;
int32_t x363 = -1;
static volatile uint64_t x368 = UINT64_MAX;
volatile int64_t x372 = -1LL;
static int64_t t92 = 13614144263127LL;
static int8_t x375 = 2;
volatile int64_t t96 = -5839333058LL;
volatile uint32_t x389 = UINT32_MAX;
int32_t x400 = 27349;


void f0(void) {
	int32_t x1 = 2523;
	static int16_t x2 = -1;
	volatile uint8_t x3 = UINT8_MAX;
	int64_t x4 = -2004125786LL;
	int64_t t0 = 66LL;

	t0 = ((x1<=(x2|x3))^x4);

	if (t0 != -2004125786LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 1803U;
	static uint16_t x6 = UINT16_MAX;
	uint16_t x7 = 2047U;
	int8_t x8 = -1;

	t1 = ((x5<=(x6|x7))^x8);

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -14263081;
	uint64_t x10 = UINT64_MAX;
	int64_t x12 = INT64_MAX;

	t2 = ((x9<=(x10|x11))^x12);

	if (t2 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = -1;
	int64_t x14 = -1LL;
	volatile int8_t x15 = -1;
	uint8_t x16 = 2U;

	t3 = ((x13<=(x14|x15))^x16);

	if (t3 != 3) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	uint16_t x19 = UINT16_MAX;
	int16_t x20 = -1;
	int32_t t4 = 81066466;

	t4 = ((x17<=(x18|x19))^x20);

	if (t4 != -2) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	int64_t x22 = INT64_MIN;
	static uint16_t x23 = 19U;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 121647;

	t5 = ((x21<=(x22|x23))^x24);

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 213LLU;
	static uint16_t x26 = 7176U;
	static int32_t x27 = -1;

	t6 = ((x25<=(x26|x27))^x28);

	if (t6 != -2LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x30 = UINT16_MAX;
	static int16_t x31 = INT16_MIN;
	uint16_t x32 = UINT16_MAX;
	static int32_t t7 = -3;

	t7 = ((x29<=(x30|x31))^x32);

	if (t7 != 65534) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 0U;
	int32_t x34 = 369517975;
	uint64_t x35 = 423953LLU;
	int16_t x36 = INT16_MIN;
	int32_t t8 = -946272;

	t8 = ((x33<=(x34|x35))^x36);

	if (t8 != -32767) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = INT16_MIN;
	int8_t x38 = 32;
	uint64_t x39 = 1855892419LLU;
	uint8_t x40 = UINT8_MAX;
	int32_t t9 = 89;

	t9 = ((x37<=(x38|x39))^x40);

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x41 = 71047U;
	static int8_t x42 = INT8_MIN;
	int32_t x44 = INT32_MAX;
	int32_t t10 = 1;

	t10 = ((x41<=(x42|x43))^x44);

	if (t10 != 2147483646) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = INT32_MAX;
	int64_t x47 = -1LL;
	volatile uint32_t t11 = 108366U;

	t11 = ((x45<=(x46|x47))^x48);

	if (t11 != 9772U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x49 = 1U;
	uint16_t x51 = UINT16_MAX;
	int8_t x52 = INT8_MIN;
	volatile int32_t t12 = 0;

	t12 = ((x49<=(x50|x51))^x52);

	if (t12 != -127) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = -1;
	uint8_t x55 = 3U;
	int32_t x56 = -1;
	static int32_t t13 = -55;

	t13 = ((x53<=(x54|x55))^x56);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	static volatile int64_t x59 = INT64_MIN;
	uint32_t x60 = UINT32_MAX;
	static uint32_t t14 = 22417U;

	t14 = ((x57<=(x58|x59))^x60);

	if (t14 != 4294967294U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 9U;
	static volatile int32_t x63 = -211846901;
	int64_t x64 = 830222335LL;
	volatile int64_t t15 = 521758LL;

	t15 = ((x61<=(x62|x63))^x64);

	if (t15 != 830222335LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x66 = 10;
	uint32_t x67 = 7803675U;
	volatile uint64_t x68 = UINT64_MAX;
	volatile uint64_t t16 = UINT64_MAX;

	t16 = ((x65<=(x66|x67))^x68);

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = -20657198299LL;
	volatile int32_t x70 = INT32_MAX;
	int64_t x71 = INT64_MIN;
	static uint64_t x72 = 24857024489831LLU;

	t17 = ((x69<=(x70|x71))^x72);

	if (t17 != 24857024489831LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x74 = 93U;
	int8_t x75 = INT8_MIN;
	static int16_t x76 = 9;
	int32_t t18 = 60913;

	t18 = ((x73<=(x74|x75))^x76);

	if (t18 != 9) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 43U;
	int64_t x78 = 48LL;
	int16_t x79 = INT16_MIN;
	int16_t x80 = INT16_MIN;
	volatile int32_t t19 = 121190651;

	t19 = ((x77<=(x78|x79))^x80);

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = -1861857907447000205LL;
	int32_t x83 = INT32_MIN;
	int16_t x84 = INT16_MIN;
	volatile int32_t t20 = 66340036;

	t20 = ((x81<=(x82|x83))^x84);

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 4U;
	int64_t x86 = 26845LL;
	int64_t x87 = 72535214LL;
	int16_t x88 = INT16_MAX;
	volatile int32_t t21 = -6276484;

	t21 = ((x85<=(x86|x87))^x88);

	if (t21 != 32766) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = 463;
	static int8_t x90 = -28;
	int64_t x91 = INT64_MIN;
	volatile uint64_t x92 = UINT64_MAX;

	t22 = ((x89<=(x90|x91))^x92);

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = 821632471;
	volatile uint8_t x94 = 1U;
	static uint8_t x95 = 38U;
	volatile int32_t t23 = -24824781;

	t23 = ((x93<=(x94|x95))^x96);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MAX;
	uint16_t x98 = 509U;
	static int8_t x99 = INT8_MIN;
	volatile int64_t t24 = 31129LL;

	t24 = ((x97<=(x98|x99))^x100);

	if (t24 != -18018LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = 0LL;
	uint16_t x102 = 14118U;
	int16_t x103 = INT16_MAX;
	int16_t x104 = INT16_MIN;
	volatile int32_t t25 = 43843748;

	t25 = ((x101<=(x102|x103))^x104);

	if (t25 != -32767) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	int8_t x107 = 0;
	int32_t x108 = INT32_MIN;
	int32_t t26 = 6;

	t26 = ((x105<=(x106|x107))^x108);

	if (t26 != -2147483647) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = 3800;
	int16_t x110 = INT16_MIN;
	volatile uint8_t x112 = UINT8_MAX;
	static volatile int32_t t27 = 8;

	t27 = ((x109<=(x110|x111))^x112);

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 95U;
	int16_t x114 = 54;
	int8_t x115 = INT8_MIN;
	static uint16_t x116 = 1U;
	volatile int32_t t28 = 138156;

	t28 = ((x113<=(x114|x115))^x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = UINT64_MAX;
	uint16_t x118 = 4U;
	static volatile uint64_t x119 = 32269209LLU;
	int16_t x120 = -1;
	static volatile int32_t t29 = 1;

	t29 = ((x117<=(x118|x119))^x120);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	int8_t x122 = INT8_MIN;
	int8_t x123 = 0;
	int64_t x124 = 1241076749LL;
	volatile int64_t t30 = -194899179844697LL;

	t30 = ((x121<=(x122|x123))^x124);

	if (t30 != 1241076748LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x126 = -1LL;
	uint16_t x128 = UINT16_MAX;
	int32_t t31 = -38962;

	t31 = ((x125<=(x126|x127))^x128);

	if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x130 = UINT64_MAX;
	int32_t t32 = 0;

	t32 = ((x129<=(x130|x131))^x132);

	if (t32 != 77) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = 1;
	int16_t x134 = INT16_MIN;
	static int16_t x136 = INT16_MIN;
	volatile int32_t t33 = 1;

	t33 = ((x133<=(x134|x135))^x136);

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x138 = INT16_MIN;
	int8_t x140 = INT8_MAX;

	t34 = ((x137<=(x138|x139))^x140);

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = UINT16_MAX;
	static int16_t x143 = -1;
	int16_t x144 = INT16_MIN;
	volatile int32_t t35 = -51417;

	t35 = ((x141<=(x142|x143))^x144);

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 23;
	volatile uint16_t x148 = 127U;
	volatile int32_t t36 = -21848593;

	t36 = ((x145<=(x146|x147))^x148);

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 7U;
	uint16_t x150 = 1U;
	int16_t x152 = INT16_MIN;
	volatile int32_t t37 = -10791288;

	t37 = ((x149<=(x150|x151))^x152);

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 8980830203399557LLU;
	static volatile int64_t x154 = 6338982113LL;
	static volatile int16_t x156 = -2;
	static volatile int32_t t38 = 53886628;

	t38 = ((x153<=(x154|x155))^x156);

	if (t38 != -2) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 5880500U;
	uint8_t x158 = 85U;
	static int16_t x159 = -2066;
	uint32_t x160 = UINT32_MAX;
	volatile uint32_t t39 = 404596731U;

	t39 = ((x157<=(x158|x159))^x160);

	if (t39 != 4294967294U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x162 = -1;
	int16_t x163 = INT16_MIN;

	t40 = ((x161<=(x162|x163))^x164);

	if (t40 != -6) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1LL;
	static uint8_t x166 = 22U;
	volatile int8_t x167 = -1;
	static uint8_t x168 = 23U;
	static int32_t t41 = -28710464;

	t41 = ((x165<=(x166|x167))^x168);

	if (t41 != 22) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -208377790;
	static volatile int64_t x170 = -4230817030601122538LL;
	int64_t x171 = INT64_MIN;
	int64_t x172 = INT64_MIN;
	static int64_t t42 = INT64_MIN;

	t42 = ((x169<=(x170|x171))^x172);

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x173 = 2360678LLU;
	int16_t x175 = 781;
	volatile int32_t x176 = 410059;
	int32_t t43 = -4190;

	t43 = ((x173<=(x174|x175))^x176);

	if (t43 != 410058) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -10;
	int16_t x178 = INT16_MAX;
	volatile int32_t t44 = 257;

	t44 = ((x177<=(x178|x179))^x180);

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x182 = INT16_MAX;
	int32_t x183 = 47167743;
	volatile int8_t x184 = INT8_MAX;
	volatile int32_t t45 = -12119;

	t45 = ((x181<=(x182|x183))^x184);

	if (t45 != 126) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -561;
	static int64_t x186 = -1LL;
	static volatile uint16_t x187 = 7350U;
	int16_t x188 = INT16_MIN;
	int32_t t46 = 0;

	t46 = ((x185<=(x186|x187))^x188);

	if (t46 != -32767) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MAX;
	int32_t x191 = -810709;
	uint8_t x192 = 0U;
	static volatile int32_t t47 = -1;

	t47 = ((x189<=(x190|x191))^x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x194 = INT16_MIN;
	volatile int16_t x195 = -1;
	static uint64_t x196 = UINT64_MAX;
	uint64_t t48 = 1598731LLU;

	t48 = ((x193<=(x194|x195))^x196);

	if (t48 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	uint8_t x199 = UINT8_MAX;
	int32_t t49 = 1775;

	t49 = ((x197<=(x198|x199))^x200);

	if (t49 != -5) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -2776824;
	int64_t x202 = 0LL;
	int32_t x203 = INT32_MAX;
	int16_t x204 = -1;
	int32_t t50 = 315;

	t50 = ((x201<=(x202|x203))^x204);

	if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = -22;
	int16_t x206 = -1;
	uint32_t x207 = UINT32_MAX;
	int16_t x208 = INT16_MAX;
	volatile int32_t t51 = 22153;

	t51 = ((x205<=(x206|x207))^x208);

	if (t51 != 32766) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -1;
	int64_t x210 = INT64_MIN;
	volatile int16_t x212 = 3;

	t52 = ((x209<=(x210|x211))^x212);

	if (t52 != 3) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x213 = 880U;
	uint8_t x214 = UINT8_MAX;
	int64_t x215 = 2931101953273432594LL;
	volatile uint64_t x216 = 696LLU;

	t53 = ((x213<=(x214|x215))^x216);

	if (t53 != 697LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = 2160073606279800295LL;
	int64_t x219 = 195LL;
	static int64_t x220 = 24207933679LL;
	int64_t t54 = -57469133670LL;

	t54 = ((x217<=(x218|x219))^x220);

	if (t54 != 24207933679LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x221 = -3;
	volatile int64_t x222 = INT64_MIN;
	uint64_t x223 = 2873LLU;
	int32_t x224 = INT32_MIN;
	volatile int32_t t55 = INT32_MIN;

	t55 = ((x221<=(x222|x223))^x224);

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x225 = INT8_MIN;
	int64_t x226 = INT64_MAX;
	uint8_t x227 = 3U;
	static int64_t x228 = INT64_MAX;
	volatile int64_t t56 = -1137226690LL;

	t56 = ((x225<=(x226|x227))^x228);

	if (t56 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = 2368U;
	int32_t x230 = INT32_MAX;
	static int32_t x231 = INT32_MAX;
	volatile int16_t x232 = INT16_MIN;

	t57 = ((x229<=(x230|x231))^x232);

	if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x234 = INT16_MAX;
	int16_t x235 = -1;
	volatile int16_t x236 = -3;
	volatile int32_t t58 = -343177;

	t58 = ((x233<=(x234|x235))^x236);

	if (t58 != -4) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x237 = 5U;
	int64_t x240 = -1LL;
	volatile int64_t t59 = -323959175357LL;

	t59 = ((x237<=(x238|x239))^x240);

	if (t59 != -2LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = -5LL;
	static int32_t x242 = -1;
	uint8_t x243 = 71U;
	uint16_t x244 = UINT16_MAX;
	int32_t t60 = -590929138;

	t60 = ((x241<=(x242|x243))^x244);

	if (t60 != 65534) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	uint32_t x246 = 118U;
	uint8_t x247 = 13U;
	static int8_t x248 = 28;
	volatile int32_t t61 = -92413;

	t61 = ((x245<=(x246|x247))^x248);

	if (t61 != 28) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = INT64_MAX;
	static uint16_t x251 = UINT16_MAX;
	int16_t x252 = -3;

	t62 = ((x249<=(x250|x251))^x252);

	if (t62 != -3) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = 823LL;
	uint8_t x254 = UINT8_MAX;
	volatile uint32_t x255 = 171558U;
	int64_t x256 = INT64_MAX;
	int64_t t63 = 4LL;

	t63 = ((x253<=(x254|x255))^x256);

	if (t63 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = -1;
	uint8_t x258 = 116U;
	int16_t x259 = 1;
	int32_t x260 = INT32_MAX;
	volatile int32_t t64 = 204241;

	t64 = ((x257<=(x258|x259))^x260);

	if (t64 != 2147483646) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x261 = -1;
	static uint8_t x263 = 5U;
	uint32_t x264 = UINT32_MAX;
	uint32_t t65 = 3346471U;

	t65 = ((x261<=(x262|x263))^x264);

	if (t65 != 4294967294U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x265 = -1;
	uint32_t x267 = 3741U;
	int8_t x268 = INT8_MAX;

	t66 = ((x265<=(x266|x267))^x268);

	if (t66 != 126) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = 30U;
	int32_t x271 = 494;
	uint32_t x272 = 0U;
	volatile uint32_t t67 = 60390851U;

	t67 = ((x269<=(x270|x271))^x272);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 2U;
	int32_t x274 = INT32_MAX;
	uint8_t x275 = 38U;

	t68 = ((x273<=(x274|x275))^x276);

	if (t68 != -127) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	volatile uint16_t x278 = 12U;
	volatile uint8_t x279 = 1U;
	int32_t x280 = INT32_MIN;
	volatile int32_t t69 = 117150275;

	t69 = ((x277<=(x278|x279))^x280);

	if (t69 != -2147483647) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MAX;
	uint64_t x282 = UINT64_MAX;
	uint16_t x284 = 1565U;
	int32_t t70 = -508998;

	t70 = ((x281<=(x282|x283))^x284);

	if (t70 != 1564) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x285 = 457250184U;
	static int32_t x286 = -287132;
	int64_t x287 = INT64_MIN;
	int64_t x288 = -1LL;

	t71 = ((x285<=(x286|x287))^x288);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 3U;
	int64_t x290 = 165735014LL;
	static int32_t x291 = 343491;
	static int32_t t72 = -93602364;

	t72 = ((x289<=(x290|x291))^x292);

	if (t72 != -127) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 28526564943133LLU;
	uint64_t x295 = UINT64_MAX;
	static volatile int32_t t73 = 20144149;

	t73 = ((x293<=(x294|x295))^x296);

	if (t73 != -205) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x297 = INT64_MAX;
	uint16_t x298 = 2893U;
	volatile int8_t x299 = INT8_MAX;
	int8_t x300 = -1;
	int32_t t74 = -1;

	t74 = ((x297<=(x298|x299))^x300);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = 4063LL;
	int64_t x302 = INT64_MIN;
	int32_t x304 = INT32_MIN;
	volatile int32_t t75 = INT32_MIN;

	t75 = ((x301<=(x302|x303))^x304);

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1279;
	uint8_t x307 = 3U;
	uint32_t x308 = 21502U;
	static volatile uint32_t t76 = 1U;

	t76 = ((x305<=(x306|x307))^x308);

	if (t76 != 21502U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	int32_t x310 = INT32_MIN;
	static uint16_t x312 = 3103U;

	t77 = ((x309<=(x310|x311))^x312);

	if (t77 != 3103) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -2;
	uint64_t x314 = UINT64_MAX;
	static volatile int8_t x315 = INT8_MAX;
	int64_t x316 = 4003401LL;
	int64_t t78 = 78581117122562469LL;

	t78 = ((x313<=(x314|x315))^x316);

	if (t78 != 4003400LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 14087467U;
	int16_t x318 = INT16_MAX;
	static int16_t x319 = -960;
	uint64_t x320 = 451670LLU;
	volatile uint64_t t79 = 6937154LLU;

	t79 = ((x317<=(x318|x319))^x320);

	if (t79 != 451671LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x321 = -1LL;
	volatile uint32_t x322 = 339074U;
	static int64_t x323 = -10116592290357713LL;
	volatile int32_t x324 = -1;
	int32_t t80 = -30;

	t80 = ((x321<=(x322|x323))^x324);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 1041077500LLU;
	int16_t x327 = -1;
	int8_t x328 = INT8_MIN;
	static volatile int32_t t81 = -639485145;

	t81 = ((x325<=(x326|x327))^x328);

	if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x330 = INT16_MAX;
	volatile int8_t x331 = 0;
	int64_t x332 = INT64_MIN;
	volatile int64_t t82 = -16726063808123165LL;

	t82 = ((x329<=(x330|x331))^x332);

	if (t82 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MAX;
	uint32_t x335 = 98624756U;
	uint64_t x336 = 63085580441536988LLU;
	volatile uint64_t t83 = 19146LLU;

	t83 = ((x333<=(x334|x335))^x336);

	if (t83 != 63085580441536988LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MAX;
	int8_t x339 = 48;
	volatile uint32_t x340 = UINT32_MAX;
	volatile uint32_t t84 = UINT32_MAX;

	t84 = ((x337<=(x338|x339))^x340);

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint64_t x341 = 2961126446654776LLU;
	int32_t x342 = INT32_MIN;
	static int8_t x343 = INT8_MAX;
	static int32_t x344 = INT32_MIN;
	int32_t t85 = 13139;

	t85 = ((x341<=(x342|x343))^x344);

	if (t85 != -2147483647) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x345 = 14482309;
	volatile int64_t x347 = -378955518573539LL;
	volatile int8_t x348 = INT8_MIN;
	volatile int32_t t86 = -41872;

	t86 = ((x345<=(x346|x347))^x348);

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	volatile int8_t x350 = -1;
	static volatile int32_t t87 = 1399;

	t87 = ((x349<=(x350|x351))^x352);

	if (t87 != 254) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x353 = 6U;
	int8_t x355 = -1;
	volatile int32_t x356 = INT32_MIN;
	static volatile int32_t t88 = INT32_MIN;

	t88 = ((x353<=(x354|x355))^x356);

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -1;
	volatile uint32_t x358 = 221U;
	int64_t x359 = -1LL;
	int16_t x360 = INT16_MIN;
	volatile int32_t t89 = 1997702;

	t89 = ((x357<=(x358|x359))^x360);

	if (t89 != -32767) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	static int16_t x362 = -1;
	static uint64_t x364 = 91LLU;
	uint64_t t90 = 746LLU;

	t90 = ((x361<=(x362|x363))^x364);

	if (t90 != 90LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = 0LL;
	int16_t x366 = -128;
	static volatile int32_t x367 = INT32_MIN;
	volatile uint64_t t91 = UINT64_MAX;

	t91 = ((x365<=(x366|x367))^x368);

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x369 = 9;
	int32_t x370 = INT32_MIN;
	static uint8_t x371 = 6U;

	t92 = ((x369<=(x370|x371))^x372);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	int16_t x374 = -111;
	int64_t x376 = 853292273LL;
	volatile int64_t t93 = -1LL;

	t93 = ((x373<=(x374|x375))^x376);

	if (t93 != 853292272LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	uint64_t x378 = 864LLU;
	uint16_t x379 = 1001U;
	uint8_t x380 = 0U;
	volatile int32_t t94 = 4;

	t94 = ((x377<=(x378|x379))^x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -32;
	uint64_t x382 = 405980LLU;
	volatile int16_t x383 = INT16_MIN;
	int64_t x384 = INT64_MIN;
	int64_t t95 = INT64_MIN;

	t95 = ((x381<=(x382|x383))^x384);

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -1;
	int8_t x386 = -1;
	uint8_t x387 = 0U;
	int64_t x388 = INT64_MIN;

	t96 = ((x385<=(x386|x387))^x388);

	if (t96 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x390 = -1;
	uint16_t x391 = UINT16_MAX;
	uint64_t x392 = UINT64_MAX;
	static uint64_t t97 = 34280516810LLU;

	t97 = ((x389<=(x390|x391))^x392);

	if (t97 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x393 = -1LL;
	int8_t x394 = 27;
	volatile int32_t x395 = INT32_MAX;
	static int8_t x396 = 0;
	volatile int32_t t98 = -6897934;

	t98 = ((x393<=(x394|x395))^x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x397 = 6U;
	static int8_t x398 = 0;
	int16_t x399 = INT16_MIN;
	volatile int32_t t99 = -816413;

	t99 = ((x397<=(x398|x399))^x400);

	if (t99 != 27349) { NG(); } else { ; }
	
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

