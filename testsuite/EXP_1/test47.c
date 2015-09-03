#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MAX;
uint64_t x8 = 2428LLU;
uint32_t x11 = UINT32_MAX;
static int8_t x12 = 0;
static volatile int16_t x14 = 534;
volatile int8_t x20 = 2;
volatile uint64_t x24 = UINT64_MAX;
int32_t t5 = -31;
int32_t t6 = -4088498;
static uint32_t x29 = UINT32_MAX;
volatile uint8_t x38 = 11U;
volatile int32_t x47 = -1;
int32_t x48 = -3;
int8_t x49 = INT8_MIN;
int64_t x53 = -224603613LL;
static int16_t x57 = -1;
int64_t x58 = -2LL;
static int64_t x60 = INT64_MIN;
volatile int32_t t13 = 93;
int16_t x62 = INT16_MIN;
int64_t x67 = INT64_MIN;
static volatile int32_t t15 = 207;
uint32_t x74 = 120441U;
int32_t t17 = -1;
uint16_t x86 = 13U;
volatile int32_t t20 = 492631;
int32_t t21 = -1;
int64_t x100 = INT64_MAX;
int16_t x105 = 9;
volatile int64_t x108 = -7741LL;
int8_t x117 = INT8_MIN;
uint8_t x119 = 44U;
uint32_t x122 = 219611240U;
int32_t x123 = 2652;
static volatile int32_t t28 = -127;
uint8_t x129 = 1U;
static volatile uint32_t x130 = UINT32_MAX;
uint64_t x132 = UINT64_MAX;
volatile int32_t t30 = 0;
uint16_t x137 = 3454U;
volatile int32_t x140 = -1;
static volatile int32_t t31 = 536414305;
uint64_t x158 = UINT64_MAX;
volatile int64_t x159 = -267919303600217773LL;
int64_t x161 = INT64_MIN;
volatile int32_t x169 = 4983;
int16_t x171 = INT16_MAX;
static volatile int32_t x175 = 877252584;
volatile int32_t t39 = 1;
int16_t x182 = INT16_MIN;
int32_t t41 = 40357;
static int8_t x185 = INT8_MAX;
uint64_t x194 = 843727484201354994LLU;
volatile int32_t x195 = -1;
int16_t x197 = INT16_MIN;
volatile int32_t t46 = 3253;
int8_t x205 = INT8_MAX;
uint64_t x206 = UINT64_MAX;
uint16_t x208 = 184U;
uint16_t x218 = 267U;
static int16_t x219 = INT16_MIN;
uint32_t x226 = 821U;
volatile uint16_t x230 = 14136U;
static int32_t x237 = INT32_MAX;
volatile int32_t x238 = INT32_MIN;
uint64_t x248 = 2117631610272LLU;
int64_t x251 = INT64_MIN;
static volatile int32_t t57 = 7;
uint16_t x258 = UINT16_MAX;
uint8_t x263 = 30U;
int8_t x270 = 4;
int64_t x278 = -1LL;
volatile int32_t x286 = 5;
static int16_t x309 = INT16_MIN;
volatile int32_t t68 = -15258077;
volatile int32_t t70 = 26126;
volatile uint32_t x322 = 704850U;
static int64_t x326 = -12077678LL;
int64_t x335 = INT64_MIN;
uint64_t x338 = 51280LLU;
static volatile int16_t x345 = INT16_MIN;
volatile int16_t x346 = INT16_MAX;
uint32_t x347 = 17374213U;
static int32_t t78 = 15;
volatile int64_t x369 = INT64_MIN;
volatile int16_t x374 = INT16_MAX;
int16_t x390 = -1;
uint8_t x392 = 13U;
int32_t x393 = -10846695;
int8_t x406 = -1;
int8_t x411 = INT8_MIN;
int64_t x417 = 3106558845045748LL;
static uint16_t x430 = 4U;
int32_t t90 = 551406756;
volatile uint32_t x434 = UINT32_MAX;
static int64_t x435 = INT64_MIN;
int16_t x442 = INT16_MAX;
int64_t x443 = -174281389917931LL;
volatile int32_t t93 = 0;
volatile int32_t t94 = 407757472;
int64_t x455 = INT64_MIN;
volatile int32_t t96 = 56583;
int32_t x458 = -1304608;
volatile int16_t x462 = INT16_MIN;
int16_t x466 = INT16_MAX;


void f0(void) {
	int8_t x2 = -1;
	volatile uint8_t x3 = 1U;
	int32_t x4 = INT32_MIN;
	static volatile int32_t t0 = -109581440;

	t0 = (((x1+x2)/x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int32_t x6 = -1;
	static uint8_t x7 = 46U;
	int32_t t1 = -346377837;

	t1 = (((x5+x6)/x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	volatile uint64_t x10 = UINT64_MAX;
	static int32_t t2 = -2150149;

	t2 = (((x9+x10)/x11)==x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 25U;
	uint16_t x15 = UINT16_MAX;
	uint32_t x16 = 7024U;
	int32_t t3 = -52;

	t3 = (((x13+x14)/x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 5182850U;
	volatile int16_t x18 = 1;
	static uint32_t x19 = 4U;
	volatile int32_t t4 = 371002;

	t4 = (((x17+x18)/x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	volatile int16_t x22 = 1;
	volatile int32_t x23 = -1;

	t5 = (((x21+x22)/x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int8_t x26 = INT8_MAX;
	volatile int16_t x27 = -12;
	uint8_t x28 = UINT8_MAX;

	t6 = (((x25+x26)/x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x30 = 18044U;
	static uint16_t x31 = UINT16_MAX;
	uint32_t x32 = 4142U;
	int32_t t7 = -951079970;

	t7 = (((x29+x30)/x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = 1;
	volatile int32_t x39 = -1;
	int64_t x40 = INT64_MIN;
	int32_t t8 = 46981031;

	t8 = (((x37+x38)/x39)==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x41 = UINT8_MAX;
	int32_t x42 = INT32_MIN;
	volatile int16_t x43 = -1;
	int16_t x44 = INT16_MIN;
	static volatile int32_t t9 = 2199340;

	t9 = (((x41+x42)/x43)==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x45 = INT64_MAX;
	static int16_t x46 = -5;
	volatile int32_t t10 = -1606;

	t10 = (((x45+x46)/x47)==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x50 = -1;
	int32_t x51 = -117;
	uint8_t x52 = 17U;
	volatile int32_t t11 = -503005814;

	t11 = (((x49+x50)/x51)==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x54 = INT16_MIN;
	uint8_t x55 = UINT8_MAX;
	int8_t x56 = INT8_MIN;
	int32_t t12 = -177;

	t12 = (((x53+x54)/x55)==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x59 = 3872U;

	t13 = (((x57+x58)/x59)==x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x61 = -1LL;
	int32_t x63 = INT32_MIN;
	int8_t x64 = INT8_MAX;
	volatile int32_t t14 = -7041660;

	t14 = (((x61+x62)/x63)==x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = UINT32_MAX;
	uint16_t x66 = 1622U;
	uint64_t x68 = 29655309LLU;

	t15 = (((x65+x66)/x67)==x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x73 = UINT32_MAX;
	uint8_t x75 = UINT8_MAX;
	int8_t x76 = -1;
	volatile int32_t t16 = 1466;

	t16 = (((x73+x74)/x75)==x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x77 = 7032813U;
	int16_t x78 = INT16_MIN;
	int8_t x79 = -1;
	int64_t x80 = INT64_MIN;

	t17 = (((x77+x78)/x79)==x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = -89019647439885LL;
	int8_t x82 = 0;
	static int16_t x83 = INT16_MIN;
	static uint32_t x84 = 386570550U;
	int32_t t18 = 0;

	t18 = (((x81+x82)/x83)==x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x85 = 2U;
	volatile int8_t x87 = INT8_MAX;
	int64_t x88 = INT64_MIN;
	volatile int32_t t19 = 78;

	t19 = (((x85+x86)/x87)==x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x89 = 2996;
	static int64_t x90 = -46LL;
	int64_t x91 = INT64_MIN;
	static uint8_t x92 = 5U;

	t20 = (((x89+x90)/x91)==x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x93 = -30;
	static int8_t x94 = -10;
	uint32_t x95 = 7669U;
	static int8_t x96 = -1;

	t21 = (((x93+x94)/x95)==x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = INT8_MAX;
	static uint64_t x98 = UINT64_MAX;
	int16_t x99 = -35;
	int32_t t22 = -1;

	t22 = (((x97+x98)/x99)==x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = -58;
	uint8_t x102 = 1U;
	volatile int8_t x103 = INT8_MIN;
	static int64_t x104 = -1058299862407243LL;
	volatile int32_t t23 = 49;

	t23 = (((x101+x102)/x103)==x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x106 = INT8_MIN;
	int64_t x107 = -1LL;
	volatile int32_t t24 = -480690227;

	t24 = (((x105+x106)/x107)==x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = -479168747051LL;
	uint64_t x114 = UINT64_MAX;
	uint16_t x115 = UINT16_MAX;
	volatile int8_t x116 = INT8_MIN;
	volatile int32_t t25 = -1;

	t25 = (((x113+x114)/x115)==x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x118 = INT16_MIN;
	int32_t x120 = INT32_MAX;
	static volatile int32_t t26 = -4489;

	t26 = (((x117+x118)/x119)==x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = -1;
	int8_t x124 = INT8_MIN;
	static volatile int32_t t27 = 111579;

	t27 = (((x121+x122)/x123)==x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x125 = -1LL;
	uint32_t x126 = 1978580U;
	volatile int16_t x127 = 15193;
	uint64_t x128 = 2804398LLU;

	t28 = (((x125+x126)/x127)==x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x131 = 3585551LL;
	volatile int32_t t29 = 931;

	t29 = (((x129+x130)/x131)==x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x133 = 81U;
	int8_t x134 = INT8_MIN;
	int16_t x135 = INT16_MIN;
	uint64_t x136 = 751893241885LLU;

	t30 = (((x133+x134)/x135)==x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x138 = INT16_MIN;
	volatile int64_t x139 = INT64_MIN;

	t31 = (((x137+x138)/x139)==x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x141 = 57U;
	int8_t x142 = INT8_MIN;
	static int8_t x143 = INT8_MIN;
	int32_t x144 = -1;
	int32_t t32 = 0;

	t32 = (((x141+x142)/x143)==x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint64_t x145 = UINT64_MAX;
	uint16_t x146 = 338U;
	int8_t x147 = INT8_MIN;
	static int32_t x148 = INT32_MIN;
	int32_t t33 = -1;

	t33 = (((x145+x146)/x147)==x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x149 = UINT8_MAX;
	int32_t x150 = 3445;
	volatile int16_t x151 = -236;
	uint8_t x152 = UINT8_MAX;
	static volatile int32_t t34 = -134438;

	t34 = (((x149+x150)/x151)==x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x157 = -7004;
	int16_t x160 = -1;
	static int32_t t35 = 214841693;

	t35 = (((x157+x158)/x159)==x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x162 = 1U;
	uint8_t x163 = 36U;
	int64_t x164 = INT64_MIN;
	volatile int32_t t36 = -98411334;

	t36 = (((x161+x162)/x163)==x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x165 = -2;
	uint16_t x166 = UINT16_MAX;
	uint16_t x167 = UINT16_MAX;
	uint8_t x168 = 54U;
	volatile int32_t t37 = -140;

	t37 = (((x165+x166)/x167)==x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x170 = 2U;
	int16_t x172 = INT16_MIN;
	int32_t t38 = -1701693;

	t38 = (((x169+x170)/x171)==x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x173 = 60;
	int16_t x174 = INT16_MIN;
	uint16_t x176 = UINT16_MAX;

	t39 = (((x173+x174)/x175)==x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x177 = UINT16_MAX;
	int64_t x178 = INT64_MIN;
	int8_t x179 = -26;
	int8_t x180 = INT8_MAX;
	int32_t t40 = -33985;

	t40 = (((x177+x178)/x179)==x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x181 = 5594LL;
	volatile uint64_t x183 = UINT64_MAX;
	int64_t x184 = -1LL;

	t41 = (((x181+x182)/x183)==x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x186 = 34U;
	static int8_t x187 = 3;
	int32_t x188 = -6800;
	int32_t t42 = 5;

	t42 = (((x185+x186)/x187)==x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x189 = INT8_MIN;
	volatile uint64_t x190 = 28LLU;
	static uint32_t x191 = 53U;
	int16_t x192 = INT16_MAX;
	static int32_t t43 = -225;

	t43 = (((x189+x190)/x191)==x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint64_t x193 = UINT64_MAX;
	uint64_t x196 = UINT64_MAX;
	volatile int32_t t44 = -38132161;

	t44 = (((x193+x194)/x195)==x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x198 = INT32_MAX;
	uint16_t x199 = UINT16_MAX;
	uint32_t x200 = 3054089U;
	static int32_t t45 = -4038051;

	t45 = (((x197+x198)/x199)==x200);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x201 = INT16_MIN;
	static uint8_t x202 = 18U;
	uint32_t x203 = UINT32_MAX;
	uint8_t x204 = 9U;

	t46 = (((x201+x202)/x203)==x204);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x207 = INT16_MIN;
	int32_t t47 = -855;

	t47 = (((x205+x206)/x207)==x208);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x209 = 1822U;
	int8_t x210 = 4;
	volatile uint64_t x211 = 248389288246089LLU;
	static uint32_t x212 = 33513U;
	static volatile int32_t t48 = 110440;

	t48 = (((x209+x210)/x211)==x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x213 = -1;
	int16_t x214 = 0;
	static uint32_t x215 = 1U;
	int64_t x216 = 1457239574660178062LL;
	volatile int32_t t49 = -730110;

	t49 = (((x213+x214)/x215)==x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x217 = 3606;
	static int32_t x220 = -1;
	static volatile int32_t t50 = 0;

	t50 = (((x217+x218)/x219)==x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x225 = 1961351440591843060LLU;
	uint64_t x227 = 4LLU;
	uint16_t x228 = 0U;
	int32_t t51 = -3534045;

	t51 = (((x225+x226)/x227)==x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x229 = INT8_MIN;
	uint32_t x231 = UINT32_MAX;
	int64_t x232 = -1LL;
	volatile int32_t t52 = 31;

	t52 = (((x229+x230)/x231)==x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x239 = INT64_MAX;
	volatile uint32_t x240 = 67224094U;
	volatile int32_t t53 = -605;

	t53 = (((x237+x238)/x239)==x240);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x241 = 0;
	int8_t x242 = -1;
	static volatile int8_t x243 = INT8_MIN;
	uint32_t x244 = 698046995U;
	int32_t t54 = -814371;

	t54 = (((x241+x242)/x243)==x244);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x245 = -411170219917LL;
	static uint64_t x246 = UINT64_MAX;
	uint8_t x247 = UINT8_MAX;
	int32_t t55 = 177069;

	t55 = (((x245+x246)/x247)==x248);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x249 = INT16_MAX;
	int32_t x250 = -673241242;
	uint64_t x252 = UINT64_MAX;
	int32_t t56 = -15;

	t56 = (((x249+x250)/x251)==x252);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x253 = 15U;
	int16_t x254 = INT16_MAX;
	int64_t x255 = INT64_MIN;
	uint64_t x256 = 148147LLU;

	t57 = (((x253+x254)/x255)==x256);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x257 = UINT64_MAX;
	static uint64_t x259 = 164382LLU;
	uint16_t x260 = 794U;
	int32_t t58 = -772934;

	t58 = (((x257+x258)/x259)==x260);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x261 = 13U;
	int32_t x262 = -1;
	uint16_t x264 = 1725U;
	static int32_t t59 = -20;

	t59 = (((x261+x262)/x263)==x264);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x265 = -18664;
	int64_t x266 = 31LL;
	static int16_t x267 = -6;
	static int8_t x268 = -1;
	int32_t t60 = -483158;

	t60 = (((x265+x266)/x267)==x268);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x269 = INT16_MIN;
	int8_t x271 = INT8_MAX;
	int8_t x272 = -1;
	volatile int32_t t61 = 1;

	t61 = (((x269+x270)/x271)==x272);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x273 = UINT8_MAX;
	volatile int32_t x274 = INT32_MIN;
	uint64_t x275 = 8742197842100LLU;
	static int64_t x276 = 869007044427151821LL;
	int32_t t62 = 1347794;

	t62 = (((x273+x274)/x275)==x276);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x277 = -85897LL;
	static uint64_t x279 = 71523022766907986LLU;
	int8_t x280 = -1;
	static int32_t t63 = 165576040;

	t63 = (((x277+x278)/x279)==x280);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x281 = UINT16_MAX;
	static uint8_t x282 = 0U;
	volatile int64_t x283 = -2LL;
	static volatile uint32_t x284 = UINT32_MAX;
	int32_t t64 = 910660904;

	t64 = (((x281+x282)/x283)==x284);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x285 = INT64_MIN;
	int16_t x287 = 1;
	static uint64_t x288 = 105835366704500LLU;
	int32_t t65 = -254513;

	t65 = (((x285+x286)/x287)==x288);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x289 = 43886139LLU;
	int16_t x290 = INT16_MIN;
	volatile int32_t x291 = INT32_MAX;
	int32_t x292 = INT32_MIN;
	volatile int32_t t66 = 524146449;

	t66 = (((x289+x290)/x291)==x292);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x305 = UINT32_MAX;
	uint64_t x306 = 2484489474009767LLU;
	static uint64_t x307 = 204LLU;
	static int64_t x308 = INT64_MIN;
	static int32_t t67 = 372193;

	t67 = (((x305+x306)/x307)==x308);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x310 = 2U;
	volatile int16_t x311 = 2;
	int16_t x312 = INT16_MIN;

	t68 = (((x309+x310)/x311)==x312);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x313 = -1;
	int8_t x314 = INT8_MIN;
	static int8_t x315 = -9;
	int16_t x316 = -1;
	volatile int32_t t69 = 4;

	t69 = (((x313+x314)/x315)==x316);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x317 = 12563U;
	int8_t x318 = 0;
	int16_t x319 = INT16_MIN;
	uint64_t x320 = 1094911381LLU;

	t70 = (((x317+x318)/x319)==x320);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x321 = -1;
	int32_t x323 = INT32_MIN;
	uint8_t x324 = 3U;
	volatile int32_t t71 = -560554;

	t71 = (((x321+x322)/x323)==x324);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x325 = 284LLU;
	uint32_t x327 = 380U;
	int8_t x328 = INT8_MIN;
	int32_t t72 = 331;

	t72 = (((x325+x326)/x327)==x328);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x333 = INT64_MIN;
	volatile uint64_t x334 = 1157454LLU;
	int64_t x336 = INT64_MIN;
	int32_t t73 = -149;

	t73 = (((x333+x334)/x335)==x336);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x337 = -1;
	volatile int64_t x339 = INT64_MIN;
	volatile uint32_t x340 = UINT32_MAX;
	static volatile int32_t t74 = -16930;

	t74 = (((x337+x338)/x339)==x340);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x348 = 997661;
	volatile int32_t t75 = -394;

	t75 = (((x345+x346)/x347)==x348);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x357 = 296U;
	uint16_t x358 = UINT16_MAX;
	volatile uint32_t x359 = UINT32_MAX;
	int64_t x360 = -1LL;
	volatile int32_t t76 = 1;

	t76 = (((x357+x358)/x359)==x360);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x361 = 75157128415LLU;
	int8_t x362 = INT8_MIN;
	int32_t x363 = INT32_MIN;
	int64_t x364 = -1LL;
	volatile int32_t t77 = 6200;

	t77 = (((x361+x362)/x363)==x364);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x365 = 3641959;
	int64_t x366 = INT64_MIN;
	int8_t x367 = INT8_MIN;
	int32_t x368 = -16976938;

	t78 = (((x365+x366)/x367)==x368);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x370 = 0;
	int8_t x371 = -7;
	int16_t x372 = INT16_MAX;
	static volatile int32_t t79 = -57;

	t79 = (((x369+x370)/x371)==x372);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x373 = UINT8_MAX;
	int8_t x375 = INT8_MIN;
	int32_t x376 = -8;
	static int32_t t80 = -9;

	t80 = (((x373+x374)/x375)==x376);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x385 = 172495393163152LL;
	static int16_t x386 = INT16_MAX;
	volatile uint64_t x387 = UINT64_MAX;
	uint64_t x388 = 219LLU;
	int32_t t81 = 0;

	t81 = (((x385+x386)/x387)==x388);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x389 = UINT8_MAX;
	volatile int8_t x391 = INT8_MIN;
	int32_t t82 = 25095711;

	t82 = (((x389+x390)/x391)==x392);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x394 = 0;
	int32_t x395 = INT32_MIN;
	static int64_t x396 = 4467LL;
	static volatile int32_t t83 = 26;

	t83 = (((x393+x394)/x395)==x396);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x397 = UINT32_MAX;
	int8_t x398 = -25;
	uint32_t x399 = 5836957U;
	volatile int32_t x400 = -1;
	int32_t t84 = -8;

	t84 = (((x397+x398)/x399)==x400);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x401 = 6;
	volatile uint32_t x402 = 2275464U;
	static uint64_t x403 = 60404500LLU;
	int8_t x404 = -1;
	volatile int32_t t85 = 827599;

	t85 = (((x401+x402)/x403)==x404);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x405 = 0LLU;
	uint32_t x407 = 34636U;
	uint32_t x408 = 734194U;
	static volatile int32_t t86 = -194;

	t86 = (((x405+x406)/x407)==x408);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x409 = -29920;
	uint8_t x410 = UINT8_MAX;
	static volatile int16_t x412 = -1;
	static volatile int32_t t87 = 831552;

	t87 = (((x409+x410)/x411)==x412);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x413 = -1;
	int64_t x414 = 2066990004LL;
	int16_t x415 = -1;
	int64_t x416 = INT64_MIN;
	volatile int32_t t88 = 518;

	t88 = (((x413+x414)/x415)==x416);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x418 = -1;
	int16_t x419 = -257;
	int16_t x420 = 335;
	static int32_t t89 = -6071079;

	t89 = (((x417+x418)/x419)==x420);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x429 = INT16_MIN;
	static uint8_t x431 = UINT8_MAX;
	volatile uint8_t x432 = 6U;

	t90 = (((x429+x430)/x431)==x432);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x433 = INT16_MIN;
	static int64_t x436 = 1729703006151062LL;
	volatile int32_t t91 = -64632940;

	t91 = (((x433+x434)/x435)==x436);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x437 = 3U;
	int8_t x438 = INT8_MAX;
	int64_t x439 = INT64_MIN;
	int32_t x440 = INT32_MIN;
	int32_t t92 = -1827782;

	t92 = (((x437+x438)/x439)==x440);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x441 = -1;
	uint64_t x444 = 35462LLU;

	t93 = (((x441+x442)/x443)==x444);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x445 = -11;
	volatile uint64_t x446 = UINT64_MAX;
	int32_t x447 = -1;
	volatile uint32_t x448 = 2475U;

	t94 = (((x445+x446)/x447)==x448);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x449 = 1095027708LLU;
	static volatile int16_t x450 = 1;
	int16_t x451 = INT16_MIN;
	volatile int8_t x452 = INT8_MIN;
	int32_t t95 = -87437;

	t95 = (((x449+x450)/x451)==x452);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x453 = 4;
	volatile uint64_t x454 = UINT64_MAX;
	int32_t x456 = INT32_MIN;

	t96 = (((x453+x454)/x455)==x456);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x457 = 0;
	int64_t x459 = INT64_MIN;
	uint64_t x460 = 92311107650LLU;
	int32_t t97 = 5;

	t97 = (((x457+x458)/x459)==x460);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x461 = 2U;
	int8_t x463 = INT8_MIN;
	uint64_t x464 = UINT64_MAX;
	int32_t t98 = 4025828;

	t98 = (((x461+x462)/x463)==x464);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x465 = -58;
	int16_t x467 = INT16_MAX;
	int16_t x468 = INT16_MAX;
	volatile int32_t t99 = -12;

	t99 = (((x465+x466)/x467)==x468);

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

