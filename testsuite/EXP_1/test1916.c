#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
int32_t x12 = -190028;
volatile int8_t x16 = -12;
uint32_t t3 = 14U;
uint16_t x22 = 27451U;
int64_t t6 = 155335314LL;
static int32_t x37 = INT32_MAX;
uint64_t x45 = 3031127245416187LLU;
uint32_t x46 = UINT32_MAX;
int8_t x51 = INT8_MAX;
int64_t x62 = -1LL;
int16_t x65 = INT16_MAX;
int64_t x66 = -98723173776LL;
int8_t x80 = INT8_MIN;
static volatile int64_t t20 = 4731550238LL;
volatile int64_t t21 = 9161838138265006LL;
uint16_t x94 = UINT16_MAX;
volatile int16_t x95 = INT16_MIN;
int16_t x98 = 121;
int32_t x104 = INT32_MAX;
uint16_t x106 = 1950U;
volatile int64_t t25 = -437860669LL;
static uint8_t x110 = 38U;
int8_t x113 = 44;
static uint8_t x120 = UINT8_MAX;
int8_t x122 = -1;
volatile int64_t t29 = 27064182645LL;
volatile int8_t x126 = INT8_MIN;
uint16_t x130 = 1U;
volatile int16_t x139 = 3844;
int32_t x145 = INT32_MIN;
static int16_t x149 = -1;
volatile int64_t t38 = 936489061LL;
volatile int64_t x162 = 1263053012251LL;
int64_t t39 = 32356LL;
volatile int8_t x166 = 7;
static int64_t t40 = -29667274703LL;
int8_t x174 = INT8_MAX;
int16_t x175 = INT16_MAX;
int64_t x180 = INT64_MAX;
volatile int16_t x182 = -4073;
int16_t x188 = 3;
int8_t x189 = -1;
static uint8_t x194 = UINT8_MAX;
static uint8_t x195 = UINT8_MAX;
int64_t x197 = -890LL;
static int32_t x209 = INT32_MAX;
volatile int32_t t51 = -21395692;
volatile uint8_t x217 = 11U;
static int16_t x219 = INT16_MAX;
volatile uint64_t x222 = 113321635LLU;
int8_t x223 = INT8_MIN;
int32_t x224 = INT32_MIN;
volatile int32_t t54 = 299;
int8_t x229 = -1;
volatile uint64_t t55 = 8199627030LLU;
static volatile int16_t x243 = -1;
static int64_t x245 = INT64_MIN;
static int32_t x247 = 442256;
static volatile int64_t t59 = -37519442LL;
uint8_t x249 = UINT8_MAX;
static volatile uint64_t x259 = 6759660LLU;
uint64_t t61 = 861281464751LLU;
int64_t x266 = INT64_MAX;
int16_t x267 = -1;
static int64_t x276 = -1LL;
uint16_t x284 = UINT16_MAX;
int64_t x285 = INT64_MIN;
int8_t x286 = INT8_MAX;
uint32_t x288 = 43694U;
volatile uint32_t x297 = UINT32_MAX;
volatile int64_t x302 = INT64_MIN;
int16_t x304 = INT16_MAX;
int64_t x307 = INT64_MIN;
int16_t x311 = INT16_MAX;
volatile int32_t x314 = -2;
int64_t x326 = -760LL;
static uint64_t x327 = 258518640366LLU;
uint64_t x331 = 22LLU;
int16_t x333 = -1;
uint16_t x346 = UINT16_MAX;
static int8_t x350 = INT8_MIN;
volatile int8_t x354 = INT8_MIN;
static int32_t x360 = INT32_MIN;
uint32_t x364 = UINT32_MAX;
volatile int64_t t86 = -66384646570070922LL;
int16_t x368 = -1;
static volatile uint32_t x375 = UINT32_MAX;
int64_t x379 = INT64_MAX;
int8_t x380 = INT8_MIN;
int16_t x384 = -1;
int32_t x388 = INT32_MAX;
static int16_t x391 = -1;
static uint32_t x399 = 1U;
volatile uint64_t t95 = 1964467363863553851LLU;
static int8_t x401 = INT8_MIN;
volatile int64_t t97 = -9LL;
int8_t x414 = -1;
static int32_t x415 = -1;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	uint8_t x3 = UINT8_MAX;
	int32_t x4 = -1;
	int32_t t0 = 10845;

	t0 = (((x1|x2)%x3)%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -7515LL;
	int32_t x6 = 1733585;
	uint8_t x7 = UINT8_MAX;
	static uint64_t x8 = UINT64_MAX;
	volatile uint64_t t1 = 338LLU;

	t1 = (((x5|x6)%x7)%x8);

	if (t1 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 6025;
	volatile int64_t x10 = 273525213475008LL;
	uint8_t x11 = 12U;
	volatile int64_t t2 = -933543810219250LL;

	t2 = (((x9|x10)%x11)%x12);

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 40U;
	int32_t x14 = 14;
	static int32_t x15 = -1;

	t3 = (((x13|x14)%x15)%x16);

	if (t3 != 46U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	uint8_t x18 = 12U;
	volatile int64_t x19 = -6957924LL;
	uint32_t x20 = UINT32_MAX;
	static volatile int64_t t4 = 34969513LL;

	t4 = (((x17|x18)%x19)%x20);

	if (t4 != 255LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = INT64_MAX;
	volatile uint64_t x23 = 7559671693869477LLU;
	volatile int8_t x24 = 31;
	uint64_t t5 = 3276674LLU;

	t5 = (((x21|x22)%x23)%x24);

	if (t5 != 27LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	int64_t x26 = INT64_MAX;
	int8_t x27 = INT8_MAX;
	int8_t x28 = INT8_MIN;

	t6 = (((x25|x26)%x27)%x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	int8_t x30 = -1;
	int64_t x31 = -81583050155604LL;
	uint16_t x32 = UINT16_MAX;
	volatile int64_t t7 = 2806398515104LL;

	t7 = (((x29|x30)%x31)%x32);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = 999;
	int8_t x34 = INT8_MIN;
	uint32_t x35 = 2U;
	int32_t x36 = INT32_MAX;
	uint32_t t8 = 1750612555U;

	t8 = (((x33|x34)%x35)%x36);

	if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x38 = 1439964LLU;
	uint16_t x39 = 711U;
	volatile uint16_t x40 = 2156U;
	volatile uint64_t t9 = 0LLU;

	t9 = (((x37|x38)%x39)%x40);

	if (t9 != 577LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int16_t x42 = 4040;
	volatile uint64_t x43 = 5507415102195LLU;
	int64_t x44 = 341199843344685LL;
	static volatile uint64_t t10 = 130214337058LLU;

	t10 = (((x41|x42)%x43)%x44);

	if (t10 != 4156058837345LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x47 = UINT16_MAX;
	int8_t x48 = INT8_MAX;
	static uint64_t t11 = 2180836218372789596LLU;

	t11 = (((x45|x46)%x47)%x48);

	if (t11 != 97LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	uint64_t x50 = 104522425632108LLU;
	uint8_t x52 = 2U;
	uint64_t t12 = 44141071109LLU;

	t12 = (((x49|x50)%x51)%x52);

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MIN;
	volatile int16_t x58 = -1;
	static volatile int8_t x59 = -43;
	int64_t x60 = INT64_MIN;
	int64_t t13 = -345447366380580912LL;

	t13 = (((x57|x58)%x59)%x60);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = -1;
	volatile int64_t x63 = INT64_MAX;
	int32_t x64 = INT32_MAX;
	static volatile int64_t t14 = -18182399LL;

	t14 = (((x61|x62)%x63)%x64);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x67 = -1LL;
	int8_t x68 = 38;
	int64_t t15 = 2202076198LL;

	t15 = (((x65|x66)%x67)%x68);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = -250660LL;
	int16_t x70 = INT16_MIN;
	uint16_t x71 = 230U;
	uint32_t x72 = UINT32_MAX;
	int64_t t16 = 948714932LL;

	t16 = (((x69|x70)%x71)%x72);

	if (t16 != -124LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = 336;
	static volatile uint32_t x74 = UINT32_MAX;
	int64_t x75 = INT64_MAX;
	int32_t x76 = INT32_MIN;
	int64_t t17 = 31966807LL;

	t17 = (((x73|x74)%x75)%x76);

	if (t17 != 2147483647LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -20LL;
	uint16_t x78 = 298U;
	int16_t x79 = 15;
	int64_t t18 = 52508912666LL;

	t18 = (((x77|x78)%x79)%x80);

	if (t18 != -3LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = -2LL;
	static int32_t x82 = -1;
	static int16_t x83 = INT16_MAX;
	int8_t x84 = INT8_MIN;
	static volatile int64_t t19 = 1364321206568578519LL;

	t19 = (((x81|x82)%x83)%x84);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = -2072344LL;
	static int64_t x86 = INT64_MIN;
	uint32_t x87 = 198U;
	int16_t x88 = INT16_MIN;

	t20 = (((x85|x86)%x87)%x88);

	if (t20 != -76LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = -2091339LL;
	volatile int16_t x90 = INT16_MIN;
	static uint32_t x91 = UINT32_MAX;
	static int32_t x92 = -1;

	t21 = (((x89|x90)%x91)%x92);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = -1LL;
	static int16_t x96 = INT16_MAX;
	volatile int64_t t22 = -2909780531737134LL;

	t22 = (((x93|x94)%x95)%x96);

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = UINT16_MAX;
	uint16_t x99 = 56U;
	uint32_t x100 = UINT32_MAX;
	static volatile uint32_t t23 = 2891U;

	t23 = (((x97|x98)%x99)%x100);

	if (t23 != 15U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MAX;
	uint64_t x102 = 825215805LLU;
	int64_t x103 = INT64_MIN;
	volatile uint64_t t24 = 44196LLU;

	t24 = (((x101|x102)%x103)%x104);

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = -2;
	int32_t x107 = INT32_MAX;
	static int64_t x108 = -83LL;

	t25 = (((x105|x106)%x107)%x108);

	if (t25 != -2LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x109 = INT32_MIN;
	uint32_t x111 = UINT32_MAX;
	int16_t x112 = INT16_MIN;
	volatile uint32_t t26 = 1025454U;

	t26 = (((x109|x110)%x111)%x112);

	if (t26 != 2147483686U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x114 = UINT32_MAX;
	static volatile int8_t x115 = INT8_MIN;
	uint16_t x116 = UINT16_MAX;
	volatile uint32_t t27 = 1456U;

	t27 = (((x113|x114)%x115)%x116);

	if (t27 != 127U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MAX;
	int16_t x118 = INT16_MAX;
	static volatile uint16_t x119 = 1360U;
	volatile int64_t t28 = 20722356587LL;

	t28 = (((x117|x118)%x119)%x120);

	if (t28 != 127LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x121 = 1127456721224290799LL;
	uint16_t x123 = UINT16_MAX;
	uint8_t x124 = UINT8_MAX;

	t29 = (((x121|x122)%x123)%x124);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x125 = INT64_MAX;
	int8_t x127 = -1;
	int16_t x128 = INT16_MIN;
	int64_t t30 = -469410035454416130LL;

	t30 = (((x125|x126)%x127)%x128);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = INT16_MAX;
	static uint64_t x131 = 66382829469367LLU;
	uint32_t x132 = 3164U;
	static uint64_t t31 = 8389LLU;

	t31 = (((x129|x130)%x131)%x132);

	if (t31 != 1127LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x133 = 1;
	int8_t x134 = INT8_MIN;
	static int16_t x135 = INT16_MIN;
	int32_t x136 = INT32_MIN;
	int32_t t32 = -12903;

	t32 = (((x133|x134)%x135)%x136);

	if (t32 != -127) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x137 = INT8_MIN;
	int64_t x138 = INT64_MIN;
	uint32_t x140 = 61252016U;
	int64_t t33 = 11641717317LL;

	t33 = (((x137|x138)%x139)%x140);

	if (t33 != -128LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x141 = 1426237054U;
	int8_t x142 = INT8_MAX;
	volatile int16_t x143 = -1;
	volatile int16_t x144 = INT16_MIN;
	volatile uint32_t t34 = 329959U;

	t34 = (((x141|x142)%x143)%x144);

	if (t34 != 1426237055U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x146 = INT16_MIN;
	static uint64_t x147 = UINT64_MAX;
	int8_t x148 = INT8_MIN;
	uint64_t t35 = 239952366672001182LLU;

	t35 = (((x145|x146)%x147)%x148);

	if (t35 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x150 = 6106189LL;
	int16_t x151 = 4;
	uint16_t x152 = 5016U;
	volatile int64_t t36 = -1LL;

	t36 = (((x149|x150)%x151)%x152);

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = -1LL;
	uint64_t x154 = 456LLU;
	volatile int8_t x155 = -1;
	int64_t x156 = INT64_MAX;
	uint64_t t37 = 31364454567188849LLU;

	t37 = (((x153|x154)%x155)%x156);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = -1;
	uint16_t x158 = UINT16_MAX;
	volatile int64_t x159 = -3744LL;
	volatile uint32_t x160 = 4U;

	t38 = (((x157|x158)%x159)%x160);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = INT16_MIN;
	static uint32_t x163 = UINT32_MAX;
	volatile uint32_t x164 = 13596696U;

	t39 = (((x161|x162)%x163)%x164);

	if (t39 != -741LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = INT64_MAX;
	uint8_t x167 = 1U;
	int32_t x168 = 116;

	t40 = (((x165|x166)%x167)%x168);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x169 = INT32_MIN;
	uint8_t x170 = UINT8_MAX;
	volatile uint16_t x171 = 11612U;
	int8_t x172 = INT8_MAX;
	int32_t t41 = 158240;

	t41 = (((x169|x170)%x171)%x172);

	if (t41 != -84) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = INT32_MIN;
	int16_t x176 = 112;
	static volatile int32_t t42 = 416185289;

	t42 = (((x173|x174)%x175)%x176);

	if (t42 != -50) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x177 = INT32_MAX;
	volatile uint32_t x178 = 200428U;
	uint8_t x179 = 1U;
	volatile int64_t t43 = -411132829767LL;

	t43 = (((x177|x178)%x179)%x180);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = INT8_MAX;
	int8_t x183 = INT8_MIN;
	int64_t x184 = -16145538196637LL;
	volatile int64_t t44 = -2223380548255244LL;

	t44 = (((x181|x182)%x183)%x184);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x185 = INT64_MIN;
	volatile uint8_t x186 = UINT8_MAX;
	uint32_t x187 = 83638832U;
	int64_t t45 = -22679151315515460LL;

	t45 = (((x185|x186)%x187)%x188);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x190 = INT64_MIN;
	int8_t x191 = INT8_MIN;
	static volatile uint16_t x192 = UINT16_MAX;
	int64_t t46 = 186693517375445238LL;

	t46 = (((x189|x190)%x191)%x192);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = INT32_MAX;
	int8_t x196 = INT8_MIN;
	int32_t t47 = 234448;

	t47 = (((x193|x194)%x195)%x196);

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x198 = INT32_MIN;
	int8_t x199 = -3;
	uint64_t x200 = 17469813916844651LLU;
	static volatile uint64_t t48 = 9340866713LLU;

	t48 = (((x197|x198)%x199)%x200);

	if (t48 != 16090391438444809LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = -1;
	static int32_t x202 = INT32_MIN;
	int32_t x203 = 474240;
	int16_t x204 = 15769;
	int32_t t49 = 52240;

	t49 = (((x201|x202)%x203)%x204);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = -1;
	int16_t x206 = INT16_MIN;
	uint32_t x207 = UINT32_MAX;
	static int32_t x208 = INT32_MIN;
	uint32_t t50 = 58U;

	t50 = (((x205|x206)%x207)%x208);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x210 = UINT16_MAX;
	int16_t x211 = INT16_MIN;
	static int8_t x212 = INT8_MIN;

	t51 = (((x209|x210)%x211)%x212);

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x218 = -2;
	static volatile uint32_t x220 = UINT32_MAX;
	uint32_t t52 = 10859U;

	t52 = (((x217|x218)%x219)%x220);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = -1;
	uint64_t t53 = 16128049231974627LLU;

	t53 = (((x221|x222)%x223)%x224);

	if (t53 != 127LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x225 = 79U;
	static int16_t x226 = INT16_MAX;
	int32_t x227 = INT32_MIN;
	int16_t x228 = -82;

	t54 = (((x225|x226)%x227)%x228);

	if (t54 != 49) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x230 = 2199064179277693LLU;
	int16_t x231 = -1858;
	static int64_t x232 = INT64_MIN;

	t55 = (((x229|x230)%x231)%x232);

	if (t55 != 1857LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x233 = 256;
	uint64_t x234 = 1005238145472LLU;
	uint64_t x235 = 14419628LLU;
	int16_t x236 = INT16_MIN;
	uint64_t t56 = 5312831730490LLU;

	t56 = (((x233|x234)%x235)%x236);

	if (t56 != 2618708LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = 24;
	static int64_t x238 = INT64_MAX;
	static volatile int16_t x239 = INT16_MIN;
	uint8_t x240 = 51U;
	int64_t t57 = 2228488LL;

	t57 = (((x237|x238)%x239)%x240);

	if (t57 != 25LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x241 = 13U;
	static uint8_t x242 = UINT8_MAX;
	int32_t x244 = 5961992;
	static volatile int32_t t58 = -328146;

	t58 = (((x241|x242)%x243)%x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x246 = INT16_MIN;
	int16_t x248 = INT16_MIN;

	t59 = (((x245|x246)%x247)%x248);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x250 = INT8_MIN;
	static int16_t x251 = 96;
	uint64_t x252 = 139087LLU;
	volatile uint64_t t60 = 97LLU;

	t60 = (((x249|x250)%x251)%x252);

	if (t60 != 21387LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = INT32_MIN;
	static int16_t x258 = INT16_MAX;
	static int64_t x260 = -249896777LL;

	t61 = (((x257|x258)%x259)%x260);

	if (t61 != 3931515LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x261 = UINT64_MAX;
	int32_t x262 = -1;
	int8_t x263 = -29;
	static uint8_t x264 = UINT8_MAX;
	uint64_t t62 = 6545894178LLU;

	t62 = (((x261|x262)%x263)%x264);

	if (t62 != 28LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x265 = 18311U;
	static int16_t x268 = 31;
	int64_t t63 = -4122104LL;

	t63 = (((x265|x266)%x267)%x268);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x269 = INT32_MIN;
	int32_t x270 = INT32_MIN;
	int16_t x271 = 18;
	uint16_t x272 = 12790U;
	volatile int32_t t64 = -187296;

	t64 = (((x269|x270)%x271)%x272);

	if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x273 = UINT16_MAX;
	uint8_t x274 = UINT8_MAX;
	uint16_t x275 = 6861U;
	int64_t t65 = 4488977LL;

	t65 = (((x273|x274)%x275)%x276);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x277 = INT32_MAX;
	int32_t x278 = INT32_MIN;
	uint32_t x279 = UINT32_MAX;
	int16_t x280 = 14;
	uint32_t t66 = 2769U;

	t66 = (((x277|x278)%x279)%x280);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x281 = UINT16_MAX;
	static int64_t x282 = INT64_MAX;
	int8_t x283 = -2;
	int64_t t67 = 55018356LL;

	t67 = (((x281|x282)%x283)%x284);

	if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x287 = -1;
	volatile int64_t t68 = 939578241143025083LL;

	t68 = (((x285|x286)%x287)%x288);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x289 = UINT64_MAX;
	int16_t x290 = -1;
	int8_t x291 = -1;
	int32_t x292 = INT32_MIN;
	volatile uint64_t t69 = 85850716290LLU;

	t69 = (((x289|x290)%x291)%x292);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x293 = INT64_MAX;
	int16_t x294 = -1;
	uint64_t x295 = 10246158208LLU;
	int32_t x296 = INT32_MIN;
	volatile uint64_t t70 = 195191372LLU;

	t70 = (((x293|x294)%x295)%x296);

	if (t70 != 6859462911LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x298 = INT32_MIN;
	static int8_t x299 = -35;
	volatile uint8_t x300 = 2U;
	volatile uint32_t t71 = 27470051U;

	t71 = (((x297|x298)%x299)%x300);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x301 = 8U;
	int8_t x303 = INT8_MIN;
	volatile int64_t t72 = 335LL;

	t72 = (((x301|x302)%x303)%x304);

	if (t72 != -120LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x305 = 689414358634028763LLU;
	int16_t x306 = INT16_MIN;
	uint64_t x308 = UINT64_MAX;
	static uint64_t t73 = 22966592279493696LLU;

	t73 = (((x305|x306)%x307)%x308);

	if (t73 != 9223372036854767323LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x309 = INT8_MIN;
	volatile int64_t x310 = INT64_MIN;
	uint32_t x312 = 21195840U;
	int64_t t74 = -15228129LL;

	t74 = (((x309|x310)%x311)%x312);

	if (t74 != -128LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x313 = 15038605207LLU;
	int64_t x315 = INT64_MIN;
	uint16_t x316 = UINT16_MAX;
	uint64_t t75 = 19946006506LLU;

	t75 = (((x313|x314)%x315)%x316);

	if (t75 != 32767LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x317 = 2872;
	int32_t x318 = -1;
	volatile int32_t x319 = INT32_MIN;
	uint64_t x320 = UINT64_MAX;
	uint64_t t76 = 72253LLU;

	t76 = (((x317|x318)%x319)%x320);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x321 = 23298LLU;
	int8_t x322 = -1;
	static int8_t x323 = -1;
	int8_t x324 = -1;
	volatile uint64_t t77 = 6248017135597380904LLU;

	t77 = (((x321|x322)%x323)%x324);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x325 = UINT64_MAX;
	volatile int32_t x328 = INT32_MIN;
	uint64_t t78 = 2559594LLU;

	t78 = (((x325|x326)%x327)%x328);

	if (t78 != 168843174459LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x329 = 2384U;
	int32_t x330 = -1;
	int64_t x332 = INT64_MAX;
	volatile uint64_t t79 = 354834LLU;

	t79 = (((x329|x330)%x331)%x332);

	if (t79 != 15LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x334 = -1320;
	int64_t x335 = INT64_MIN;
	int16_t x336 = INT16_MIN;
	int64_t t80 = 18278891282827LL;

	t80 = (((x333|x334)%x335)%x336);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x337 = 25U;
	uint8_t x338 = 11U;
	static int64_t x339 = INT64_MIN;
	int64_t x340 = -133771183LL;
	int64_t t81 = 46879257997LL;

	t81 = (((x337|x338)%x339)%x340);

	if (t81 != 27LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x345 = INT8_MAX;
	int32_t x347 = -347932;
	static int64_t x348 = INT64_MIN;
	volatile int64_t t82 = 3811949421508198LL;

	t82 = (((x345|x346)%x347)%x348);

	if (t82 != 65535LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x349 = INT64_MAX;
	int16_t x351 = INT16_MIN;
	uint32_t x352 = UINT32_MAX;
	volatile int64_t t83 = 80731LL;

	t83 = (((x349|x350)%x351)%x352);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x353 = 121509862702769953LLU;
	static int16_t x355 = 45;
	int16_t x356 = INT16_MAX;
	volatile uint64_t t84 = 690360481LLU;

	t84 = (((x353|x354)%x355)%x356);

	if (t84 != 11LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x357 = 6U;
	int16_t x358 = 3079;
	static int16_t x359 = INT16_MIN;
	static volatile int32_t t85 = -30;

	t85 = (((x357|x358)%x359)%x360);

	if (t85 != 3079) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = -3675;
	uint32_t x362 = UINT32_MAX;
	int64_t x363 = 254097LL;

	t86 = (((x361|x362)%x363)%x364);

	if (t86 != 219801LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x365 = -1LL;
	volatile int32_t x366 = INT32_MIN;
	volatile int16_t x367 = INT16_MIN;
	volatile int64_t t87 = 244720426138177333LL;

	t87 = (((x365|x366)%x367)%x368);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = 5304;
	uint16_t x370 = 121U;
	static int64_t x371 = INT64_MIN;
	uint64_t x372 = 485LLU;
	uint64_t t88 = 945276429LLU;

	t88 = (((x369|x370)%x371)%x372);

	if (t88 != 34LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x373 = -499;
	uint64_t x374 = 0LLU;
	int32_t x376 = INT32_MAX;
	uint64_t t89 = 190608230691446995LLU;

	t89 = (((x373|x374)%x375)%x376);

	if (t89 != 2147483150LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x377 = -1;
	int64_t x378 = INT64_MAX;
	static int64_t t90 = -7969669591584534LL;

	t90 = (((x377|x378)%x379)%x380);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x381 = 1788LL;
	int64_t x382 = INT64_MIN;
	uint64_t x383 = 29797LLU;
	volatile uint64_t t91 = 267073385635231LLU;

	t91 = (((x381|x382)%x383)%x384);

	if (t91 != 6786LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x385 = 22884213928LLU;
	int64_t x386 = INT64_MIN;
	uint32_t x387 = 58227915U;
	volatile uint64_t t92 = 113552702LLU;

	t92 = (((x385|x386)%x387)%x388);

	if (t92 != 22750956LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x389 = INT8_MIN;
	int32_t x390 = -1;
	int64_t x392 = -1LL;
	static int64_t t93 = -63923959638977LL;

	t93 = (((x389|x390)%x391)%x392);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x393 = 30LLU;
	uint64_t x394 = UINT64_MAX;
	uint64_t x395 = UINT64_MAX;
	uint64_t x396 = 1270011LLU;
	volatile uint64_t t94 = 1770277853873077LLU;

	t94 = (((x393|x394)%x395)%x396);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x397 = UINT64_MAX;
	int64_t x398 = INT64_MIN;
	uint64_t x400 = 7450845918LLU;

	t95 = (((x397|x398)%x399)%x400);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x402 = 0;
	static volatile uint32_t x403 = 7802416U;
	int8_t x404 = -1;
	volatile uint32_t t96 = 3U;

	t96 = (((x401|x402)%x403)%x404);

	if (t96 != 3638368U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x405 = -1LL;
	static int64_t x406 = 59598377LL;
	int32_t x407 = INT32_MIN;
	int64_t x408 = INT64_MIN;

	t97 = (((x405|x406)%x407)%x408);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x409 = UINT16_MAX;
	int32_t x410 = 115262470;
	int32_t x411 = INT32_MIN;
	static volatile uint64_t x412 = 13978LLU;
	static uint64_t t98 = 89217343LLU;

	t98 = (((x409|x410)%x411)%x412);

	if (t98 != 1257LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x413 = -1;
	int32_t x416 = -1;
	static volatile int32_t t99 = -53843416;

	t99 = (((x413|x414)%x415)%x416);

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

