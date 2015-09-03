#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x13 = INT32_MIN;
volatile int64_t x14 = INT64_MIN;
int64_t x21 = -1LL;
uint16_t x23 = UINT16_MAX;
uint16_t x24 = 447U;
int8_t x28 = INT8_MIN;
static uint8_t x40 = 31U;
int8_t x43 = -14;
int32_t x51 = INT32_MIN;
int16_t x62 = INT16_MAX;
int16_t x64 = -1;
int16_t x69 = INT16_MIN;
uint16_t x71 = 0U;
uint8_t x72 = 0U;
int64_t x73 = 297038674186786217LL;
volatile int16_t x75 = 1;
int32_t t19 = -163;
int16_t x85 = -2327;
int32_t t20 = -22006642;
int8_t x89 = -52;
uint64_t x104 = UINT64_MAX;
static uint8_t x105 = 117U;
int64_t x106 = INT64_MIN;
static int32_t t26 = -635276;
uint32_t x124 = UINT32_MAX;
uint8_t x126 = 1U;
int16_t x130 = INT16_MAX;
uint64_t x133 = UINT64_MAX;
volatile int8_t x137 = INT8_MAX;
int64_t x141 = -1LL;
static int8_t x146 = -1;
int32_t t34 = 843;
int8_t x153 = INT8_MAX;
int16_t x161 = INT16_MIN;
int8_t x165 = -1;
volatile int32_t t40 = 42338;
static int64_t x173 = 7534842056797249LL;
volatile uint16_t x181 = 1U;
volatile int32_t t43 = -186;
int32_t t45 = 498440945;
uint16_t x195 = 32U;
int16_t x196 = INT16_MIN;
int8_t x197 = -1;
int32_t t47 = -148954824;
int8_t x203 = INT8_MIN;
volatile int32_t t48 = -1;
int16_t x216 = INT16_MIN;
int32_t t51 = 12;
int32_t x218 = -1;
int32_t t52 = -1;
int64_t x223 = 13LL;
static uint64_t x224 = UINT64_MAX;
volatile int64_t x253 = -14LL;
int64_t x259 = -1LL;
volatile int32_t t62 = 0;
uint64_t x262 = 12053538838489LLU;
static int16_t x280 = INT16_MIN;
int8_t x281 = INT8_MIN;
int16_t x288 = INT16_MIN;
static volatile uint64_t x291 = 24385238573741724LLU;
int32_t x295 = INT32_MIN;
int32_t x302 = INT32_MAX;
volatile uint32_t x303 = UINT32_MAX;
int32_t t74 = -2270280;
volatile int16_t x317 = -14715;
static volatile uint16_t x320 = 32093U;
int32_t t76 = -52417931;
int32_t t77 = -46253;
static int64_t x329 = 14965LL;
int8_t x334 = -3;
uint16_t x337 = 455U;
int32_t x345 = -1;
static int64_t x349 = INT64_MAX;
volatile uint8_t x352 = UINT8_MAX;
volatile int8_t x363 = INT8_MAX;
int32_t x367 = INT32_MIN;
uint64_t x370 = UINT64_MAX;
static int16_t x383 = -1;
uint16_t x389 = 1713U;
static uint64_t x393 = 605LLU;
volatile int16_t x401 = INT16_MIN;
int16_t x413 = -13;
static uint8_t x414 = 1U;
volatile int16_t x421 = INT16_MIN;
uint8_t x424 = UINT8_MAX;
int32_t t99 = -2943;


void f0(void) {
	uint32_t x1 = 84225575U;
	static int8_t x2 = INT8_MAX;
	uint64_t x3 = 68259757139906962LLU;
	int64_t x4 = -55147895LL;
	static int32_t t0 = -3782;

	t0 = (((x1%x2)+x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint8_t x6 = 1U;
	uint16_t x7 = UINT16_MAX;
	int32_t x8 = INT32_MAX;
	int32_t t1 = -1;

	t1 = (((x5%x6)+x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	static int16_t x10 = -1;
	int32_t x11 = 31696;
	int16_t x12 = INT16_MIN;
	static volatile int32_t t2 = 939245;

	t2 = (((x9%x10)+x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x15 = 55U;
	int16_t x16 = -86;
	int32_t t3 = -30138771;

	t3 = (((x13%x14)+x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x22 = INT64_MAX;
	volatile int32_t t4 = 7701851;

	t4 = (((x21%x22)+x23)<x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = 6U;
	uint64_t x26 = 15168112674128LLU;
	int64_t x27 = -1LL;
	volatile int32_t t5 = 5618;

	t5 = (((x25%x26)+x27)<x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 2U;
	uint8_t x30 = 66U;
	uint8_t x31 = 12U;
	uint16_t x32 = 3272U;
	volatile int32_t t6 = -3318423;

	t6 = (((x29%x30)+x31)<x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x33 = -1;
	int32_t x34 = INT32_MAX;
	static volatile int64_t x35 = INT64_MAX;
	int32_t x36 = INT32_MAX;
	int32_t t7 = -20;

	t7 = (((x33%x34)+x35)<x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x37 = -1;
	volatile int16_t x38 = -1;
	static volatile int16_t x39 = INT16_MAX;
	int32_t t8 = 938145;

	t8 = (((x37%x38)+x39)<x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = 0;
	uint32_t x42 = 167846U;
	static int8_t x44 = INT8_MIN;
	volatile int32_t t9 = -729263326;

	t9 = (((x41%x42)+x43)<x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x45 = INT16_MAX;
	int16_t x46 = -1;
	volatile int64_t x47 = -668260597384LL;
	volatile int8_t x48 = INT8_MIN;
	volatile int32_t t10 = -1;

	t10 = (((x45%x46)+x47)<x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x49 = -1;
	int64_t x50 = 55947LL;
	int32_t x52 = 9102036;
	int32_t t11 = 95208054;

	t11 = (((x49%x50)+x51)<x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = INT64_MIN;
	uint8_t x54 = 69U;
	volatile int32_t x55 = INT32_MIN;
	uint64_t x56 = 11338700LLU;
	int32_t t12 = -4080;

	t12 = (((x53%x54)+x55)<x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x57 = INT16_MAX;
	int16_t x58 = 74;
	uint16_t x59 = UINT16_MAX;
	volatile uint64_t x60 = 0LLU;
	int32_t t13 = -5637438;

	t13 = (((x57%x58)+x59)<x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MAX;
	uint32_t x63 = UINT32_MAX;
	static volatile int32_t t14 = -2;

	t14 = (((x61%x62)+x63)<x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x65 = INT16_MIN;
	int8_t x66 = INT8_MIN;
	static int8_t x67 = INT8_MAX;
	static volatile int8_t x68 = INT8_MAX;
	volatile int32_t t15 = 2;

	t15 = (((x65%x66)+x67)<x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x70 = -1;
	volatile int32_t t16 = -7617;

	t16 = (((x69%x70)+x71)<x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x74 = INT8_MIN;
	int32_t x76 = -1;
	static volatile int32_t t17 = -1391;

	t17 = (((x73%x74)+x75)<x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = 4U;
	int32_t x78 = INT32_MAX;
	uint8_t x79 = UINT8_MAX;
	int32_t x80 = -1;
	volatile int32_t t18 = 13686;

	t18 = (((x77%x78)+x79)<x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x81 = INT32_MIN;
	int32_t x82 = -26;
	int16_t x83 = -493;
	int16_t x84 = INT16_MIN;

	t19 = (((x81%x82)+x83)<x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x86 = INT64_MAX;
	int64_t x87 = -1LL;
	uint64_t x88 = UINT64_MAX;

	t20 = (((x85%x86)+x87)<x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x90 = -7;
	volatile uint8_t x91 = UINT8_MAX;
	volatile uint16_t x92 = UINT16_MAX;
	int32_t t21 = -11;

	t21 = (((x89%x90)+x91)<x92);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = -1;
	int16_t x94 = -1;
	static int32_t x95 = -36223885;
	int64_t x96 = -1LL;
	int32_t t22 = 5276403;

	t22 = (((x93%x94)+x95)<x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x97 = INT64_MIN;
	static int32_t x98 = 7224445;
	int16_t x99 = -1;
	int64_t x100 = -10580403701903LL;
	volatile int32_t t23 = 198624;

	t23 = (((x97%x98)+x99)<x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x101 = 26;
	uint64_t x102 = UINT64_MAX;
	volatile int16_t x103 = INT16_MIN;
	int32_t t24 = -672419;

	t24 = (((x101%x102)+x103)<x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x107 = UINT16_MAX;
	volatile uint64_t x108 = 4317902068973LLU;
	int32_t t25 = 1;

	t25 = (((x105%x106)+x107)<x108);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x113 = UINT64_MAX;
	volatile int8_t x114 = INT8_MAX;
	int32_t x115 = INT32_MIN;
	int8_t x116 = INT8_MIN;

	t26 = (((x113%x114)+x115)<x116);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x117 = UINT8_MAX;
	int32_t x118 = -1;
	volatile int16_t x119 = INT16_MIN;
	int16_t x120 = -5659;
	volatile int32_t t27 = -39860904;

	t27 = (((x117%x118)+x119)<x120);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = UINT64_MAX;
	volatile uint32_t x122 = UINT32_MAX;
	uint16_t x123 = 2U;
	static int32_t t28 = 194631;

	t28 = (((x121%x122)+x123)<x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x125 = 83441821920868424LL;
	int16_t x127 = INT16_MIN;
	int64_t x128 = 1579LL;
	int32_t t29 = 124415;

	t29 = (((x125%x126)+x127)<x128);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x129 = UINT16_MAX;
	volatile int8_t x131 = -4;
	static uint64_t x132 = UINT64_MAX;
	int32_t t30 = 51086968;

	t30 = (((x129%x130)+x131)<x132);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x134 = UINT64_MAX;
	volatile int32_t x135 = 304230977;
	uint16_t x136 = 11102U;
	int32_t t31 = 443525;

	t31 = (((x133%x134)+x135)<x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x138 = INT8_MIN;
	int32_t x139 = -752479609;
	uint64_t x140 = UINT64_MAX;
	int32_t t32 = 5090533;

	t32 = (((x137%x138)+x139)<x140);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x142 = 4U;
	uint32_t x143 = 3051259U;
	int64_t x144 = -1LL;
	static int32_t t33 = -2061740;

	t33 = (((x141%x142)+x143)<x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = -1;
	volatile uint32_t x147 = UINT32_MAX;
	int16_t x148 = INT16_MIN;

	t34 = (((x145%x146)+x147)<x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x149 = -1;
	uint16_t x150 = 5U;
	int64_t x151 = INT64_MAX;
	int8_t x152 = 26;
	volatile int32_t t35 = -22;

	t35 = (((x149%x150)+x151)<x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x154 = 16U;
	static int64_t x155 = INT64_MIN;
	static int64_t x156 = INT64_MIN;
	volatile int32_t t36 = -7837;

	t36 = (((x153%x154)+x155)<x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = 453459613511LL;
	volatile int32_t x158 = -2126364;
	int32_t x159 = INT32_MIN;
	static uint16_t x160 = 184U;
	int32_t t37 = -1;

	t37 = (((x157%x158)+x159)<x160);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x162 = -897LL;
	uint16_t x163 = 1U;
	uint64_t x164 = 134921482750LLU;
	static int32_t t38 = 3383661;

	t38 = (((x161%x162)+x163)<x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x166 = -1LL;
	static uint16_t x167 = 0U;
	volatile uint64_t x168 = 24529410394LLU;
	int32_t t39 = 23538;

	t39 = (((x165%x166)+x167)<x168);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = INT16_MIN;
	uint64_t x170 = UINT64_MAX;
	static uint32_t x171 = 1667332U;
	volatile int32_t x172 = INT32_MIN;

	t40 = (((x169%x170)+x171)<x172);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x174 = UINT8_MAX;
	uint64_t x175 = UINT64_MAX;
	static uint64_t x176 = UINT64_MAX;
	static int32_t t41 = 809;

	t41 = (((x173%x174)+x175)<x176);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = -1;
	int32_t x178 = -1;
	int64_t x179 = 25674611921205225LL;
	uint64_t x180 = 1157392455119788LLU;
	volatile int32_t t42 = -28;

	t42 = (((x177%x178)+x179)<x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x182 = 752887923;
	int32_t x183 = -1;
	volatile int32_t x184 = -1;

	t43 = (((x181%x182)+x183)<x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = -1;
	int32_t x186 = 359354915;
	static int32_t x187 = INT32_MAX;
	static int32_t x188 = INT32_MIN;
	volatile int32_t t44 = -1592184;

	t44 = (((x185%x186)+x187)<x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x189 = UINT16_MAX;
	int16_t x190 = 2729;
	int8_t x191 = INT8_MAX;
	uint16_t x192 = UINT16_MAX;

	t45 = (((x189%x190)+x191)<x192);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x193 = 28295410392361LLU;
	int32_t x194 = -2469173;
	volatile int32_t t46 = -11;

	t46 = (((x193%x194)+x195)<x196);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x198 = UINT32_MAX;
	static int64_t x199 = 130929898577522LL;
	volatile int32_t x200 = -1;

	t47 = (((x197%x198)+x199)<x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x201 = -1LL;
	int64_t x202 = -1LL;
	int16_t x204 = INT16_MIN;

	t48 = (((x201%x202)+x203)<x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = -1;
	uint64_t x206 = UINT64_MAX;
	static volatile int32_t x207 = 223;
	int8_t x208 = 5;
	volatile int32_t t49 = -16985509;

	t49 = (((x205%x206)+x207)<x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x209 = INT64_MIN;
	int8_t x210 = INT8_MAX;
	uint32_t x211 = 1553602181U;
	int8_t x212 = INT8_MIN;
	volatile int32_t t50 = 221115;

	t50 = (((x209%x210)+x211)<x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x213 = -1;
	volatile int16_t x214 = -1188;
	volatile int16_t x215 = -1;

	t51 = (((x213%x214)+x215)<x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x217 = -1;
	int64_t x219 = INT64_MIN;
	int16_t x220 = -8620;

	t52 = (((x217%x218)+x219)<x220);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x221 = 5U;
	int64_t x222 = -1LL;
	volatile int32_t t53 = -95731;

	t53 = (((x221%x222)+x223)<x224);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x225 = 11U;
	int64_t x226 = INT64_MAX;
	int32_t x227 = INT32_MIN;
	static uint64_t x228 = UINT64_MAX;
	int32_t t54 = -380464;

	t54 = (((x225%x226)+x227)<x228);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x229 = UINT64_MAX;
	uint8_t x230 = UINT8_MAX;
	int64_t x231 = INT64_MIN;
	static int64_t x232 = -1LL;
	volatile int32_t t55 = -90;

	t55 = (((x229%x230)+x231)<x232);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x233 = 1838U;
	int64_t x234 = -1LL;
	uint32_t x235 = 69420461U;
	uint8_t x236 = 27U;
	volatile int32_t t56 = 1581;

	t56 = (((x233%x234)+x235)<x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x237 = -1LL;
	static int32_t x238 = INT32_MIN;
	static uint8_t x239 = UINT8_MAX;
	int32_t x240 = INT32_MAX;
	volatile int32_t t57 = 1;

	t57 = (((x237%x238)+x239)<x240);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x241 = 9U;
	volatile int16_t x242 = INT16_MIN;
	uint8_t x243 = 0U;
	uint8_t x244 = UINT8_MAX;
	int32_t t58 = -104;

	t58 = (((x241%x242)+x243)<x244);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x245 = 4294800150532LLU;
	static uint64_t x246 = UINT64_MAX;
	static int16_t x247 = 7839;
	int64_t x248 = INT64_MIN;
	volatile int32_t t59 = -77933;

	t59 = (((x245%x246)+x247)<x248);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = -1LL;
	int32_t x250 = -1;
	volatile int8_t x251 = INT8_MAX;
	int8_t x252 = -1;
	volatile int32_t t60 = 4189391;

	t60 = (((x249%x250)+x251)<x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x254 = INT32_MIN;
	int8_t x255 = INT8_MIN;
	static uint64_t x256 = UINT64_MAX;
	volatile int32_t t61 = 128610768;

	t61 = (((x253%x254)+x255)<x256);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x257 = INT32_MIN;
	volatile int64_t x258 = 945973416032LL;
	int32_t x260 = INT32_MIN;

	t62 = (((x257%x258)+x259)<x260);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x261 = INT32_MAX;
	volatile int32_t x263 = -1;
	uint16_t x264 = UINT16_MAX;
	volatile int32_t t63 = 30626127;

	t63 = (((x261%x262)+x263)<x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x265 = 1707U;
	int16_t x266 = INT16_MIN;
	int16_t x267 = -1;
	int8_t x268 = 0;
	volatile int32_t t64 = 1;

	t64 = (((x265%x266)+x267)<x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = -190;
	static volatile int64_t x270 = -1LL;
	int8_t x271 = -1;
	int64_t x272 = 3223085213657LL;
	static volatile int32_t t65 = -29682;

	t65 = (((x269%x270)+x271)<x272);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x277 = INT64_MAX;
	uint64_t x278 = 235847387591414533LLU;
	int64_t x279 = -10690232150LL;
	volatile int32_t t66 = -2037;

	t66 = (((x277%x278)+x279)<x280);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x282 = INT32_MIN;
	int8_t x283 = 60;
	int32_t x284 = -1;
	volatile int32_t t67 = -74549472;

	t67 = (((x281%x282)+x283)<x284);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x285 = 111229522166585LLU;
	int64_t x286 = -5265032055453LL;
	uint64_t x287 = 69150441152083LLU;
	static int32_t t68 = 3;

	t68 = (((x285%x286)+x287)<x288);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x289 = -1;
	static int8_t x290 = -1;
	int32_t x292 = 102176506;
	static volatile int32_t t69 = 5541;

	t69 = (((x289%x290)+x291)<x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x293 = INT16_MIN;
	int64_t x294 = INT64_MIN;
	uint16_t x296 = UINT16_MAX;
	volatile int32_t t70 = 51;

	t70 = (((x293%x294)+x295)<x296);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x297 = -193052719119585397LL;
	volatile uint32_t x298 = UINT32_MAX;
	uint8_t x299 = UINT8_MAX;
	int8_t x300 = INT8_MAX;
	volatile int32_t t71 = -160224487;

	t71 = (((x297%x298)+x299)<x300);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x301 = 154192U;
	uint8_t x304 = 24U;
	int32_t t72 = -11;

	t72 = (((x301%x302)+x303)<x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x305 = 4251486033150363605LLU;
	int8_t x306 = INT8_MIN;
	static int16_t x307 = 3;
	uint32_t x308 = 217134U;
	volatile int32_t t73 = -1;

	t73 = (((x305%x306)+x307)<x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = -1;
	static int64_t x314 = INT64_MIN;
	uint32_t x315 = UINT32_MAX;
	int64_t x316 = -203LL;

	t74 = (((x313%x314)+x315)<x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x318 = -1;
	uint8_t x319 = UINT8_MAX;
	volatile int32_t t75 = -20;

	t75 = (((x317%x318)+x319)<x320);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x321 = -44;
	int16_t x322 = INT16_MAX;
	uint8_t x323 = 1U;
	static int32_t x324 = INT32_MIN;

	t76 = (((x321%x322)+x323)<x324);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x325 = 89921U;
	volatile int16_t x326 = INT16_MIN;
	uint32_t x327 = 828U;
	int16_t x328 = INT16_MIN;

	t77 = (((x325%x326)+x327)<x328);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x330 = -1;
	uint8_t x331 = 114U;
	int32_t x332 = -1;
	volatile int32_t t78 = -1;

	t78 = (((x329%x330)+x331)<x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x333 = -1;
	static volatile int8_t x335 = INT8_MIN;
	volatile int32_t x336 = 66114105;
	int32_t t79 = 485506626;

	t79 = (((x333%x334)+x335)<x336);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x338 = INT32_MIN;
	int32_t x339 = INT32_MIN;
	uint64_t x340 = 7905593495876LLU;
	volatile int32_t t80 = 10;

	t80 = (((x337%x338)+x339)<x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x341 = 96598576LL;
	volatile uint16_t x342 = UINT16_MAX;
	uint16_t x343 = 1380U;
	volatile uint32_t x344 = UINT32_MAX;
	volatile int32_t t81 = 1;

	t81 = (((x341%x342)+x343)<x344);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x346 = UINT16_MAX;
	volatile uint16_t x347 = 1U;
	int32_t x348 = INT32_MIN;
	int32_t t82 = -8057905;

	t82 = (((x345%x346)+x347)<x348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x350 = INT8_MIN;
	static volatile int8_t x351 = 1;
	int32_t t83 = 1;

	t83 = (((x349%x350)+x351)<x352);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x357 = INT16_MIN;
	uint32_t x358 = 269295113U;
	volatile int16_t x359 = INT16_MIN;
	int8_t x360 = 0;
	static volatile int32_t t84 = -115;

	t84 = (((x357%x358)+x359)<x360);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x361 = 9288U;
	int32_t x362 = INT32_MIN;
	int16_t x364 = INT16_MIN;
	int32_t t85 = 236;

	t85 = (((x361%x362)+x363)<x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x365 = UINT8_MAX;
	int16_t x366 = INT16_MAX;
	int8_t x368 = INT8_MIN;
	int32_t t86 = 19;

	t86 = (((x365%x366)+x367)<x368);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x369 = UINT64_MAX;
	int16_t x371 = INT16_MAX;
	uint16_t x372 = 20122U;
	volatile int32_t t87 = 12643443;

	t87 = (((x369%x370)+x371)<x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x373 = INT16_MIN;
	int64_t x374 = -29449LL;
	int32_t x375 = -162203;
	uint32_t x376 = 1843436259U;
	int32_t t88 = -60955;

	t88 = (((x373%x374)+x375)<x376);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x377 = 4288513499815976974LLU;
	int32_t x378 = -7181;
	uint32_t x379 = UINT32_MAX;
	uint16_t x380 = 27U;
	volatile int32_t t89 = 4043;

	t89 = (((x377%x378)+x379)<x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x381 = 13224408755838177LL;
	static int8_t x382 = INT8_MIN;
	static volatile uint8_t x384 = 3U;
	int32_t t90 = 205285292;

	t90 = (((x381%x382)+x383)<x384);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x385 = UINT64_MAX;
	int32_t x386 = 29;
	int32_t x387 = 442052;
	int8_t x388 = INT8_MIN;
	static volatile int32_t t91 = -334;

	t91 = (((x385%x386)+x387)<x388);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x390 = INT64_MIN;
	static int8_t x391 = -1;
	int16_t x392 = INT16_MAX;
	int32_t t92 = 573973348;

	t92 = (((x389%x390)+x391)<x392);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x394 = INT32_MAX;
	int64_t x395 = 12961955032409LL;
	static int64_t x396 = -25854681342950167LL;
	int32_t t93 = 1;

	t93 = (((x393%x394)+x395)<x396);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x397 = INT32_MIN;
	int32_t x398 = -30;
	static uint32_t x399 = UINT32_MAX;
	static int8_t x400 = INT8_MAX;
	int32_t t94 = 5;

	t94 = (((x397%x398)+x399)<x400);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x402 = INT32_MIN;
	static volatile uint64_t x403 = 78091578142LLU;
	volatile int64_t x404 = INT64_MIN;
	volatile int32_t t95 = 1;

	t95 = (((x401%x402)+x403)<x404);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x415 = INT8_MIN;
	volatile int32_t x416 = INT32_MIN;
	int32_t t96 = 0;

	t96 = (((x413%x414)+x415)<x416);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x417 = INT16_MIN;
	static int16_t x418 = 993;
	int16_t x419 = 0;
	uint16_t x420 = UINT16_MAX;
	volatile int32_t t97 = -6853007;

	t97 = (((x417%x418)+x419)<x420);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x422 = INT16_MIN;
	volatile uint64_t x423 = UINT64_MAX;
	int32_t t98 = -14390848;

	t98 = (((x421%x422)+x423)<x424);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x425 = INT16_MAX;
	int32_t x426 = 6915713;
	int32_t x427 = INT32_MIN;
	int16_t x428 = INT16_MIN;

	t99 = (((x425%x426)+x427)<x428);

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

