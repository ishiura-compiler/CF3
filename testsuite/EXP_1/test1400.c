#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x11 = -1LL;
static volatile int32_t t2 = 961614;
uint16_t x16 = 10807U;
int32_t t3 = -49;
int32_t x19 = INT32_MIN;
int32_t x22 = INT32_MIN;
volatile int32_t t5 = -3377;
uint32_t x25 = 7U;
uint8_t x26 = 3U;
int32_t t6 = -13113898;
int32_t x30 = -25587;
int32_t t9 = -308281310;
static uint32_t x42 = UINT32_MAX;
int32_t x44 = 0;
static uint32_t x46 = 23857U;
static int16_t x60 = INT16_MIN;
static uint8_t x63 = 12U;
int32_t x64 = 1;
int16_t x66 = INT16_MIN;
uint16_t x68 = UINT16_MAX;
int64_t x69 = INT64_MIN;
int16_t x71 = 9;
static uint16_t x72 = 885U;
int8_t x74 = 0;
volatile int32_t t18 = -31591;
static int32_t x82 = -3737;
volatile uint32_t x100 = 129427U;
volatile int8_t x102 = INT8_MAX;
int8_t x104 = 1;
int32_t t25 = 23859;
int16_t x112 = -1;
volatile uint16_t x118 = UINT16_MAX;
uint32_t x119 = UINT32_MAX;
int16_t x125 = INT16_MAX;
int32_t t30 = 0;
uint64_t x136 = 249792LLU;
uint32_t x140 = 1395U;
int64_t x141 = INT64_MAX;
static volatile int32_t x146 = INT32_MIN;
int64_t x150 = INT64_MAX;
static int32_t t36 = 0;
volatile int16_t x154 = -15898;
int64_t x160 = 5771LL;
int8_t x165 = -1;
static int16_t x171 = INT16_MIN;
int32_t x182 = 3;
int32_t x192 = INT32_MIN;
int8_t x198 = INT8_MIN;
static int16_t x199 = -26;
int32_t t48 = 7383;
int16_t x203 = -1;
volatile int32_t t49 = -3;
uint16_t x205 = UINT16_MAX;
static uint16_t x211 = UINT16_MAX;
static int16_t x219 = INT16_MAX;
static int32_t x221 = INT32_MIN;
static int64_t x224 = -3840194496535354606LL;
static int32_t t54 = -19370945;
int64_t x225 = INT64_MAX;
volatile int32_t t55 = -55;
volatile int32_t t56 = -3;
static int32_t x235 = INT32_MIN;
int16_t x252 = -1007;
uint64_t x256 = 152124069LLU;
int32_t x258 = -1;
volatile int32_t x259 = -1;
int64_t x261 = INT64_MAX;
int32_t t66 = -5;
int8_t x274 = INT8_MIN;
static uint32_t x283 = UINT32_MAX;
static int8_t x285 = INT8_MIN;
int64_t x286 = -280663458580LL;
static volatile int32_t t70 = -15882398;
int32_t x291 = INT32_MAX;
static uint8_t x294 = UINT8_MAX;
static int8_t x296 = INT8_MIN;
int16_t x306 = 31;
uint8_t x316 = UINT8_MAX;
uint8_t x317 = 60U;
int8_t x320 = -1;
int32_t t78 = -5863;
int32_t x321 = -1;
int32_t t79 = -32052624;
static volatile uint8_t x326 = 1U;
int8_t x331 = INT8_MAX;
uint64_t x335 = 350LLU;
volatile int32_t t82 = 150;
static int32_t x341 = 1661311;
uint64_t x343 = 44564481639425323LLU;
volatile int32_t t84 = 84;
static uint64_t x351 = 7388315752LLU;
int16_t x360 = INT16_MAX;
int32_t t87 = 1;
uint8_t x362 = UINT8_MAX;
volatile uint8_t x363 = 8U;
volatile int32_t t89 = -424805332;
int64_t x370 = INT64_MAX;
int16_t x371 = INT16_MIN;
static int64_t x379 = INT64_MAX;
static int64_t x386 = INT64_MAX;
int64_t x393 = -1LL;
static volatile uint64_t x394 = 7428362768333600865LLU;
volatile int8_t x402 = INT8_MIN;
int64_t x403 = INT64_MAX;
int8_t x406 = INT8_MAX;
static uint64_t x411 = 234LLU;


void f0(void) {
	static volatile int8_t x1 = INT8_MAX;
	uint16_t x2 = 4122U;
	static volatile int64_t x3 = -1203131461LL;
	uint16_t x4 = 1U;
	int32_t t0 = 1;

	t0 = (((x1<x2)/x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	static int16_t x6 = INT16_MAX;
	int16_t x7 = -1;
	int32_t x8 = INT32_MIN;
	int32_t t1 = 16725;

	t1 = (((x5<x6)/x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 59120148;
	int64_t x10 = -1LL;
	uint32_t x12 = UINT32_MAX;

	t2 = (((x9<x10)/x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -34;
	int8_t x14 = INT8_MIN;
	int16_t x15 = -182;

	t3 = (((x13<x14)/x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x17 = 439959311;
	static volatile int16_t x18 = INT16_MIN;
	int8_t x20 = INT8_MIN;
	static int32_t t4 = -30235;

	t4 = (((x17<x18)/x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	uint64_t x23 = 241LLU;
	int64_t x24 = -3357637201282LL;

	t5 = (((x21<x22)/x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x27 = UINT32_MAX;
	volatile int64_t x28 = -1LL;

	t6 = (((x25<x26)/x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	volatile int8_t x31 = INT8_MIN;
	uint8_t x32 = 5U;
	int32_t t7 = -12;

	t7 = (((x29<x30)/x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	static uint64_t x34 = 109938102965102525LLU;
	int8_t x35 = INT8_MAX;
	int32_t x36 = -1982;
	int32_t t8 = 128040512;

	t8 = (((x33<x34)/x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -2;
	uint16_t x38 = UINT16_MAX;
	int64_t x39 = -1LL;
	int64_t x40 = INT64_MAX;

	t9 = (((x37<x38)/x39)<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = 1061044075;
	volatile int16_t x43 = 5268;
	static volatile int32_t t10 = 0;

	t10 = (((x41<x42)/x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	int16_t x47 = INT16_MAX;
	int64_t x48 = INT64_MIN;
	static volatile int32_t t11 = 2200;

	t11 = (((x45<x46)/x47)<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x49 = 121U;
	int64_t x50 = INT64_MIN;
	uint16_t x51 = 391U;
	static volatile int32_t x52 = -1;
	volatile int32_t t12 = -7008262;

	t12 = (((x49<x50)/x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = 697237LLU;
	int32_t x58 = INT32_MIN;
	static uint64_t x59 = 232565678995999LLU;
	volatile int32_t t13 = 0;

	t13 = (((x57<x58)/x59)<x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = -1;
	uint16_t x62 = 0U;
	static volatile int32_t t14 = -1;

	t14 = (((x61<x62)/x63)<x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MIN;
	int16_t x67 = INT16_MIN;
	static int32_t t15 = -183286121;

	t15 = (((x65<x66)/x67)<x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x70 = INT8_MAX;
	volatile int32_t t16 = -126763;

	t16 = (((x69<x70)/x71)<x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x73 = 12202U;
	volatile int16_t x75 = INT16_MIN;
	uint32_t x76 = 841297216U;
	volatile int32_t t17 = 1;

	t17 = (((x73<x74)/x75)<x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = 208116096LLU;
	int32_t x78 = INT32_MIN;
	int64_t x79 = INT64_MIN;
	int8_t x80 = INT8_MAX;

	t18 = (((x77<x78)/x79)<x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x81 = INT8_MIN;
	static volatile int64_t x83 = 14LL;
	uint32_t x84 = 1U;
	volatile int32_t t19 = -1044572;

	t19 = (((x81<x82)/x83)<x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = -1;
	static int32_t x86 = 271567319;
	int16_t x87 = INT16_MAX;
	int32_t x88 = 364711;
	volatile int32_t t20 = -1;

	t20 = (((x85<x86)/x87)<x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x89 = INT8_MIN;
	int32_t x90 = -1346445;
	volatile int8_t x91 = -1;
	uint16_t x92 = 2478U;
	static int32_t t21 = 1;

	t21 = (((x89<x90)/x91)<x92);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x93 = INT8_MAX;
	int16_t x94 = INT16_MIN;
	static volatile int32_t x95 = -1;
	int8_t x96 = INT8_MAX;
	int32_t t22 = 25;

	t22 = (((x93<x94)/x95)<x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x97 = INT32_MAX;
	static int8_t x98 = 0;
	int16_t x99 = -14306;
	static int32_t t23 = -1;

	t23 = (((x97<x98)/x99)<x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MIN;
	volatile int32_t x103 = -1;
	volatile int32_t t24 = 14979;

	t24 = (((x101<x102)/x103)<x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = INT16_MIN;
	volatile int16_t x106 = 24;
	int64_t x107 = INT64_MIN;
	int8_t x108 = 43;

	t25 = (((x105<x106)/x107)<x108);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = -1LL;
	uint16_t x110 = 1U;
	volatile int8_t x111 = -21;
	volatile int32_t t26 = -34756;

	t26 = (((x109<x110)/x111)<x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = 11643;
	uint64_t x114 = 8277LLU;
	uint16_t x115 = UINT16_MAX;
	int16_t x116 = -1;
	int32_t t27 = 5;

	t27 = (((x113<x114)/x115)<x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x117 = 1792U;
	uint64_t x120 = 4546000237963621023LLU;
	volatile int32_t t28 = -737406996;

	t28 = (((x117<x118)/x119)<x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x121 = 3327;
	static int64_t x122 = INT64_MIN;
	static int16_t x123 = INT16_MAX;
	volatile int64_t x124 = 776LL;
	static volatile int32_t t29 = 59746;

	t29 = (((x121<x122)/x123)<x124);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x126 = 9U;
	int16_t x127 = -138;
	volatile uint32_t x128 = 24936U;

	t30 = (((x125<x126)/x127)<x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x129 = UINT32_MAX;
	volatile int64_t x130 = INT64_MIN;
	int32_t x131 = INT32_MAX;
	static uint32_t x132 = 1380303840U;
	static volatile int32_t t31 = 580;

	t31 = (((x129<x130)/x131)<x132);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = -1;
	int64_t x134 = INT64_MAX;
	int16_t x135 = INT16_MIN;
	volatile int32_t t32 = -8173937;

	t32 = (((x133<x134)/x135)<x136);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x137 = -10390509961574155LL;
	volatile uint8_t x138 = 0U;
	static uint8_t x139 = 69U;
	static volatile int32_t t33 = 7433332;

	t33 = (((x137<x138)/x139)<x140);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x142 = -1;
	int64_t x143 = INT64_MIN;
	uint8_t x144 = 2U;
	volatile int32_t t34 = 3087748;

	t34 = (((x141<x142)/x143)<x144);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x145 = INT64_MIN;
	static volatile int8_t x147 = INT8_MIN;
	static int8_t x148 = INT8_MIN;
	volatile int32_t t35 = 127503594;

	t35 = (((x145<x146)/x147)<x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x149 = 2U;
	uint32_t x151 = 3U;
	int16_t x152 = -1;

	t36 = (((x149<x150)/x151)<x152);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = 0;
	uint32_t x155 = UINT32_MAX;
	volatile int16_t x156 = INT16_MIN;
	int32_t t37 = -108;

	t37 = (((x153<x154)/x155)<x156);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x157 = 2U;
	uint16_t x158 = 17716U;
	int32_t x159 = INT32_MAX;
	int32_t t38 = 29057;

	t38 = (((x157<x158)/x159)<x160);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = INT16_MIN;
	volatile uint16_t x162 = 58U;
	static volatile int16_t x163 = -45;
	uint8_t x164 = 119U;
	volatile int32_t t39 = -1497;

	t39 = (((x161<x162)/x163)<x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x166 = INT8_MIN;
	int64_t x167 = -7742112468839246LL;
	int64_t x168 = -638762641103LL;
	volatile int32_t t40 = 1875067;

	t40 = (((x165<x166)/x167)<x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = INT8_MIN;
	static uint8_t x170 = 30U;
	volatile uint64_t x172 = 1LLU;
	int32_t t41 = -1;

	t41 = (((x169<x170)/x171)<x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = INT16_MIN;
	int16_t x174 = -1;
	volatile int64_t x175 = 86519177792327LL;
	static int32_t x176 = -1;
	static int32_t t42 = -163507;

	t42 = (((x173<x174)/x175)<x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = INT64_MIN;
	volatile int8_t x178 = INT8_MAX;
	uint8_t x179 = 45U;
	int64_t x180 = INT64_MIN;
	static int32_t t43 = 122764;

	t43 = (((x177<x178)/x179)<x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x181 = INT16_MIN;
	uint16_t x183 = UINT16_MAX;
	volatile int64_t x184 = INT64_MIN;
	volatile int32_t t44 = 13121;

	t44 = (((x181<x182)/x183)<x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x185 = -1;
	volatile uint64_t x186 = 3166746520025520100LLU;
	volatile uint8_t x187 = 110U;
	int8_t x188 = -3;
	static volatile int32_t t45 = -2474134;

	t45 = (((x185<x186)/x187)<x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x189 = -1LL;
	int8_t x190 = -1;
	volatile uint64_t x191 = 551669145480411LLU;
	volatile int32_t t46 = 1014462;

	t46 = (((x189<x190)/x191)<x192);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x193 = 26337LLU;
	int64_t x194 = INT64_MIN;
	uint8_t x195 = 1U;
	static uint16_t x196 = UINT16_MAX;
	volatile int32_t t47 = 54334524;

	t47 = (((x193<x194)/x195)<x196);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x197 = 3873;
	static int8_t x200 = -11;

	t48 = (((x197<x198)/x199)<x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x201 = UINT16_MAX;
	int16_t x202 = 140;
	uint16_t x204 = 6849U;

	t49 = (((x201<x202)/x203)<x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x206 = UINT32_MAX;
	uint8_t x207 = 7U;
	int16_t x208 = INT16_MAX;
	int32_t t50 = 155287406;

	t50 = (((x205<x206)/x207)<x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x209 = INT16_MAX;
	int32_t x210 = INT32_MAX;
	int16_t x212 = 2;
	int32_t t51 = -55;

	t51 = (((x209<x210)/x211)<x212);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x213 = 7U;
	uint64_t x214 = UINT64_MAX;
	volatile int8_t x215 = INT8_MAX;
	int32_t x216 = INT32_MAX;
	int32_t t52 = 16664;

	t52 = (((x213<x214)/x215)<x216);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x217 = UINT32_MAX;
	uint16_t x218 = 12451U;
	uint32_t x220 = 709U;
	volatile int32_t t53 = 12232;

	t53 = (((x217<x218)/x219)<x220);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x222 = UINT64_MAX;
	static volatile int32_t x223 = -1;

	t54 = (((x221<x222)/x223)<x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x226 = -1654;
	uint64_t x227 = UINT64_MAX;
	static int16_t x228 = -355;

	t55 = (((x225<x226)/x227)<x228);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x229 = 866U;
	int16_t x230 = INT16_MIN;
	uint8_t x231 = 33U;
	volatile int64_t x232 = -6904691346041955LL;

	t56 = (((x229<x230)/x231)<x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint8_t x233 = 0U;
	int8_t x234 = -1;
	uint16_t x236 = UINT16_MAX;
	volatile int32_t t57 = -764070;

	t57 = (((x233<x234)/x235)<x236);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x237 = 1363U;
	volatile int32_t x238 = 32362807;
	static int64_t x239 = INT64_MAX;
	int64_t x240 = INT64_MIN;
	int32_t t58 = 21438;

	t58 = (((x237<x238)/x239)<x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x241 = 2671875U;
	volatile uint16_t x242 = 92U;
	uint32_t x243 = 1U;
	int8_t x244 = -1;
	int32_t t59 = 43800;

	t59 = (((x241<x242)/x243)<x244);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = INT8_MAX;
	volatile int32_t x246 = INT32_MIN;
	uint8_t x247 = UINT8_MAX;
	int64_t x248 = -1219387071438074360LL;
	int32_t t60 = -12;

	t60 = (((x245<x246)/x247)<x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x249 = -1LL;
	int8_t x250 = 0;
	int32_t x251 = INT32_MIN;
	int32_t t61 = -2;

	t61 = (((x249<x250)/x251)<x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x253 = 0U;
	static uint32_t x254 = 608U;
	int64_t x255 = -1LL;
	volatile int32_t t62 = 3494214;

	t62 = (((x253<x254)/x255)<x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = 5029349956905719LL;
	static int32_t x260 = INT32_MIN;
	volatile int32_t t63 = -710;

	t63 = (((x257<x258)/x259)<x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x262 = -35669177;
	volatile int16_t x263 = INT16_MIN;
	int16_t x264 = INT16_MIN;
	volatile int32_t t64 = 68;

	t64 = (((x261<x262)/x263)<x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x265 = 22U;
	volatile uint16_t x266 = 19U;
	static uint64_t x267 = 428578897LLU;
	static volatile uint8_t x268 = 1U;
	volatile int32_t t65 = 125352245;

	t65 = (((x265<x266)/x267)<x268);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x269 = -1;
	int64_t x270 = 88956076362LL;
	volatile uint32_t x271 = 392592701U;
	volatile int16_t x272 = -1;

	t66 = (((x269<x270)/x271)<x272);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x273 = INT32_MAX;
	uint8_t x275 = 36U;
	uint8_t x276 = 2U;
	int32_t t67 = -63778943;

	t67 = (((x273<x274)/x275)<x276);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x277 = UINT16_MAX;
	static int64_t x278 = -215480431LL;
	int64_t x279 = INT64_MAX;
	static int16_t x280 = -1;
	volatile int32_t t68 = 100355;

	t68 = (((x277<x278)/x279)<x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x281 = 7U;
	uint8_t x282 = 84U;
	volatile int8_t x284 = INT8_MIN;
	static volatile int32_t t69 = -315;

	t69 = (((x281<x282)/x283)<x284);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x287 = 5075227268LLU;
	static volatile uint64_t x288 = 267686383394LLU;

	t70 = (((x285<x286)/x287)<x288);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x289 = -1;
	int8_t x290 = -9;
	static int32_t x292 = INT32_MIN;
	static int32_t t71 = 39762;

	t71 = (((x289<x290)/x291)<x292);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x293 = 78694;
	int8_t x295 = -1;
	volatile int32_t t72 = -1;

	t72 = (((x293<x294)/x295)<x296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x297 = -1;
	uint16_t x298 = 10363U;
	static int32_t x299 = -11;
	int64_t x300 = INT64_MAX;
	volatile int32_t t73 = -11;

	t73 = (((x297<x298)/x299)<x300);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x301 = 0;
	uint8_t x302 = 19U;
	static volatile int64_t x303 = INT64_MIN;
	int32_t x304 = INT32_MIN;
	volatile int32_t t74 = 0;

	t74 = (((x301<x302)/x303)<x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x305 = INT64_MIN;
	int64_t x307 = -1969499753833LL;
	static volatile uint16_t x308 = UINT16_MAX;
	int32_t t75 = -214;

	t75 = (((x305<x306)/x307)<x308);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x309 = UINT8_MAX;
	uint64_t x310 = UINT64_MAX;
	static int8_t x311 = INT8_MIN;
	int64_t x312 = INT64_MIN;
	volatile int32_t t76 = 1;

	t76 = (((x309<x310)/x311)<x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x313 = 146686804077629553LL;
	static volatile int32_t x314 = -1;
	int8_t x315 = INT8_MIN;
	static volatile int32_t t77 = 48;

	t77 = (((x313<x314)/x315)<x316);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x318 = 14U;
	int64_t x319 = 7815835LL;

	t78 = (((x317<x318)/x319)<x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x322 = INT32_MAX;
	int16_t x323 = INT16_MIN;
	int8_t x324 = INT8_MAX;

	t79 = (((x321<x322)/x323)<x324);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x325 = UINT64_MAX;
	int64_t x327 = INT64_MAX;
	int8_t x328 = INT8_MAX;
	int32_t t80 = 1715;

	t80 = (((x325<x326)/x327)<x328);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x329 = 61;
	int64_t x330 = -1LL;
	uint16_t x332 = UINT16_MAX;
	volatile int32_t t81 = -10286;

	t81 = (((x329<x330)/x331)<x332);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x333 = -1LL;
	static uint8_t x334 = UINT8_MAX;
	volatile int64_t x336 = -1LL;

	t82 = (((x333<x334)/x335)<x336);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x337 = 15U;
	uint16_t x338 = UINT16_MAX;
	uint64_t x339 = 1LLU;
	int8_t x340 = 2;
	static int32_t t83 = 108;

	t83 = (((x337<x338)/x339)<x340);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x342 = 2U;
	static uint32_t x344 = 485088U;

	t84 = (((x341<x342)/x343)<x344);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x345 = INT64_MAX;
	uint32_t x346 = UINT32_MAX;
	static uint32_t x347 = 12531495U;
	int64_t x348 = -1621179419162LL;
	int32_t t85 = -14;

	t85 = (((x345<x346)/x347)<x348);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x349 = 222460U;
	uint32_t x350 = 6369U;
	int64_t x352 = 34184859502LL;
	int32_t t86 = 3857134;

	t86 = (((x349<x350)/x351)<x352);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x357 = INT16_MIN;
	static int32_t x358 = -231720;
	int8_t x359 = 6;

	t87 = (((x357<x358)/x359)<x360);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x361 = 30U;
	int64_t x364 = 21983662LL;
	int32_t t88 = 164978497;

	t88 = (((x361<x362)/x363)<x364);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x365 = 9;
	int32_t x366 = -1;
	uint16_t x367 = 2775U;
	int64_t x368 = 90615LL;

	t89 = (((x365<x366)/x367)<x368);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x369 = INT16_MIN;
	int32_t x372 = INT32_MAX;
	int32_t t90 = 12202640;

	t90 = (((x369<x370)/x371)<x372);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x373 = -7;
	int16_t x374 = INT16_MIN;
	static int8_t x375 = -1;
	int64_t x376 = INT64_MIN;
	int32_t t91 = -745;

	t91 = (((x373<x374)/x375)<x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x377 = -1;
	int8_t x378 = INT8_MAX;
	volatile uint16_t x380 = UINT16_MAX;
	static volatile int32_t t92 = 641131354;

	t92 = (((x377<x378)/x379)<x380);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x381 = -1;
	uint16_t x382 = UINT16_MAX;
	static int32_t x383 = 3;
	int16_t x384 = INT16_MIN;
	int32_t t93 = -1095;

	t93 = (((x381<x382)/x383)<x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x385 = 25U;
	static int16_t x387 = INT16_MAX;
	int16_t x388 = INT16_MIN;
	static volatile int32_t t94 = -7490;

	t94 = (((x385<x386)/x387)<x388);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x395 = 341647U;
	int8_t x396 = INT8_MAX;
	int32_t t95 = 387;

	t95 = (((x393<x394)/x395)<x396);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x397 = 1;
	uint8_t x398 = 51U;
	uint16_t x399 = UINT16_MAX;
	int16_t x400 = -1;
	volatile int32_t t96 = -389909;

	t96 = (((x397<x398)/x399)<x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x401 = -1LL;
	static uint16_t x404 = 195U;
	int32_t t97 = 4;

	t97 = (((x401<x402)/x403)<x404);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x405 = UINT8_MAX;
	static int32_t x407 = 55626440;
	int8_t x408 = INT8_MAX;
	volatile int32_t t98 = -557432;

	t98 = (((x405<x406)/x407)<x408);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x409 = 3520LLU;
	uint8_t x410 = 0U;
	uint64_t x412 = 599175671LLU;
	volatile int32_t t99 = 882;

	t99 = (((x409<x410)/x411)<x412);

	if (t99 != 1) { NG(); } else { ; }
	
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

