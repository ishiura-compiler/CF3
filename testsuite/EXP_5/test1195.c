#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MAX;
static uint8_t x11 = 26U;
static int8_t x12 = INT8_MIN;
int32_t x13 = INT32_MIN;
static uint8_t x16 = UINT8_MAX;
int8_t x19 = INT8_MIN;
volatile uint8_t x24 = 6U;
int32_t x29 = -15;
uint32_t t8 = UINT32_MAX;
uint16_t x39 = 41U;
static uint32_t x42 = 0U;
static uint8_t x43 = 22U;
static uint32_t x44 = 834517902U;
uint64_t x51 = 1LLU;
uint8_t x59 = 1U;
volatile uint64_t t15 = 224716LLU;
uint16_t x72 = 11U;
volatile int8_t x73 = 0;
int64_t x76 = INT64_MAX;
uint32_t x80 = UINT32_MAX;
volatile int64_t t19 = INT64_MAX;
static uint32_t x83 = 315933U;
int32_t x91 = INT32_MIN;
int8_t x92 = INT8_MIN;
static int32_t t22 = 194;
int16_t x93 = -1;
int64_t x94 = INT64_MIN;
static volatile uint32_t x95 = 4U;
uint64_t t25 = UINT64_MAX;
static int8_t x111 = INT8_MIN;
uint8_t x112 = 55U;
volatile uint64_t x114 = 2435589686012828948LLU;
int8_t x116 = INT8_MIN;
volatile int32_t t28 = -40580676;
uint8_t x124 = UINT8_MAX;
volatile int32_t t30 = -67259710;
volatile int8_t x126 = 1;
uint64_t x137 = 2492783454LLU;
uint8_t x139 = UINT8_MAX;
uint8_t x140 = 0U;
uint8_t x141 = 111U;
uint8_t x142 = 3U;
int32_t x155 = INT32_MAX;
volatile int64_t t39 = 54597LL;
int32_t x161 = INT32_MIN;
uint16_t x168 = 1U;
uint64_t x172 = 11046851LLU;
int32_t x173 = INT32_MAX;
int16_t x175 = INT16_MIN;
volatile int64_t x179 = -2136810253LL;
uint64_t x187 = 73LLU;
int64_t t46 = 81421278298429236LL;
int8_t x195 = INT8_MAX;
int8_t x197 = INT8_MIN;
volatile int32_t x200 = 7019;
uint32_t x202 = 35878545U;
uint16_t x204 = UINT16_MAX;
volatile int16_t x209 = 204;
volatile int32_t t53 = 30356195;
volatile uint32_t x217 = 5840898U;
int64_t x224 = -1LL;
uint32_t x227 = 1831645393U;
int16_t x230 = INT16_MIN;
volatile uint16_t x231 = 15U;
uint8_t x232 = UINT8_MAX;
volatile int32_t t59 = -6601;
int8_t x242 = INT8_MIN;
int32_t x249 = INT32_MAX;
volatile int64_t x255 = INT64_MIN;
uint32_t x264 = 1076250U;
uint64_t x266 = UINT64_MAX;
int64_t x268 = -584950451317825896LL;
uint32_t x282 = 31400U;
uint32_t x284 = 2589850U;
int32_t x287 = -704;
volatile int8_t x289 = -4;
uint32_t x303 = UINT32_MAX;
int16_t x305 = -6119;
uint64_t x308 = 24LLU;
uint64_t t76 = 2851966487252441347LLU;
static uint64_t x313 = 124688528LLU;
int64_t x314 = INT64_MIN;
volatile uint32_t x320 = 532220U;
uint16_t x322 = 123U;
int64_t t81 = -1115776848LL;
static volatile int64_t t82 = -54825429184370884LL;
volatile int8_t x334 = -1;
static int16_t x336 = 11;
int32_t t83 = -911658;
volatile int16_t x339 = INT16_MAX;
uint8_t x348 = 0U;
int32_t x350 = INT32_MIN;
int32_t x352 = 3675165;
volatile int32_t t87 = 57744;
int64_t x356 = -1LL;
volatile int64_t t88 = -24LL;
int64_t x360 = INT64_MAX;
uint32_t x362 = UINT32_MAX;
int64_t x363 = -4LL;
int32_t x377 = -1;
static volatile uint64_t t95 = 260LLU;
int32_t x386 = INT32_MIN;
volatile uint64_t x391 = 9872260LLU;
int16_t x393 = 0;
uint32_t x397 = UINT32_MAX;


void f0(void) {
	static int8_t x2 = INT8_MAX;
	uint64_t x3 = 10589089LLU;
	static volatile int64_t x4 = INT64_MIN;
	int64_t t0 = -2138394408755263LL;

	t0 = (x1|((x2==x3)+x4));

	if (t0 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	static uint8_t x6 = 1U;
	uint8_t x7 = 0U;
	volatile uint64_t x8 = UINT64_MAX;
	volatile uint64_t t1 = UINT64_MAX;

	t1 = (x5|((x6==x7)+x8));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int8_t x10 = INT8_MIN;
	uint64_t t2 = UINT64_MAX;

	t2 = (x9|((x10==x11)+x12));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = 25284;
	uint32_t x15 = UINT32_MAX;
	int32_t t3 = 1;

	t3 = (x13|((x14==x15)+x16));

	if (t3 != -2147483393) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int32_t x18 = INT32_MIN;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -27582;

	t4 = (x17|((x18==x19)+x20));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = 1U;
	int64_t x22 = -22402LL;
	static uint8_t x23 = 6U;
	volatile int32_t t5 = -1681648;

	t5 = (x21|((x22==x23)+x24));

	if (t5 != 7) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	uint8_t x26 = 11U;
	int32_t x27 = -50020;
	int16_t x28 = 54;
	volatile int64_t t6 = INT64_MAX;

	t6 = (x25|((x26==x27)+x28));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = 3032804474723LL;
	volatile int32_t x31 = INT32_MIN;
	volatile uint16_t x32 = 42U;
	int32_t t7 = 0;

	t7 = (x29|((x30==x31)+x32));

	if (t7 != -5) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MAX;
	int64_t x34 = 99717192628405548LL;
	uint16_t x35 = 13772U;
	uint32_t x36 = UINT32_MAX;

	t8 = (x33|((x34==x35)+x36));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 0U;
	uint32_t x38 = 1890592U;
	int64_t x40 = -17767319324767921LL;
	volatile int64_t t9 = 398652LL;

	t9 = (x37|((x38==x39)+x40));

	if (t9 != -17767319324767921LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MAX;
	volatile uint32_t t10 = 3796U;

	t10 = (x41|((x42==x43)+x44));

	if (t10 != 834535423U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 2U;
	int8_t x46 = -1;
	int8_t x47 = -52;
	static int32_t x48 = INT32_MIN;
	int32_t t11 = -43089;

	t11 = (x45|((x46==x47)+x48));

	if (t11 != -2147483646) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 59812;
	int64_t x50 = INT64_MIN;
	uint16_t x52 = UINT16_MAX;
	volatile int32_t t12 = -209553188;

	t12 = (x49|((x50==x51)+x52));

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = -1;
	int8_t x54 = 1;
	volatile int32_t x55 = 724985961;
	uint16_t x56 = 0U;
	int32_t t13 = 314582;

	t13 = (x53|((x54==x55)+x56));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = 3423930530LL;
	static int64_t x58 = -2837871LL;
	static uint8_t x60 = 1U;
	volatile int64_t t14 = -2693938877750351LL;

	t14 = (x57|((x58==x59)+x60));

	if (t14 != 3423930531LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = 7;
	static int32_t x62 = -1;
	volatile int64_t x63 = 80479LL;
	volatile uint64_t x64 = 1810586LLU;

	t15 = (x61|((x62==x63)+x64));

	if (t15 != 1810591LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = UINT16_MAX;
	static int8_t x66 = 28;
	volatile int64_t x67 = INT64_MAX;
	int8_t x68 = -61;
	int32_t t16 = -5;

	t16 = (x65|((x66==x67)+x68));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = 6584;
	int32_t x70 = 854360723;
	uint32_t x71 = UINT32_MAX;
	volatile int32_t t17 = 1;

	t17 = (x69|((x70==x71)+x72));

	if (t17 != 6587) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = -1;
	uint64_t x75 = 12056LLU;
	static volatile int64_t t18 = INT64_MAX;

	t18 = (x73|((x74==x75)+x76));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MAX;
	static int16_t x78 = INT16_MIN;
	static volatile int8_t x79 = INT8_MAX;

	t19 = (x77|((x78==x79)+x80));

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x81 = 0U;
	volatile uint8_t x82 = UINT8_MAX;
	uint8_t x84 = 111U;
	int32_t t20 = 417674474;

	t20 = (x81|((x82==x83)+x84));

	if (t20 != 111) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint8_t x85 = UINT8_MAX;
	int16_t x86 = -1;
	static volatile int64_t x87 = INT64_MAX;
	uint8_t x88 = UINT8_MAX;
	volatile int32_t t21 = 213048;

	t21 = (x85|((x86==x87)+x88));

	if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	uint32_t x90 = 807616U;

	t22 = (x89|((x90==x91)+x92));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x96 = 23U;
	volatile int32_t t23 = 28996544;

	t23 = (x93|((x94==x95)+x96));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -9;
	int64_t x98 = INT64_MAX;
	static volatile int64_t x99 = -1LL;
	int32_t x100 = INT32_MIN;
	int32_t t24 = -2033;

	t24 = (x97|((x98==x99)+x100));

	if (t24 != -9) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = -1;
	static int8_t x102 = INT8_MAX;
	int32_t x103 = INT32_MAX;
	uint64_t x104 = UINT64_MAX;

	t25 = (x101|((x102==x103)+x104));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = -1;
	int32_t x106 = 3895;
	uint32_t x107 = UINT32_MAX;
	int64_t x108 = INT64_MIN;
	volatile int64_t t26 = 3942167950LL;

	t26 = (x105|((x106==x107)+x108));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x109 = UINT8_MAX;
	uint64_t x110 = UINT64_MAX;
	volatile int32_t t27 = -402218735;

	t27 = (x109|((x110==x111)+x112));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = -1;
	static int16_t x115 = INT16_MIN;

	t28 = (x113|((x114==x115)+x116));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MAX;
	uint32_t x118 = 1161242823U;
	int32_t x119 = -1;
	uint32_t x120 = UINT32_MAX;
	int64_t t29 = INT64_MAX;

	t29 = (x117|((x118==x119)+x120));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = UINT8_MAX;
	volatile int16_t x122 = INT16_MIN;
	volatile uint32_t x123 = 1213628U;

	t30 = (x121|((x122==x123)+x124));

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 117U;
	static int32_t x127 = -1;
	int32_t x128 = INT32_MIN;
	volatile int32_t t31 = 11247;

	t31 = (x125|((x126==x127)+x128));

	if (t31 != -2147483531) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	uint64_t x130 = UINT64_MAX;
	volatile int8_t x131 = -1;
	int16_t x132 = INT16_MAX;
	static int32_t t32 = 66;

	t32 = (x129|((x130==x131)+x132));

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -1LL;
	uint8_t x134 = 4U;
	int16_t x135 = INT16_MIN;
	volatile uint64_t x136 = UINT64_MAX;
	uint64_t t33 = UINT64_MAX;

	t33 = (x133|((x134==x135)+x136));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x138 = 4U;
	volatile uint64_t t34 = 4277696LLU;

	t34 = (x137|((x138==x139)+x140));

	if (t34 != 2492783454LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x143 = 54U;
	uint32_t x144 = UINT32_MAX;
	volatile uint32_t t35 = UINT32_MAX;

	t35 = (x141|((x142==x143)+x144));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = INT64_MAX;
	int64_t x146 = INT64_MIN;
	uint16_t x147 = 30278U;
	int8_t x148 = -15;
	volatile int64_t t36 = 163414LL;

	t36 = (x145|((x146==x147)+x148));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	int32_t x150 = -6669026;
	static volatile uint16_t x151 = UINT16_MAX;
	uint8_t x152 = 9U;
	static int32_t t37 = 64617;

	t37 = (x149|((x150==x151)+x152));

	if (t37 != -32759) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x153 = UINT64_MAX;
	uint32_t x154 = 1617042U;
	static volatile uint8_t x156 = 0U;
	uint64_t t38 = UINT64_MAX;

	t38 = (x153|((x154==x155)+x156));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = UINT16_MAX;
	int64_t x158 = INT64_MAX;
	uint8_t x159 = 75U;
	int64_t x160 = INT64_MIN;

	t39 = (x157|((x158==x159)+x160));

	if (t39 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = INT64_MIN;
	uint64_t x163 = 1493236305645198038LLU;
	uint8_t x164 = 3U;
	int32_t t40 = -4007862;

	t40 = (x161|((x162==x163)+x164));

	if (t40 != -2147483645) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = UINT16_MAX;
	volatile int16_t x166 = INT16_MIN;
	int8_t x167 = INT8_MIN;
	volatile int32_t t41 = 14103;

	t41 = (x165|((x166==x167)+x168));

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint64_t x169 = UINT64_MAX;
	static volatile int32_t x170 = INT32_MIN;
	uint8_t x171 = UINT8_MAX;
	uint64_t t42 = UINT64_MAX;

	t42 = (x169|((x170==x171)+x172));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x174 = INT64_MIN;
	static uint32_t x176 = UINT32_MAX;
	static volatile uint32_t t43 = UINT32_MAX;

	t43 = (x173|((x174==x175)+x176));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 74530U;
	static int32_t x178 = INT32_MIN;
	uint32_t x180 = 130580U;
	volatile uint32_t t44 = 44U;

	t44 = (x177|((x178==x179)+x180));

	if (t44 != 130870U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MAX;
	int64_t x182 = -2888007LL;
	uint8_t x183 = UINT8_MAX;
	int64_t x184 = -172887551142550LL;
	static volatile int64_t t45 = -3569LL;

	t45 = (x181|((x182==x183)+x184));

	if (t45 != -172887551142529LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = INT16_MIN;
	static volatile uint8_t x186 = UINT8_MAX;
	int64_t x188 = INT64_MAX;

	t46 = (x185|((x186==x187)+x188));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 2U;
	uint8_t x190 = 29U;
	uint64_t x191 = UINT64_MAX;
	int16_t x192 = -3167;
	int32_t t47 = -111232139;

	t47 = (x189|((x190==x191)+x192));

	if (t47 != -3165) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 3439042LLU;
	volatile int8_t x194 = -1;
	uint16_t x196 = 21766U;
	uint64_t t48 = 23LLU;

	t48 = (x193|((x194==x195)+x196));

	if (t48 != 3440070LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x198 = INT32_MIN;
	uint64_t x199 = UINT64_MAX;
	volatile int32_t t49 = -3;

	t49 = (x197|((x198==x199)+x200));

	if (t49 != -21) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	int32_t x203 = INT32_MIN;
	int32_t t50 = 39574788;

	t50 = (x201|((x202==x203)+x204));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -1;
	int16_t x206 = -1598;
	int16_t x207 = 11;
	static int8_t x208 = 5;
	int32_t t51 = 12;

	t51 = (x205|((x206==x207)+x208));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x210 = INT64_MIN;
	volatile int32_t x211 = INT32_MAX;
	uint16_t x212 = UINT16_MAX;
	volatile int32_t t52 = 810284036;

	t52 = (x209|((x210==x211)+x212));

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 48U;
	volatile int32_t x214 = INT32_MIN;
	int16_t x215 = INT16_MAX;
	int16_t x216 = 4;

	t53 = (x213|((x214==x215)+x216));

	if (t53 != 52) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x218 = -1299798;
	int8_t x219 = INT8_MAX;
	static int8_t x220 = 7;
	uint32_t t54 = 1639U;

	t54 = (x217|((x218==x219)+x220));

	if (t54 != 5840903U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x221 = 5874963U;
	int64_t x222 = INT64_MIN;
	int32_t x223 = INT32_MIN;
	int64_t t55 = 1250983236208LL;

	t55 = (x221|((x222==x223)+x224));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MAX;
	int16_t x226 = -1;
	int32_t x228 = INT32_MIN;
	volatile int64_t t56 = -2543972980LL;

	t56 = (x225|((x226==x227)+x228));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x229 = UINT64_MAX;
	static uint64_t t57 = UINT64_MAX;

	t57 = (x229|((x230==x231)+x232));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 14006U;
	int32_t x234 = -1;
	static uint8_t x235 = UINT8_MAX;
	int64_t x236 = INT64_MAX;
	volatile int64_t t58 = INT64_MAX;

	t58 = (x233|((x234==x235)+x236));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 4U;
	uint8_t x238 = UINT8_MAX;
	int8_t x239 = 0;
	static int8_t x240 = INT8_MAX;

	t59 = (x237|((x238==x239)+x240));

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = 1LL;
	int32_t x243 = INT32_MAX;
	int16_t x244 = -1;
	static volatile int64_t t60 = 37190276201LL;

	t60 = (x241|((x242==x243)+x244));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 6U;
	static uint32_t x246 = UINT32_MAX;
	static int8_t x247 = -1;
	int8_t x248 = -1;
	volatile int32_t t61 = -6254220;

	t61 = (x245|((x246==x247)+x248));

	if (t61 != 6) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x250 = UINT16_MAX;
	uint8_t x251 = 111U;
	uint16_t x252 = 5U;
	volatile int32_t t62 = INT32_MAX;

	t62 = (x249|((x250==x251)+x252));

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -1;
	uint8_t x254 = UINT8_MAX;
	int32_t x256 = -1;
	int32_t t63 = -1177;

	t63 = (x253|((x254==x255)+x256));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x257 = INT8_MIN;
	int64_t x258 = -1LL;
	int64_t x259 = INT64_MAX;
	int64_t x260 = -1LL;
	int64_t t64 = -6178164784688784LL;

	t64 = (x257|((x258==x259)+x260));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = UINT8_MAX;
	uint8_t x262 = 7U;
	int8_t x263 = -1;
	volatile uint32_t t65 = 0U;

	t65 = (x261|((x262==x263)+x264));

	if (t65 != 1076479U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x265 = 0U;
	volatile int8_t x267 = -1;
	volatile int64_t t66 = 77LL;

	t66 = (x265|((x266==x267)+x268));

	if (t66 != -584950451317825895LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = INT64_MIN;
	int16_t x270 = 24;
	volatile uint16_t x271 = UINT16_MAX;
	static int64_t x272 = 1LL;
	volatile int64_t t67 = 14157LL;

	t67 = (x269|((x270==x271)+x272));

	if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 783LLU;
	static volatile int16_t x274 = -1;
	uint32_t x275 = 14U;
	uint64_t x276 = 19337901793176972LLU;
	uint64_t t68 = 977394721982325LLU;

	t68 = (x273|((x274==x275)+x276));

	if (t68 != 19337901793177487LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MAX;
	static volatile int32_t x278 = INT32_MIN;
	volatile uint32_t x279 = UINT32_MAX;
	volatile uint16_t x280 = 17786U;
	int32_t t69 = INT32_MAX;

	t69 = (x277|((x278==x279)+x280));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x281 = 64881U;
	int16_t x283 = -1;
	static volatile uint32_t t70 = 161985186U;

	t70 = (x281|((x282==x283)+x284));

	if (t70 != 2620923U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = UINT8_MAX;
	int16_t x286 = 538;
	static int16_t x288 = 30;
	volatile int32_t t71 = -97;

	t71 = (x285|((x286==x287)+x288));

	if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x290 = 2U;
	int16_t x291 = 1;
	static uint32_t x292 = 0U;
	volatile uint32_t t72 = 22U;

	t72 = (x289|((x290==x291)+x292));

	if (t72 != 4294967292U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = INT16_MIN;
	volatile int64_t x294 = 287216219405767415LL;
	volatile int8_t x295 = INT8_MAX;
	int16_t x296 = -1;
	volatile int32_t t73 = 0;

	t73 = (x293|((x294==x295)+x296));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x297 = INT16_MIN;
	uint64_t x298 = 2816773205354301391LLU;
	int16_t x299 = 8;
	uint16_t x300 = 2175U;
	int32_t t74 = -1;

	t74 = (x297|((x298==x299)+x300));

	if (t74 != -30593) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = INT64_MIN;
	int8_t x302 = INT8_MIN;
	uint16_t x304 = 250U;
	static int64_t t75 = -121767LL;

	t75 = (x301|((x302==x303)+x304));

	if (t75 != -9223372036854775558LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x306 = UINT64_MAX;
	uint16_t x307 = 1975U;

	t76 = (x305|((x306==x307)+x308));

	if (t76 != 18446744073709545497LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = UINT8_MAX;
	static int64_t x310 = 2542635173465LL;
	int16_t x311 = -1;
	uint32_t x312 = 1U;
	uint32_t t77 = 94768U;

	t77 = (x309|((x310==x311)+x312));

	if (t77 != 255U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x315 = -1LL;
	uint32_t x316 = 111112438U;
	volatile uint64_t t78 = 25341230233410LLU;

	t78 = (x313|((x314==x315)+x316));

	if (t78 != 134215926LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 23U;
	static int64_t x318 = -3496493244LL;
	static uint32_t x319 = 207428117U;
	uint32_t t79 = 5612U;

	t79 = (x317|((x318==x319)+x320));

	if (t79 != 532223U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = UINT64_MAX;
	int8_t x323 = INT8_MIN;
	static int16_t x324 = -1;
	static volatile uint64_t t80 = UINT64_MAX;

	t80 = (x321|((x322==x323)+x324));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = -3654;
	int32_t x326 = INT32_MIN;
	int64_t x327 = INT64_MIN;
	volatile int64_t x328 = INT64_MIN;

	t81 = (x325|((x326==x327)+x328));

	if (t81 != -3654LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = 269;
	static int64_t x330 = INT64_MIN;
	int8_t x331 = -62;
	static int64_t x332 = -5645035288LL;

	t82 = (x329|((x330==x331)+x332));

	if (t82 != -5645035027LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -14073;
	volatile int32_t x335 = -1;

	t83 = (x333|((x334==x335)+x336));

	if (t83 != -14065) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -4655;
	uint32_t x338 = UINT32_MAX;
	int32_t x340 = -191808308;
	static int32_t t84 = 64753;

	t84 = (x337|((x338==x339)+x340));

	if (t84 != -547) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x341 = 6537949LLU;
	volatile int8_t x342 = INT8_MIN;
	int16_t x343 = INT16_MAX;
	volatile int32_t x344 = INT32_MIN;
	uint64_t t85 = 1LLU;

	t85 = (x341|((x342==x343)+x344));

	if (t85 != 18446744071568605917LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -15814;
	int16_t x346 = INT16_MIN;
	static uint8_t x347 = UINT8_MAX;
	int32_t t86 = 4946;

	t86 = (x345|((x346==x347)+x348));

	if (t86 != -15814) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = -8;
	static int16_t x351 = INT16_MAX;

	t87 = (x349|((x350==x351)+x352));

	if (t87 != -3) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = -1;
	volatile int16_t x354 = INT16_MAX;
	static volatile int64_t x355 = 3249LL;

	t88 = (x353|((x354==x355)+x356));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = UINT64_MAX;
	static volatile int16_t x358 = -46;
	int8_t x359 = -6;
	static volatile uint64_t t89 = UINT64_MAX;

	t89 = (x357|((x358==x359)+x360));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	uint8_t x364 = UINT8_MAX;
	int32_t t90 = 1;

	t90 = (x361|((x362==x363)+x364));

	if (t90 != -2147483393) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 1628490LLU;
	volatile int8_t x366 = INT8_MAX;
	volatile int64_t x367 = 1419080055LL;
	int32_t x368 = INT32_MIN;
	volatile uint64_t t91 = 38511LLU;

	t91 = (x365|((x366==x367)+x368));

	if (t91 != 18446744071563696458LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = UINT8_MAX;
	int8_t x370 = INT8_MAX;
	static uint64_t x371 = 7112828260LLU;
	int64_t x372 = 2184067659949566LL;
	int64_t t92 = -67512LL;

	t92 = (x369|((x370==x371)+x372));

	if (t92 != 2184067659949567LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MAX;
	volatile uint8_t x374 = 32U;
	int64_t x375 = -454207542755460LL;
	volatile uint64_t x376 = UINT64_MAX;
	uint64_t t93 = UINT64_MAX;

	t93 = (x373|((x374==x375)+x376));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x378 = INT32_MAX;
	uint64_t x379 = 1744994542LLU;
	int64_t x380 = INT64_MIN;
	volatile int64_t t94 = -17834807LL;

	t94 = (x377|((x378==x379)+x380));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x381 = 4U;
	volatile int64_t x382 = -72120894344151LL;
	int8_t x383 = -5;
	static uint64_t x384 = 1824LLU;

	t95 = (x381|((x382==x383)+x384));

	if (t95 != 1828LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 13U;
	static int8_t x387 = 1;
	uint64_t x388 = 196LLU;
	volatile uint64_t t96 = 1LLU;

	t96 = (x385|((x386==x387)+x388));

	if (t96 != 205LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x389 = 77601386U;
	static int64_t x390 = INT64_MIN;
	static uint64_t x392 = 15LLU;
	volatile uint64_t t97 = 5206LLU;

	t97 = (x389|((x390==x391)+x392));

	if (t97 != 77601391LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint16_t x394 = 121U;
	volatile int8_t x395 = INT8_MIN;
	static uint64_t x396 = 491231693897769LLU;
	volatile uint64_t t98 = 7294087LLU;

	t98 = (x393|((x394==x395)+x396));

	if (t98 != 491231693897769LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x398 = -6240;
	volatile int64_t x399 = -1LL;
	uint64_t x400 = UINT64_MAX;
	uint64_t t99 = UINT64_MAX;

	t99 = (x397|((x398==x399)+x400));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

