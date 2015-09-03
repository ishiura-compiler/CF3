#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MIN;
static int8_t x6 = -41;
int32_t t2 = 4187;
int8_t x15 = INT8_MIN;
int32_t t4 = -651025673;
uint8_t x29 = 22U;
int8_t x30 = INT8_MIN;
int16_t x31 = -9;
int16_t x44 = -1506;
int8_t x45 = INT8_MIN;
int32_t t11 = 662;
static volatile int32_t x52 = INT32_MIN;
int16_t x57 = -12;
static volatile int64_t x58 = -546575582LL;
int16_t x61 = INT16_MIN;
int32_t t16 = 6739;
volatile int8_t x70 = INT8_MIN;
static uint64_t x75 = 11133069LLU;
int16_t x76 = -687;
uint16_t x83 = 828U;
int32_t t20 = 270407;
volatile int32_t x86 = INT32_MAX;
uint32_t x87 = 283U;
static int32_t t21 = -76457438;
int16_t x102 = INT16_MIN;
int64_t x103 = -1LL;
int8_t x104 = INT8_MIN;
volatile int8_t x108 = 9;
volatile int32_t t26 = 65;
static int8_t x117 = 1;
int32_t t30 = -276808915;
volatile int8_t x125 = INT8_MIN;
int16_t x126 = 618;
static volatile int32_t t32 = 0;
static int8_t x140 = -1;
int8_t x143 = INT8_MAX;
uint64_t x148 = 83159LLU;
static int32_t t36 = -873;
volatile int64_t x149 = INT64_MIN;
uint16_t x160 = 14516U;
int8_t x162 = 1;
int32_t t40 = -31;
uint32_t x167 = 8U;
int8_t x168 = INT8_MIN;
uint32_t x176 = 7292785U;
static volatile uint16_t x180 = UINT16_MAX;
static int16_t x183 = INT16_MAX;
int16_t x194 = -496;
uint32_t x198 = 1U;
int16_t x209 = INT16_MIN;
volatile int32_t t53 = -28870705;
static int32_t x218 = INT32_MIN;
volatile int32_t t55 = 221;
int16_t x229 = INT16_MAX;
static uint64_t x230 = 242998550685924LLU;
static int8_t x240 = 54;
uint32_t x242 = 346814167U;
volatile int32_t t61 = 2514508;
uint8_t x253 = UINT8_MAX;
static int32_t x257 = INT32_MAX;
int32_t x265 = INT32_MIN;
int32_t x268 = INT32_MIN;
static int32_t x269 = -185;
uint32_t x273 = UINT32_MAX;
static int32_t t70 = 25;
static int16_t x288 = INT16_MIN;
uint32_t x293 = UINT32_MAX;
static int8_t x295 = INT8_MIN;
uint32_t x303 = 29873U;
int32_t x304 = 18;
volatile int32_t t77 = -196612;
static int8_t x314 = 13;
int16_t x321 = INT16_MIN;
volatile int32_t x323 = -1;
static volatile int32_t t80 = -53751;
int32_t t82 = -3882586;
static uint32_t x339 = 24796588U;
int16_t x341 = -1;
int64_t x342 = INT64_MAX;
static volatile int8_t x344 = 0;
static uint64_t x346 = 8795573464833525559LLU;
uint16_t x352 = 1645U;
uint8_t x355 = UINT8_MAX;
uint8_t x356 = UINT8_MAX;
uint8_t x360 = 9U;
volatile int32_t t91 = 3;
int16_t x371 = -1;
static volatile int64_t x374 = INT64_MIN;
static uint64_t x375 = 797449865335LLU;
int8_t x380 = -1;
static int64_t x391 = INT64_MIN;
volatile uint16_t x397 = UINT16_MAX;


void f0(void) {
	uint32_t x1 = 24014251U;
	int16_t x2 = -142;
	uint64_t x4 = 1960350478095210LLU;
	volatile int32_t t0 = 1;

	t0 = ((x1==(x2^x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 9250U;
	int64_t x7 = INT64_MIN;
	int8_t x8 = -1;
	int32_t t1 = 853793616;

	t1 = ((x5==(x6^x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int8_t x10 = -1;
	int8_t x11 = INT8_MIN;
	uint16_t x12 = 13U;

	t2 = ((x9==(x10^x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -1LL;
	uint64_t x14 = UINT64_MAX;
	uint16_t x16 = 19015U;
	int32_t t3 = 394470467;

	t3 = ((x13==(x14^x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = 20745U;
	int64_t x18 = INT64_MAX;
	static int32_t x19 = -1;
	int32_t x20 = INT32_MIN;

	t4 = ((x17==(x18^x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = INT64_MAX;
	static uint8_t x22 = 3U;
	int8_t x23 = INT8_MIN;
	uint16_t x24 = UINT16_MAX;
	int32_t t5 = -19;

	t5 = ((x21==(x22^x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 1;
	int16_t x26 = INT16_MAX;
	volatile uint32_t x27 = 25U;
	int32_t x28 = INT32_MIN;
	int32_t t6 = 1497;

	t6 = ((x25==(x26^x27))<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x32 = 22U;
	volatile int32_t t7 = 113502;

	t7 = ((x29==(x30^x31))<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = 15U;
	volatile int8_t x34 = INT8_MIN;
	int16_t x35 = -1;
	int16_t x36 = -121;
	static int32_t t8 = 1257288;

	t8 = ((x33==(x34^x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int64_t x38 = INT64_MIN;
	int32_t x39 = -1;
	int16_t x40 = INT16_MIN;
	volatile int32_t t9 = -114;

	t9 = ((x37==(x38^x39))<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MAX;
	int32_t x42 = INT32_MIN;
	int16_t x43 = INT16_MIN;
	volatile int32_t t10 = 1160572;

	t10 = ((x41==(x42^x43))<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x46 = INT16_MIN;
	int64_t x47 = 25865LL;
	volatile uint16_t x48 = 2U;

	t11 = ((x45==(x46^x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x49 = 3U;
	int16_t x50 = INT16_MIN;
	int8_t x51 = INT8_MIN;
	int32_t t12 = 188288686;

	t12 = ((x49==(x50^x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	int32_t x54 = 207952;
	volatile int16_t x55 = 18;
	int8_t x56 = -1;
	volatile int32_t t13 = -2013176;

	t13 = ((x53==(x54^x55))<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x59 = 97U;
	uint16_t x60 = UINT16_MAX;
	int32_t t14 = -120;

	t14 = ((x57==(x58^x59))<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x62 = UINT32_MAX;
	int16_t x63 = -1;
	static int8_t x64 = -4;
	int32_t t15 = -1;

	t15 = ((x61==(x62^x63))<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x65 = UINT8_MAX;
	int32_t x66 = INT32_MIN;
	int16_t x67 = INT16_MIN;
	int32_t x68 = INT32_MAX;

	t16 = ((x65==(x66^x67))<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x69 = -219654635;
	uint64_t x71 = 16193LLU;
	uint32_t x72 = UINT32_MAX;
	volatile int32_t t17 = -93;

	t17 = ((x69==(x70^x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = 3;
	int32_t x74 = INT32_MAX;
	static int32_t t18 = 1918;

	t18 = ((x73==(x74^x75))<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -173356LL;
	int64_t x78 = INT64_MIN;
	int8_t x79 = INT8_MIN;
	int8_t x80 = 55;
	int32_t t19 = -38524;

	t19 = ((x77==(x78^x79))<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x81 = 1121LLU;
	uint16_t x82 = 10U;
	uint32_t x84 = UINT32_MAX;

	t20 = ((x81==(x82^x83))<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	static int64_t x88 = INT64_MIN;

	t21 = ((x85==(x86^x87))<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = -1;
	uint8_t x90 = UINT8_MAX;
	uint32_t x91 = 804391U;
	uint16_t x92 = UINT16_MAX;
	int32_t t22 = 219226;

	t22 = ((x89==(x90^x91))<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x93 = INT16_MIN;
	uint8_t x94 = UINT8_MAX;
	static int16_t x95 = 35;
	uint64_t x96 = 8580655136LLU;
	volatile int32_t t23 = 48931653;

	t23 = ((x93==(x94^x95))<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = -553;
	uint16_t x98 = UINT16_MAX;
	volatile int8_t x99 = INT8_MIN;
	int64_t x100 = -1LL;
	volatile int32_t t24 = -73837997;

	t24 = ((x97==(x98^x99))<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 0;
	int32_t t25 = -309;

	t25 = ((x101==(x102^x103))<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 3439;
	uint64_t x106 = 48464992LLU;
	volatile uint64_t x107 = 237040806LLU;

	t26 = ((x105==(x106^x107))<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = INT8_MIN;
	uint16_t x110 = 17165U;
	uint32_t x111 = UINT32_MAX;
	uint32_t x112 = UINT32_MAX;
	int32_t t27 = -1591;

	t27 = ((x109==(x110^x111))<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MAX;
	int8_t x114 = -8;
	int8_t x115 = INT8_MIN;
	uint32_t x116 = 2U;
	static int32_t t28 = 834;

	t28 = ((x113==(x114^x115))<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x118 = 3U;
	int16_t x119 = -1;
	static int8_t x120 = 1;
	static volatile int32_t t29 = 50287204;

	t29 = ((x117==(x118^x119))<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	uint32_t x122 = 55U;
	uint32_t x123 = 57649U;
	static volatile uint16_t x124 = UINT16_MAX;

	t30 = ((x121==(x122^x123))<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x127 = INT16_MIN;
	static uint8_t x128 = 0U;
	int32_t t31 = -1824492;

	t31 = ((x125==(x126^x127))<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = -3LL;
	volatile int32_t x130 = INT32_MIN;
	static int16_t x131 = 3;
	int8_t x132 = -1;

	t32 = ((x129==(x130^x131))<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 1;
	int8_t x134 = INT8_MIN;
	uint8_t x135 = 24U;
	volatile uint32_t x136 = 163845U;
	volatile int32_t t33 = 567;

	t33 = ((x133==(x134^x135))<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 1U;
	static int32_t x138 = INT32_MIN;
	uint8_t x139 = 2U;
	int32_t t34 = -51046064;

	t34 = ((x137==(x138^x139))<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 113U;
	int32_t x142 = INT32_MIN;
	int32_t x144 = -1;
	int32_t t35 = -17829;

	t35 = ((x141==(x142^x143))<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	volatile uint16_t x146 = 54U;
	int16_t x147 = INT16_MIN;

	t36 = ((x145==(x146^x147))<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = INT32_MAX;
	int64_t x151 = -20099749LL;
	volatile int64_t x152 = -1LL;
	int32_t t37 = 292183;

	t37 = ((x149==(x150^x151))<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = INT64_MIN;
	int64_t x154 = -1LL;
	uint8_t x155 = 100U;
	uint64_t x156 = 1020743966816LLU;
	int32_t t38 = -828;

	t38 = ((x153==(x154^x155))<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = INT16_MIN;
	int16_t x158 = 13;
	int8_t x159 = INT8_MIN;
	int32_t t39 = 847444626;

	t39 = ((x157==(x158^x159))<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = 1;
	int32_t x163 = INT32_MAX;
	int16_t x164 = INT16_MIN;

	t40 = ((x161==(x162^x163))<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = INT8_MIN;
	uint8_t x166 = UINT8_MAX;
	static int32_t t41 = -4529679;

	t41 = ((x165==(x166^x167))<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MAX;
	uint8_t x170 = 3U;
	uint16_t x171 = UINT16_MAX;
	int8_t x172 = INT8_MAX;
	static volatile int32_t t42 = -2;

	t42 = ((x169==(x170^x171))<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -4;
	static int32_t x174 = INT32_MIN;
	static int16_t x175 = INT16_MIN;
	volatile int32_t t43 = 82427;

	t43 = ((x173==(x174^x175))<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 2329U;
	uint32_t x178 = UINT32_MAX;
	uint16_t x179 = UINT16_MAX;
	volatile int32_t t44 = 351154;

	t44 = ((x177==(x178^x179))<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	static int16_t x182 = INT16_MIN;
	int32_t x184 = INT32_MAX;
	volatile int32_t t45 = 6464;

	t45 = ((x181==(x182^x183))<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x185 = 0;
	uint16_t x186 = UINT16_MAX;
	int64_t x187 = 1866039393447481LL;
	int32_t x188 = INT32_MIN;
	volatile int32_t t46 = 27741;

	t46 = ((x185==(x186^x187))<x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = -1;
	uint64_t x190 = 8128505LLU;
	volatile uint16_t x191 = UINT16_MAX;
	int16_t x192 = -1;
	int32_t t47 = -834523651;

	t47 = ((x189==(x190^x191))<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	int16_t x195 = INT16_MIN;
	int16_t x196 = -3990;
	int32_t t48 = 93890607;

	t48 = ((x193==(x194^x195))<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MIN;
	int8_t x199 = -1;
	volatile int8_t x200 = INT8_MIN;
	volatile int32_t t49 = -1;

	t49 = ((x197==(x198^x199))<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = INT8_MAX;
	uint64_t x202 = 7023LLU;
	int64_t x203 = 144674059668304173LL;
	int32_t x204 = -1;
	volatile int32_t t50 = -242635;

	t50 = ((x201==(x202^x203))<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x205 = -1;
	static int64_t x206 = -1LL;
	int8_t x207 = INT8_MAX;
	uint64_t x208 = UINT64_MAX;
	static volatile int32_t t51 = -14;

	t51 = ((x205==(x206^x207))<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x210 = -1;
	volatile int64_t x211 = INT64_MIN;
	static uint8_t x212 = 24U;
	int32_t t52 = -748537;

	t52 = ((x209==(x210^x211))<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x213 = 19U;
	int32_t x214 = INT32_MIN;
	volatile int64_t x215 = INT64_MIN;
	int16_t x216 = -1;

	t53 = ((x213==(x214^x215))<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = UINT8_MAX;
	static int64_t x219 = 781LL;
	int64_t x220 = INT64_MIN;
	int32_t t54 = -1;

	t54 = ((x217==(x218^x219))<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x221 = INT16_MIN;
	int8_t x222 = INT8_MIN;
	volatile int64_t x223 = -673LL;
	volatile int8_t x224 = INT8_MIN;

	t55 = ((x221==(x222^x223))<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 166U;
	volatile uint16_t x226 = 1U;
	int64_t x227 = -508599362167230LL;
	int16_t x228 = INT16_MIN;
	volatile int32_t t56 = 44955005;

	t56 = ((x225==(x226^x227))<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x231 = UINT32_MAX;
	int32_t x232 = -1;
	static volatile int32_t t57 = 361726;

	t57 = ((x229==(x230^x231))<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = INT8_MIN;
	static int16_t x234 = 3;
	uint16_t x235 = UINT16_MAX;
	int64_t x236 = -1LL;
	int32_t t58 = 4001352;

	t58 = ((x233==(x234^x235))<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MAX;
	volatile int8_t x238 = -8;
	uint8_t x239 = UINT8_MAX;
	volatile int32_t t59 = 784;

	t59 = ((x237==(x238^x239))<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = INT64_MAX;
	int8_t x243 = 1;
	int16_t x244 = -1;
	volatile int32_t t60 = 3512;

	t60 = ((x241==(x242^x243))<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	int64_t x246 = INT64_MIN;
	int16_t x247 = -333;
	uint64_t x248 = 475396918920LLU;

	t61 = ((x245==(x246^x247))<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x249 = -12342;
	uint16_t x250 = 6714U;
	int16_t x251 = INT16_MIN;
	uint16_t x252 = 2U;
	static int32_t t62 = 16050637;

	t62 = ((x249==(x250^x251))<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x254 = 706119LLU;
	volatile uint32_t x255 = UINT32_MAX;
	int8_t x256 = INT8_MAX;
	int32_t t63 = -1;

	t63 = ((x253==(x254^x255))<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x258 = -41;
	static volatile int8_t x259 = 0;
	uint8_t x260 = 99U;
	static volatile int32_t t64 = -5401745;

	t64 = ((x257==(x258^x259))<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MAX;
	int32_t x262 = -1486;
	volatile int32_t x263 = 25;
	uint32_t x264 = UINT32_MAX;
	int32_t t65 = 10966;

	t65 = ((x261==(x262^x263))<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x266 = UINT16_MAX;
	int32_t x267 = -1;
	static volatile int32_t t66 = 335;

	t66 = ((x265==(x266^x267))<x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x270 = 3461818284LLU;
	int8_t x271 = 1;
	int16_t x272 = -1;
	int32_t t67 = 1;

	t67 = ((x269==(x270^x271))<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x274 = INT8_MAX;
	int16_t x275 = 12577;
	static uint32_t x276 = 2083687140U;
	volatile int32_t t68 = -54;

	t68 = ((x273==(x274^x275))<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -404;
	int32_t x278 = INT32_MAX;
	int8_t x279 = -1;
	int8_t x280 = -3;
	int32_t t69 = 4331319;

	t69 = ((x277==(x278^x279))<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x281 = 1;
	static int16_t x282 = -1;
	int64_t x283 = -1LL;
	static int64_t x284 = INT64_MAX;

	t70 = ((x281==(x282^x283))<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = 61LL;
	int64_t x286 = -1LL;
	static int8_t x287 = INT8_MIN;
	volatile int32_t t71 = -691978673;

	t71 = ((x285==(x286^x287))<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	volatile int8_t x290 = -4;
	uint16_t x291 = UINT16_MAX;
	volatile uint32_t x292 = 5U;
	volatile int32_t t72 = -100665244;

	t72 = ((x289==(x290^x291))<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x294 = -17617778;
	int8_t x296 = -33;
	volatile int32_t t73 = 697;

	t73 = ((x293==(x294^x295))<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 1573667LLU;
	uint16_t x298 = 928U;
	uint32_t x299 = UINT32_MAX;
	volatile int32_t x300 = -1;
	int32_t t74 = -42817;

	t74 = ((x297==(x298^x299))<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -323;
	int32_t x302 = INT32_MAX;
	volatile int32_t t75 = -537201;

	t75 = ((x301==(x302^x303))<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = UINT16_MAX;
	int16_t x306 = -14;
	int16_t x307 = -1;
	int64_t x308 = INT64_MIN;
	volatile int32_t t76 = 31;

	t76 = ((x305==(x306^x307))<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = 5;
	static int16_t x310 = 9931;
	static int16_t x311 = INT16_MIN;
	uint16_t x312 = UINT16_MAX;

	t77 = ((x309==(x310^x311))<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	uint8_t x315 = 11U;
	int8_t x316 = 0;
	volatile int32_t t78 = 483693428;

	t78 = ((x313==(x314^x315))<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x317 = 4U;
	static int8_t x318 = INT8_MAX;
	int32_t x319 = INT32_MIN;
	static uint32_t x320 = 400455701U;
	static int32_t t79 = -383;

	t79 = ((x317==(x318^x319))<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x322 = UINT8_MAX;
	int64_t x324 = 826687426568LL;

	t80 = ((x321==(x322^x323))<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x325 = UINT64_MAX;
	int32_t x326 = INT32_MIN;
	volatile int32_t x327 = 6;
	int16_t x328 = INT16_MIN;
	static int32_t t81 = -26516;

	t81 = ((x325==(x326^x327))<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -49;
	uint32_t x330 = UINT32_MAX;
	static int32_t x331 = 127760720;
	int32_t x332 = -1;

	t82 = ((x329==(x330^x331))<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = UINT16_MAX;
	uint64_t x334 = 1250563433897232495LLU;
	int16_t x335 = -1;
	volatile int16_t x336 = 968;
	int32_t t83 = 0;

	t83 = ((x333==(x334^x335))<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = 2727;
	static uint64_t x338 = UINT64_MAX;
	int32_t x340 = 1;
	static volatile int32_t t84 = 1038530;

	t84 = ((x337==(x338^x339))<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x343 = 0;
	volatile int32_t t85 = 8288576;

	t85 = ((x341==(x342^x343))<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 153065739187159LLU;
	int8_t x347 = INT8_MIN;
	uint32_t x348 = 892113490U;
	static int32_t t86 = -6616161;

	t86 = ((x345==(x346^x347))<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -1;
	uint32_t x350 = UINT32_MAX;
	static uint32_t x351 = 3453770U;
	volatile int32_t t87 = 182180047;

	t87 = ((x349==(x350^x351))<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x353 = 57741611657798LL;
	static volatile int64_t x354 = INT64_MIN;
	volatile int32_t t88 = 30;

	t88 = ((x353==(x354^x355))<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x357 = INT8_MAX;
	uint64_t x358 = UINT64_MAX;
	int32_t x359 = INT32_MIN;
	volatile int32_t t89 = 849469;

	t89 = ((x357==(x358^x359))<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 126802375887LLU;
	static int32_t x362 = -1;
	uint32_t x363 = 1770U;
	int8_t x364 = -1;
	int32_t t90 = 18;

	t90 = ((x361==(x362^x363))<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MAX;
	int16_t x366 = INT16_MAX;
	uint16_t x367 = 284U;
	static int8_t x368 = INT8_MIN;

	t91 = ((x365==(x366^x367))<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = 185;
	static uint16_t x370 = 8507U;
	volatile int16_t x372 = -122;
	static volatile int32_t t92 = 16755504;

	t92 = ((x369==(x370^x371))<x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MAX;
	int16_t x376 = INT16_MIN;
	int32_t t93 = 13473373;

	t93 = ((x373==(x374^x375))<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 3;
	uint16_t x378 = 15187U;
	int8_t x379 = INT8_MAX;
	int32_t t94 = 226068733;

	t94 = ((x377==(x378^x379))<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x381 = INT32_MIN;
	volatile uint32_t x382 = UINT32_MAX;
	int32_t x383 = -403676;
	int64_t x384 = -21340487709039LL;
	int32_t t95 = -1;

	t95 = ((x381==(x382^x383))<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = INT32_MIN;
	static uint16_t x386 = 0U;
	uint64_t x387 = 34085LLU;
	int32_t x388 = 2059;
	int32_t t96 = 55455;

	t96 = ((x385==(x386^x387))<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = -1;
	int16_t x390 = -1;
	uint32_t x392 = 538374U;
	volatile int32_t t97 = -1257755;

	t97 = ((x389==(x390^x391))<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 1U;
	volatile int16_t x394 = 1155;
	volatile int32_t x395 = INT32_MAX;
	uint64_t x396 = UINT64_MAX;
	volatile int32_t t98 = 77;

	t98 = ((x393==(x394^x395))<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x398 = UINT32_MAX;
	int16_t x399 = INT16_MAX;
	volatile int8_t x400 = 0;
	volatile int32_t t99 = -161;

	t99 = ((x397==(x398^x399))<x400);

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

