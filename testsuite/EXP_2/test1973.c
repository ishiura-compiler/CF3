#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x21 = 234201310031LL;
static uint32_t x23 = UINT32_MAX;
static int64_t x30 = INT64_MAX;
static int32_t x31 = INT32_MIN;
int32_t x32 = 246762204;
static int32_t x36 = 11371279;
uint64_t x43 = 23124726079197LLU;
int8_t x44 = INT8_MIN;
static int64_t x45 = -1737735429LL;
uint32_t x46 = 22U;
int8_t x50 = INT8_MAX;
volatile int8_t x51 = INT8_MIN;
int8_t x53 = INT8_MAX;
volatile int64_t x54 = -2262020557318LL;
uint8_t x58 = UINT8_MAX;
volatile uint16_t x60 = UINT16_MAX;
uint8_t x62 = 108U;
volatile int64_t x67 = 569659595167875LL;
int16_t x68 = -1;
uint32_t x73 = UINT32_MAX;
volatile int8_t x75 = 31;
static int32_t x80 = 127427;
uint64_t x81 = 202340LLU;
volatile int32_t t20 = -88655;
int16_t x108 = -1;
static int32_t x111 = 97;
uint16_t x116 = 9239U;
int16_t x122 = -15730;
static int32_t x124 = INT32_MAX;
int64_t x127 = INT64_MAX;
int32_t x134 = -116059;
static int32_t x138 = -1;
uint16_t x142 = 83U;
uint64_t x146 = 272700LLU;
static uint64_t x148 = 27669023907597706LLU;
uint64_t x155 = 108334538677LLU;
static int8_t x157 = INT8_MAX;
static int32_t x159 = -1;
volatile uint64_t x166 = 3LLU;
int16_t x175 = INT16_MIN;
static int8_t x182 = INT8_MIN;
volatile uint16_t x188 = 2691U;
int32_t x193 = -57369479;
static int8_t x196 = -1;
static int64_t x203 = INT64_MIN;
int32_t t50 = 3883364;
int8_t x208 = 0;
int32_t x212 = INT32_MIN;
uint64_t x214 = UINT64_MAX;
volatile int32_t t53 = -869300;
int64_t x221 = -1LL;
int8_t x222 = INT8_MIN;
int16_t x231 = -1;
volatile uint8_t x239 = 0U;
int16_t x243 = INT16_MIN;
uint16_t x244 = 14100U;
int16_t x249 = INT16_MIN;
int32_t x250 = INT32_MAX;
uint32_t x252 = 5U;
int32_t x260 = INT32_MAX;
int64_t x261 = -1LL;
int32_t x262 = 72950620;
volatile int32_t t66 = -11546;
int32_t t68 = -59282;
int32_t t70 = 428947053;
int16_t x286 = -1;
int8_t x287 = -37;
volatile int32_t t71 = -1611;
static volatile uint32_t x289 = 3790857U;
int64_t x292 = INT64_MIN;
int64_t x298 = -1LL;
static int32_t x302 = INT32_MAX;
int64_t x305 = 0LL;
int8_t x306 = INT8_MIN;
int8_t x311 = INT8_MIN;
int32_t t77 = -1456786;
volatile int32_t x325 = 47072102;
static int32_t x326 = -193;
int32_t x335 = INT32_MIN;
static volatile int8_t x336 = INT8_MIN;
volatile int32_t t83 = -53709609;
volatile uint32_t x343 = 758947036U;
volatile int16_t x344 = INT16_MIN;
uint32_t x351 = 59815U;
int32_t t88 = 152591;
static int8_t x359 = -1;
static int8_t x360 = INT8_MAX;
uint32_t x362 = UINT32_MAX;
volatile int32_t t90 = 21;
int64_t x371 = -1LL;
int16_t x372 = -1;
int32_t t92 = -839;
int64_t x375 = -1LL;
uint16_t x377 = 4U;
static volatile uint16_t x393 = 7U;
int64_t x395 = INT64_MIN;
static int8_t x396 = INT8_MIN;
volatile int32_t t99 = -321335397;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	static int8_t x2 = INT8_MIN;
	uint8_t x3 = UINT8_MAX;
	volatile uint32_t x4 = 13214925U;
	static int32_t t0 = 72810;

	t0 = ((x1<(x2|x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 40635194LLU;
	uint32_t x6 = UINT32_MAX;
	int16_t x7 = -1;
	volatile int8_t x8 = -1;
	static int32_t t1 = -457283;

	t1 = ((x5<(x6|x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	static uint8_t x10 = 3U;
	int8_t x11 = 0;
	static int16_t x12 = 159;
	int32_t t2 = -3295392;

	t2 = ((x9<(x10|x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = 52;
	uint8_t x14 = 0U;
	int32_t x15 = -1;
	int16_t x16 = INT16_MIN;
	static int32_t t3 = 159;

	t3 = ((x13<(x14|x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = -1;
	static uint16_t x18 = UINT16_MAX;
	uint32_t x19 = 8210285U;
	uint16_t x20 = 3U;
	int32_t t4 = 942;

	t4 = ((x17<(x18|x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x22 = -1;
	int32_t x24 = INT32_MIN;
	static volatile int32_t t5 = -2603;

	t5 = ((x21<(x22|x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MAX;
	uint64_t x26 = 17351064910LLU;
	volatile int16_t x27 = INT16_MIN;
	int64_t x28 = INT64_MIN;
	volatile int32_t t6 = -113605;

	t6 = ((x25<(x26|x27))<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MIN;
	volatile int32_t t7 = 54406;

	t7 = ((x29<(x30|x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x33 = UINT8_MAX;
	uint32_t x34 = 13U;
	int32_t x35 = 945800809;
	volatile int32_t t8 = 22;

	t8 = ((x33<(x34|x35))<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = INT8_MIN;
	static int8_t x38 = 7;
	volatile int32_t x39 = -1;
	uint64_t x40 = 505968692LLU;
	volatile int32_t t9 = 42;

	t9 = ((x37<(x38|x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 62U;
	static volatile uint32_t x42 = UINT32_MAX;
	static volatile int32_t t10 = -409;

	t10 = ((x41<(x42|x43))<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x47 = INT32_MAX;
	volatile uint32_t x48 = 13865150U;
	volatile int32_t t11 = 1343660;

	t11 = ((x45<(x46|x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	uint8_t x52 = 6U;
	volatile int32_t t12 = -1153325;

	t12 = ((x49<(x50|x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x55 = 43U;
	int32_t x56 = 6;
	volatile int32_t t13 = 3618324;

	t13 = ((x53<(x54|x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 59371281U;
	static int16_t x59 = -1;
	static int32_t t14 = -3727;

	t14 = ((x57<(x58|x59))<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	int16_t x63 = -329;
	volatile int64_t x64 = INT64_MIN;
	int32_t t15 = 1;

	t15 = ((x61<(x62|x63))<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = INT16_MIN;
	int8_t x66 = -1;
	volatile int32_t t16 = 60258278;

	t16 = ((x65<(x66|x67))<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	uint32_t x70 = 5U;
	int16_t x71 = -234;
	int16_t x72 = -1;
	volatile int32_t t17 = 39292;

	t17 = ((x69<(x70|x71))<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x74 = 2LL;
	int8_t x76 = -20;
	volatile int32_t t18 = 1140;

	t18 = ((x73<(x74|x75))<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = -24;
	volatile uint8_t x78 = 10U;
	volatile int32_t x79 = -1;
	int32_t t19 = 3;

	t19 = ((x77<(x78|x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = INT32_MIN;
	volatile int8_t x83 = INT8_MIN;
	int16_t x84 = INT16_MIN;

	t20 = ((x81<(x82|x83))<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MAX;
	int8_t x86 = -1;
	uint8_t x87 = 0U;
	int64_t x88 = INT64_MIN;
	int32_t t21 = -22;

	t21 = ((x85<(x86|x87))<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = -1353073;
	int16_t x90 = INT16_MIN;
	int16_t x91 = INT16_MAX;
	uint16_t x92 = UINT16_MAX;
	volatile int32_t t22 = 15562518;

	t22 = ((x89<(x90|x91))<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = 27;
	int8_t x94 = 23;
	int8_t x95 = 2;
	int32_t x96 = INT32_MIN;
	int32_t t23 = -21;

	t23 = ((x93<(x94|x95))<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = UINT32_MAX;
	uint8_t x98 = 113U;
	volatile int16_t x99 = -5055;
	uint16_t x100 = UINT16_MAX;
	int32_t t24 = 1;

	t24 = ((x97<(x98|x99))<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint32_t x101 = 369711166U;
	int32_t x102 = INT32_MIN;
	volatile int32_t x103 = INT32_MAX;
	static volatile int16_t x104 = 13430;
	volatile int32_t t25 = 1013;

	t25 = ((x101<(x102|x103))<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -34518LL;
	int16_t x106 = -1;
	int32_t x107 = INT32_MIN;
	int32_t t26 = 29689;

	t26 = ((x105<(x106|x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 766U;
	int64_t x110 = INT64_MAX;
	uint64_t x112 = 1064532232617LLU;
	int32_t t27 = 229;

	t27 = ((x109<(x110|x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -157585441122358LL;
	int8_t x114 = -9;
	uint8_t x115 = 0U;
	int32_t t28 = 189529605;

	t28 = ((x113<(x114|x115))<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	volatile int64_t x118 = INT64_MIN;
	uint16_t x119 = UINT16_MAX;
	int64_t x120 = INT64_MIN;
	int32_t t29 = -52;

	t29 = ((x117<(x118|x119))<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	volatile uint64_t x123 = 100646734066269880LLU;
	int32_t t30 = -174;

	t30 = ((x121<(x122|x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = 0;
	int16_t x126 = -980;
	uint8_t x128 = 3U;
	int32_t t31 = -67;

	t31 = ((x125<(x126|x127))<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	int64_t x130 = INT64_MIN;
	static uint64_t x131 = 0LLU;
	int32_t x132 = 7;
	static int32_t t32 = 138122;

	t32 = ((x129<(x130|x131))<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = INT8_MAX;
	int64_t x135 = INT64_MIN;
	static volatile uint32_t x136 = 28852U;
	int32_t t33 = 59303;

	t33 = ((x133<(x134|x135))<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x137 = 30729705383557265LLU;
	volatile int32_t x139 = -6722;
	uint16_t x140 = 5U;
	volatile int32_t t34 = 393295609;

	t34 = ((x137<(x138|x139))<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	static volatile uint16_t x143 = UINT16_MAX;
	static int32_t x144 = INT32_MAX;
	volatile int32_t t35 = -604;

	t35 = ((x141<(x142|x143))<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	int32_t x147 = INT32_MAX;
	int32_t t36 = -220;

	t36 = ((x145<(x146|x147))<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x149 = 1063673993151LLU;
	int32_t x150 = INT32_MIN;
	int8_t x151 = INT8_MIN;
	static uint32_t x152 = 3749087U;
	static volatile int32_t t37 = -2266;

	t37 = ((x149<(x150|x151))<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	uint32_t x154 = 1195423U;
	volatile int32_t x156 = INT32_MIN;
	volatile int32_t t38 = 2092645;

	t38 = ((x153<(x154|x155))<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x158 = 1;
	int32_t x160 = -1;
	volatile int32_t t39 = -170308;

	t39 = ((x157<(x158|x159))<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -1;
	volatile int32_t x162 = -1;
	int8_t x163 = 0;
	static int16_t x164 = 5;
	static int32_t t40 = -315;

	t40 = ((x161<(x162|x163))<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = INT32_MAX;
	volatile int64_t x167 = INT64_MAX;
	int16_t x168 = INT16_MAX;
	volatile int32_t t41 = 3775;

	t41 = ((x165<(x166|x167))<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = 7;
	int16_t x170 = -1;
	int32_t x171 = -1;
	int32_t x172 = 8616548;
	int32_t t42 = -358604029;

	t42 = ((x169<(x170|x171))<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = INT32_MIN;
	static int16_t x174 = -604;
	uint16_t x176 = 175U;
	int32_t t43 = -1;

	t43 = ((x173<(x174|x175))<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 9U;
	uint64_t x178 = 3230228973611603LLU;
	static uint8_t x179 = 0U;
	uint32_t x180 = 191392U;
	volatile int32_t t44 = -7;

	t44 = ((x177<(x178|x179))<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -29483601005LL;
	int64_t x183 = INT64_MAX;
	int16_t x184 = INT16_MAX;
	static volatile int32_t t45 = 463094652;

	t45 = ((x181<(x182|x183))<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = INT32_MIN;
	int32_t x186 = INT32_MIN;
	int64_t x187 = INT64_MIN;
	volatile int32_t t46 = 248619;

	t46 = ((x185<(x186|x187))<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MAX;
	int8_t x190 = INT8_MIN;
	int64_t x191 = INT64_MIN;
	int64_t x192 = INT64_MIN;
	static volatile int32_t t47 = 26166070;

	t47 = ((x189<(x190|x191))<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x194 = 9812U;
	uint32_t x195 = 0U;
	volatile int32_t t48 = -679;

	t48 = ((x193<(x194|x195))<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x197 = INT16_MIN;
	volatile int64_t x198 = INT64_MAX;
	uint32_t x199 = 117U;
	int64_t x200 = 169865LL;
	static volatile int32_t t49 = 5;

	t49 = ((x197<(x198|x199))<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -1;
	int32_t x202 = -175;
	int64_t x204 = INT64_MIN;

	t50 = ((x201<(x202|x203))<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = INT32_MIN;
	volatile uint32_t x206 = UINT32_MAX;
	uint8_t x207 = 1U;
	int32_t t51 = -98645;

	t51 = ((x205<(x206|x207))<=x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = UINT8_MAX;
	static int64_t x210 = INT64_MIN;
	uint8_t x211 = 5U;
	static int32_t t52 = 12789;

	t52 = ((x209<(x210|x211))<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	uint32_t x215 = 1627194020U;
	int64_t x216 = -1LL;

	t53 = ((x213<(x214|x215))<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint16_t x217 = 128U;
	static int8_t x218 = INT8_MAX;
	uint32_t x219 = 89722557U;
	int8_t x220 = 1;
	int32_t t54 = -4134;

	t54 = ((x217<(x218|x219))<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x223 = 1076749240045270689LL;
	int8_t x224 = INT8_MIN;
	static volatile int32_t t55 = -16;

	t55 = ((x221<(x222|x223))<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = UINT32_MAX;
	static volatile int8_t x226 = INT8_MIN;
	int64_t x227 = INT64_MAX;
	int64_t x228 = 55578619843118015LL;
	int32_t t56 = 1;

	t56 = ((x225<(x226|x227))<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	uint64_t x230 = 108943LLU;
	int32_t x232 = -69;
	int32_t t57 = 30322438;

	t57 = ((x229<(x230|x231))<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 1578U;
	int16_t x234 = -1;
	static volatile int64_t x235 = INT64_MIN;
	int16_t x236 = INT16_MIN;
	int32_t t58 = 545992;

	t58 = ((x233<(x234|x235))<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	int64_t x238 = -1LL;
	int64_t x240 = INT64_MIN;
	int32_t t59 = -31;

	t59 = ((x237<(x238|x239))<=x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MAX;
	int8_t x242 = INT8_MIN;
	static int32_t t60 = 1;

	t60 = ((x241<(x242|x243))<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = INT16_MAX;
	volatile int64_t x246 = INT64_MIN;
	uint16_t x247 = UINT16_MAX;
	static int64_t x248 = INT64_MAX;
	volatile int32_t t61 = 603132168;

	t61 = ((x245<(x246|x247))<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x251 = INT32_MAX;
	static int32_t t62 = -115080;

	t62 = ((x249<(x250|x251))<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 8116432576294491784LLU;
	uint16_t x254 = 611U;
	static uint8_t x255 = 9U;
	static uint64_t x256 = 24170132957LLU;
	volatile int32_t t63 = 228706256;

	t63 = ((x253<(x254|x255))<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 1U;
	uint64_t x258 = 355299338608808114LLU;
	static int8_t x259 = INT8_MAX;
	int32_t t64 = 707074992;

	t64 = ((x257<(x258|x259))<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x263 = 4155;
	int8_t x264 = INT8_MIN;
	int32_t t65 = 1;

	t65 = ((x261<(x262|x263))<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	static volatile int64_t x266 = 11LL;
	static int8_t x267 = -11;
	int32_t x268 = -1;

	t66 = ((x265<(x266|x267))<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x269 = INT8_MIN;
	uint64_t x270 = 8067571488765175703LLU;
	int8_t x271 = INT8_MAX;
	volatile int32_t x272 = INT32_MIN;
	static int32_t t67 = 993;

	t67 = ((x269<(x270|x271))<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 491U;
	int16_t x274 = -1014;
	uint16_t x275 = 6149U;
	int8_t x276 = -1;

	t68 = ((x273<(x274|x275))<=x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	int8_t x278 = -1;
	uint16_t x279 = 21U;
	int32_t x280 = -1;
	static volatile int32_t t69 = 419;

	t69 = ((x277<(x278|x279))<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = UINT32_MAX;
	uint16_t x282 = 251U;
	volatile uint16_t x283 = UINT16_MAX;
	int8_t x284 = 14;

	t70 = ((x281<(x282|x283))<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x285 = INT64_MIN;
	volatile uint32_t x288 = 2U;

	t71 = ((x285<(x286|x287))<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x290 = INT8_MIN;
	static volatile int64_t x291 = INT64_MIN;
	volatile int32_t t72 = 884206504;

	t72 = ((x289<(x290|x291))<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -1LL;
	uint16_t x294 = 603U;
	int16_t x295 = INT16_MIN;
	static int64_t x296 = -1LL;
	int32_t t73 = 9;

	t73 = ((x293<(x294|x295))<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	volatile uint32_t x299 = 843423U;
	uint64_t x300 = 422340790069559LLU;
	int32_t t74 = 577;

	t74 = ((x297<(x298|x299))<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = INT64_MIN;
	int16_t x303 = 6;
	uint16_t x304 = 11U;
	volatile int32_t t75 = 656825;

	t75 = ((x301<(x302|x303))<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x307 = UINT16_MAX;
	static uint64_t x308 = 43155498LLU;
	volatile int32_t t76 = -1213;

	t76 = ((x305<(x306|x307))<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x309 = INT8_MIN;
	int8_t x310 = 7;
	int16_t x312 = INT16_MIN;

	t77 = ((x309<(x310|x311))<=x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -1;
	uint16_t x314 = UINT16_MAX;
	uint16_t x315 = UINT16_MAX;
	int32_t x316 = -14757198;
	int32_t t78 = 0;

	t78 = ((x313<(x314|x315))<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x317 = -1LL;
	volatile int64_t x318 = INT64_MIN;
	volatile int32_t x319 = INT32_MIN;
	int8_t x320 = 3;
	volatile int32_t t79 = 100;

	t79 = ((x317<(x318|x319))<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = -1504;
	int64_t x322 = -1LL;
	volatile int32_t x323 = INT32_MAX;
	int64_t x324 = INT64_MAX;
	static volatile int32_t t80 = -4917513;

	t80 = ((x321<(x322|x323))<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x327 = -1;
	int32_t x328 = -692131534;
	int32_t t81 = 6;

	t81 = ((x325<(x326|x327))<=x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x329 = 881U;
	int32_t x330 = INT32_MAX;
	static int8_t x331 = -1;
	volatile int64_t x332 = INT64_MAX;
	int32_t t82 = 934985786;

	t82 = ((x329<(x330|x331))<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	volatile int64_t x334 = INT64_MIN;

	t83 = ((x333<(x334|x335))<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 8979U;
	uint32_t x338 = UINT32_MAX;
	uint64_t x339 = UINT64_MAX;
	int16_t x340 = -744;
	volatile int32_t t84 = -2033;

	t84 = ((x337<(x338|x339))<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -14235;
	uint8_t x342 = UINT8_MAX;
	int32_t t85 = 34590457;

	t85 = ((x341<(x342|x343))<=x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 159411U;
	int64_t x346 = 2763294346LL;
	int64_t x347 = INT64_MIN;
	int32_t x348 = -1;
	int32_t t86 = 77050330;

	t86 = ((x345<(x346|x347))<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -1;
	volatile uint16_t x350 = 331U;
	int16_t x352 = -36;
	int32_t t87 = 824509009;

	t87 = ((x349<(x350|x351))<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = UINT64_MAX;
	uint8_t x354 = 21U;
	volatile int32_t x355 = -149694202;
	uint64_t x356 = 123470LLU;

	t88 = ((x353<(x354|x355))<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 235572303LLU;
	int64_t x358 = INT64_MIN;
	int32_t t89 = -471009890;

	t89 = ((x357<(x358|x359))<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 7835U;
	static int64_t x363 = INT64_MIN;
	uint8_t x364 = 13U;

	t90 = ((x361<(x362|x363))<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 31141138U;
	int8_t x366 = INT8_MAX;
	static int32_t x367 = INT32_MAX;
	uint32_t x368 = UINT32_MAX;
	int32_t t91 = -4958012;

	t91 = ((x365<(x366|x367))<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MAX;
	uint32_t x370 = 24U;

	t92 = ((x369<(x370|x371))<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = 10;
	int64_t x374 = INT64_MAX;
	volatile int8_t x376 = 1;
	static int32_t t93 = -62008;

	t93 = ((x373<(x374|x375))<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x378 = 15U;
	uint8_t x379 = 0U;
	uint8_t x380 = 0U;
	int32_t t94 = 1;

	t94 = ((x377<(x378|x379))<=x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	uint8_t x382 = 116U;
	uint64_t x383 = UINT64_MAX;
	volatile int32_t x384 = -1;
	static int32_t t95 = 106;

	t95 = ((x381<(x382|x383))<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x385 = INT32_MAX;
	int64_t x386 = 418LL;
	int32_t x387 = -73725;
	volatile int64_t x388 = INT64_MIN;
	static volatile int32_t t96 = -19931140;

	t96 = ((x385<(x386|x387))<=x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -1;
	volatile int32_t x390 = INT32_MIN;
	int16_t x391 = 912;
	volatile int64_t x392 = -1LL;
	int32_t t97 = -816590;

	t97 = ((x389<(x390|x391))<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x394 = INT8_MAX;
	volatile int32_t t98 = 4451111;

	t98 = ((x393<(x394|x395))<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x397 = INT64_MIN;
	uint16_t x398 = 0U;
	volatile int8_t x399 = INT8_MIN;
	volatile int64_t x400 = INT64_MIN;

	t99 = ((x397<(x398|x399))<=x400);

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

