#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = 5727;
static volatile int32_t t0 = 6;
int64_t x6 = INT64_MIN;
int64_t x8 = INT64_MIN;
static volatile uint32_t x22 = UINT32_MAX;
static volatile uint32_t x23 = 0U;
uint32_t x33 = 35104906U;
int8_t x37 = -2;
uint16_t x39 = UINT16_MAX;
uint64_t x43 = 31637863LLU;
volatile int16_t x51 = INT16_MIN;
int8_t x53 = INT8_MIN;
static int16_t x55 = -656;
volatile int32_t t9 = -40550397;
uint64_t x69 = 1LLU;
int32_t t13 = 919;
uint8_t x74 = 48U;
static int8_t x75 = INT8_MIN;
static uint8_t x77 = 1U;
volatile int8_t x79 = INT8_MIN;
volatile uint64_t x80 = 4LLU;
volatile int32_t t15 = 8;
int32_t x82 = INT32_MIN;
volatile int32_t t17 = 126576;
uint32_t x93 = UINT32_MAX;
volatile int16_t x98 = 4469;
volatile int32_t t19 = 5;
uint64_t x101 = 1972193373634742LLU;
uint32_t x112 = 1U;
int32_t x117 = -4107;
uint8_t x124 = 1U;
static int64_t x129 = INT64_MIN;
volatile int8_t x130 = -1;
int32_t t25 = -14992941;
volatile uint8_t x139 = 1U;
int64_t x140 = INT64_MIN;
static int32_t x142 = INT32_MIN;
volatile int32_t x143 = 4;
int32_t t28 = -23723;
volatile int16_t x145 = INT16_MIN;
volatile int64_t x146 = -849824834503LL;
int64_t x147 = INT64_MAX;
volatile int32_t t30 = 1757504;
int8_t x155 = -1;
int16_t x157 = -14266;
int32_t x158 = -3678164;
int32_t t33 = 1;
int16_t x169 = 31;
int32_t x179 = 60;
static uint32_t x186 = UINT32_MAX;
volatile int8_t x198 = 14;
int8_t x200 = 3;
volatile int32_t t42 = 8;
uint16_t x217 = 10528U;
int32_t x219 = 2;
int8_t x221 = 16;
uint8_t x229 = UINT8_MAX;
int32_t t50 = 6;
int8_t x237 = -1;
uint8_t x240 = 121U;
uint8_t x247 = 40U;
int32_t x250 = 6;
volatile int64_t x252 = -1LL;
int8_t x254 = INT8_MIN;
static int16_t x261 = -1;
uint32_t x262 = 4713U;
static int8_t x267 = 1;
int32_t x268 = -1;
uint32_t x292 = 8U;
int32_t t59 = 1959774;
uint16_t x298 = 15103U;
int8_t x299 = INT8_MIN;
int8_t x302 = 9;
static int32_t t62 = -204865536;
volatile int16_t x310 = INT16_MIN;
int8_t x314 = 0;
static volatile uint64_t x316 = 92328493LLU;
uint16_t x324 = UINT16_MAX;
volatile int32_t t66 = 3802045;
int8_t x330 = INT8_MIN;
uint64_t x331 = 6253239989441632LLU;
static int32_t x332 = INT32_MIN;
volatile int32_t t67 = -474116257;
int8_t x336 = -1;
uint64_t x344 = UINT64_MAX;
int32_t t69 = -7993669;
static int16_t x347 = INT16_MIN;
volatile uint8_t x357 = 37U;
static volatile uint16_t x359 = UINT16_MAX;
int32_t t72 = -416538;
int64_t x361 = INT64_MIN;
int16_t x364 = 1;
int16_t x369 = INT16_MAX;
volatile int32_t x371 = INT32_MIN;
static uint8_t x377 = 3U;
volatile int32_t t76 = -129;
volatile int64_t x381 = INT64_MAX;
uint16_t x384 = 0U;
int32_t t77 = 68518842;
uint16_t x389 = 9U;
uint8_t x397 = 22U;
int16_t x403 = INT16_MIN;
uint8_t x404 = UINT8_MAX;
int8_t x407 = -8;
static int32_t x415 = 0;
static int16_t x423 = -1;
volatile int16_t x424 = INT16_MIN;
uint16_t x435 = 215U;
volatile int32_t x436 = -148438;
static int32_t t88 = 1644483;
uint8_t x437 = UINT8_MAX;
uint32_t x456 = 13U;
static int32_t x466 = -30194;
uint16_t x467 = 0U;
int16_t x469 = 1968;
int64_t x470 = INT64_MAX;
static uint32_t x474 = 4U;
uint8_t x477 = UINT8_MAX;
static int32_t x480 = 635671500;
int8_t x484 = INT8_MIN;
volatile uint64_t x488 = UINT64_MAX;
int16_t x492 = 104;
volatile int32_t t99 = -83195;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int16_t x3 = INT16_MIN;
	volatile uint16_t x4 = 1012U;

	t0 = ((x1==x2)<=(x3*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint64_t x7 = 126925972888714377LLU;
	volatile int32_t t1 = -1727880;

	t1 = ((x5==x6)<=(x7*x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	static int64_t x10 = 311LL;
	int8_t x11 = INT8_MAX;
	uint8_t x12 = 6U;
	int32_t t2 = 891411526;

	t2 = ((x9==x10)<=(x11*x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = INT64_MIN;
	static int16_t x24 = 5;
	static volatile int32_t t3 = 96412;

	t3 = ((x21==x22)<=(x23*x24));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = 25172;
	int8_t x26 = INT8_MIN;
	int16_t x27 = INT16_MIN;
	static volatile int8_t x28 = INT8_MAX;
	volatile int32_t t4 = -2702;

	t4 = ((x25==x26)<=(x27*x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x34 = 6U;
	volatile int8_t x35 = INT8_MAX;
	static int16_t x36 = INT16_MIN;
	int32_t t5 = 0;

	t5 = ((x33==x34)<=(x35*x36));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x38 = 151U;
	int8_t x40 = -1;
	static volatile int32_t t6 = 6911;

	t6 = ((x37==x38)<=(x39*x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x41 = 118U;
	int64_t x42 = -132515578861LL;
	volatile uint8_t x44 = 3U;
	volatile int32_t t7 = -175108621;

	t7 = ((x41==x42)<=(x43*x44));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = INT8_MAX;
	uint16_t x50 = UINT16_MAX;
	int8_t x52 = 23;
	volatile int32_t t8 = -4528731;

	t8 = ((x49==x50)<=(x51*x52));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x54 = 62U;
	static int32_t x56 = 1;

	t9 = ((x53==x54)<=(x55*x56));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x57 = INT64_MAX;
	volatile uint8_t x58 = UINT8_MAX;
	uint32_t x59 = 515403282U;
	static int32_t x60 = -1;
	volatile int32_t t10 = 13976;

	t10 = ((x57==x58)<=(x59*x60));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x61 = -1;
	uint8_t x62 = 41U;
	int64_t x63 = -1LL;
	static uint32_t x64 = UINT32_MAX;
	volatile int32_t t11 = 1;

	t11 = ((x61==x62)<=(x63*x64));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x65 = 46U;
	volatile int32_t x66 = -1;
	int8_t x67 = INT8_MAX;
	volatile int16_t x68 = -1;
	static volatile int32_t t12 = 0;

	t12 = ((x65==x66)<=(x67*x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x70 = 3915U;
	int16_t x71 = INT16_MIN;
	volatile uint32_t x72 = 4020123U;

	t13 = ((x69==x70)<=(x71*x72));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x73 = -1;
	int16_t x76 = -32;
	int32_t t14 = 16316;

	t14 = ((x73==x74)<=(x75*x76));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x78 = INT64_MAX;

	t15 = ((x77==x78)<=(x79*x80));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x81 = 1302U;
	volatile int32_t x83 = INT32_MAX;
	uint32_t x84 = 204528823U;
	int32_t t16 = -10753;

	t16 = ((x81==x82)<=(x83*x84));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x85 = 0LL;
	int16_t x86 = 1;
	volatile uint32_t x87 = 22517U;
	int8_t x88 = INT8_MIN;

	t17 = ((x85==x86)<=(x87*x88));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x94 = 10317958035LLU;
	int8_t x95 = INT8_MAX;
	int32_t x96 = -1;
	static volatile int32_t t18 = -5405478;

	t18 = ((x93==x94)<=(x95*x96));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x97 = INT8_MAX;
	volatile int16_t x99 = 0;
	volatile uint32_t x100 = UINT32_MAX;

	t19 = ((x97==x98)<=(x99*x100));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x102 = 27U;
	int16_t x103 = INT16_MIN;
	volatile int32_t x104 = -1;
	volatile int32_t t20 = -575;

	t20 = ((x101==x102)<=(x103*x104));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x109 = 16975U;
	uint64_t x110 = 8207614149387705275LLU;
	int64_t x111 = 44691132LL;
	static volatile int32_t t21 = 2976;

	t21 = ((x109==x110)<=(x111*x112));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x118 = UINT32_MAX;
	static int16_t x119 = -1;
	static uint32_t x120 = 494U;
	int32_t t22 = -407;

	t22 = ((x117==x118)<=(x119*x120));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x121 = 14111393178717LLU;
	volatile int32_t x122 = INT32_MAX;
	int16_t x123 = 14639;
	volatile int32_t t23 = 84710;

	t23 = ((x121==x122)<=(x123*x124));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x125 = 3U;
	volatile uint16_t x126 = 4766U;
	volatile uint64_t x127 = 1835928219LLU;
	int32_t x128 = -1;
	int32_t t24 = 24;

	t24 = ((x125==x126)<=(x127*x128));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x131 = INT16_MIN;
	int16_t x132 = INT16_MIN;

	t25 = ((x129==x130)<=(x131*x132));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x133 = 15U;
	uint16_t x134 = 15574U;
	uint16_t x135 = 691U;
	uint32_t x136 = 36475U;
	int32_t t26 = 1;

	t26 = ((x133==x134)<=(x135*x136));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x137 = UINT32_MAX;
	int64_t x138 = -1LL;
	int32_t t27 = 7846;

	t27 = ((x137==x138)<=(x139*x140));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x141 = -1;
	int16_t x144 = -1;

	t28 = ((x141==x142)<=(x143*x144));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x148 = -1LL;
	volatile int32_t t29 = -70062572;

	t29 = ((x145==x146)<=(x147*x148));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x149 = 8791U;
	volatile uint64_t x150 = 204LLU;
	uint16_t x151 = 1U;
	static uint8_t x152 = UINT8_MAX;

	t30 = ((x149==x150)<=(x151*x152));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x153 = INT8_MIN;
	static int16_t x154 = 15526;
	uint16_t x156 = 2131U;
	volatile int32_t t31 = -4;

	t31 = ((x153==x154)<=(x155*x156));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x159 = -1;
	int16_t x160 = INT16_MIN;
	volatile int32_t t32 = -5328;

	t32 = ((x157==x158)<=(x159*x160));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x161 = INT32_MAX;
	int8_t x162 = INT8_MAX;
	uint32_t x163 = 13U;
	int8_t x164 = INT8_MIN;

	t33 = ((x161==x162)<=(x163*x164));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x165 = INT8_MIN;
	volatile int16_t x166 = -1;
	static uint64_t x167 = 268156728931341LLU;
	int8_t x168 = -3;
	volatile int32_t t34 = -402;

	t34 = ((x165==x166)<=(x167*x168));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint16_t x170 = 195U;
	int16_t x171 = -1;
	volatile uint8_t x172 = UINT8_MAX;
	volatile int32_t t35 = -6345;

	t35 = ((x169==x170)<=(x171*x172));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x173 = -1LL;
	int16_t x174 = INT16_MIN;
	int64_t x175 = -1LL;
	int16_t x176 = INT16_MIN;
	volatile int32_t t36 = 0;

	t36 = ((x173==x174)<=(x175*x176));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint16_t x177 = UINT16_MAX;
	volatile uint16_t x178 = 17U;
	int32_t x180 = -1;
	int32_t t37 = -27844192;

	t37 = ((x177==x178)<=(x179*x180));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x181 = UINT64_MAX;
	volatile uint64_t x182 = 1465010176413LLU;
	volatile int8_t x183 = INT8_MIN;
	static int32_t x184 = -1;
	volatile int32_t t38 = 360473;

	t38 = ((x181==x182)<=(x183*x184));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x185 = 6324U;
	int16_t x187 = INT16_MIN;
	static int64_t x188 = -2LL;
	static int32_t t39 = 3;

	t39 = ((x185==x186)<=(x187*x188));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x189 = 0;
	uint8_t x190 = 47U;
	int8_t x191 = -6;
	uint64_t x192 = 1224637LLU;
	int32_t t40 = -1;

	t40 = ((x189==x190)<=(x191*x192));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x193 = UINT64_MAX;
	uint16_t x194 = 1522U;
	int32_t x195 = INT32_MAX;
	uint64_t x196 = 28882684690980949LLU;
	int32_t t41 = 20;

	t41 = ((x193==x194)<=(x195*x196));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x197 = INT8_MAX;
	int8_t x199 = INT8_MIN;

	t42 = ((x197==x198)<=(x199*x200));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x201 = 24107U;
	static int16_t x202 = -1;
	uint8_t x203 = 119U;
	volatile int8_t x204 = -4;
	volatile int32_t t43 = -5;

	t43 = ((x201==x202)<=(x203*x204));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x205 = 3U;
	static int8_t x206 = INT8_MIN;
	volatile uint32_t x207 = 1719990U;
	static int8_t x208 = INT8_MIN;
	int32_t t44 = 7;

	t44 = ((x205==x206)<=(x207*x208));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x209 = -1;
	static volatile int8_t x210 = INT8_MIN;
	static int8_t x211 = -1;
	int32_t x212 = 9587;
	volatile int32_t t45 = -168593951;

	t45 = ((x209==x210)<=(x211*x212));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x213 = 20373699101LL;
	int32_t x214 = -1;
	uint64_t x215 = 25198853LLU;
	static int64_t x216 = -1LL;
	int32_t t46 = 59;

	t46 = ((x213==x214)<=(x215*x216));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x218 = 7148703521LLU;
	uint8_t x220 = 91U;
	int32_t t47 = -8;

	t47 = ((x217==x218)<=(x219*x220));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x222 = -1;
	uint64_t x223 = 2LLU;
	volatile uint64_t x224 = 1911601722793187098LLU;
	volatile int32_t t48 = 14529;

	t48 = ((x221==x222)<=(x223*x224));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x225 = 276174;
	volatile int16_t x226 = -1;
	uint64_t x227 = UINT64_MAX;
	static int8_t x228 = INT8_MIN;
	volatile int32_t t49 = 110764538;

	t49 = ((x225==x226)<=(x227*x228));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x230 = INT16_MIN;
	int8_t x231 = INT8_MAX;
	uint16_t x232 = 4U;

	t50 = ((x229==x230)<=(x231*x232));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x238 = INT8_MIN;
	volatile uint32_t x239 = 1905U;
	volatile int32_t t51 = 4034968;

	t51 = ((x237==x238)<=(x239*x240));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x245 = 372087704LLU;
	static volatile int16_t x246 = INT16_MIN;
	static volatile int8_t x248 = 0;
	int32_t t52 = -3233994;

	t52 = ((x245==x246)<=(x247*x248));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x249 = UINT32_MAX;
	int8_t x251 = -47;
	volatile int32_t t53 = 117;

	t53 = ((x249==x250)<=(x251*x252));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x253 = 4U;
	uint64_t x255 = 3364553471482010LLU;
	static int8_t x256 = INT8_MIN;
	volatile int32_t t54 = 3872658;

	t54 = ((x253==x254)<=(x255*x256));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x263 = 34U;
	static int32_t x264 = -148;
	int32_t t55 = 1752;

	t55 = ((x261==x262)<=(x263*x264));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x265 = 449U;
	int16_t x266 = 179;
	int32_t t56 = -427;

	t56 = ((x265==x266)<=(x267*x268));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x285 = 2U;
	static int16_t x286 = INT16_MIN;
	uint8_t x287 = 22U;
	int64_t x288 = -32925817496LL;
	int32_t t57 = -171688;

	t57 = ((x285==x286)<=(x287*x288));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x289 = INT64_MIN;
	uint64_t x290 = UINT64_MAX;
	int32_t x291 = -1;
	int32_t t58 = -621;

	t58 = ((x289==x290)<=(x291*x292));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x293 = 11U;
	uint64_t x294 = UINT64_MAX;
	volatile int8_t x295 = -25;
	volatile int32_t x296 = 585913;

	t59 = ((x293==x294)<=(x295*x296));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x297 = INT64_MAX;
	int16_t x300 = -13578;
	volatile int32_t t60 = 6195651;

	t60 = ((x297==x298)<=(x299*x300));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x301 = 108U;
	static volatile int64_t x303 = 3545764126416LL;
	int16_t x304 = INT16_MIN;
	int32_t t61 = 412730654;

	t61 = ((x301==x302)<=(x303*x304));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x305 = 230;
	int64_t x306 = INT64_MAX;
	static uint16_t x307 = 943U;
	int8_t x308 = -1;

	t62 = ((x305==x306)<=(x307*x308));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x309 = INT32_MAX;
	uint32_t x311 = 2473777U;
	static volatile int32_t x312 = -1;
	volatile int32_t t63 = 1;

	t63 = ((x309==x310)<=(x311*x312));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x313 = INT8_MIN;
	int64_t x315 = INT64_MIN;
	static volatile int32_t t64 = 1;

	t64 = ((x313==x314)<=(x315*x316));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x317 = INT32_MIN;
	static uint8_t x318 = 15U;
	int64_t x319 = INT64_MIN;
	volatile uint64_t x320 = 865LLU;
	int32_t t65 = 1;

	t65 = ((x317==x318)<=(x319*x320));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x321 = INT64_MIN;
	static volatile int64_t x322 = -1LL;
	int64_t x323 = -1152LL;

	t66 = ((x321==x322)<=(x323*x324));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x329 = UINT16_MAX;

	t67 = ((x329==x330)<=(x331*x332));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x333 = 23LLU;
	int8_t x334 = INT8_MAX;
	int32_t x335 = 9256;
	volatile int32_t t68 = 61642;

	t68 = ((x333==x334)<=(x335*x336));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x341 = 8;
	int16_t x342 = -1;
	volatile uint32_t x343 = 245U;

	t69 = ((x341==x342)<=(x343*x344));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x345 = 2501U;
	int32_t x346 = INT32_MIN;
	int16_t x348 = -1;
	volatile int32_t t70 = -2847892;

	t70 = ((x345==x346)<=(x347*x348));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x353 = UINT16_MAX;
	uint64_t x354 = 320633484798LLU;
	static int16_t x355 = INT16_MIN;
	volatile uint32_t x356 = 2U;
	volatile int32_t t71 = 188625;

	t71 = ((x353==x354)<=(x355*x356));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x358 = 1U;
	int64_t x360 = -1LL;

	t72 = ((x357==x358)<=(x359*x360));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x362 = INT32_MIN;
	static volatile uint64_t x363 = 16101LLU;
	static volatile int32_t t73 = 726190392;

	t73 = ((x361==x362)<=(x363*x364));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x365 = UINT64_MAX;
	volatile int8_t x366 = -1;
	static uint16_t x367 = 260U;
	int8_t x368 = -59;
	int32_t t74 = 191759002;

	t74 = ((x365==x366)<=(x367*x368));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x370 = 799611374U;
	static int64_t x372 = -1LL;
	int32_t t75 = 48614;

	t75 = ((x369==x370)<=(x371*x372));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x378 = -841452863;
	uint64_t x379 = 11516504273462LLU;
	int64_t x380 = INT64_MIN;

	t76 = ((x377==x378)<=(x379*x380));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x382 = -1LL;
	uint8_t x383 = 2U;

	t77 = ((x381==x382)<=(x383*x384));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x385 = 0;
	int8_t x386 = 3;
	volatile uint16_t x387 = 12U;
	int8_t x388 = -1;
	static volatile int32_t t78 = 3559;

	t78 = ((x385==x386)<=(x387*x388));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x390 = INT16_MAX;
	int8_t x391 = -1;
	uint16_t x392 = 10U;
	volatile int32_t t79 = -57;

	t79 = ((x389==x390)<=(x391*x392));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x393 = 0;
	uint64_t x394 = 626281389425286LLU;
	volatile uint64_t x395 = UINT64_MAX;
	uint8_t x396 = UINT8_MAX;
	volatile int32_t t80 = -6;

	t80 = ((x393==x394)<=(x395*x396));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x398 = UINT32_MAX;
	volatile uint8_t x399 = UINT8_MAX;
	int16_t x400 = INT16_MIN;
	int32_t t81 = 603886114;

	t81 = ((x397==x398)<=(x399*x400));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x401 = INT64_MAX;
	static int32_t x402 = INT32_MAX;
	static volatile int32_t t82 = -118600067;

	t82 = ((x401==x402)<=(x403*x404));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x405 = 93235114817637243LLU;
	uint64_t x406 = UINT64_MAX;
	volatile int32_t x408 = 21597;
	int32_t t83 = -19021;

	t83 = ((x405==x406)<=(x407*x408));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x409 = 0U;
	uint32_t x410 = 48243446U;
	uint16_t x411 = 3U;
	static uint16_t x412 = 0U;
	volatile int32_t t84 = 14147950;

	t84 = ((x409==x410)<=(x411*x412));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x413 = INT32_MIN;
	uint8_t x414 = 47U;
	int8_t x416 = INT8_MAX;
	int32_t t85 = 105;

	t85 = ((x413==x414)<=(x415*x416));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x421 = -1;
	static volatile int64_t x422 = INT64_MIN;
	int32_t t86 = 4;

	t86 = ((x421==x422)<=(x423*x424));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x425 = INT64_MIN;
	int16_t x426 = -1;
	int64_t x427 = INT64_MIN;
	uint64_t x428 = UINT64_MAX;
	static int32_t t87 = 94580857;

	t87 = ((x425==x426)<=(x427*x428));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x433 = 3000595803287953612LL;
	int16_t x434 = INT16_MIN;

	t88 = ((x433==x434)<=(x435*x436));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x438 = 9U;
	int64_t x439 = 17161235LL;
	uint8_t x440 = UINT8_MAX;
	int32_t t89 = 690984655;

	t89 = ((x437==x438)<=(x439*x440));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x441 = INT16_MIN;
	int32_t x442 = INT32_MAX;
	int64_t x443 = 11944LL;
	int8_t x444 = INT8_MIN;
	volatile int32_t t90 = -59096980;

	t90 = ((x441==x442)<=(x443*x444));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x453 = INT32_MAX;
	int16_t x454 = INT16_MIN;
	int8_t x455 = INT8_MIN;
	volatile int32_t t91 = -142;

	t91 = ((x453==x454)<=(x455*x456));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x461 = INT64_MAX;
	uint8_t x462 = UINT8_MAX;
	int16_t x463 = INT16_MIN;
	uint32_t x464 = UINT32_MAX;
	volatile int32_t t92 = -210;

	t92 = ((x461==x462)<=(x463*x464));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x465 = UINT16_MAX;
	uint8_t x468 = 62U;
	int32_t t93 = 8;

	t93 = ((x465==x466)<=(x467*x468));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x471 = INT32_MAX;
	uint32_t x472 = UINT32_MAX;
	int32_t t94 = -16;

	t94 = ((x469==x470)<=(x471*x472));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x473 = UINT16_MAX;
	int16_t x475 = INT16_MIN;
	uint32_t x476 = 11U;
	static volatile int32_t t95 = -2618117;

	t95 = ((x473==x474)<=(x475*x476));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x478 = 0U;
	int64_t x479 = -4935453562LL;
	volatile int32_t t96 = 226475;

	t96 = ((x477==x478)<=(x479*x480));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x481 = INT8_MIN;
	static int32_t x482 = INT32_MAX;
	uint16_t x483 = 10U;
	static int32_t t97 = 3811;

	t97 = ((x481==x482)<=(x483*x484));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x485 = -1;
	static int16_t x486 = -1;
	volatile int16_t x487 = INT16_MIN;
	int32_t t98 = -2101226;

	t98 = ((x485==x486)<=(x487*x488));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x489 = 18U;
	static uint64_t x490 = 55LLU;
	volatile int16_t x491 = INT16_MIN;

	t99 = ((x489==x490)<=(x491*x492));

	if (t99 != 0) { NG(); } else { ; }
	
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

