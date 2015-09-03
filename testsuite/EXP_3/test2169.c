#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = -1;
volatile int64_t x5 = INT64_MAX;
int32_t x9 = INT32_MAX;
int32_t t2 = 2;
int8_t x16 = INT8_MIN;
uint64_t t4 = 102635782LLU;
uint16_t x26 = 5036U;
volatile int32_t t6 = 21;
int64_t x29 = 107716970LL;
volatile uint8_t x40 = 2U;
volatile int16_t x47 = INT16_MAX;
int64_t x60 = INT64_MIN;
volatile int64_t t14 = -2160256354766LL;
volatile int32_t x64 = -2144523;
int8_t x65 = -1;
static int64_t t16 = -3175402252758LL;
int32_t x74 = INT32_MIN;
int64_t x78 = INT64_MAX;
uint16_t x81 = 0U;
uint64_t x83 = 13151935431512613LLU;
static int16_t x88 = INT16_MAX;
static int64_t x94 = 4747126454331899LL;
int8_t x95 = -2;
uint32_t x96 = 12104U;
volatile int64_t t25 = -4040LL;
static uint64_t x107 = 3516780LLU;
volatile uint64_t t26 = 165899484LLU;
int8_t x113 = 15;
volatile uint64_t x124 = 255067449619258LLU;
int32_t t31 = -138;
static int8_t x146 = INT8_MIN;
int32_t x147 = INT32_MIN;
int64_t x148 = 96564721252LL;
static volatile int16_t x161 = INT16_MIN;
static volatile uint8_t x165 = 25U;
uint32_t x166 = 82398541U;
uint16_t x174 = 331U;
volatile int64_t x176 = -1LL;
static volatile int64_t t43 = 11LL;
uint8_t x179 = 12U;
uint64_t x190 = 0LLU;
uint64_t x195 = 2948373154LLU;
uint8_t x203 = 11U;
volatile uint8_t x205 = 1U;
int16_t x207 = INT16_MIN;
int32_t x211 = -1;
static int16_t x212 = -59;
uint16_t x213 = 14U;
uint8_t x218 = 19U;
int8_t x220 = INT8_MIN;
volatile int32_t t54 = 53782332;
int16_t x222 = -1967;
uint32_t x225 = 7033618U;
volatile int32_t x231 = INT32_MIN;
static int64_t x236 = -1LL;
static uint64_t x237 = 767826052008LLU;
uint64_t x246 = 4300509954498949LLU;
uint16_t x249 = 7U;
volatile int8_t x254 = 1;
int32_t x258 = INT32_MIN;
volatile int32_t x278 = INT32_MAX;
static int16_t x280 = -1;
int16_t x281 = INT16_MIN;
int8_t x282 = -15;
int64_t x286 = INT64_MAX;
static volatile uint64_t t71 = 460152LLU;
uint32_t x293 = 1U;
uint16_t x294 = UINT16_MAX;
volatile int64_t t73 = -1613820LL;
uint32_t x299 = 384U;
volatile int64_t t74 = 5194046170LL;
int16_t x305 = -1186;
uint8_t x311 = 7U;
volatile int64_t t77 = 266866096LL;
volatile int64_t t79 = -2358122200725LL;
int64_t t81 = 25330315LL;
uint64_t x330 = UINT64_MAX;
static volatile int32_t t84 = 9148;
uint32_t x343 = 87U;
uint32_t x345 = 24649925U;
volatile uint32_t x348 = 655839513U;
uint64_t t90 = 3LLU;
uint64_t t92 = 117570304LLU;
static uint16_t x374 = UINT16_MAX;
static uint64_t x382 = 378422349LLU;
volatile uint8_t x385 = 1U;
int64_t x387 = 118LL;
int16_t x393 = -1;
uint16_t x397 = 1731U;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int64_t x2 = INT64_MAX;
	static volatile uint64_t x4 = 8812521652003561LLU;
	volatile uint64_t t0 = 8362008244800609492LLU;

	t0 = ((x1&x2)&(x3^x4));

	if (t0 != 23830LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = INT64_MIN;
	int16_t x7 = -1;
	static uint16_t x8 = UINT16_MAX;
	int64_t t1 = -1600LL;

	t1 = ((x5&x6)&(x7^x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x10 = -1;
	static int16_t x11 = INT16_MIN;
	static uint8_t x12 = 74U;

	t2 = ((x9&x10)&(x11^x12));

	if (t2 != 2147450954) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	int64_t x14 = -1LL;
	volatile int16_t x15 = INT16_MIN;
	int64_t t3 = -317LL;

	t3 = ((x13&x14)&(x15^x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	volatile uint64_t x18 = 140182413102LLU;
	uint16_t x19 = 0U;
	static int8_t x20 = INT8_MIN;

	t4 = ((x17&x18)&(x19^x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	int32_t x22 = INT32_MAX;
	uint16_t x23 = UINT16_MAX;
	static int32_t x24 = INT32_MIN;
	static uint32_t t5 = 3U;

	t5 = ((x21&x22)&(x23^x24));

	if (t5 != 65535U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	static uint16_t x27 = UINT16_MAX;
	int16_t x28 = INT16_MAX;

	t6 = ((x25&x26)&(x27^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = -99628;
	volatile int32_t x31 = INT32_MIN;
	int32_t x32 = INT32_MIN;
	static volatile int64_t t7 = -116148239029LL;

	t7 = ((x29&x30)&(x31^x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	uint8_t x34 = 0U;
	uint8_t x35 = 57U;
	int16_t x36 = -3;
	volatile int32_t t8 = -3;

	t8 = ((x33&x34)&(x35^x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	uint8_t x38 = 1U;
	int16_t x39 = INT16_MIN;
	static int64_t t9 = -7491187454119045LL;

	t9 = ((x37&x38)&(x39^x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = UINT16_MAX;
	int64_t x42 = -1LL;
	volatile uint64_t x43 = UINT64_MAX;
	int32_t x44 = -45;
	uint64_t t10 = 6106298526324270268LLU;

	t10 = ((x41&x42)&(x43^x44));

	if (t10 != 44LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = INT16_MAX;
	static volatile int16_t x46 = INT16_MAX;
	uint64_t x48 = 7LLU;
	uint64_t t11 = 2LLU;

	t11 = ((x45&x46)&(x47^x48));

	if (t11 != 32760LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x49 = 1206LLU;
	uint32_t x50 = 12709619U;
	static uint8_t x51 = 18U;
	int16_t x52 = -29;
	uint64_t t12 = 16253319534255LLU;

	t12 = ((x49&x50)&(x51^x52));

	if (t12 != 1200LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	int32_t x54 = INT32_MIN;
	int16_t x55 = INT16_MIN;
	uint64_t x56 = 71354406481708LLU;
	static volatile uint64_t t13 = 2617215LLU;

	t13 = ((x53&x54)&(x55^x56));

	if (t13 != 18446672719270379520LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	int16_t x58 = 220;
	uint32_t x59 = 1773U;

	t14 = ((x57&x58)&(x59^x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x61 = 2770630U;
	int8_t x62 = 6;
	uint64_t x63 = UINT64_MAX;
	uint64_t t15 = 98102221LLU;

	t15 = ((x61&x62)&(x63^x64));

	if (t15 != 2LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = -1;
	static volatile int64_t x67 = -499751685754160LL;
	int16_t x68 = -786;

	t16 = ((x65&x66)&(x67^x68));

	if (t16 != 499751685754430LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = 14;
	volatile int16_t x70 = -1;
	volatile int16_t x71 = INT16_MIN;
	int16_t x72 = INT16_MAX;
	int32_t t17 = -884988;

	t17 = ((x69&x70)&(x71^x72));

	if (t17 != 14) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = 3;
	static int64_t x75 = INT64_MAX;
	int16_t x76 = -423;
	volatile int64_t t18 = 117748116LL;

	t18 = ((x73&x74)&(x75^x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MAX;
	static uint8_t x79 = UINT8_MAX;
	int64_t x80 = INT64_MIN;
	int64_t t19 = -12153900LL;

	t19 = ((x77&x78)&(x79^x80));

	if (t19 != 255LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x82 = 104823543LLU;
	static volatile int64_t x84 = INT64_MIN;
	uint64_t t20 = 50121LLU;

	t20 = ((x81&x82)&(x83^x84));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1;
	uint16_t x86 = 120U;
	int16_t x87 = -15813;
	int32_t t21 = -43533853;

	t21 = ((x85&x86)&(x87^x88));

	if (t21 != 64) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	int8_t x90 = INT8_MIN;
	volatile uint16_t x91 = UINT16_MAX;
	int16_t x92 = INT16_MIN;
	static int32_t t22 = -494936893;

	t22 = ((x89&x90)&(x91^x92));

	if (t22 != -65536) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x93 = 8U;
	int64_t t23 = 166161313958537LL;

	t23 = ((x93&x94)&(x95^x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = 4;
	int8_t x98 = -1;
	int16_t x99 = INT16_MIN;
	uint64_t x100 = UINT64_MAX;
	volatile uint64_t t24 = 165030076966945655LLU;

	t24 = ((x97&x98)&(x99^x100));

	if (t24 != 4LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x101 = UINT32_MAX;
	int16_t x102 = INT16_MIN;
	uint16_t x103 = 2801U;
	int64_t x104 = 1LL;

	t25 = ((x101&x102)&(x103^x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -148LL;
	volatile uint8_t x106 = 1U;
	int16_t x108 = 10655;

	t26 = ((x105&x106)&(x107^x108));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -1;
	static volatile int8_t x110 = INT8_MAX;
	int8_t x111 = INT8_MAX;
	volatile int16_t x112 = INT16_MAX;
	volatile int32_t t27 = -1;

	t27 = ((x109&x110)&(x111^x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x114 = 37U;
	uint32_t x115 = UINT32_MAX;
	static volatile uint32_t x116 = 8174U;
	uint32_t t28 = 104572U;

	t28 = ((x113&x114)&(x115^x116));

	if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	int16_t x118 = INT16_MAX;
	volatile int16_t x119 = -1;
	int32_t x120 = INT32_MIN;
	int32_t t29 = -5;

	t29 = ((x117&x118)&(x119^x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 1U;
	int32_t x122 = -1;
	int32_t x123 = INT32_MIN;
	uint64_t t30 = 4695889822423944787LLU;

	t30 = ((x121&x122)&(x123^x124));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 0U;
	volatile uint16_t x126 = 12U;
	static volatile int8_t x127 = 37;
	int32_t x128 = INT32_MAX;

	t31 = ((x125&x126)&(x127^x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x129 = 408082583U;
	static uint32_t x130 = UINT32_MAX;
	int8_t x131 = -6;
	static int64_t x132 = -1LL;
	volatile int64_t t32 = -44571870743LL;

	t32 = ((x129&x130)&(x131^x132));

	if (t32 != 5LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x133 = 0U;
	int8_t x134 = -3;
	static uint8_t x135 = 121U;
	volatile uint8_t x136 = 3U;
	int32_t t33 = 2;

	t33 = ((x133&x134)&(x135^x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = UINT16_MAX;
	static int32_t x138 = -15260;
	int32_t x139 = INT32_MIN;
	uint8_t x140 = UINT8_MAX;
	volatile int32_t t34 = -27;

	t34 = ((x137&x138)&(x139^x140));

	if (t34 != 100) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = INT64_MIN;
	int8_t x142 = 20;
	int16_t x143 = -1;
	static int8_t x144 = INT8_MAX;
	int64_t t35 = 25326741645978223LL;

	t35 = ((x141&x142)&(x143^x144));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 5163U;
	volatile int64_t t36 = -5355857LL;

	t36 = ((x145&x146)&(x147^x148));

	if (t36 != 5120LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x149 = 10LLU;
	uint16_t x150 = UINT16_MAX;
	int8_t x151 = -1;
	uint16_t x152 = 0U;
	uint64_t t37 = 36543059790073594LLU;

	t37 = ((x149&x150)&(x151^x152));

	if (t37 != 10LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = -79743597;
	static uint32_t x154 = 229U;
	int8_t x155 = -1;
	int32_t x156 = -1;
	volatile uint32_t t38 = 23194492U;

	t38 = ((x153&x154)&(x155^x156));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 40518812258652LLU;
	volatile int8_t x158 = -1;
	uint64_t x159 = 4121327599LLU;
	uint8_t x160 = UINT8_MAX;
	volatile uint64_t t39 = 13LLU;

	t39 = ((x157&x158)&(x159^x160));

	if (t39 != 86003984LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x162 = 2147;
	static int32_t x163 = -82001;
	int64_t x164 = -1LL;
	volatile int64_t t40 = 26251690616LL;

	t40 = ((x161&x162)&(x163^x164));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x167 = INT8_MIN;
	int32_t x168 = -1;
	static uint32_t t41 = 28U;

	t41 = ((x165&x166)&(x167^x168));

	if (t41 != 9U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 33926939418780LLU;
	int32_t x170 = INT32_MIN;
	uint32_t x171 = 9U;
	int8_t x172 = INT8_MIN;
	volatile uint64_t t42 = 191293743LLU;

	t42 = ((x169&x170)&(x171^x172));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = INT64_MIN;
	volatile uint8_t x175 = UINT8_MAX;

	t43 = ((x173&x174)&(x175^x176));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = 110080165055695807LL;
	static int8_t x178 = INT8_MIN;
	uint16_t x180 = 31U;
	volatile int64_t t44 = 446425LL;

	t44 = ((x177&x178)&(x179^x180));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -1;
	volatile int16_t x182 = INT16_MIN;
	static int64_t x183 = -829746299588928LL;
	int64_t x184 = INT64_MAX;
	int64_t t45 = 140026447997LL;

	t45 = ((x181&x182)&(x183^x184));

	if (t45 != -9222542290555207680LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = 1698;
	volatile uint64_t x186 = 229106924144LLU;
	int64_t x187 = INT64_MAX;
	int16_t x188 = INT16_MIN;
	static uint64_t t46 = 287886066999LLU;

	t46 = ((x185&x186)&(x187^x188));

	if (t46 != 544LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x189 = 17718U;
	static int32_t x191 = -1;
	volatile uint16_t x192 = 220U;
	uint64_t t47 = 26981447755597548LLU;

	t47 = ((x189&x190)&(x191^x192));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x193 = -660;
	int16_t x194 = INT16_MIN;
	static int16_t x196 = INT16_MIN;
	uint64_t t48 = 680948254575LLU;

	t48 = ((x193&x194)&(x195^x196));

	if (t48 != 18446744070761152512LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	volatile int8_t x198 = 5;
	uint16_t x199 = 1573U;
	uint64_t x200 = 1608267321LLU;
	uint64_t t49 = 1937551270LLU;

	t49 = ((x197&x198)&(x199^x200));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = INT16_MIN;
	uint8_t x202 = 1U;
	int64_t x204 = -1LL;
	int64_t t50 = 2147154529429365LL;

	t50 = ((x201&x202)&(x203^x204));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x206 = 305U;
	int32_t x208 = 649041509;
	static int32_t t51 = 689314325;

	t51 = ((x205&x206)&(x207^x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MAX;
	int16_t x210 = -29;
	int64_t t52 = -777093087564279LL;

	t52 = ((x209&x210)&(x211^x212));

	if (t52 != 34LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x214 = INT64_MIN;
	int16_t x215 = -1;
	int64_t x216 = -1LL;
	int64_t t53 = 95870LL;

	t53 = ((x213&x214)&(x215^x216));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = INT16_MAX;
	int16_t x219 = 930;

	t54 = ((x217&x218)&(x219^x220));

	if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 429189072722346LLU;
	int64_t x223 = INT64_MAX;
	int32_t x224 = INT32_MIN;
	uint64_t t55 = 108055486117LLU;

	t55 = ((x221&x222)&(x223^x224));

	if (t55 != 1580767232LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x226 = 902984U;
	static uint8_t x227 = 27U;
	int8_t x228 = INT8_MAX;
	uint32_t t56 = 13708U;

	t56 = ((x225&x226)&(x227^x228));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x229 = 3345U;
	volatile int64_t x230 = INT64_MIN;
	static int8_t x232 = INT8_MIN;
	volatile int64_t t57 = -6742LL;

	t57 = ((x229&x230)&(x231^x232));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 0LLU;
	int32_t x234 = 467346602;
	uint8_t x235 = UINT8_MAX;
	uint64_t t58 = 7173716844841880325LLU;

	t58 = ((x233&x234)&(x235^x236));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x238 = INT64_MIN;
	volatile int16_t x239 = INT16_MIN;
	uint8_t x240 = UINT8_MAX;
	static uint64_t t59 = 9LLU;

	t59 = ((x237&x238)&(x239^x240));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = 0;
	volatile uint32_t x242 = UINT32_MAX;
	int16_t x243 = INT16_MAX;
	volatile int32_t x244 = 173586475;
	uint32_t t60 = 6U;

	t60 = ((x241&x242)&(x243^x244));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	uint8_t x247 = 6U;
	uint16_t x248 = 6241U;
	volatile uint64_t t61 = 8929530LLU;

	t61 = ((x245&x246)&(x247^x248));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x250 = 0U;
	int32_t x251 = 56592;
	int8_t x252 = INT8_MIN;
	int32_t t62 = -125339062;

	t62 = ((x249&x250)&(x251^x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = UINT32_MAX;
	uint32_t x255 = 15393U;
	static int16_t x256 = INT16_MIN;
	volatile uint32_t t63 = 29613692U;

	t63 = ((x253&x254)&(x255^x256));

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	int16_t x259 = INT16_MAX;
	volatile int32_t x260 = -307;
	volatile int32_t t64 = INT32_MIN;

	t64 = ((x257&x258)&(x259^x260));

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = 8;
	static volatile uint8_t x262 = 3U;
	static int8_t x263 = 3;
	int64_t x264 = -129265826LL;
	volatile int64_t t65 = -1562356950LL;

	t65 = ((x261&x262)&(x263^x264));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x265 = -1;
	static volatile int16_t x266 = INT16_MIN;
	int8_t x267 = INT8_MAX;
	int32_t x268 = -112250;
	int32_t t66 = 2691;

	t66 = ((x265&x266)&(x267^x268));

	if (t66 != -131072) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = UINT8_MAX;
	uint64_t x270 = 7LLU;
	volatile int16_t x271 = -1;
	int8_t x272 = INT8_MIN;
	volatile uint64_t t67 = 661307403721162328LLU;

	t67 = ((x269&x270)&(x271^x272));

	if (t67 != 7LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 189633926304714LLU;
	volatile uint16_t x274 = UINT16_MAX;
	int32_t x275 = INT32_MIN;
	static int8_t x276 = -1;
	uint64_t t68 = 4980LLU;

	t68 = ((x273&x274)&(x275^x276));

	if (t68 != 37834LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = UINT32_MAX;
	int8_t x279 = 11;
	static volatile uint32_t t69 = 7U;

	t69 = ((x277&x278)&(x279^x280));

	if (t69 != 2147483636U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x283 = 1355502LL;
	static int64_t x284 = INT64_MIN;
	int64_t t70 = 1136074094041464640LL;

	t70 = ((x281&x282)&(x283^x284));

	if (t70 != -9223372036853432320LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x285 = 57464U;
	int32_t x287 = 52798;
	static uint64_t x288 = 130814LLU;

	t71 = ((x285&x286)&(x287^x288));

	if (t71 != 8256LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = 0;
	uint8_t x290 = UINT8_MAX;
	int32_t x291 = 1;
	uint32_t x292 = UINT32_MAX;
	uint32_t t72 = 949227754U;

	t72 = ((x289&x290)&(x291^x292));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x295 = 9;
	int64_t x296 = 5268702LL;

	t73 = ((x293&x294)&(x295^x296));

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = 30627694LL;
	int64_t x298 = -218910991LL;
	int16_t x300 = 0;

	t74 = ((x297&x298)&(x299^x300));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x301 = INT16_MIN;
	int32_t x302 = INT32_MAX;
	static volatile int32_t x303 = INT32_MIN;
	uint8_t x304 = 9U;
	volatile int32_t t75 = 4;

	t75 = ((x301&x302)&(x303^x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x306 = 277009535816613LLU;
	static int32_t x307 = INT32_MIN;
	static uint16_t x308 = 19U;
	volatile uint64_t t76 = 2275138208724323042LLU;

	t76 = ((x305&x306)&(x307^x308));

	if (t76 != 277008210722816LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x309 = -1LL;
	int64_t x310 = INT64_MAX;
	int64_t x312 = INT64_MAX;

	t77 = ((x309&x310)&(x311^x312));

	if (t77 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	static int8_t x314 = -1;
	volatile uint64_t x315 = UINT64_MAX;
	static int64_t x316 = 5324220LL;
	volatile uint64_t t78 = 269765814003LLU;

	t78 = ((x313&x314)&(x315^x316));

	if (t78 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = INT16_MIN;
	int16_t x318 = INT16_MAX;
	int64_t x319 = INT64_MAX;
	volatile int32_t x320 = -1;

	t79 = ((x317&x318)&(x319^x320));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 22989565303769LLU;
	volatile int64_t x322 = -3909953082060270815LL;
	int8_t x323 = -1;
	uint32_t x324 = 1658U;
	static volatile uint64_t t80 = 16LLU;

	t80 = ((x321&x322)&(x323^x324));

	if (t80 != 744132865LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MAX;
	static int32_t x326 = -1;
	int16_t x327 = -8294;
	static int64_t x328 = -1LL;

	t81 = ((x325&x326)&(x327^x328));

	if (t81 != 101LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = UINT32_MAX;
	int32_t x331 = -1;
	int16_t x332 = 1;
	uint64_t t82 = 3970LLU;

	t82 = ((x329&x330)&(x331^x332));

	if (t82 != 4294967294LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = UINT32_MAX;
	volatile uint32_t x334 = 444848U;
	int32_t x335 = -40096166;
	int8_t x336 = INT8_MIN;
	volatile uint32_t t83 = 136109U;

	t83 = ((x333&x334)&(x335^x336));

	if (t83 != 180624U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = INT8_MAX;
	volatile int16_t x338 = 16;
	int8_t x339 = -1;
	uint16_t x340 = 1413U;

	t84 = ((x337&x338)&(x339^x340));

	if (t84 != 16) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	int8_t x342 = INT8_MIN;
	volatile int32_t x344 = INT32_MIN;
	volatile uint32_t t85 = 28U;

	t85 = ((x341&x342)&(x343^x344));

	if (t85 != 2147483648U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x346 = UINT16_MAX;
	uint32_t x347 = UINT32_MAX;
	volatile uint32_t t86 = 1U;

	t86 = ((x345&x346)&(x347^x348));

	if (t86 != 8388U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x349 = 5U;
	int16_t x350 = INT16_MIN;
	uint32_t x351 = 10U;
	int64_t x352 = -420698468809049490LL;
	volatile int64_t t87 = -1638627779LL;

	t87 = ((x349&x350)&(x351^x352));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = 75U;
	static int64_t x354 = 15LL;
	int16_t x355 = 13;
	volatile uint32_t x356 = 3U;
	int64_t t88 = 9035978969LL;

	t88 = ((x353&x354)&(x355^x356));

	if (t88 != 10LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x357 = UINT64_MAX;
	uint64_t x358 = 123611989467870LLU;
	static uint64_t x359 = UINT64_MAX;
	uint8_t x360 = UINT8_MAX;
	volatile uint64_t t89 = 92LLU;

	t89 = ((x357&x358)&(x359^x360));

	if (t89 != 123611989467648LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x361 = 15U;
	int8_t x362 = INT8_MIN;
	int16_t x363 = INT16_MIN;
	uint64_t x364 = UINT64_MAX;

	t90 = ((x361&x362)&(x363^x364));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -2;
	static uint64_t x366 = 973539LLU;
	int16_t x367 = INT16_MIN;
	static volatile uint8_t x368 = UINT8_MAX;
	uint64_t t91 = 2017605852008202LLU;

	t91 = ((x365&x366)&(x367^x368));

	if (t91 != 950498LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = 1894619256LL;
	static int8_t x370 = INT8_MIN;
	uint64_t x371 = 5077LLU;
	int16_t x372 = INT16_MIN;

	t92 = ((x369&x370)&(x371^x372));

	if (t92 != 1894617088LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = -1;
	int8_t x375 = -48;
	static int16_t x376 = -14421;
	volatile int32_t t93 = -85159;

	t93 = ((x373&x374)&(x375^x376));

	if (t93 != 14459) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 0U;
	static volatile int32_t x378 = -1;
	int8_t x379 = INT8_MIN;
	volatile int32_t x380 = INT32_MIN;
	static volatile int32_t t94 = -1;

	t94 = ((x377&x378)&(x379^x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = 343544271LL;
	uint16_t x383 = UINT16_MAX;
	volatile int16_t x384 = -14316;
	volatile uint64_t t95 = 21552907535912197LLU;

	t95 = ((x381&x382)&(x383^x384));

	if (t95 != 336199753LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x386 = INT64_MIN;
	static int16_t x388 = INT16_MAX;
	volatile int64_t t96 = -507633382818LL;

	t96 = ((x385&x386)&(x387^x388));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = INT16_MAX;
	int64_t x390 = INT64_MIN;
	int8_t x391 = 0;
	uint8_t x392 = 58U;
	volatile int64_t t97 = -196877703445235LL;

	t97 = ((x389&x390)&(x391^x392));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x394 = INT32_MAX;
	int32_t x395 = INT32_MIN;
	volatile int8_t x396 = -1;
	int32_t t98 = INT32_MAX;

	t98 = ((x393&x394)&(x395^x396));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x398 = -23;
	int32_t x399 = INT32_MAX;
	static uint32_t x400 = 225U;
	volatile uint32_t t99 = 645U;

	t99 = ((x397&x398)&(x399^x400));

	if (t99 != 1536U) { NG(); } else { ; }
	
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

