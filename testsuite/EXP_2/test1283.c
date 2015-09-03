#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = INT32_MAX;
static volatile int32_t t5 = -1;
int32_t t6 = -140093614;
int8_t x31 = 6;
int8_t x33 = -1;
uint8_t x40 = 67U;
uint16_t x41 = 0U;
uint64_t x48 = 42541384239984193LLU;
static int64_t x52 = -1LL;
uint64_t x59 = 682104805LLU;
int16_t x60 = -1;
volatile int32_t t14 = 395137163;
volatile int8_t x62 = INT8_MAX;
static int32_t x63 = 20286;
int32_t x66 = INT32_MIN;
int64_t x69 = INT64_MIN;
int32_t t17 = 1048355;
uint16_t x73 = UINT16_MAX;
volatile int32_t t18 = -1227;
static volatile uint16_t x80 = 1327U;
static volatile int32_t t19 = -91192;
int64_t x82 = INT64_MAX;
volatile int32_t t20 = 344;
int16_t x86 = -1;
static uint64_t x87 = 287954707969LLU;
static int8_t x88 = 10;
int64_t x89 = -1LL;
uint16_t x90 = 10056U;
volatile uint64_t x108 = 251309377938528641LLU;
volatile int32_t t27 = 33;
int32_t t30 = -3;
uint8_t x125 = 1U;
uint16_t x128 = UINT16_MAX;
uint32_t x133 = UINT32_MAX;
static int8_t x140 = INT8_MIN;
volatile int8_t x143 = 8;
uint16_t x161 = 65U;
int8_t x164 = INT8_MIN;
static int8_t x178 = INT8_MIN;
uint32_t x180 = 9U;
uint32_t x181 = 26285U;
static uint16_t x183 = 118U;
uint32_t x186 = UINT32_MAX;
static int8_t x189 = INT8_MAX;
volatile int32_t t48 = 13;
int64_t x205 = INT64_MIN;
uint16_t x214 = UINT16_MAX;
uint32_t x221 = 4699121U;
volatile uint64_t x229 = 1LLU;
volatile int32_t t58 = -15;
int64_t x241 = INT64_MIN;
int32_t t60 = 107851;
volatile int32_t t61 = 3;
int16_t x254 = INT16_MIN;
int32_t t63 = -60;
volatile int32_t t65 = -12037;
static int16_t x270 = INT16_MIN;
int8_t x274 = 4;
int64_t x275 = -1LL;
volatile int8_t x278 = INT8_MAX;
volatile int32_t t71 = 2783917;
int64_t x292 = INT64_MIN;
uint32_t x294 = 1623157U;
int16_t x296 = INT16_MAX;
int16_t x304 = 9;
uint64_t x306 = 273421961LLU;
volatile uint16_t x307 = UINT16_MAX;
int32_t x310 = INT32_MIN;
int32_t x315 = -1;
int32_t x316 = -3548;
volatile int32_t t78 = -10396;
int16_t x324 = INT16_MIN;
static uint64_t x326 = 205169958653LLU;
static volatile int32_t t84 = 7843;
uint16_t x347 = 23U;
int32_t x353 = INT32_MIN;
volatile int16_t x355 = -1;
static int8_t x361 = INT8_MIN;
int8_t x368 = -12;
volatile int32_t t92 = -45;
volatile uint64_t x379 = UINT64_MAX;
int32_t x391 = 923;
uint16_t x393 = 18219U;
int32_t x395 = INT32_MAX;
volatile int32_t t98 = -2;
static int32_t x399 = -15128;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	volatile uint64_t x2 = 328371206LLU;
	static int8_t x3 = INT8_MAX;
	volatile int16_t x4 = 2;
	volatile int32_t t0 = 224;

	t0 = ((x1==(x2==x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x6 = -1;
	int16_t x7 = INT16_MAX;
	uint32_t x8 = 84424U;
	volatile int32_t t1 = 7;

	t1 = ((x5==(x6==x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static int32_t x10 = -3835946;
	static uint16_t x11 = UINT16_MAX;
	uint64_t x12 = 6420204362LLU;
	int32_t t2 = 131;

	t2 = ((x9==(x10==x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 4597119773798LLU;
	volatile int16_t x14 = INT16_MIN;
	int8_t x15 = -62;
	int32_t x16 = -110094505;
	volatile int32_t t3 = -28;

	t3 = ((x13==(x14==x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 105;
	uint32_t x18 = 802120451U;
	int16_t x19 = INT16_MIN;
	static uint64_t x20 = 7198LLU;
	volatile int32_t t4 = 64542;

	t4 = ((x17==(x18==x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	volatile uint16_t x22 = 40U;
	volatile int64_t x23 = -1LL;
	int16_t x24 = -4941;

	t5 = ((x21==(x22==x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -66;
	static int8_t x26 = 29;
	volatile int64_t x27 = INT64_MIN;
	static int64_t x28 = INT64_MAX;

	t6 = ((x25==(x26==x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	uint8_t x30 = UINT8_MAX;
	int64_t x32 = INT64_MIN;
	static int32_t t7 = 36;

	t7 = ((x29==(x30==x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = 251171U;
	int16_t x35 = -1;
	int8_t x36 = -8;
	static volatile int32_t t8 = 14686236;

	t8 = ((x33==(x34==x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = -346;
	uint32_t x38 = 7U;
	uint64_t x39 = 329190308794692611LLU;
	static int32_t t9 = -759035811;

	t9 = ((x37==(x38==x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x42 = 1037047228325062LL;
	static volatile int8_t x43 = 0;
	static uint32_t x44 = UINT32_MAX;
	int32_t t10 = -198134996;

	t10 = ((x41==(x42==x43))<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 8046U;
	static uint32_t x46 = 1377210U;
	volatile int16_t x47 = INT16_MAX;
	volatile int32_t t11 = 0;

	t11 = ((x45==(x46==x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1077415767269LL;
	int64_t x50 = -1258433892445LL;
	uint8_t x51 = UINT8_MAX;
	static int32_t t12 = -21959337;

	t12 = ((x49==(x50==x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	int16_t x54 = INT16_MIN;
	int16_t x55 = -1;
	int64_t x56 = -1LL;
	static int32_t t13 = 1511585;

	t13 = ((x53==(x54==x55))<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = INT8_MIN;
	volatile int64_t x58 = -1LL;

	t14 = ((x57==(x58==x59))<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 12U;
	uint32_t x64 = UINT32_MAX;
	volatile int32_t t15 = 307;

	t15 = ((x61==(x62==x63))<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = INT32_MIN;
	int64_t x67 = INT64_MIN;
	int64_t x68 = -26973406882871LL;
	volatile int32_t t16 = -133;

	t16 = ((x65==(x66==x67))<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = INT16_MAX;
	uint32_t x71 = 5118U;
	int16_t x72 = INT16_MIN;

	t17 = ((x69==(x70==x71))<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = 1;
	int8_t x75 = 2;
	uint64_t x76 = 110142LLU;

	t18 = ((x73==(x74==x75))<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	int64_t x78 = INT64_MIN;
	int16_t x79 = INT16_MIN;

	t19 = ((x77==(x78==x79))<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 40413478811LLU;
	static int8_t x83 = INT8_MAX;
	uint64_t x84 = 2059870942285922LLU;

	t20 = ((x81==(x82==x83))<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = 83LL;
	volatile int32_t t21 = -3;

	t21 = ((x85==(x86==x87))<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x91 = 7234;
	uint64_t x92 = UINT64_MAX;
	int32_t t22 = 105302;

	t22 = ((x89==(x90==x91))<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = -10;
	int32_t x94 = 288873;
	static uint8_t x95 = 0U;
	volatile int8_t x96 = INT8_MAX;
	int32_t t23 = 88279365;

	t23 = ((x93==(x94==x95))<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 71U;
	int16_t x98 = INT16_MIN;
	int16_t x99 = INT16_MIN;
	int16_t x100 = INT16_MAX;
	volatile int32_t t24 = 1;

	t24 = ((x97==(x98==x99))<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = -1;
	uint8_t x102 = 48U;
	int8_t x103 = INT8_MIN;
	volatile int16_t x104 = 0;
	volatile int32_t t25 = 171;

	t25 = ((x101==(x102==x103))<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MAX;
	int16_t x106 = -1;
	int32_t x107 = INT32_MIN;
	volatile int32_t t26 = 1385054;

	t26 = ((x105==(x106==x107))<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	volatile uint8_t x110 = 15U;
	volatile int32_t x111 = INT32_MIN;
	volatile int32_t x112 = INT32_MIN;

	t27 = ((x109==(x110==x111))<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = UINT16_MAX;
	int64_t x114 = INT64_MAX;
	volatile int16_t x115 = INT16_MAX;
	int64_t x116 = INT64_MIN;
	int32_t t28 = -13484;

	t28 = ((x113==(x114==x115))<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	static int32_t x118 = INT32_MAX;
	int32_t x119 = INT32_MIN;
	int16_t x120 = INT16_MAX;
	volatile int32_t t29 = -15;

	t29 = ((x117==(x118==x119))<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x121 = -3;
	int16_t x122 = 3524;
	static int8_t x123 = INT8_MIN;
	uint16_t x124 = 9336U;

	t30 = ((x121==(x122==x123))<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x126 = INT8_MIN;
	volatile int16_t x127 = -1;
	volatile int32_t t31 = 260678543;

	t31 = ((x125==(x126==x127))<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	static int8_t x130 = INT8_MAX;
	int8_t x131 = -63;
	uint32_t x132 = UINT32_MAX;
	static int32_t t32 = 258368;

	t32 = ((x129==(x130==x131))<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = -3095;
	int64_t x135 = INT64_MAX;
	volatile uint8_t x136 = UINT8_MAX;
	volatile int32_t t33 = -535;

	t33 = ((x133==(x134==x135))<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = -3300;
	volatile uint64_t x138 = 818798LLU;
	int32_t x139 = -1;
	static int32_t t34 = -3;

	t34 = ((x137==(x138==x139))<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x141 = 2795236906127950LLU;
	int8_t x142 = -1;
	uint8_t x144 = 34U;
	volatile int32_t t35 = 1;

	t35 = ((x141==(x142==x143))<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 6U;
	static volatile uint32_t x146 = 6U;
	uint8_t x147 = 2U;
	volatile int64_t x148 = 65537074183018655LL;
	volatile int32_t t36 = -59812;

	t36 = ((x145==(x146==x147))<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = INT8_MAX;
	static uint32_t x150 = 1169135697U;
	int8_t x151 = INT8_MIN;
	int64_t x152 = INT64_MIN;
	int32_t t37 = -164;

	t37 = ((x149==(x150==x151))<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MAX;
	int8_t x154 = INT8_MIN;
	uint8_t x155 = 12U;
	static int32_t x156 = INT32_MIN;
	static int32_t t38 = 13;

	t38 = ((x153==(x154==x155))<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	static int32_t x158 = -1;
	int8_t x159 = INT8_MAX;
	volatile uint64_t x160 = 1362584LLU;
	volatile int32_t t39 = 29476;

	t39 = ((x157==(x158==x159))<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x162 = UINT16_MAX;
	static int16_t x163 = -60;
	int32_t t40 = -4657;

	t40 = ((x161==(x162==x163))<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = 29;
	uint64_t x166 = 8041050820LLU;
	static int8_t x167 = INT8_MIN;
	int32_t x168 = INT32_MIN;
	int32_t t41 = 3228769;

	t41 = ((x165==(x166==x167))<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	int16_t x170 = -11032;
	int32_t x171 = -1;
	int8_t x172 = 1;
	int32_t t42 = -44756792;

	t42 = ((x169==(x170==x171))<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 14440LLU;
	uint32_t x174 = 4907438U;
	uint32_t x175 = 387406U;
	volatile int64_t x176 = -1LL;
	int32_t t43 = 0;

	t43 = ((x173==(x174==x175))<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 8U;
	int8_t x179 = INT8_MAX;
	static volatile int32_t t44 = 1160;

	t44 = ((x177==(x178==x179))<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x182 = INT16_MIN;
	uint8_t x184 = 13U;
	volatile int32_t t45 = 867;

	t45 = ((x181==(x182==x183))<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 516850764248LLU;
	int32_t x187 = INT32_MIN;
	int64_t x188 = 14LL;
	volatile int32_t t46 = 1;

	t46 = ((x185==(x186==x187))<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x190 = INT64_MIN;
	int32_t x191 = INT32_MAX;
	static volatile int16_t x192 = INT16_MIN;
	int32_t t47 = -1;

	t47 = ((x189==(x190==x191))<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = 7;
	int8_t x194 = INT8_MAX;
	static int64_t x195 = 93450881LL;
	uint8_t x196 = 39U;

	t48 = ((x193==(x194==x195))<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 23U;
	static int32_t x198 = INT32_MAX;
	int16_t x199 = INT16_MIN;
	static int16_t x200 = 138;
	volatile int32_t t49 = -28836441;

	t49 = ((x197==(x198==x199))<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = -1;
	int16_t x202 = INT16_MAX;
	static volatile uint8_t x203 = 2U;
	volatile int8_t x204 = INT8_MAX;
	volatile int32_t t50 = 243473464;

	t50 = ((x201==(x202==x203))<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x206 = UINT64_MAX;
	int32_t x207 = -12186981;
	int16_t x208 = INT16_MIN;
	int32_t t51 = -95059;

	t51 = ((x205==(x206==x207))<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = INT8_MIN;
	int64_t x210 = -47LL;
	static int8_t x211 = -4;
	int32_t x212 = -235608745;
	int32_t t52 = 5654;

	t52 = ((x209==(x210==x211))<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -3050681824LL;
	int8_t x215 = INT8_MAX;
	int64_t x216 = INT64_MAX;
	volatile int32_t t53 = -8;

	t53 = ((x213==(x214==x215))<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x217 = INT32_MIN;
	int32_t x218 = INT32_MIN;
	int32_t x219 = 514902;
	int32_t x220 = INT32_MIN;
	static volatile int32_t t54 = -3593;

	t54 = ((x217==(x218==x219))<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x222 = INT64_MIN;
	uint64_t x223 = 2529278215LLU;
	static int8_t x224 = -1;
	volatile int32_t t55 = 8831611;

	t55 = ((x221==(x222==x223))<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x225 = UINT32_MAX;
	int64_t x226 = -393LL;
	static int64_t x227 = INT64_MIN;
	int32_t x228 = 1090;
	volatile int32_t t56 = 457674632;

	t56 = ((x225==(x226==x227))<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x230 = 54U;
	uint8_t x231 = 16U;
	volatile int64_t x232 = 177271536LL;
	static volatile int32_t t57 = 1;

	t57 = ((x229==(x230==x231))<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x233 = UINT32_MAX;
	uint64_t x234 = 193185499321LLU;
	static int64_t x235 = INT64_MAX;
	uint8_t x236 = 4U;

	t58 = ((x233==(x234==x235))<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 165U;
	uint32_t x238 = 244U;
	uint32_t x239 = 121480U;
	int32_t x240 = INT32_MAX;
	volatile int32_t t59 = 1921;

	t59 = ((x237==(x238==x239))<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x242 = 51U;
	static int32_t x243 = INT32_MIN;
	static volatile uint64_t x244 = 1704443514139571653LLU;

	t60 = ((x241==(x242==x243))<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint16_t x245 = 519U;
	static uint8_t x246 = UINT8_MAX;
	int64_t x247 = 1210037886478432LL;
	volatile int64_t x248 = -106LL;

	t61 = ((x245==(x246==x247))<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MAX;
	volatile int16_t x250 = -533;
	int8_t x251 = -49;
	int16_t x252 = INT16_MIN;
	volatile int32_t t62 = 48807;

	t62 = ((x249==(x250==x251))<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -1LL;
	static int16_t x255 = -1;
	int8_t x256 = INT8_MIN;

	t63 = ((x253==(x254==x255))<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x257 = -5;
	static int64_t x258 = INT64_MIN;
	static int32_t x259 = INT32_MIN;
	int8_t x260 = 45;
	int32_t t64 = 306748;

	t64 = ((x257==(x258==x259))<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = UINT32_MAX;
	uint64_t x262 = UINT64_MAX;
	int16_t x263 = -1;
	int64_t x264 = -12954LL;

	t65 = ((x261==(x262==x263))<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = 139267726;
	uint32_t x266 = UINT32_MAX;
	uint16_t x267 = 4453U;
	volatile uint8_t x268 = UINT8_MAX;
	int32_t t66 = 10185;

	t66 = ((x265==(x266==x267))<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x269 = 623537810U;
	volatile int64_t x271 = -1037715506100121LL;
	volatile uint64_t x272 = 332695960198231517LLU;
	static int32_t t67 = -75;

	t67 = ((x269==(x270==x271))<x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x273 = INT32_MIN;
	static uint32_t x276 = UINT32_MAX;
	volatile int32_t t68 = 80629906;

	t68 = ((x273==(x274==x275))<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MAX;
	uint16_t x279 = UINT16_MAX;
	int16_t x280 = 0;
	int32_t t69 = -3765;

	t69 = ((x277==(x278==x279))<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 9012U;
	static uint32_t x282 = 6834U;
	int16_t x283 = INT16_MIN;
	int8_t x284 = INT8_MIN;
	int32_t t70 = -1;

	t70 = ((x281==(x282==x283))<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = 3U;
	int64_t x286 = INT64_MIN;
	int8_t x287 = 1;
	static int64_t x288 = 71429676345631792LL;

	t71 = ((x285==(x286==x287))<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = 0LL;
	int64_t x290 = INT64_MIN;
	volatile int32_t x291 = 30153;
	int32_t t72 = -33991;

	t72 = ((x289==(x290==x291))<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = 1029768;
	int32_t x295 = -1794585;
	volatile int32_t t73 = -14280;

	t73 = ((x293==(x294==x295))<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	uint64_t x298 = UINT64_MAX;
	static int16_t x299 = INT16_MIN;
	int32_t x300 = INT32_MIN;
	volatile int32_t t74 = 1;

	t74 = ((x297==(x298==x299))<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x301 = INT32_MIN;
	volatile uint16_t x302 = 3614U;
	volatile uint16_t x303 = 3U;
	int32_t t75 = -53;

	t75 = ((x301==(x302==x303))<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x305 = INT32_MIN;
	uint32_t x308 = 1881123U;
	volatile int32_t t76 = -24692686;

	t76 = ((x305==(x306==x307))<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = INT32_MIN;
	int8_t x311 = -1;
	int32_t x312 = 45067346;
	int32_t t77 = -15;

	t77 = ((x309==(x310==x311))<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = UINT64_MAX;
	int64_t x314 = -1LL;

	t78 = ((x313==(x314==x315))<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -580;
	int16_t x318 = -1;
	uint16_t x319 = UINT16_MAX;
	volatile uint8_t x320 = 15U;
	int32_t t79 = 791;

	t79 = ((x317==(x318==x319))<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	volatile uint8_t x322 = 3U;
	int64_t x323 = INT64_MIN;
	int32_t t80 = 3;

	t80 = ((x321==(x322==x323))<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	uint64_t x327 = 11801888251001LLU;
	int16_t x328 = INT16_MAX;
	int32_t t81 = -388935;

	t81 = ((x325==(x326==x327))<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -1;
	volatile int8_t x330 = -4;
	int16_t x331 = INT16_MIN;
	int16_t x332 = INT16_MIN;
	volatile int32_t t82 = -770;

	t82 = ((x329==(x330==x331))<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x333 = INT64_MIN;
	int64_t x334 = 719325374778159814LL;
	int64_t x335 = INT64_MAX;
	volatile int16_t x336 = -1;
	static int32_t t83 = 0;

	t83 = ((x333==(x334==x335))<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x337 = 7U;
	uint32_t x338 = UINT32_MAX;
	uint8_t x339 = UINT8_MAX;
	int64_t x340 = 1LL;

	t84 = ((x337==(x338==x339))<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	int32_t x342 = INT32_MIN;
	uint32_t x343 = 22U;
	uint16_t x344 = 0U;
	int32_t t85 = -433;

	t85 = ((x341==(x342==x343))<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 8220U;
	static uint32_t x346 = 3644436U;
	static uint32_t x348 = 329U;
	volatile int32_t t86 = 4724;

	t86 = ((x345==(x346==x347))<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = 650173542;
	static int16_t x350 = INT16_MIN;
	int16_t x351 = INT16_MIN;
	int32_t x352 = -1;
	int32_t t87 = 1590;

	t87 = ((x349==(x350==x351))<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x354 = -3754657;
	int16_t x356 = -7;
	int32_t t88 = 10754;

	t88 = ((x353==(x354==x355))<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x357 = -3034996LL;
	int8_t x358 = -1;
	int64_t x359 = INT64_MAX;
	int8_t x360 = INT8_MAX;
	volatile int32_t t89 = 1;

	t89 = ((x357==(x358==x359))<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x362 = 889030669U;
	int64_t x363 = -343310128372LL;
	int16_t x364 = 358;
	volatile int32_t t90 = 7;

	t90 = ((x361==(x362==x363))<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = UINT16_MAX;
	static volatile int16_t x366 = INT16_MIN;
	volatile uint16_t x367 = UINT16_MAX;
	int32_t t91 = 0;

	t91 = ((x365==(x366==x367))<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = 202785192LL;
	int16_t x370 = -1;
	int16_t x371 = 4558;
	int32_t x372 = INT32_MAX;

	t92 = ((x369==(x370==x371))<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	uint16_t x374 = UINT16_MAX;
	static int64_t x375 = INT64_MIN;
	static volatile int16_t x376 = INT16_MAX;
	volatile int32_t t93 = 2065;

	t93 = ((x373==(x374==x375))<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 454164533U;
	int64_t x378 = INT64_MAX;
	int8_t x380 = 0;
	int32_t t94 = -43614;

	t94 = ((x377==(x378==x379))<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = 16;
	uint8_t x382 = 106U;
	volatile int32_t x383 = INT32_MAX;
	uint8_t x384 = UINT8_MAX;
	volatile int32_t t95 = 3;

	t95 = ((x381==(x382==x383))<x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x385 = UINT8_MAX;
	static int8_t x386 = INT8_MIN;
	uint8_t x387 = 7U;
	int32_t x388 = -1;
	int32_t t96 = -52587787;

	t96 = ((x385==(x386==x387))<x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = 21;
	int16_t x390 = -12;
	uint64_t x392 = 6LLU;
	volatile int32_t t97 = -1162;

	t97 = ((x389==(x390==x391))<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x394 = -1LL;
	static uint32_t x396 = UINT32_MAX;

	t98 = ((x393==(x394==x395))<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 1705U;
	volatile uint8_t x398 = 1U;
	static int16_t x400 = INT16_MIN;
	int32_t t99 = -1075963;

	t99 = ((x397==(x398==x399))<x400);

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

