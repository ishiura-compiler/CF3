#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = UINT16_MAX;
volatile uint32_t t1 = 3869266U;
static volatile uint64_t t2 = 4215462777697775LLU;
int32_t x20 = -1;
static volatile int32_t x23 = -1024775033;
static volatile int64_t t4 = 1LL;
int32_t x43 = 2;
uint32_t x47 = UINT32_MAX;
uint16_t x48 = 5519U;
static uint32_t x52 = 212268U;
volatile int64_t t11 = 157361LL;
uint16_t x54 = UINT16_MAX;
static int8_t x64 = -1;
int8_t x75 = INT8_MIN;
int64_t x76 = -742LL;
int64_t t18 = -15LL;
int64_t x86 = INT64_MIN;
int32_t x94 = -3222112;
int64_t x95 = -1LL;
static uint8_t x97 = 117U;
static int64_t x98 = INT64_MIN;
uint8_t x100 = UINT8_MAX;
static volatile uint64_t t23 = 9320706151LLU;
static int64_t x115 = INT64_MIN;
uint16_t x128 = 1U;
static int32_t x129 = INT32_MAX;
int64_t x131 = INT64_MIN;
volatile uint64_t t30 = 2566LLU;
static int64_t x153 = INT64_MIN;
uint64_t x159 = 204LLU;
int8_t x160 = INT8_MAX;
volatile int64_t t38 = -478395739852LL;
volatile int16_t x166 = INT16_MIN;
int32_t x178 = INT32_MIN;
volatile uint32_t x180 = 974U;
uint32_t x181 = 1160674944U;
static uint16_t x186 = UINT16_MAX;
static volatile uint32_t t44 = 908U;
static volatile int64_t t46 = 5269179086LL;
static int32_t x200 = INT32_MIN;
int64_t t47 = -799700LL;
volatile int32_t t48 = -13607675;
int32_t x205 = -79;
int32_t x209 = INT32_MIN;
int8_t x223 = INT8_MIN;
volatile uint64_t t53 = 24637914205113254LLU;
static uint64_t x230 = UINT64_MAX;
static uint64_t t55 = 85898735921575025LLU;
uint64_t x236 = 1726956LLU;
static int16_t x237 = -1;
int8_t x242 = INT8_MAX;
uint64_t x243 = UINT64_MAX;
int64_t x246 = INT64_MIN;
int32_t x247 = INT32_MIN;
int32_t x250 = -727054800;
uint64_t x252 = UINT64_MAX;
int64_t x262 = INT64_MIN;
uint32_t x264 = 0U;
int64_t t62 = 7LL;
static int64_t x265 = -313LL;
uint16_t x266 = UINT16_MAX;
static uint8_t x267 = UINT8_MAX;
int64_t t64 = -1LL;
static uint16_t x275 = UINT16_MAX;
int16_t x276 = 59;
int64_t x277 = 271105777410685LL;
static volatile uint64_t x278 = 415669164410149LLU;
uint32_t x280 = 48669U;
volatile int8_t x282 = -4;
uint64_t x283 = 3651LLU;
uint16_t x287 = 256U;
static int16_t x294 = INT16_MIN;
int64_t x300 = -41343LL;
volatile int64_t x301 = INT64_MAX;
static uint16_t x303 = UINT16_MAX;
int8_t x307 = -23;
uint8_t x310 = 82U;
uint32_t x312 = UINT32_MAX;
int32_t x317 = INT32_MIN;
uint64_t x320 = UINT64_MAX;
int32_t t77 = -233939;
int16_t x325 = -1;
int32_t x327 = INT32_MAX;
int8_t x331 = INT8_MIN;
int64_t x334 = INT64_MAX;
volatile uint16_t x339 = UINT16_MAX;
int64_t t81 = 134719193863250LL;
static uint8_t x344 = UINT8_MAX;
uint64_t t82 = 34176529238LLU;
static volatile int16_t x346 = INT16_MIN;
int32_t x347 = INT32_MIN;
volatile int8_t x357 = 10;
uint32_t x361 = 144060U;
int64_t x363 = -196LL;
static volatile int16_t x378 = 3;
uint32_t x382 = 12U;
volatile uint64_t x386 = 188719944569621349LLU;
volatile uint64_t x394 = 1060055401839LLU;
int8_t x402 = 1;
int16_t x409 = INT16_MAX;


void f0(void) {
	volatile int8_t x1 = -1;
	int64_t x2 = INT64_MIN;
	static uint8_t x3 = 27U;
	int64_t x4 = -1LL;
	int64_t t0 = -290LL;

	t0 = (((x1/x2)/x3)&x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x6 = 13U;
	int8_t x7 = INT8_MIN;
	uint32_t x8 = UINT32_MAX;

	t1 = (((x5/x6)/x7)&x8);

	if (t1 != 4294967257U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 272612LLU;
	int64_t x10 = -53637790428582LL;
	int8_t x11 = 12;
	static int16_t x12 = 1;

	t2 = (((x9/x10)/x11)&x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	uint64_t x18 = UINT64_MAX;
	int64_t x19 = -52454296655493LL;
	uint64_t t3 = 4133707068118082LLU;

	t3 = (((x17/x18)/x19)&x20);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x21 = INT64_MIN;
	int64_t x22 = -5607205882309514LL;
	int64_t x24 = -61253048097LL;

	t4 = (((x21/x22)/x23)&x24);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -1LL;
	volatile uint32_t x26 = UINT32_MAX;
	uint16_t x27 = 3U;
	volatile int16_t x28 = -1;
	static int64_t t5 = 581LL;

	t5 = (((x25/x26)/x27)&x28);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x29 = INT16_MIN;
	uint32_t x30 = 9U;
	volatile int8_t x31 = INT8_MIN;
	int8_t x32 = INT8_MAX;
	static volatile uint32_t t6 = 2031U;

	t6 = (((x29/x30)/x31)&x32);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = UINT8_MAX;
	volatile int8_t x34 = -1;
	int32_t x35 = INT32_MIN;
	int16_t x36 = INT16_MIN;
	int32_t t7 = -1219679;

	t7 = (((x33/x34)/x35)&x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x37 = -89;
	int32_t x38 = INT32_MAX;
	volatile int32_t x39 = INT32_MAX;
	static uint64_t x40 = 172382987973LLU;
	static volatile uint64_t t8 = 78LLU;

	t8 = (((x37/x38)/x39)&x40);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x41 = INT16_MIN;
	uint64_t x42 = 3779077LLU;
	int32_t x44 = -1;
	uint64_t t9 = 47LLU;

	t9 = (((x41/x42)/x43)&x44);

	if (t9 != 2440641467970LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x45 = -3470;
	int16_t x46 = INT16_MAX;
	uint32_t t10 = 0U;

	t10 = (((x45/x46)/x47)&x48);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = -3;
	int64_t x50 = 28757LL;
	static int16_t x51 = -1;

	t11 = (((x49/x50)/x51)&x52);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = 62U;
	int8_t x55 = -3;
	volatile int64_t x56 = INT64_MIN;
	int64_t t12 = 6314433LL;

	t12 = (((x53/x54)/x55)&x56);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = 66U;
	uint8_t x62 = 13U;
	int8_t x63 = INT8_MIN;
	int32_t t13 = -219713;

	t13 = (((x61/x62)/x63)&x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x65 = 2U;
	uint16_t x66 = 7U;
	uint32_t x67 = 368887U;
	int16_t x68 = INT16_MAX;
	uint32_t t14 = 162790338U;

	t14 = (((x65/x66)/x67)&x68);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x69 = 0;
	int8_t x70 = INT8_MIN;
	uint64_t x71 = UINT64_MAX;
	int16_t x72 = INT16_MIN;
	uint64_t t15 = 55493190949LLU;

	t15 = (((x69/x70)/x71)&x72);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = INT8_MIN;
	int32_t x74 = 90;
	volatile int64_t t16 = -1LL;

	t16 = (((x73/x74)/x75)&x76);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = INT8_MIN;
	volatile int8_t x78 = 4;
	int8_t x79 = INT8_MIN;
	int8_t x80 = -1;
	volatile int32_t t17 = 15702285;

	t17 = (((x77/x78)/x79)&x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = -1312593427603185LL;
	int32_t x82 = 4;
	int8_t x83 = INT8_MIN;
	int16_t x84 = -1;

	t18 = (((x81/x82)/x83)&x84);

	if (t18 != 2563659038287LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x85 = -1;
	int64_t x87 = INT64_MAX;
	uint64_t x88 = 85771230875338LLU;
	uint64_t t19 = 4LLU;

	t19 = (((x85/x86)/x87)&x88);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x89 = 667639999U;
	uint64_t x90 = UINT64_MAX;
	int64_t x91 = 610949578414LL;
	int16_t x92 = -1;
	volatile uint64_t t20 = 5LLU;

	t20 = (((x89/x90)/x91)&x92);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x93 = 172LLU;
	int64_t x96 = INT64_MAX;
	uint64_t t21 = 46LLU;

	t21 = (((x93/x94)/x95)&x96);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x99 = INT16_MAX;
	int64_t t22 = -11441849672LL;

	t22 = (((x97/x98)/x99)&x100);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = INT16_MIN;
	int16_t x102 = -1;
	int32_t x103 = INT32_MIN;
	uint64_t x104 = UINT64_MAX;

	t23 = (((x101/x102)/x103)&x104);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x105 = 2717839;
	static int8_t x106 = -1;
	int8_t x107 = INT8_MIN;
	volatile uint32_t x108 = 35373U;
	uint32_t t24 = 732084U;

	t24 = (((x105/x106)/x107)&x108);

	if (t24 != 545U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = -760653777038722427LL;
	int32_t x110 = INT32_MIN;
	volatile int16_t x111 = -113;
	uint8_t x112 = UINT8_MAX;
	int64_t t25 = 129978815LL;

	t25 = (((x109/x110)/x111)&x112);

	if (t25 != 145LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x113 = 0;
	int8_t x114 = -7;
	int8_t x116 = INT8_MAX;
	volatile int64_t t26 = 1478578LL;

	t26 = (((x113/x114)/x115)&x116);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x117 = UINT16_MAX;
	static int64_t x118 = INT64_MIN;
	uint16_t x119 = UINT16_MAX;
	int8_t x120 = INT8_MAX;
	volatile int64_t t27 = -1LL;

	t27 = (((x117/x118)/x119)&x120);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x121 = UINT16_MAX;
	uint16_t x122 = 69U;
	static uint16_t x123 = UINT16_MAX;
	volatile uint8_t x124 = 10U;
	int32_t t28 = -18;

	t28 = (((x121/x122)/x123)&x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x125 = 0;
	int16_t x126 = -2;
	volatile int16_t x127 = -10923;
	static int32_t t29 = -2602;

	t29 = (((x125/x126)/x127)&x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x130 = 2U;
	uint64_t x132 = 2473352756902LLU;

	t30 = (((x129/x130)/x131)&x132);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x133 = UINT64_MAX;
	int8_t x134 = -1;
	int32_t x135 = 677050734;
	int64_t x136 = INT64_MIN;
	static uint64_t t31 = 1286LLU;

	t31 = (((x133/x134)/x135)&x136);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x137 = 68U;
	static volatile int32_t x138 = -1;
	volatile uint8_t x139 = 6U;
	int16_t x140 = -1;
	static int32_t t32 = 13619;

	t32 = (((x137/x138)/x139)&x140);

	if (t32 != -11) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x141 = 1U;
	volatile int32_t x142 = 8150285;
	static int8_t x143 = INT8_MAX;
	static uint8_t x144 = UINT8_MAX;
	int32_t t33 = 67;

	t33 = (((x141/x142)/x143)&x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x145 = 4368LLU;
	volatile uint8_t x146 = 11U;
	uint32_t x147 = 1960530451U;
	int64_t x148 = INT64_MIN;
	volatile uint64_t t34 = 132769271131641LLU;

	t34 = (((x145/x146)/x147)&x148);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x149 = UINT16_MAX;
	volatile int16_t x150 = INT16_MAX;
	static int64_t x151 = 933LL;
	static int64_t x152 = -1LL;
	volatile int64_t t35 = 96421340636529LL;

	t35 = (((x149/x150)/x151)&x152);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x154 = UINT32_MAX;
	static volatile int32_t x155 = INT32_MIN;
	volatile uint64_t x156 = UINT64_MAX;
	volatile uint64_t t36 = 5297831867608117303LLU;

	t36 = (((x153/x154)/x155)&x156);

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = -1LL;
	static uint32_t x158 = UINT32_MAX;
	static volatile uint64_t t37 = 969195542244LLU;

	t37 = (((x157/x158)/x159)&x160);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = -1LL;
	volatile int32_t x162 = INT32_MIN;
	uint16_t x163 = 2U;
	int64_t x164 = 2388125678087LL;

	t38 = (((x161/x162)/x163)&x164);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x165 = UINT16_MAX;
	int64_t x167 = INT64_MIN;
	volatile uint8_t x168 = 6U;
	volatile int64_t t39 = -103LL;

	t39 = (((x165/x166)/x167)&x168);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = -10706432;
	int64_t x170 = -68632105051273488LL;
	static int64_t x171 = -1LL;
	volatile int8_t x172 = INT8_MIN;
	volatile int64_t t40 = -28264220LL;

	t40 = (((x169/x170)/x171)&x172);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = -3;
	int16_t x174 = -851;
	uint16_t x175 = UINT16_MAX;
	static uint64_t x176 = 235630054533234445LLU;
	uint64_t t41 = 8711830806236LLU;

	t41 = (((x173/x174)/x175)&x176);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x177 = 24U;
	volatile uint16_t x179 = 9U;
	static volatile uint32_t t42 = 164648U;

	t42 = (((x177/x178)/x179)&x180);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x182 = -3959;
	int16_t x183 = INT16_MIN;
	int16_t x184 = -1043;
	uint32_t t43 = 12466192U;

	t43 = (((x181/x182)/x183)&x184);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = -1;
	int16_t x187 = -1;
	volatile uint32_t x188 = 7427U;

	t44 = (((x185/x186)/x187)&x188);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x189 = INT16_MAX;
	int16_t x190 = 461;
	int16_t x191 = 60;
	int32_t x192 = 4;
	int32_t t45 = 123;

	t45 = (((x189/x190)/x191)&x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x193 = INT64_MIN;
	volatile int32_t x194 = INT32_MIN;
	volatile int64_t x195 = 69495LL;
	int64_t x196 = -1368LL;

	t46 = (((x193/x194)/x195)&x196);

	if (t46 != 61480LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x197 = 76480784729330246LL;
	static uint8_t x198 = UINT8_MAX;
	volatile int8_t x199 = INT8_MIN;

	t47 = (((x197/x198)/x199)&x200);

	if (t47 != -2345052143616LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x201 = UINT16_MAX;
	int32_t x202 = -1;
	uint16_t x203 = UINT16_MAX;
	uint8_t x204 = UINT8_MAX;

	t48 = (((x201/x202)/x203)&x204);

	if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x206 = INT8_MAX;
	static volatile int16_t x207 = INT16_MAX;
	int64_t x208 = -57838183393545927LL;
	int64_t t49 = -231LL;

	t49 = (((x205/x206)/x207)&x208);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x210 = 33U;
	uint16_t x211 = UINT16_MAX;
	int16_t x212 = INT16_MAX;
	int32_t t50 = -7597151;

	t50 = (((x209/x210)/x211)&x212);

	if (t50 != 31776) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x213 = UINT32_MAX;
	uint32_t x214 = UINT32_MAX;
	int16_t x215 = -2134;
	int32_t x216 = -1;
	static uint32_t t51 = 252284291U;

	t51 = (((x213/x214)/x215)&x216);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x217 = 62161U;
	volatile int16_t x218 = INT16_MIN;
	volatile int64_t x219 = -1LL;
	int8_t x220 = -11;
	volatile int64_t t52 = 915256596LL;

	t52 = (((x217/x218)/x219)&x220);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x221 = INT64_MIN;
	uint64_t x222 = UINT64_MAX;
	static int16_t x224 = 0;

	t53 = (((x221/x222)/x223)&x224);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x225 = 7523708LLU;
	int32_t x226 = INT32_MIN;
	uint16_t x227 = 1U;
	volatile int32_t x228 = 7896;
	uint64_t t54 = 43881522575560LLU;

	t54 = (((x225/x226)/x227)&x228);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x229 = UINT16_MAX;
	int32_t x231 = 708;
	int32_t x232 = INT32_MIN;

	t55 = (((x229/x230)/x231)&x232);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x233 = 8888968246199LL;
	static int8_t x234 = INT8_MIN;
	int16_t x235 = INT16_MIN;
	uint64_t t56 = 3900941892320169460LLU;

	t56 = (((x233/x234)/x235)&x236);

	if (t56 != 20588LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x238 = INT32_MAX;
	uint32_t x239 = 26871U;
	volatile uint32_t x240 = 14836030U;
	uint32_t t57 = 155828393U;

	t57 = (((x237/x238)/x239)&x240);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x241 = UINT32_MAX;
	int64_t x244 = -156755976726996455LL;
	volatile uint64_t t58 = 1104359370139551467LLU;

	t58 = (((x241/x242)/x243)&x244);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x245 = -1LL;
	uint32_t x248 = 26270979U;
	int64_t t59 = 1LL;

	t59 = (((x245/x246)/x247)&x248);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x249 = -298847;
	static uint64_t x251 = UINT64_MAX;
	volatile uint64_t t60 = 6230121095LLU;

	t60 = (((x249/x250)/x251)&x252);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x257 = UINT64_MAX;
	static int64_t x258 = -32125510981132LL;
	int16_t x259 = -1;
	uint64_t x260 = 460275772LLU;
	uint64_t t61 = 270275713928732LLU;

	t61 = (((x257/x258)/x259)&x260);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x261 = 51U;
	int16_t x263 = INT16_MIN;

	t62 = (((x261/x262)/x263)&x264);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x268 = 23979;
	volatile int64_t t63 = -14091552602LL;

	t63 = (((x265/x266)/x267)&x268);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x269 = -1LL;
	int64_t x270 = INT64_MIN;
	static int64_t x271 = INT64_MAX;
	int32_t x272 = -1;

	t64 = (((x269/x270)/x271)&x272);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x273 = -1;
	int64_t x274 = INT64_MAX;
	int64_t t65 = -2056150488977881LL;

	t65 = (((x273/x274)/x275)&x276);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x279 = UINT32_MAX;
	uint64_t t66 = 280141016367250LLU;

	t66 = (((x277/x278)/x279)&x280);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x281 = INT16_MIN;
	static int8_t x284 = INT8_MIN;
	uint64_t t67 = 27343LLU;

	t67 = (((x281/x282)/x283)&x284);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x285 = -24;
	volatile uint64_t x286 = 255LLU;
	int64_t x288 = -1LL;
	static volatile uint64_t t68 = 143149804367980029LLU;

	t68 = (((x285/x286)/x287)&x288);

	if (t68 != 282578800148737LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x289 = INT16_MIN;
	int64_t x290 = 2819526259LL;
	static int16_t x291 = INT16_MIN;
	static uint64_t x292 = UINT64_MAX;
	uint64_t t69 = 115341567674LLU;

	t69 = (((x289/x290)/x291)&x292);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x293 = INT8_MAX;
	uint64_t x295 = UINT64_MAX;
	static int32_t x296 = -190062722;
	volatile uint64_t t70 = 683548142792163LLU;

	t70 = (((x293/x294)/x295)&x296);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x297 = UINT16_MAX;
	int32_t x298 = 11729778;
	static uint8_t x299 = 5U;
	volatile int64_t t71 = 28918351633454862LL;

	t71 = (((x297/x298)/x299)&x300);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x302 = -1;
	int16_t x304 = -14;
	int64_t t72 = 1488213868946LL;

	t72 = (((x301/x302)/x303)&x304);

	if (t72 != -140739635871744LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x305 = 1U;
	uint64_t x306 = UINT64_MAX;
	int16_t x308 = INT16_MIN;
	uint64_t t73 = 75343525737276LLU;

	t73 = (((x305/x306)/x307)&x308);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x309 = INT8_MIN;
	int16_t x311 = -210;
	volatile uint32_t t74 = 0U;

	t74 = (((x309/x310)/x311)&x312);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x313 = INT16_MIN;
	volatile int64_t x314 = -1LL;
	static int64_t x315 = INT64_MIN;
	int8_t x316 = 60;
	volatile int64_t t75 = -1LL;

	t75 = (((x313/x314)/x315)&x316);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x318 = 1U;
	int64_t x319 = 83076LL;
	uint64_t t76 = 1425648512666LLU;

	t76 = (((x317/x318)/x319)&x320);

	if (t76 != 18446744073709525767LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x321 = INT8_MAX;
	int32_t x322 = INT32_MAX;
	int16_t x323 = -2;
	int8_t x324 = INT8_MIN;

	t77 = (((x321/x322)/x323)&x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x326 = UINT16_MAX;
	int64_t x328 = -1LL;
	int64_t t78 = 627226932LL;

	t78 = (((x325/x326)/x327)&x328);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x329 = 3;
	uint64_t x330 = UINT64_MAX;
	volatile int8_t x332 = -20;
	uint64_t t79 = 3738126409986LLU;

	t79 = (((x329/x330)/x331)&x332);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x333 = INT8_MIN;
	uint64_t x335 = 134139LLU;
	uint16_t x336 = UINT16_MAX;
	volatile uint64_t t80 = 147653804LLU;

	t80 = (((x333/x334)/x335)&x336);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x337 = UINT16_MAX;
	int8_t x338 = INT8_MIN;
	volatile int64_t x340 = -1LL;

	t81 = (((x337/x338)/x339)&x340);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x341 = 5314932417246LL;
	uint64_t x342 = 576890887300492LLU;
	static int16_t x343 = 392;

	t82 = (((x341/x342)/x343)&x344);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x345 = INT32_MIN;
	int16_t x348 = INT16_MIN;
	volatile int32_t t83 = 431042586;

	t83 = (((x345/x346)/x347)&x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x349 = -10919;
	static int64_t x350 = 2531LL;
	static volatile uint64_t x351 = UINT64_MAX;
	volatile int8_t x352 = INT8_MAX;
	uint64_t t84 = 5842LLU;

	t84 = (((x349/x350)/x351)&x352);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x353 = 370144U;
	static int16_t x354 = -8555;
	int8_t x355 = INT8_MAX;
	int32_t x356 = 28170376;
	uint32_t t85 = 12971U;

	t85 = (((x353/x354)/x355)&x356);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x358 = INT64_MIN;
	int16_t x359 = -1;
	uint64_t x360 = 9808931411284LLU;
	volatile uint64_t t86 = 486747690340662782LLU;

	t86 = (((x357/x358)/x359)&x360);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x362 = INT16_MIN;
	volatile uint64_t x364 = UINT64_MAX;
	volatile uint64_t t87 = 86LLU;

	t87 = (((x361/x362)/x363)&x364);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x369 = INT8_MIN;
	int16_t x370 = INT16_MIN;
	volatile int32_t x371 = INT32_MAX;
	uint32_t x372 = 1U;
	uint32_t t88 = 125318U;

	t88 = (((x369/x370)/x371)&x372);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x373 = INT64_MAX;
	static uint32_t x374 = 1283732818U;
	int32_t x375 = -1;
	uint32_t x376 = UINT32_MAX;
	int64_t t89 = -10500497849LL;

	t89 = (((x373/x374)/x375)&x376);

	if (t89 != 1405127982LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x377 = 238197450LLU;
	int32_t x379 = -1;
	static volatile uint16_t x380 = 7030U;
	static volatile uint64_t t90 = 434574550727LLU;

	t90 = (((x377/x378)/x379)&x380);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x381 = INT16_MAX;
	int64_t x383 = -1LL;
	uint16_t x384 = UINT16_MAX;
	int64_t t91 = 19LL;

	t91 = (((x381/x382)/x383)&x384);

	if (t91 != 62806LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x385 = 88093189750776120LLU;
	static int8_t x387 = -1;
	uint16_t x388 = 1U;
	uint64_t t92 = 11269659005LLU;

	t92 = (((x385/x386)/x387)&x388);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x393 = 168908895LLU;
	static int16_t x395 = 15;
	static int64_t x396 = -274278469507LL;
	uint64_t t93 = 4444LLU;

	t93 = (((x393/x394)/x395)&x396);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x401 = 6142U;
	static uint16_t x403 = UINT16_MAX;
	int32_t x404 = INT32_MAX;
	uint32_t t94 = 3U;

	t94 = (((x401/x402)/x403)&x404);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint32_t x410 = 18U;
	uint8_t x411 = 5U;
	uint8_t x412 = 13U;
	volatile uint32_t t95 = 2530386U;

	t95 = (((x409/x410)/x411)&x412);

	if (t95 != 12U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x413 = UINT64_MAX;
	int64_t x414 = INT64_MAX;
	int64_t x415 = INT64_MAX;
	volatile uint8_t x416 = 0U;
	uint64_t t96 = 6271886825047LLU;

	t96 = (((x413/x414)/x415)&x416);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x417 = UINT8_MAX;
	volatile int8_t x418 = INT8_MAX;
	static volatile int16_t x419 = INT16_MIN;
	uint64_t x420 = 10332158651779LLU;
	volatile uint64_t t97 = 41677690163846777LLU;

	t97 = (((x417/x418)/x419)&x420);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x421 = UINT64_MAX;
	int16_t x422 = 4;
	int32_t x423 = -1;
	int64_t x424 = INT64_MAX;
	uint64_t t98 = 2477883602LLU;

	t98 = (((x421/x422)/x423)&x424);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x425 = INT32_MIN;
	int8_t x426 = INT8_MIN;
	static uint32_t x427 = 47842U;
	volatile uint64_t x428 = 1837601096418926LLU;
	volatile uint64_t t99 = 4386913606LLU;

	t99 = (((x425/x426)/x427)&x428);

	if (t99 != 78LLU) { NG(); } else { ; }
	
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

