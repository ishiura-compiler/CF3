#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t2 = 374520U;
int8_t x19 = 30;
uint32_t x20 = UINT32_MAX;
volatile uint64_t t7 = 246844264159817128LLU;
static uint32_t x38 = 229472U;
static volatile uint32_t x42 = UINT32_MAX;
static volatile int32_t x44 = INT32_MIN;
int64_t x58 = 1LL;
volatile int64_t t12 = 55922412214560LL;
static volatile int32_t x61 = INT32_MAX;
volatile uint32_t x64 = UINT32_MAX;
uint32_t x68 = 23U;
volatile int8_t x71 = -8;
static uint64_t x73 = UINT64_MAX;
volatile int64_t x75 = 216LL;
uint64_t x80 = 23LLU;
static int64_t t19 = 8447298630LL;
static int32_t x93 = 655351;
int8_t x94 = -1;
int16_t x105 = INT16_MIN;
static int64_t x106 = INT64_MAX;
static volatile uint32_t t25 = 63472U;
int32_t x113 = INT32_MAX;
uint16_t x133 = 28166U;
static uint8_t x135 = UINT8_MAX;
volatile int16_t x144 = INT16_MAX;
int16_t x152 = INT16_MIN;
static int32_t t34 = -2;
int64_t x164 = 4LL;
int64_t t36 = -11075327245LL;
uint8_t x165 = 62U;
uint64_t x175 = UINT64_MAX;
int32_t x183 = -1;
uint32_t x186 = 89514U;
uint8_t x190 = 118U;
int8_t x191 = -1;
static int16_t x192 = 29;
int8_t x197 = INT8_MIN;
uint32_t x208 = 238913U;
volatile int64_t t48 = -1579072747449907LL;
int64_t x213 = -16389277LL;
int32_t x215 = INT32_MIN;
static int64_t x218 = INT64_MIN;
static volatile int64_t t52 = 6753596104749725LL;
int32_t x233 = -1;
int16_t x235 = -3;
static volatile int32_t t53 = 24;
volatile int32_t x238 = -390044047;
uint16_t x243 = 58U;
static int64_t x245 = INT64_MIN;
int16_t x246 = INT16_MIN;
int64_t t57 = 102373LL;
volatile int8_t x257 = -4;
uint16_t x266 = 0U;
int16_t x270 = INT16_MAX;
uint16_t x271 = 1787U;
int32_t x278 = INT32_MIN;
volatile uint64_t t64 = 1070376LLU;
volatile uint64_t t65 = 80341LLU;
int16_t x286 = INT16_MIN;
volatile int8_t x287 = -13;
int32_t x289 = 4908;
static int64_t x290 = INT64_MIN;
volatile int16_t x295 = -15715;
volatile uint64_t t68 = 803739316LLU;
int16_t x304 = -1;
volatile int32_t x308 = 43737208;
static uint64_t x313 = 192000403LLU;
int64_t t74 = 14201LL;
int64_t t75 = -117552095929000LL;
int16_t x333 = INT16_MAX;
uint16_t x341 = 3952U;
volatile int64_t x345 = -1LL;
uint64_t x351 = UINT64_MAX;
volatile int32_t x354 = INT32_MIN;
static volatile int32_t x356 = -1;
static volatile int64_t t81 = -664792401036LL;
int8_t x360 = INT8_MIN;
int16_t x370 = -63;
volatile uint64_t t85 = 3236455202747956863LLU;
uint8_t x376 = 6U;
int8_t x379 = INT8_MIN;
int64_t x381 = INT64_MAX;
volatile uint16_t x385 = 3048U;
uint16_t x390 = 63U;
volatile int32_t x392 = 1;
volatile uint64_t t91 = 1LLU;
volatile uint64_t x405 = 117981154268LLU;
uint8_t x410 = 5U;
uint64_t x411 = 18258698LLU;
volatile uint64_t t95 = 1090529627006022572LLU;
volatile int32_t t96 = 729;
uint32_t x417 = 12446U;
static uint8_t x418 = 7U;
static volatile uint64_t x422 = 530LLU;
volatile int32_t t99 = 2697;


void f0(void) {
	uint64_t x5 = 12315929976LLU;
	static uint16_t x6 = 0U;
	int32_t x7 = -260244239;
	int8_t x8 = -39;
	static uint64_t t0 = 14011LLU;

	t0 = (((x5|x6)&x7)-x8);

	if (t0 != 12080917655LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MAX;
	uint64_t x10 = 32LLU;
	volatile uint16_t x11 = UINT16_MAX;
	static int8_t x12 = INT8_MIN;
	volatile uint64_t t1 = 17646192806199731LLU;

	t1 = (((x9|x10)&x11)-x12);

	if (t1 != 65663LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 3U;
	int16_t x14 = INT16_MIN;
	volatile int16_t x15 = INT16_MAX;
	uint32_t x16 = 74U;

	t2 = (((x13|x14)&x15)-x16);

	if (t2 != 4294967225U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -8;
	volatile int16_t x18 = -451;
	volatile uint32_t t3 = 15619438U;

	t3 = (((x17|x18)&x19)-x20);

	if (t3 != 29U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	int8_t x22 = 0;
	int16_t x23 = INT16_MAX;
	static int16_t x24 = 14112;
	int32_t t4 = 1591505;

	t4 = (((x21|x22)&x23)-x24);

	if (t4 != -14112) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -1;
	int64_t x26 = INT64_MAX;
	volatile int8_t x27 = -3;
	int64_t x28 = -1075406134996LL;
	volatile int64_t t5 = -12LL;

	t5 = (((x25|x26)&x27)-x28);

	if (t5 != 1075406134993LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = 1;
	static volatile int16_t x30 = INT16_MIN;
	int8_t x31 = -1;
	volatile int64_t x32 = -625557394034116313LL;
	static int64_t t6 = -6999500903LL;

	t6 = (((x29|x30)&x31)-x32);

	if (t6 != 625557394034083546LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = UINT64_MAX;
	int32_t x34 = INT32_MAX;
	int32_t x35 = -1;
	volatile int64_t x36 = INT64_MAX;

	t7 = (((x33|x34)&x35)-x36);

	if (t7 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x37 = INT8_MIN;
	int8_t x39 = 40;
	int16_t x40 = -1;
	volatile uint32_t t8 = 85U;

	t8 = (((x37|x38)&x39)-x40);

	if (t8 != 33U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = -1;
	static uint16_t x43 = 587U;
	volatile uint32_t t9 = 1270367U;

	t9 = (((x41|x42)&x43)-x44);

	if (t9 != 2147484235U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x45 = UINT64_MAX;
	uint16_t x46 = 23621U;
	int16_t x47 = INT16_MIN;
	int16_t x48 = INT16_MIN;
	volatile uint64_t t10 = 993248443928508LLU;

	t10 = (((x45|x46)&x47)-x48);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = -1014340043873LL;
	int16_t x54 = INT16_MIN;
	uint8_t x55 = 28U;
	static int8_t x56 = INT8_MIN;
	static int64_t t11 = 9559LL;

	t11 = (((x53|x54)&x55)-x56);

	if (t11 != 156LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x57 = INT64_MIN;
	volatile uint8_t x59 = 1U;
	uint8_t x60 = 1U;

	t12 = (((x57|x58)&x59)-x60);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x62 = -47;
	uint16_t x63 = 20U;
	uint32_t t13 = 4429481U;

	t13 = (((x61|x62)&x63)-x64);

	if (t13 != 21U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = -830255916847451392LL;
	uint32_t x66 = 885737065U;
	int64_t x67 = -245424591LL;
	int64_t t14 = -44783372LL;

	t14 = (((x65|x66)&x67)-x68);

	if (t14 != -830255917020801526LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x69 = INT16_MIN;
	static int16_t x70 = INT16_MIN;
	static uint32_t x72 = 4792875U;
	static volatile uint32_t t15 = 1547833U;

	t15 = (((x69|x70)&x71)-x72);

	if (t15 != 4290141653U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x74 = 2LLU;
	static int32_t x76 = 758547;
	uint64_t t16 = 6509419399777LLU;

	t16 = (((x73|x74)&x75)-x76);

	if (t16 != 18446744073708793285LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x77 = INT64_MIN;
	static int16_t x78 = INT16_MAX;
	uint8_t x79 = 9U;
	static uint64_t t17 = 14LLU;

	t17 = (((x77|x78)&x79)-x80);

	if (t17 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = INT16_MIN;
	volatile uint8_t x82 = UINT8_MAX;
	static int16_t x83 = INT16_MIN;
	uint64_t x84 = 124935765985924884LLU;
	volatile uint64_t t18 = 1085026123443559LLU;

	t18 = (((x81|x82)&x83)-x84);

	if (t18 != 18321808307723593964LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x85 = INT16_MAX;
	static int64_t x86 = INT64_MIN;
	static volatile uint32_t x87 = UINT32_MAX;
	int64_t x88 = INT64_MAX;

	t19 = (((x85|x86)&x87)-x88);

	if (t19 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x89 = -283;
	int8_t x90 = 2;
	int8_t x91 = INT8_MAX;
	int32_t x92 = INT32_MAX;
	volatile int32_t t20 = 5653476;

	t20 = (((x89|x90)&x91)-x92);

	if (t20 != -2147483544) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x95 = -1LL;
	static int16_t x96 = INT16_MAX;
	volatile int64_t t21 = -60310617168308LL;

	t21 = (((x93|x94)&x95)-x96);

	if (t21 != -32768LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = INT64_MIN;
	uint64_t x98 = UINT64_MAX;
	volatile uint16_t x99 = 488U;
	int32_t x100 = 1573;
	uint64_t t22 = 206997905358679LLU;

	t22 = (((x97|x98)&x99)-x100);

	if (t22 != 18446744073709550531LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = INT16_MIN;
	static int64_t x102 = 33566663666566402LL;
	static int64_t x103 = INT64_MAX;
	uint64_t x104 = 65816342900991861LLU;
	volatile uint64_t t23 = 17884241043LLU;

	t23 = (((x101|x102)&x103)-x104);

	if (t23 != 9157555693953752461LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x107 = 3269U;
	uint16_t x108 = 0U;
	volatile int64_t t24 = 48253936923790LL;

	t24 = (((x105|x106)&x107)-x108);

	if (t24 != 3269LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x109 = UINT32_MAX;
	volatile uint16_t x110 = 342U;
	int32_t x111 = INT32_MIN;
	uint32_t x112 = 81U;

	t25 = (((x109|x110)&x111)-x112);

	if (t25 != 2147483567U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x114 = INT64_MIN;
	uint32_t x115 = UINT32_MAX;
	int64_t x116 = -1LL;
	int64_t t26 = -14576574093696LL;

	t26 = (((x113|x114)&x115)-x116);

	if (t26 != 2147483648LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x117 = UINT16_MAX;
	int8_t x118 = -3;
	int32_t x119 = -1;
	int32_t x120 = INT32_MIN;
	volatile int32_t t27 = INT32_MAX;

	t27 = (((x117|x118)&x119)-x120);

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = 3;
	int8_t x130 = -1;
	int8_t x131 = INT8_MIN;
	volatile int64_t x132 = -1LL;
	static int64_t t28 = 26534LL;

	t28 = (((x129|x130)&x131)-x132);

	if (t28 != -127LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x134 = INT8_MIN;
	int8_t x136 = INT8_MAX;
	static volatile int32_t t29 = 13937;

	t29 = (((x133|x134)&x135)-x136);

	if (t29 != 7) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x137 = INT16_MAX;
	static uint8_t x138 = 3U;
	int8_t x139 = INT8_MAX;
	int8_t x140 = -3;
	volatile int32_t t30 = 3386618;

	t30 = (((x137|x138)&x139)-x140);

	if (t30 != 130) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = -1;
	volatile int32_t x142 = -114816;
	int16_t x143 = -1;
	int32_t t31 = 1620134;

	t31 = (((x141|x142)&x143)-x144);

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = INT8_MIN;
	int8_t x146 = -1;
	volatile uint16_t x147 = 5080U;
	static int16_t x148 = -1;
	static volatile int32_t t32 = -8;

	t32 = (((x145|x146)&x147)-x148);

	if (t32 != 5081) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x149 = INT32_MIN;
	static int16_t x150 = 5;
	uint64_t x151 = 1LLU;
	static volatile uint64_t t33 = 3890204254LLU;

	t33 = (((x149|x150)&x151)-x152);

	if (t33 != 32769LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = INT8_MIN;
	uint16_t x154 = 8U;
	static volatile int8_t x155 = 0;
	volatile uint8_t x156 = 7U;

	t34 = (((x153|x154)&x155)-x156);

	if (t34 != -7) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = INT32_MAX;
	int8_t x158 = INT8_MIN;
	int32_t x159 = 404443;
	int16_t x160 = -14;
	int32_t t35 = -875603;

	t35 = (((x157|x158)&x159)-x160);

	if (t35 != 404457) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = INT16_MIN;
	int32_t x162 = INT32_MIN;
	uint32_t x163 = 1033U;

	t36 = (((x161|x162)&x163)-x164);

	if (t36 != -4LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x166 = 1;
	uint32_t x167 = 1170322900U;
	int8_t x168 = INT8_MIN;
	uint32_t t37 = 18305U;

	t37 = (((x165|x166)&x167)-x168);

	if (t37 != 148U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x169 = 1U;
	int32_t x170 = INT32_MIN;
	uint16_t x171 = UINT16_MAX;
	static int8_t x172 = INT8_MIN;
	volatile int32_t t38 = -4342449;

	t38 = (((x169|x170)&x171)-x172);

	if (t38 != 129) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x173 = INT8_MIN;
	uint8_t x174 = UINT8_MAX;
	uint16_t x176 = 814U;
	uint64_t t39 = 13935803478345LLU;

	t39 = (((x173|x174)&x175)-x176);

	if (t39 != 18446744073709550801LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x177 = INT8_MAX;
	int8_t x178 = INT8_MIN;
	int64_t x179 = INT64_MAX;
	static int8_t x180 = INT8_MAX;
	static int64_t t40 = -318020725238LL;

	t40 = (((x177|x178)&x179)-x180);

	if (t40 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = INT32_MAX;
	uint8_t x182 = 1U;
	uint64_t x184 = UINT64_MAX;
	volatile uint64_t t41 = 550840076045382LLU;

	t41 = (((x181|x182)&x183)-x184);

	if (t41 != 2147483648LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = INT8_MIN;
	int16_t x187 = INT16_MIN;
	int16_t x188 = INT16_MIN;
	static volatile uint32_t t42 = 0U;

	t42 = (((x185|x186)&x187)-x188);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x189 = 214487235702999576LLU;
	static uint64_t t43 = 9015402LLU;

	t43 = (((x189|x190)&x191)-x192);

	if (t43 != 214487235702999649LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x193 = INT32_MIN;
	uint8_t x194 = UINT8_MAX;
	int8_t x195 = 0;
	int32_t x196 = 4336;
	int32_t t44 = 49;

	t44 = (((x193|x194)&x195)-x196);

	if (t44 != -4336) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x198 = UINT16_MAX;
	volatile int64_t x199 = INT64_MIN;
	uint64_t x200 = 3435839784LLU;
	uint64_t t45 = 421511974011078LLU;

	t45 = (((x197|x198)&x199)-x200);

	if (t45 != 9223372033418936024LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x201 = 87U;
	int8_t x202 = -1;
	static uint64_t x203 = 139538154LLU;
	int8_t x204 = -1;
	volatile uint64_t t46 = 203LLU;

	t46 = (((x201|x202)&x203)-x204);

	if (t46 != 139538155LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x205 = INT16_MIN;
	int8_t x206 = INT8_MAX;
	static volatile int16_t x207 = INT16_MIN;
	volatile uint32_t t47 = 65U;

	t47 = (((x205|x206)&x207)-x208);

	if (t47 != 4294695615U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x209 = INT64_MIN;
	static int32_t x210 = INT32_MIN;
	uint16_t x211 = UINT16_MAX;
	int32_t x212 = 6354;

	t48 = (((x209|x210)&x211)-x212);

	if (t48 != -6354LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x214 = INT64_MIN;
	int8_t x216 = -1;
	volatile int64_t t49 = -55527LL;

	t49 = (((x213|x214)&x215)-x216);

	if (t49 != -2147483647LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x217 = 83612483U;
	uint16_t x219 = 3378U;
	int8_t x220 = INT8_MAX;
	static volatile int64_t t50 = -11819596794LL;

	t50 = (((x217|x218)&x219)-x220);

	if (t50 != 131LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x225 = INT32_MAX;
	int16_t x226 = -1;
	int16_t x227 = -7;
	volatile int16_t x228 = -1;
	volatile int32_t t51 = 3;

	t51 = (((x225|x226)&x227)-x228);

	if (t51 != -6) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x229 = INT32_MAX;
	static int16_t x230 = INT16_MAX;
	volatile int64_t x231 = -815578391LL;
	volatile uint32_t x232 = UINT32_MAX;

	t52 = (((x229|x230)&x231)-x232);

	if (t52 != -2963062038LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x234 = UINT16_MAX;
	uint8_t x236 = 12U;

	t53 = (((x233|x234)&x235)-x236);

	if (t53 != -15) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x237 = 519LLU;
	int32_t x239 = INT32_MIN;
	static uint32_t x240 = UINT32_MAX;
	uint64_t t54 = 0LLU;

	t54 = (((x237|x238)&x239)-x240);

	if (t54 != 18446744067267100673LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = INT32_MIN;
	uint32_t x242 = 384272738U;
	volatile int64_t x244 = -1LL;
	static int64_t t55 = 6LL;

	t55 = (((x241|x242)&x243)-x244);

	if (t55 != 35LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x247 = -1;
	int64_t x248 = 1133039228279LL;
	int64_t t56 = -56670942487192LL;

	t56 = (((x245|x246)&x247)-x248);

	if (t56 != -1133039261047LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x249 = INT16_MIN;
	int16_t x250 = INT16_MAX;
	int64_t x251 = 488882093123983343LL;
	int16_t x252 = -1;

	t57 = (((x249|x250)&x251)-x252);

	if (t57 != 488882093123983344LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x253 = INT64_MIN;
	int64_t x254 = -43132510799LL;
	volatile uint64_t x255 = 193LLU;
	uint16_t x256 = 0U;
	volatile uint64_t t58 = 7LLU;

	t58 = (((x253|x254)&x255)-x256);

	if (t58 != 129LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x258 = -4;
	int64_t x259 = INT64_MAX;
	int32_t x260 = -1;
	int64_t t59 = -3744157598479871LL;

	t59 = (((x257|x258)&x259)-x260);

	if (t59 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x261 = INT16_MAX;
	int32_t x262 = INT32_MAX;
	static uint16_t x263 = UINT16_MAX;
	static volatile int64_t x264 = -1LL;
	static volatile int64_t t60 = 13793945280894404LL;

	t60 = (((x261|x262)&x263)-x264);

	if (t60 != 65536LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x265 = INT8_MIN;
	int64_t x267 = INT64_MIN;
	int16_t x268 = -219;
	int64_t t61 = -4100844LL;

	t61 = (((x265|x266)&x267)-x268);

	if (t61 != -9223372036854775589LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x269 = INT16_MAX;
	int64_t x272 = INT64_MAX;
	int64_t t62 = -2394806LL;

	t62 = (((x269|x270)&x271)-x272);

	if (t62 != -9223372036854774020LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x273 = UINT32_MAX;
	int32_t x274 = 8;
	volatile int8_t x275 = INT8_MAX;
	uint16_t x276 = UINT16_MAX;
	uint32_t t63 = 84420U;

	t63 = (((x273|x274)&x275)-x276);

	if (t63 != 4294901888U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x277 = 20879LLU;
	int8_t x279 = INT8_MIN;
	int16_t x280 = INT16_MAX;

	t64 = (((x277|x278)&x279)-x280);

	if (t64 != 18446744071562056065LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x281 = 41952580LLU;
	uint8_t x282 = 15U;
	volatile uint32_t x283 = UINT32_MAX;
	static int32_t x284 = 199141;

	t65 = (((x281|x282)&x283)-x284);

	if (t65 != 41753450LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x285 = 28768196318LLU;
	int64_t x288 = INT64_MIN;
	volatile uint64_t t66 = 2312331852274628LLU;

	t66 = (((x285|x286)&x287)-x288);

	if (t66 != 9223372036854765266LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x291 = INT32_MIN;
	int32_t x292 = -1;
	volatile int64_t t67 = 87353174666411LL;

	t67 = (((x289|x290)&x291)-x292);

	if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x293 = 2U;
	int16_t x294 = INT16_MIN;
	uint64_t x296 = 9021LLU;

	t68 = (((x293|x294)&x295)-x296);

	if (t68 != 18446744073709509827LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x301 = INT64_MIN;
	int16_t x302 = INT16_MIN;
	int16_t x303 = -1;
	static volatile int64_t t69 = -35607278364629LL;

	t69 = (((x301|x302)&x303)-x304);

	if (t69 != -32767LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x305 = 15067U;
	int64_t x306 = INT64_MIN;
	static int64_t x307 = 444LL;
	static volatile int64_t t70 = -50758944910881LL;

	t70 = (((x305|x306)&x307)-x308);

	if (t70 != -43737056LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x309 = UINT64_MAX;
	int64_t x310 = INT64_MAX;
	static volatile int16_t x311 = INT16_MIN;
	static int8_t x312 = -1;
	volatile uint64_t t71 = 4LLU;

	t71 = (((x309|x310)&x311)-x312);

	if (t71 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x314 = 35887210553LLU;
	uint64_t x315 = UINT64_MAX;
	volatile int8_t x316 = INT8_MIN;
	volatile uint64_t t72 = 13077461740843246LLU;

	t72 = (((x313|x314)&x315)-x316);

	if (t72 != 35894587963LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x317 = INT16_MIN;
	static volatile uint16_t x318 = 7U;
	int64_t x319 = -1LL;
	int32_t x320 = INT32_MIN;
	volatile int64_t t73 = 60863LL;

	t73 = (((x317|x318)&x319)-x320);

	if (t73 != 2147450887LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x325 = INT16_MIN;
	volatile int64_t x326 = INT64_MIN;
	int64_t x327 = -1LL;
	uint32_t x328 = UINT32_MAX;

	t74 = (((x325|x326)&x327)-x328);

	if (t74 != -4295000063LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x329 = -2007;
	int8_t x330 = INT8_MIN;
	int64_t x331 = -1LL;
	static int64_t x332 = INT64_MIN;

	t75 = (((x329|x330)&x331)-x332);

	if (t75 != 9223372036854775721LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x334 = -1LL;
	int64_t x335 = -1LL;
	int16_t x336 = -1;
	static volatile int64_t t76 = -2LL;

	t76 = (((x333|x334)&x335)-x336);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x337 = 42;
	uint8_t x338 = 125U;
	uint32_t x339 = UINT32_MAX;
	static int64_t x340 = -1LL;
	static volatile int64_t t77 = 5653LL;

	t77 = (((x337|x338)&x339)-x340);

	if (t77 != 128LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x342 = 160U;
	int64_t x343 = INT64_MIN;
	volatile uint32_t x344 = 6442331U;
	volatile int64_t t78 = -899697231237967787LL;

	t78 = (((x341|x342)&x343)-x344);

	if (t78 != -6442331LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x346 = 17;
	volatile int8_t x347 = -42;
	uint64_t x348 = 669269630735LLU;
	uint64_t t79 = 52582LLU;

	t79 = (((x345|x346)&x347)-x348);

	if (t79 != 18446743404439920839LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x349 = INT32_MIN;
	int64_t x350 = -25559546488017656LL;
	uint8_t x352 = UINT8_MAX;
	volatile uint64_t t80 = 1249LLU;

	t80 = (((x349|x350)&x351)-x352);

	if (t80 != 18446744073021041673LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x353 = -116378171883LL;
	uint16_t x355 = 1U;

	t81 = (((x353|x354)&x355)-x356);

	if (t81 != 2LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x357 = -1;
	int32_t x358 = INT32_MIN;
	static uint16_t x359 = 4323U;
	int32_t t82 = 0;

	t82 = (((x357|x358)&x359)-x360);

	if (t82 != 4451) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x361 = 2U;
	int16_t x362 = INT16_MIN;
	volatile int16_t x363 = -1;
	int16_t x364 = INT16_MAX;
	volatile uint32_t t83 = 35575961U;

	t83 = (((x361|x362)&x363)-x364);

	if (t83 != 4294901763U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x365 = INT16_MIN;
	int64_t x366 = INT64_MIN;
	static int16_t x367 = INT16_MIN;
	volatile uint32_t x368 = 535449622U;
	volatile int64_t t84 = 4204833688442341125LL;

	t84 = (((x365|x366)&x367)-x368);

	if (t84 != -535482390LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x369 = 108674279LLU;
	uint64_t x371 = 410917635761LLU;
	uint64_t x372 = 792LLU;

	t85 = (((x369|x370)&x371)-x372);

	if (t85 != 410917634953LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x373 = INT32_MIN;
	volatile uint16_t x374 = 1U;
	int16_t x375 = INT16_MAX;
	int32_t t86 = -6796;

	t86 = (((x373|x374)&x375)-x376);

	if (t86 != -5) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x377 = 69LLU;
	static volatile int16_t x378 = INT16_MAX;
	int16_t x380 = -833;
	static uint64_t t87 = 26881552285977750LLU;

	t87 = (((x377|x378)&x379)-x380);

	if (t87 != 33473LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x382 = INT16_MIN;
	uint16_t x383 = UINT16_MAX;
	volatile uint8_t x384 = UINT8_MAX;
	volatile int64_t t88 = -1120425397414913LL;

	t88 = (((x381|x382)&x383)-x384);

	if (t88 != 65280LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x386 = 1;
	static int8_t x387 = -6;
	static int64_t x388 = 1102688137613LL;
	int64_t t89 = -651784762744LL;

	t89 = (((x385|x386)&x387)-x388);

	if (t89 != -1102688134565LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x389 = 112U;
	uint8_t x391 = 3U;
	static int32_t t90 = 0;

	t90 = (((x389|x390)&x391)-x392);

	if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x393 = UINT32_MAX;
	static int32_t x394 = INT32_MAX;
	int16_t x395 = 497;
	uint64_t x396 = 104LLU;

	t91 = (((x393|x394)&x395)-x396);

	if (t91 != 393LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x397 = INT16_MAX;
	uint16_t x398 = UINT16_MAX;
	int64_t x399 = 0LL;
	uint16_t x400 = 1U;
	int64_t t92 = -872796268541006LL;

	t92 = (((x397|x398)&x399)-x400);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x401 = 23U;
	volatile uint64_t x402 = 3919452900181447849LLU;
	int32_t x403 = 10123431;
	static uint16_t x404 = 2335U;
	uint64_t t93 = 270114LLU;

	t93 = (((x401|x402)&x403)-x404);

	if (t93 != 1050504LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x406 = 3U;
	int16_t x407 = INT16_MAX;
	static uint64_t x408 = 1900745998809677LLU;
	volatile uint64_t t94 = 59737LLU;

	t94 = (((x405|x406)&x407)-x408);

	if (t94 != 18444843327710744978LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x409 = 2;
	volatile int8_t x412 = -1;

	t95 = (((x409|x410)&x411)-x412);

	if (t95 != 3LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x413 = INT16_MIN;
	uint8_t x414 = UINT8_MAX;
	static int8_t x415 = -1;
	int8_t x416 = INT8_MIN;

	t96 = (((x413|x414)&x415)-x416);

	if (t96 != -32385) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x419 = 3U;
	int64_t x420 = -1LL;
	volatile int64_t t97 = 289039091252194689LL;

	t97 = (((x417|x418)&x419)-x420);

	if (t97 != 4LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x421 = 22U;
	uint16_t x423 = UINT16_MAX;
	int16_t x424 = INT16_MIN;
	uint64_t t98 = 170928482325283LLU;

	t98 = (((x421|x422)&x423)-x424);

	if (t98 != 33302LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x425 = 1U;
	int32_t x426 = INT32_MAX;
	int32_t x427 = -1;
	int16_t x428 = 631;

	t99 = (((x425|x426)&x427)-x428);

	if (t99 != 2147483016) { NG(); } else { ; }
	
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

